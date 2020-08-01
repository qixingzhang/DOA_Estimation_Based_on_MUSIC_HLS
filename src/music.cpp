#include "music.h"

void qr_decompose(
		complex_float A[N_SENSOR][N_SENSOR],
		complex_float Q[N_SENSOR][N_SENSOR],
		complex_float R[N_SENSOR][N_SENSOR])
{
#pragma HLS INLINE
	hls::qrf_top<false, N_SENSOR, N_SENSOR, QRF_CONFIG, complex_float, complex_float> (A, Q, R);
}
void eig_decompose(complex_float Rx[N_SENSOR][N_SENSOR], complex_float U[N_SENSOR][N_SENSOR], float eigval[N_SENSOR]) {
#pragma HLS INLINE
	complex_float Q_temp[N_SENSOR][N_SENSOR];
	complex_float R_temp[N_SENSOR][N_SENSOR];
	complex_float Rx_temp[N_SENSOR][N_SENSOR];
	complex_float eig_mat[N_SENSOR][N_SENSOR];
	complex_float temp;
	complex_float mid, sum;
	float midsum;
	float eigval_temp;

	for(int i = 0; i < N_SENSOR; i++) {
		for(int j = 0; j < N_SENSOR; j++) {
			eig_mat[i][j] = Rx[i][j];
			U[i][j].real(0);
			U[i][j].imag(0);
		}
	}
	for(int i = 0; i < 8; i++) {
		qr_decompose(eig_mat, Q_temp, R_temp);
		for(int i = 0; i < N_SENSOR; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real(0);
				temp.imag(0);
				eig_decompose_label7:for (int k = 0; k < N_SENSOR; k++) {
#pragma HLS EXPRESSION_BALANCE
					temp += R_temp[i][k] * Q_temp[k][j];
				}
				eig_mat[i][j] = temp;
			}
		}
	}
	for(int count = 0; count < N_SENSOR; count++) {
		eigval_temp = eigval[count] = eig_mat[count][count].real();
		for(int i = 0; i < N_SENSOR; i++) {
			eig_decompose_label12:for(int j = 0; j < N_SENSOR; j++) {
#pragma HLS EXPRESSION_BALANCE
				if (i == j) {
					Rx_temp[i][j] = Rx[i][j] - eigval_temp;
				} else {
					Rx_temp[i][j] = Rx[i][j];
				}
			}
		}
		for(int i = 0; i < N_SENSOR - 1; i++) {
			mid = Rx_temp[i][i];
			eig_decompose_label9:for(int j = i; j < N_SENSOR; j++) {
#pragma HLS EXPRESSION_BALANCE
				Rx_temp[i][j] /= mid;
			}
			for(int j = i + 1; j < N_SENSOR; j++) {
				mid = Rx_temp[j][i];
				eig_decompose_label8:for(int q = i; q < N_SENSOR; q++) {
#pragma HLS EXPRESSION_BALANCE
					Rx_temp[j][q] -= mid * Rx_temp[i][q];
				}
			}
		}
		midsum = 1;
		U[N_SENSOR - 1][count] = 1;
		eig_decompose_label11:for(int m = N_SENSOR - 2; m >=0; --m) {
#pragma HLS EXPRESSION_BALANCE
			sum = 0;
			eig_decompose_label10:for(int j = m + 1; j < N_SENSOR; j++) {
#pragma HLS EXPRESSION_BALANCE
				sum += Rx_temp[m][j] * U[j][count];
			}
			sum = -sum / Rx_temp[m][m];
			midsum += sum.real() * sum.real() + sum.imag() * sum.imag();
			U[m][count] = sum;
		}
		midsum = sqrt(midsum);
		eig_decompose_label13:for(int i = 0; i < N_SENSOR; i++) {
#pragma HLS EXPRESSION_BALANCE
			U[i][count] = U[i][count] / midsum;
		}
	}
}
void sort_eigval(float eigval[N_SENSOR], int sort_index[N_SENSOR]) {
#pragma HLS INLINE
	for (int i = 0; i < N_SENSOR; i++) {
		sort_index[i] = i;
	}
	for (int i = 0; i < N_SENSOR - 1; i++) {
		int flag = i;
		for (int j = flag + 1; j < N_SENSOR; j++) {
			if (eigval[sort_index[flag]] > eigval[sort_index[j]]) {
				flag = j;
			}
		}
		int temp = 0;
		temp = sort_index[flag];
		sort_index[flag] = sort_index[i];
		sort_index[i] = temp;
	}
}
void Autocorrelation(complex_float X[N_STFT][N_SENSOR], complex_float Rx[N_SENSOR][N_SENSOR]) {
#pragma HLS INLINE
	for (int x = 0; x < N_SENSOR; x++) {
		for (int y = 0; y < N_SENSOR; y++) {
			complex_float temp(0.0, 0.0);
			Autocorrelation_label17:for(int l = 0; l < N_STFT; l++) {
#pragma HLS EXPRESSION_BALANCE
				temp += X[l][x] * conj(X[l][y]);
			}
			Rx[x][y] = temp / (float)N_STFT;
		}
	}
}
unsigned int reverse_bits(unsigned int input) {
#pragma HLS INLINE
	int i, rev = 0;
	for (i = 0; i < M; i++) {
		rev = (rev << 1) | (input & 1);
		input = input >> 1;
	}
	return rev;
}

void bit_reverse(float X_R[SIZE], float X_I[SIZE],
		 float OUT_R[SIZE], float OUT_I[SIZE]) {
#pragma HLS INLINE
  unsigned int reversed;
  unsigned int i;
  float temp;

  for (int i = 0; i < SIZE; i++) {
	  reversed = reverse_bits(i); // Find the bit reversed index
		if (i <= reversed) {
			// Swap the real values
			temp = X_R[i];
			OUT_R[i] = X_R[reversed];
			OUT_R[reversed] = temp;

			// Swap the imaginary values
			temp = X_I[i];
			OUT_I[i] = X_I[reversed];
			OUT_I[reversed] = temp;
		}
	}
}
//void bit_reverse(float X_R[SIZE], float X_I[SIZE]) {
//#pragma HLS INLINE
//	unsigned int reversed;
//	unsigned int i;
//	float temp;
//
//	for (i = 0; i < SIZE; i++) {
//		reversed = reverse_bits(i); // Find the bit reversed index
//		if (i <= reversed) {
//			// Swap the real values
//			temp = X_R[i];
//			X_R[i] = X_R[reversed];
//			X_R[reversed] = temp;
//
//			// Swap the imaginary values
//			temp = X_I[i];
//			X_I[i] = X_I[reversed];
//			X_I[reversed] = temp;
//		}
//	}
//}

void fft_stage(int stage, float X_R[SIZE], float X_I[SIZE],
		     float Out_R[SIZE], float Out_I[SIZE]) {
  int DFTpts = 1 << stage;    // DFT = 2^stage = points in sub DFT
  int numBF = DFTpts / 2;     // Butterfly WIDTHS in sub-DFT
  int step = SIZE >> stage;
  // Perform butterflies for j-th stage
 butterfly_loop:
  for (int j = 0; j < numBF; j++) {
    // Compute butterflies that use same W**k
  dft_loop:
      for(int t = 0; t < step; t++) {
#pragma HLS PIPELINE II=2
#pragma HLS EXPRESSION_BALANCE
          int i = j + t*DFTpts;
          //    for (int i = j; i < SIZE; i += DFTpts) {
//#pragma HLS pipeline
          int k = j*step;
      float c = W_real[k];
      float s = W_imag[k];
      int i_lower = i + numBF; // index of lower point in butterfly
      float temp_R = X_R[i_lower] * c - X_I[i_lower] * s;
      float temp_I = X_I[i_lower] * c + X_R[i_lower] * s;
      Out_R[i_lower] = X_R[i] - temp_R;
      Out_I[i_lower] = X_I[i] - temp_I;
      Out_R[i] = X_R[i] + temp_R;
      Out_I[i] = X_I[i] + temp_I;
    }
  }
}
//void fft(float X_R[N_FREQ], float X_I[N_FREQ])
//{
//#pragma HLS INLINE
//	float temp_R;		/*temporary storage complex variable*/
//	float temp_I;		/*temporary storage complex variable*/
//
//
//	int i,j,k;			/* loop indexes */
//	int i_lower;		/* Index of lower point in butterfly */
//	int step;
//
//	int stage;
//	int DFTpts;
//	int numBF;			/*Butterfly Width*/
//
//	int N2 = SIZE2;	/* N2=N>>1 */
//
//	bit_reverse(X_R, X_I);
//
//	step=N2;
//
//	float a, e, c, s;
//
//	stages:for(stage=1; stage<= M; stage++)
//	{
//		DFTpts = 1 << stage;		// DFT = 2^stage = points in sub DFT
//		numBF = DFTpts/2; 			// Butterfly WIDTHS in sub-DFT
//		k=0;
//
//		e = -6.283185307178/DFTpts;
//
//		a = 0.0;
//		// Perform butterflies for j-th stage
//		butterfly:for(j=0; j<numBF; j++)
//		{
//
//			c = cos(a);
//			s = sin(a);
//			a = a + e;
//
//			// Compute butterflies that use same W**k
//			DFTpts:for(i=j; i<SIZE; i += DFTpts)
//
//			{
//#pragma HLS EXPRESSION_BALANCE
//#pragma HLS LOOP_TRIPCOUNT min=1 max=1024
//
//				i_lower = i + numBF;			//index of lower point in butterfly
//				temp_R = X_R[i_lower]*c- X_I[i_lower]*s;
//				temp_I = X_I[i_lower]*c+ X_R[i_lower]*s;
//
//				X_R[i_lower] = X_R[i] - temp_R;
//				X_I[i_lower] = X_I[i] - temp_I;
//				X_R[i] = X_R[i] + temp_R;
//				X_I[i] = X_I[i] + temp_I;
//			}
//			k+=step;
//		}
//		step=step/2;
//	}
//}
void fft_streaming(float X_R[SIZE], float X_I[SIZE], float OUT_R[SIZE], float OUT_I[SIZE])
{
#pragma HLS DATAFLOW

  float Stage_R[M][SIZE], Stage_I[M][SIZE];
  #pragma HLS array_partition variable=Stage_R dim=1 complete
  #pragma HLS array_partition variable=Stage_I dim=1 complete

  bit_reverse(X_R, X_I, Stage_R[0], Stage_I[0]);
 stage_loop:
  for (int stage = 1; stage < M; stage++) {
#pragma HLS UNROLL
 // Do M-1 stages of butterflies

    fft_stage(stage, Stage_R[stage-1], Stage_I[stage-1], Stage_R[stage], Stage_I[stage]);
  }
  fft_stage(M, Stage_R[M-1], Stage_I[M-1], OUT_R, OUT_I);
}
int music(float data_re[N_SAMPLE][N_SENSOR], float data_im[N_SAMPLE][N_SENSOR], out_stream *P_sm) {
#pragma HLS INTERFACE axis port=P_sm
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE m_axi depth=40960 port=data_re offset=slave bundle=data
#pragma HLS INTERFACE m_axi depth=40960 port=data_im offset=slave bundle=data
	
	float FFT_Buffer_re[N_FREQ];
	float FFT_Buffer_im[N_FREQ];
	float FFT_out_re[N_FREQ];
	float FFT_out_im[N_FREQ];
	complex_float Autocorr_Buffer[N_STFT][N_SENSOR];
	complex_float U[N_SENSOR][N_SENSOR];
	complex_float Un[N_SENSOR][N_SENSOR - N_SOURCE];
	complex_float temp_mat[N_SENSOR][N_SENSOR];
	complex_float AUU[361][N_SENSOR];
	complex_float a_theta[N_SENSOR][361];
	complex_float temp;
	float eigval[N_SENSOR];
	int sort_index[N_SENSOR];
	float w[361];

	for(int l = 0; l < N_STFT; l++) {
		for(int n = 0; n < N_SENSOR; n++) {
			for(int j = 0; j < N_FREQ; j++) {
				FFT_Buffer_re[j] = data_re[l*N_FREQ+j][n];
				FFT_Buffer_im[j] = 0;
			}
			fft_streaming(FFT_Buffer_re, FFT_Buffer_im, FFT_out_re, FFT_out_im);
			for(int j = 0; j< N_FREQ; j++) {
				data_re[l*N_FREQ+j][n] = FFT_out_re[j];
				data_im[l*N_FREQ+j][n] = FFT_out_im[j];
			}
		}
	}

	music_label1:for(int jj = 0; jj < N_FREQ; jj++) {
		float tpf = 2*PIE*fc[jj]/VELOCITY;
		for (int l = 0; l < N_STFT; l++) {
			for (int n = 0; n < N_SENSOR; n++) {

				Autocorr_Buffer[l][n].real(data_re[l*N_FREQ+jj][n]);
				Autocorr_Buffer[l][n].imag(data_im[l*N_FREQ+jj][n]);
			}
		}
		Autocorrelation(Autocorr_Buffer, temp_mat);
		eig_decompose(temp_mat, U, eigval);

		sort_eigval(eigval, sort_index);
		for(int x = 0; x < N_SENSOR; x++) {
			for(int y = 0; y < N_SENSOR; y++) {
				if (sort_index[y] == 1) {
					Un[x][0] = U[x][y];
				} else if (sort_index[y] == 0) {
					Un[x][1] = U[x][y];
				}
			}
		}

		for (int x = 0; x < N_SENSOR; x++) {
			float tpfpx = tpf*p[x];
			music_label2:for (int y = 0; y < 361; y++) {
#pragma HLS EXPRESSION_BALANCE
				float sinpitheta = sin(theta[y]*PIE_DEG);
				a_theta[x][y].real(cos(tpfpx*sinpitheta));
				a_theta[x][y].imag(-sin(tpfpx*sinpitheta));
			}
		}

		for(int i = 0; i < N_SENSOR; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real(0.0);
				temp.imag(0.0);
				music_label3:for(int k = 0; k < 2; k++) {
#pragma HLS EXPRESSION_BALANCE
					temp += Un[i][k] * conj(Un[j][k]);
				}
				temp_mat[i][j] = temp;
			}
		}
		for(int i = 0; i < 361; i++) {
			for(int j = 0; j < N_SENSOR; j++) {
				temp.real(0.0);
				temp.imag(0.0);
				music_label4:for (int k = 0; k < N_SENSOR; k++) {
#pragma HLS EXPRESSION_BALANCE
					temp += conj(a_theta[k][i]) * temp_mat[k][j];
				}
				AUU[i][j] = temp;
			}
		}
		for(int i = 0; i < 361; i++) {
			temp.real(0.0);
			temp.imag(0.0);
			music_label5:for (int k = 0; k < N_SENSOR; k++) {
#pragma HLS EXPRESSION_BALANCE
				temp += AUU[i][k] * a_theta[k][i];
			}
			w[i] += temp.real();
		}
	}
	for (int i = 0; i < 361; i++) {
		P_sm->data = 1/w[i];
		P_sm->user = (i == 0) ? 1:0;
		P_sm->last = (i == 360) ? 1:0;
		++P_sm;
	}
	return 0;
}

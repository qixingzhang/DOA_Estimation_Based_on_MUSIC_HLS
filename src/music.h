#ifndef __MUSIC_H__
#define __MUSIC_H__

#include <iostream>
#include <cstring>
#include <cmath>
#include "hls/linear_algebra/hls_qrf.h"

#define FS 16000
#define N_SENSOR 4
#define SEN_DIST 0.25
#define N_SOURCE 2
#define VELOCITY 340
#define N_SAMPLE 10240
#define N_STFT 10
#define N_FREQ 1024
#define PIE 3.141592654
#define PIE_DEG 0.01745329252

#define M 10 			/* Number of Stages = Log2N */
#define SIZE 1024 		/* SIZE OF FFT */
#define SIZE2 SIZE>>1	/* SIZE/2 */



using namespace std;

typedef complex<float> complex_float;
struct QRF_CONFIG : hls::qrf_traits<N_SENSOR, N_SENSOR, complex_float, complex_float>{
	static const int ARCH          = 0; // Select implementation. 0=Basic. 1=Lower latency/thoughput architecture.
	static const int CALC_ROT_II   = 8; // Specify the rotation calculation loop target II of the QRF_ALT architecture(1)
	static const int UPDATE_II     = 8; // Specify the pipelining target for the Q & R update loops
	static const int UNROLL_FACTOR = 8; // Specify the unrolling factor for Q & R update loops of the QRF_ALT architecture(1)
};

// top function
void music(
	float X[N_SAMPLE][N_SENSOR],	// input signal
	complex_float Xj_f[N_FREQ][N_STFT][N_SENSOR],
	float P_sm[361]					// Spatial spectrum
//	float align_out					// Output aligned signal
);

// sort eigenvalues of autocorrelation matrix Rx
void sort_eigval(
		float eigval[N_SENSOR],		// input: eigenvalues
		int sort_index[N_SENSOR]	// output: sorted index
);

// autocorrelation computing
void Autocorrelation(
		complex_float X[N_STFT][N_SENSOR],		// input: frequency domain signal
		complex_float Rx[N_SENSOR][N_SENSOR]	// output: autocorrelation matrix
);

// eigenvalues and eigenmatrix computing
void eig_decompose(
		complex_float Rx[N_SENSOR][N_SENSOR],	// input: autocorrelation matrix
		complex_float U[N_SENSOR][N_SENSOR],	// output: eigenmatrix
		float eigval[N_SENSOR]				// output: eigenvalues
);

// fast fourier transform
void fft(float X_R[N_FREQ], float X_I[N_FREQ]);

void qr_decompose(
		complex_float A[N_SENSOR][N_SENSOR],
		complex_float Q[N_SENSOR][N_SENSOR],
		complex_float R[N_SENSOR][N_SENSOR]
);

unsigned int reverse_bits(unsigned int input);// used in FFT

void bit_reverse(float X_R[N_FREQ], float X_I[N_FREQ]);//  used in FFT

#endif

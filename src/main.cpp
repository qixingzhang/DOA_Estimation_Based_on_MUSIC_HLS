#include "music.h"
#include "AudioFile.h"

using namespace std;

int main() {
	float X[N_SAMPLE][N_SENSOR];
	int DOA1, DOA2;
	float align_out[N_SAMPLE];
	float P_sm[361];

	AudioFile<double> ch1, ch2, ch3, ch4;
	ch1.load ("test_audio/test_2_ch_1.wav");
	ch2.load ("test_audio/test_2_ch_2.wav");
	ch3.load ("test_audio/test_2_ch_3.wav");
	ch4.load ("test_audio/test_2_ch_4.wav");

	for(int i = 0; i < N_SAMPLE; i++) {
		X[i][0] = ch1.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X[i][1] = ch2.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X[i][2] = ch3.samples[0][i];
	}
	for(int i = 0; i < N_SAMPLE; i++) {
		X[i][3] = ch4.samples[0][i];
	}

	music(X, P_sm);

	float p_max[361];
	int index[361];
	for (int i = 1; i < 360; i++) {
		if((P_sm[i] >= P_sm[i-1]) && (P_sm[i] >= P_sm[i+1])) {
			p_max[i] = P_sm[i];
		}
	}

	for (int i = 0; i < 361; i++) {
		index[i] = i;
	}
	for (int i = 0; i < 361 - 1; i++) {
		int flag = i;
		for (int j = flag + 1; j < 361; j++) {
			if (p_max[index[flag]] > p_max[index[j]]) {
				flag = j;
			}
		}
		int temp = 0;
		temp = index[flag];
		index[flag] = index[i];
		index[i] = temp;
	}

	DOA1 = 0.5 * (float)index[360] - 90;
	DOA2 = 0.5 * (float)index[359] - 90;
	cout << "##########################" << endl;
	cout << "DOA1: " << DOA1 << "deg, " << "DOA2: " << DOA2 << "deg" << endl;
	cout << "##########################" << endl;
	return 0;
}

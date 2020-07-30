// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "X"
#define AUTOTB_TVIN_X  "../tv/cdatafile/c.music.autotvin_X.dat"
// wrapc file define: "Xj_f_M_real"
#define AUTOTB_TVIN_Xj_f_M_real  "../tv/cdatafile/c.music.autotvin_Xj_f_M_real.dat"
#define AUTOTB_TVOUT_Xj_f_M_real  "../tv/cdatafile/c.music.autotvout_Xj_f_M_real.dat"
// wrapc file define: "Xj_f_M_imag"
#define AUTOTB_TVIN_Xj_f_M_imag  "../tv/cdatafile/c.music.autotvin_Xj_f_M_imag.dat"
#define AUTOTB_TVOUT_Xj_f_M_imag  "../tv/cdatafile/c.music.autotvout_Xj_f_M_imag.dat"
// wrapc file define: "P_sm"
#define AUTOTB_TVOUT_P_sm  "../tv/cdatafile/c.music.autotvout_P_sm.dat"
#define AUTOTB_TVIN_P_sm  "../tv/cdatafile/c.music.autotvin_P_sm.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "Xj_f_M_real"
#define AUTOTB_TVOUT_PC_Xj_f_M_real  "../tv/rtldatafile/rtl.music.autotvout_Xj_f_M_real.dat"
// tvout file define: "Xj_f_M_imag"
#define AUTOTB_TVOUT_PC_Xj_f_M_imag  "../tv/rtldatafile/rtl.music.autotvout_Xj_f_M_imag.dat"
// tvout file define: "P_sm"
#define AUTOTB_TVOUT_PC_P_sm  "../tv/rtldatafile/rtl.music.autotvout_P_sm.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			X_depth = 0;
			Xj_f_M_real_depth = 0;
			Xj_f_M_imag_depth = 0;
			P_sm_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{X " << X_depth << "}\n";
			total_list << "{Xj_f_M_real " << Xj_f_M_real_depth << "}\n";
			total_list << "{Xj_f_M_imag " << Xj_f_M_imag_depth << "}\n";
			total_list << "{P_sm " << P_sm_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int X_depth;
		int Xj_f_M_real_depth;
		int Xj_f_M_imag_depth;
		int P_sm_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void music (
float X[10240][4],
std::complex<float > Xj_f[1024][10][4],
float P_sm[361]);

void AESL_WRAP_music (
float X[10240][4],
std::complex<float > Xj_f[1024][10][4],
float P_sm[361])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "Xj_f_M_real"
		aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_real, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_real, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_real, AESL_token); // data

			sc_bv<32> *Xj_f_M_real_pc_buffer = new sc_bv<32>[40960];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Xj_f_M_real', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Xj_f_M_real', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					Xj_f_M_real_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_real, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_Xj_f_M_real))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: Xj_f_M_real
				{
					// bitslice(31, 0)
					// {
						// celement: Xj_f._M_real(31, 0)
						// {
							sc_lv<32>* Xj_f__M_real_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1 = new sc_lv<32>[40960];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: Xj_f._M_real(31, 0)
						{
							// carray: (0) => (1023) @ (1)
							for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (3) @ (1)
									for (int i_2 = 0; i_2 <= 3; i_2 += 1)
									{
										if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											Xj_f__M_real_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index].range(31, 0) = sc_bv<32>(Xj_f_M_real_pc_buffer[hls_map_index].range(31, 0));
											hls_map_index++;
										}
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
    float wrap_real_Xj_f__M_real;
						// celement: Xj_f._M_real(31, 0)
						{
							// carray: (0) => (1023) @ (1)
							for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (3) @ (1)
									for (int i_2 = 0; i_2 <= 3; i_2 += 1)
									{
										// sub                    : i_0 i_1 i_2
										// ori_name               : Xj_f[i_0][i_1][i_2].real()
										// sub_1st_elem           : 0 0 0
										// ori_name_1st_elem      : Xj_f[0][0][0]
										// output_left_conversion : *(int*)&wrap_real_Xj_f__M_real
										// output_type_conversion : (Xj_f__M_real_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index]).to_uint64()
										if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											wrap_real_Xj_f__M_real = Xj_f[i_0][i_1][i_2].real();
											*(int*)&wrap_real_Xj_f__M_real = (Xj_f__M_real_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index]).to_uint64();
											Xj_f[i_0][i_1][i_2].real(wrap_real_Xj_f__M_real);
											hls_map_index++;
										}
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] Xj_f_M_real_pc_buffer;
		}

		// output port post check: "Xj_f_M_imag"
		aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_imag, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_imag, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_imag, AESL_token); // data

			sc_bv<32> *Xj_f_M_imag_pc_buffer = new sc_bv<32>[40960];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Xj_f_M_imag', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Xj_f_M_imag', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					Xj_f_M_imag_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_Xj_f_M_imag, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_Xj_f_M_imag))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: Xj_f_M_imag
				{
					// bitslice(31, 0)
					// {
						// celement: Xj_f._M_imag(31, 0)
						// {
							sc_lv<32>* Xj_f__M_imag_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1 = new sc_lv<32>[40960];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: Xj_f._M_imag(31, 0)
						{
							// carray: (0) => (1023) @ (1)
							for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (3) @ (1)
									for (int i_2 = 0; i_2 <= 3; i_2 += 1)
									{
										if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											Xj_f__M_imag_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index].range(31, 0) = sc_bv<32>(Xj_f_M_imag_pc_buffer[hls_map_index].range(31, 0));
											hls_map_index++;
										}
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
    float wrap_imag_Xj_f__M_imag;
						// celement: Xj_f._M_imag(31, 0)
						{
							// carray: (0) => (1023) @ (1)
							for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (3) @ (1)
									for (int i_2 = 0; i_2 <= 3; i_2 += 1)
									{
										// sub                    : i_0 i_1 i_2
										// ori_name               : Xj_f[i_0][i_1][i_2].imag()
										// sub_1st_elem           : 0 0 0
										// ori_name_1st_elem      : Xj_f[0][0][0]
										// output_left_conversion : *(int*)&wrap_imag_Xj_f__M_imag
										// output_type_conversion : (Xj_f__M_imag_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index]).to_uint64()
										if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											wrap_imag_Xj_f__M_imag = Xj_f[i_0][i_1][i_2].imag();
											*(int*)&wrap_imag_Xj_f__M_imag = (Xj_f__M_imag_lv0_0_1023_1_lv1_0_9_1_lv2_0_3_1[hls_map_index]).to_uint64();
											Xj_f[i_0][i_1][i_2].imag(wrap_imag_Xj_f__M_imag);
											hls_map_index++;
										}
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] Xj_f_M_imag_pc_buffer;
		}

		// output port post check: "P_sm"
		aesl_fh.read(AUTOTB_TVOUT_PC_P_sm, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_P_sm, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_P_sm, AESL_token); // data

			sc_bv<32> *P_sm_pc_buffer = new sc_bv<32>[361];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'P_sm', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'P_sm', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					P_sm_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_P_sm, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_P_sm))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: P_sm
				{
					// bitslice(31, 0)
					// {
						// celement: P_sm(31, 0)
						// {
							sc_lv<32>* P_sm_lv0_0_360_1 = new sc_lv<32>[361];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: P_sm(31, 0)
						{
							// carray: (0) => (360) @ (1)
							for (int i_0 = 0; i_0 <= 360; i_0 += 1)
							{
								if (&(P_sm[0]) != NULL) // check the null address if the c port is array or others
								{
									P_sm_lv0_0_360_1[hls_map_index].range(31, 0) = sc_bv<32>(P_sm_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: P_sm(31, 0)
						{
							// carray: (0) => (360) @ (1)
							for (int i_0 = 0; i_0 <= 360; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : P_sm[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : P_sm[0]
								// output_left_conversion : *(int*)&P_sm[i_0]
								// output_type_conversion : (P_sm_lv0_0_360_1[hls_map_index]).to_uint64()
								if (&(P_sm[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&P_sm[i_0] = (P_sm_lv0_0_360_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] P_sm_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "X"
		char* tvin_X = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_X);

		// "Xj_f_M_real"
		char* tvin_Xj_f_M_real = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Xj_f_M_real);
		char* tvout_Xj_f_M_real = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_Xj_f_M_real);

		// "Xj_f_M_imag"
		char* tvin_Xj_f_M_imag = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Xj_f_M_imag);
		char* tvout_Xj_f_M_imag = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_Xj_f_M_imag);

		// "P_sm"
		char* tvin_P_sm = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_P_sm);
		char* tvout_P_sm = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_P_sm);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_X, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_X, tvin_X);

		sc_bv<32>* X_tvin_wrapc_buffer = new sc_bv<32>[40960];

		// RTL Name: X
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: X(31, 0)
				{
					// carray: (0) => (10239) @ (1)
					for (int i_0 = 0; i_0 <= 10239; i_0 += 1)
					{
						// carray: (0) => (3) @ (1)
						for (int i_1 = 0; i_1 <= 3; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : X[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : X[0][0]
							// regulate_c_name       : X
							// input_type_conversion : *(int*)&X[i_0][i_1]
							if (&(X[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> X_tmp_mem;
								X_tmp_mem = *(int*)&X[i_0][i_1];
								X_tvin_wrapc_buffer[hls_map_index].range(31, 0) = X_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40960; i++)
		{
			sprintf(tvin_X, "%s\n", (X_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_X, tvin_X);
		}

		tcl_file.set_num(40960, &tcl_file.X_depth);
		sprintf(tvin_X, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_X, tvin_X);

		// release memory allocation
		delete [] X_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Xj_f_M_real, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Xj_f_M_real, tvin_Xj_f_M_real);

		sc_bv<32>* Xj_f_M_real_tvin_wrapc_buffer = new sc_bv<32>[40960];

		// RTL Name: Xj_f_M_real
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
    float wrap_real_Xj_f__M_real;
				// celement: Xj_f._M_real(31, 0)
				{
					// carray: (0) => (1023) @ (1)
					for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (3) @ (1)
							for (int i_2 = 0; i_2 <= 3; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : Xj_f[i_0][i_1][i_2].real()
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : Xj_f[0][0][0]
								// regulate_c_name       : Xj_f__M_real
								// input_type_conversion : *(int*)&wrap_real_Xj_f__M_real
								if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> Xj_f__M_real_tmp_mem;
                                 			       wrap_real_Xj_f__M_real = Xj_f[i_0][i_1][i_2].real();
									Xj_f__M_real_tmp_mem = *(int*)&wrap_real_Xj_f__M_real;
									Xj_f_M_real_tvin_wrapc_buffer[hls_map_index].range(31, 0) = Xj_f__M_real_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40960; i++)
		{
			sprintf(tvin_Xj_f_M_real, "%s\n", (Xj_f_M_real_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Xj_f_M_real, tvin_Xj_f_M_real);
		}

		tcl_file.set_num(40960, &tcl_file.Xj_f_M_real_depth);
		sprintf(tvin_Xj_f_M_real, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Xj_f_M_real, tvin_Xj_f_M_real);

		// release memory allocation
		delete [] Xj_f_M_real_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Xj_f_M_imag, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Xj_f_M_imag, tvin_Xj_f_M_imag);

		sc_bv<32>* Xj_f_M_imag_tvin_wrapc_buffer = new sc_bv<32>[40960];

		// RTL Name: Xj_f_M_imag
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
    float wrap_imag_Xj_f__M_imag;
				// celement: Xj_f._M_imag(31, 0)
				{
					// carray: (0) => (1023) @ (1)
					for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (3) @ (1)
							for (int i_2 = 0; i_2 <= 3; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : Xj_f[i_0][i_1][i_2].imag()
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : Xj_f[0][0][0]
								// regulate_c_name       : Xj_f__M_imag
								// input_type_conversion : *(int*)&wrap_imag_Xj_f__M_imag
								if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> Xj_f__M_imag_tmp_mem;
                                 			       wrap_imag_Xj_f__M_imag = Xj_f[i_0][i_1][i_2].imag();
									Xj_f__M_imag_tmp_mem = *(int*)&wrap_imag_Xj_f__M_imag;
									Xj_f_M_imag_tvin_wrapc_buffer[hls_map_index].range(31, 0) = Xj_f__M_imag_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40960; i++)
		{
			sprintf(tvin_Xj_f_M_imag, "%s\n", (Xj_f_M_imag_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Xj_f_M_imag, tvin_Xj_f_M_imag);
		}

		tcl_file.set_num(40960, &tcl_file.Xj_f_M_imag_depth);
		sprintf(tvin_Xj_f_M_imag, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Xj_f_M_imag, tvin_Xj_f_M_imag);

		// release memory allocation
		delete [] Xj_f_M_imag_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_P_sm, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_P_sm, tvin_P_sm);

		sc_bv<32>* P_sm_tvin_wrapc_buffer = new sc_bv<32>[361];

		// RTL Name: P_sm
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: P_sm(31, 0)
				{
					// carray: (0) => (360) @ (1)
					for (int i_0 = 0; i_0 <= 360; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : P_sm[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : P_sm[0]
						// regulate_c_name       : P_sm
						// input_type_conversion : *(int*)&P_sm[i_0]
						if (&(P_sm[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> P_sm_tmp_mem;
							P_sm_tmp_mem = *(int*)&P_sm[i_0];
							P_sm_tvin_wrapc_buffer[hls_map_index].range(31, 0) = P_sm_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 361; i++)
		{
			sprintf(tvin_P_sm, "%s\n", (P_sm_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_P_sm, tvin_P_sm);
		}

		tcl_file.set_num(361, &tcl_file.P_sm_depth);
		sprintf(tvin_P_sm, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_P_sm, tvin_P_sm);

		// release memory allocation
		delete [] P_sm_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		music(X, Xj_f, P_sm);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_Xj_f_M_real, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_real, tvout_Xj_f_M_real);

		sc_bv<32>* Xj_f_M_real_tvout_wrapc_buffer = new sc_bv<32>[40960];

		// RTL Name: Xj_f_M_real
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
    float wrap_real_Xj_f__M_real;
				// celement: Xj_f._M_real(31, 0)
				{
					// carray: (0) => (1023) @ (1)
					for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (3) @ (1)
							for (int i_2 = 0; i_2 <= 3; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : Xj_f[i_0][i_1][i_2].real()
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : Xj_f[0][0][0]
								// regulate_c_name       : Xj_f__M_real
								// input_type_conversion : *(int*)&wrap_real_Xj_f__M_real
								if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> Xj_f__M_real_tmp_mem;
                                 			       wrap_real_Xj_f__M_real = Xj_f[i_0][i_1][i_2].real();
									Xj_f__M_real_tmp_mem = *(int*)&wrap_real_Xj_f__M_real;
									Xj_f_M_real_tvout_wrapc_buffer[hls_map_index].range(31, 0) = Xj_f__M_real_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40960; i++)
		{
			sprintf(tvout_Xj_f_M_real, "%s\n", (Xj_f_M_real_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_real, tvout_Xj_f_M_real);
		}

		tcl_file.set_num(40960, &tcl_file.Xj_f_M_real_depth);
		sprintf(tvout_Xj_f_M_real, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_real, tvout_Xj_f_M_real);

		// release memory allocation
		delete [] Xj_f_M_real_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_Xj_f_M_imag, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_imag, tvout_Xj_f_M_imag);

		sc_bv<32>* Xj_f_M_imag_tvout_wrapc_buffer = new sc_bv<32>[40960];

		// RTL Name: Xj_f_M_imag
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
    float wrap_imag_Xj_f__M_imag;
				// celement: Xj_f._M_imag(31, 0)
				{
					// carray: (0) => (1023) @ (1)
					for (int i_0 = 0; i_0 <= 1023; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (3) @ (1)
							for (int i_2 = 0; i_2 <= 3; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : Xj_f[i_0][i_1][i_2].imag()
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : Xj_f[0][0][0]
								// regulate_c_name       : Xj_f__M_imag
								// input_type_conversion : *(int*)&wrap_imag_Xj_f__M_imag
								if (&(Xj_f[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> Xj_f__M_imag_tmp_mem;
                                 			       wrap_imag_Xj_f__M_imag = Xj_f[i_0][i_1][i_2].imag();
									Xj_f__M_imag_tmp_mem = *(int*)&wrap_imag_Xj_f__M_imag;
									Xj_f_M_imag_tvout_wrapc_buffer[hls_map_index].range(31, 0) = Xj_f__M_imag_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 40960; i++)
		{
			sprintf(tvout_Xj_f_M_imag, "%s\n", (Xj_f_M_imag_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_imag, tvout_Xj_f_M_imag);
		}

		tcl_file.set_num(40960, &tcl_file.Xj_f_M_imag_depth);
		sprintf(tvout_Xj_f_M_imag, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_Xj_f_M_imag, tvout_Xj_f_M_imag);

		// release memory allocation
		delete [] Xj_f_M_imag_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_P_sm, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_P_sm, tvout_P_sm);

		sc_bv<32>* P_sm_tvout_wrapc_buffer = new sc_bv<32>[361];

		// RTL Name: P_sm
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: P_sm(31, 0)
				{
					// carray: (0) => (360) @ (1)
					for (int i_0 = 0; i_0 <= 360; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : P_sm[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : P_sm[0]
						// regulate_c_name       : P_sm
						// input_type_conversion : *(int*)&P_sm[i_0]
						if (&(P_sm[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> P_sm_tmp_mem;
							P_sm_tmp_mem = *(int*)&P_sm[i_0];
							P_sm_tvout_wrapc_buffer[hls_map_index].range(31, 0) = P_sm_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 361; i++)
		{
			sprintf(tvout_P_sm, "%s\n", (P_sm_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_P_sm, tvout_P_sm);
		}

		tcl_file.set_num(361, &tcl_file.P_sm_depth);
		sprintf(tvout_P_sm, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_P_sm, tvout_P_sm);

		// release memory allocation
		delete [] P_sm_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "X"
		delete [] tvin_X;
		// release memory allocation: "Xj_f_M_real"
		delete [] tvin_Xj_f_M_real;
		delete [] tvout_Xj_f_M_real;
		// release memory allocation: "Xj_f_M_imag"
		delete [] tvin_Xj_f_M_imag;
		delete [] tvout_Xj_f_M_imag;
		// release memory allocation: "P_sm"
		delete [] tvout_P_sm;
		delete [] tvin_P_sm;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}


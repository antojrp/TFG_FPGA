
#include <math.h>
#include <iostream>
using namespace std;

void fourier4p(float inr[16], float ini[16], float outr[16], float outi[16], float f_r1[16][16], float f_r2[16][16], float f_i1[16][16], float f_i2[16][16])
{
#pragma HLS INTERFACE mode=s_axilite port=inr
#pragma HLS INTERFACE mode=s_axilite port=ini
#pragma HLS INTERFACE mode=s_axilite port=outr
#pragma HLS INTERFACE mode=s_axilite port=outi
#pragma HLS INTERFACE mode=s_axilite port=f_r1
#pragma HLS INTERFACE mode=s_axilite port=f_i1
#pragma HLS INTERFACE mode=s_axilite port=f_r2
#pragma HLS INTERFACE mode=s_axilite port=f_i2
  int N=4;
  int M=pow(2,N);
  float frxr[M], fixr[M], frxi[M], fixi[M];

#pragma HLS PIPELINE II=1
  for(int i = 0; i < M; i++) {
      frxr[i]= 0;
      frxi[i]= 0;
      fixr[i]= 0;
      fixi[i]= 0;
#pragma HLS PIPELINE II=1
      for(int k = 0; k < M; k++) {
        frxi[i] += f_r2[i][k] * ini[k];
        fixr[i] += f_i1[i][k] * inr[k];
        frxr[i] += f_r1[i][k] * inr[k];
        fixi[i] += f_i2[i][k] * ini[k];
      }
    }


  for(int i = 0; i<M; i++) {
	  outr[i]=frxr[i]-fixi[i];
	  outi[i]=fixr[i]+frxi[i];

  }

}

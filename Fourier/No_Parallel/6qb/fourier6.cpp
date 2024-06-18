
#include <math.h>
#include <iostream>
using namespace std;

void fourier6(float in[128], float out[128], float matrix[64][64][2])
{
#pragma HLS INTERFACE mode=s_axilite port=in
#pragma HLS INTERFACE mode=s_axilite port=out
#pragma HLS INTERFACE mode=s_axilite port=matrix
  int N=6;
  int M=pow(2,N);
  float frxr[M], fixr[M], frxi[M], fixi[M];




  // Multiply real part of the matrix and real part of the state
  for(int i = 0; i < M; i++) {
      frxr[i]= 0;
      for(int k = 0; k < M; k++) {
        frxr[i] += matrix[i][k][0] * in[2*k];
      }
    }

  // Multiply real part of the matrix and imaginary part of the state
  for(int i = 0; i < M; i++) {
      frxi[i]= 0;
      for(int k = 0; k < M; k++) {
        frxi[i] += matrix[i][k][0] * in[2*k+1];
      }
    }

  // Multiply imaginary part of the matrix and real part of the state
  for(int i = 0; i < M; i++) {
      fixr[i]= 0;
      for(int k = 0; k < M; k++) {
    	  fixr[i] += matrix[i][k][1] * in[2*k];
      }
    }

  // Multiply imaginary part of the matrix and imaginary part of the state
  for(int i = 0; i < M; i++) {
      fixi[i]= 0;
      for(int k = 0; k < M; k++) {
        fixi[i] += matrix[i][k][1] * in[2*k+1];
      }
    }

  for(int i = 0; i<M; i++) {
	  out[2*i]=frxr[i]-fixi[i];
	  out[2*i+1]=fixr[i]+frxi[i];

  }

}

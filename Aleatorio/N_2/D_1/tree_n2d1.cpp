#include <math.h>
#include <iostream>
using namespace std;

void tree_n2d1(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float outr[4], float outi[4], float mr_1[4][4], float mi_1[4][4])
{
#pragma HLS INTERFACE mode=s_axilite port=inr_1
#pragma HLS INTERFACE mode=s_axilite port=ini_1
#pragma HLS INTERFACE mode=s_axilite port=inr_2
#pragma HLS INTERFACE mode=s_axilite port=ini_2
#pragma HLS INTERFACE mode=s_axilite port=outr
#pragma HLS INTERFACE mode=s_axilite port=outi
#pragma HLS INTERFACE mode=s_axilite port=mr_1
#pragma HLS INTERFACE mode=s_axilite port=mi_1


  float mrxr[4], mixr[4], mrxi[4], mixi[4],auxr_1[4],auxi_1[4];

  for(int i=0; i<2; i++){
	  for(int j=0; j<2; j++){
		  auxr_1[i]=inr_1[i]*inr_2[j]-ini_1[i]*ini_2[j];
		  auxi_1[i]=inr_1[i]*ini_2[j]+ini_1[i]*inr_2[j];
	  }

  }

  for(int i = 0; i < 4; i++) {
      mrxr[i]= 0;
      mrxi[i]= 0;
      mixr[i]= 0;
      mixi[i]= 0;
      for(int k = 0; k < 4; k++) {
        mrxr[i] += mr_1[i][k] * auxr_1[k];
        mrxi[i] += mr_1[i][k] * auxi_1[k];
        mixr[i] += mi_1[i][k] * auxr_1[k];
        mixi[i] += mi_1[i][k] * auxi_1[k];
      }
    }


  for(int i = 0; i<4; i++) {
	  outr[i]=mrxr[i]-mixi[i];
	  outi[i]=mixr[i]+mrxi[i];

  }

}

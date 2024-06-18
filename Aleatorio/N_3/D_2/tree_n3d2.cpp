#include <math.h>
#include <iostream>
using namespace std;

void tree_n3d2(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2],float inr_3[2], float ini_3[2], float outr[8], float outi[8], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4])
{
#pragma HLS INTERFACE mode=s_axilite port=inr_1
#pragma HLS INTERFACE mode=s_axilite port=ini_1
#pragma HLS INTERFACE mode=s_axilite port=inr_2
#pragma HLS INTERFACE mode=s_axilite port=ini_2
#pragma HLS INTERFACE mode=s_axilite port=inr_3
#pragma HLS INTERFACE mode=s_axilite port=ini_3

#pragma HLS INTERFACE mode=s_axilite port=outr
#pragma HLS INTERFACE mode=s_axilite port=outi
#pragma HLS INTERFACE mode=s_axilite port=mr_1
#pragma HLS INTERFACE mode=s_axilite port=mi_1
#pragma HLS INTERFACE mode=s_axilite port=mr_2
#pragma HLS INTERFACE mode=s_axilite port=mi_2
#pragma HLS INTERFACE mode=s_axilite port=mr_3
#pragma HLS INTERFACE mode=s_axilite port=mi_3


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4],auxr_1[4],auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4],auxr_2[4],auxi_2[4];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4],auxr_3[4],auxi_3[4];

  for(int i=0; i<2; i++){
	  for(int j=0; j<2; j++){
		  auxr_1[i]=inr_1[i]*inr_2[j]-ini_1[i]*ini_2[j];
		  auxi_1[i]=inr_1[i]*ini_2[j]+ini_1[i]*inr_2[j];
	  }

  }

  for(int i = 0; i < 4; i++) {
      mrxr1[i]= 0;
      mrxi1[i]= 0;
      mixr1[i]= 0;
      mixi1[i]= 0;
      for(int k = 0; k < 4; k++) {
        mrxr1[i] += mr_1[i][k] * auxr_1[k];
        mrxi1[i] += mr_1[i][k] * auxi_1[k];
        mixr1[i] += mi_1[i][k] * auxr_1[k];
        mixi1[i] += mi_1[i][k] * auxi_1[k];
      }
    }


  for(int i = 0; i<2; i++) {
  	  for(int j = 0; j<2; j++){
  		  auxr_2[j+2*i]=(mrxr1[i]-mixi1[i])*inr_3[j]-(mixr1[i]+mrxi1[i])*ini_3[j];
  	      auxi_2[j+2*i]=(mrxr1[i]-mixi1[i])*ini_3[j]+(mixr1[i]+mrxi1[i])*inr_3[j];
  		  auxr_3[j+2*i]=(mrxr1[i+2]-mixi1[i+2])*inr_3[j]-(mixr1[i+2]+mrxi1[i+2])*ini_3[j];
  	      auxi_3[j+2*i]=(mrxr1[i+2]-mixi1[i+2])*ini_3[j]+(mixr1[i+2]+mrxi1[i+2])*inr_3[j];
  	  }
  }
  for(int i = 2; i<4; i++) {
	  for(int j = 0; j<2; j++){

	  }
  }

  for(int i = 0; i < 4; i++) {
          mrxr2[i]= 0;
          mrxi2[i]= 0;
          mixr2[i]= 0;
          mixi2[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr2[i] += mr_2[i][k] * auxr_2[k];
            mrxi2[i] += mr_2[i][k] * auxi_2[k];
            mixr2[i] += mi_2[i][k] * auxr_2[k];
            mixi2[i] += mi_2[i][k] * auxi_2[k];
          }
        }



  for(int i = 0; i < 4; i++) {
            mrxr3[i]= 0;
            mrxi3[i]= 0;
            mixr3[i]= 0;
            mixi3[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr3[i] += mr_3[i][k] * auxr_3[k];
              mrxi3[i] += mr_3[i][k] * auxi_3[k];
              mixr3[i] += mi_3[i][k] * auxr_3[k];
              mixi3[i] += mi_3[i][k] * auxi_3[k];
            }
          }

  for(int i = 0; i<4; i++) {
	  outr[i]=mrxr2[i]-mixi2[i];
	  outi[i]=mixr2[i]+mrxi2[i];
  	  outr[i+4]=mrxr3[i]-mixi3[i];
  	  outi[i+4]=mixr3[i]+mrxi3[i];
      }
}

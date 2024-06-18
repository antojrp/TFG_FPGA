#include <math.h>
#include <iostream>
using namespace std;

void tree_n6d1(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
		float inr_5[2], float ini_5[2], float inr_6[2], float ini_6[2], float outr[64], float outi[64], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4])
{
#pragma HLS INTERFACE mode=s_axilite port=inr_1
#pragma HLS INTERFACE mode=s_axilite port=ini_1
#pragma HLS INTERFACE mode=s_axilite port=inr_2
#pragma HLS INTERFACE mode=s_axilite port=ini_2
#pragma HLS INTERFACE mode=s_axilite port=inr_3
#pragma HLS INTERFACE mode=s_axilite port=ini_3
#pragma HLS INTERFACE mode=s_axilite port=inr_4
#pragma HLS INTERFACE mode=s_axilite port=ini_4
#pragma HLS INTERFACE mode=s_axilite port=inr_5
#pragma HLS INTERFACE mode=s_axilite port=ini_5
#pragma HLS INTERFACE mode=s_axilite port=inr_6
#pragma HLS INTERFACE mode=s_axilite port=ini_6

#pragma HLS INTERFACE mode=s_axilite port=outr
#pragma HLS INTERFACE mode=s_axilite port=outi
#pragma HLS INTERFACE mode=s_axilite port=mr_1
#pragma HLS INTERFACE mode=s_axilite port=mi_1
#pragma HLS INTERFACE mode=s_axilite port=mr_2
#pragma HLS INTERFACE mode=s_axilite port=mi_2
#pragma HLS INTERFACE mode=s_axilite port=mr_3
#pragma HLS INTERFACE mode=s_axilite port=mi_3


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4], auxfin1[2], auxfin2[2];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4], auxr_3[4], auxi_3[4];

  for(int i=0; i<2; i++){
	  for(int j=0; j<2; j++){
		  auxr_1[i]=inr_1[i]*inr_2[j]-ini_1[i]*ini_2[j];
		  auxi_1[i]=inr_1[i]*ini_2[j]+ini_1[i]*inr_2[j];

		  auxr_2[i]=inr_3[i]*inr_4[j]-ini_3[i]*ini_4[j];
		  auxi_2[i]=inr_3[i]*ini_4[j]+ini_3[i]*inr_4[j];

		  auxr_3[i]=inr_5[i]*inr_6[j]-ini_5[i]*ini_6[j];
		  auxi_3[i]=inr_5[i]*ini_6[j]+ini_5[i]*inr_6[j];
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


  for(int i=0; i<4; i++){
  	  for(int j=0; j<4; j++){
  		  auxfin1[0]=(mrxr1[i]-mixi1[i])*(mrxr2[j]-mixi2[j])-(mrxi1[i]+mixr1[i])*(mrxi2[j]+mrxi2[j]);
		  auxfin1[1]=(mrxr1[i]-mixi1[i])*(mrxi2[j]+mrxi2[j])+(mrxi1[i]+mixr1[i])*(mrxr2[j]-mixi2[j]);

		  outr[4*j+16*i]=(auxfin1[0])*(mrxr3[0]-mixi3[0])-(auxfin1[1])*(mrxi3[0]+mixr3[0]);
		  outi[4*j+16*i]=(auxfin1[1])*(mrxr3[0]-mixi3[0])+(auxfin1[0])*(mrxi3[0]+mixr3[0]);

		  outr[1+4*j+16*i]=(auxfin1[0])*(mrxr3[1]-mixi3[1])-(auxfin1[1])*(mrxi3[1]+mixr3[1]);
		  outi[1+4*j+16*i]=(auxfin1[1])*(mrxr3[1]-mixi3[1])+(auxfin1[0])*(mrxi3[1]+mixr3[1]);

		  outr[2+4*j+16*i]=(auxfin1[0])*(mrxr3[2]-mixi3[2])-(auxfin1[1])*(mrxi3[2]+mixr3[2]);
		  outi[2+4*j+16*i]=(auxfin1[1])*(mrxr3[2]-mixi3[2])+(auxfin1[0])*(mrxi3[2]+mixr3[2]);

		  outr[3+4*j+16*i]=(auxfin1[0])*(mrxr3[3]-mixi3[3])-(auxfin1[1])*(mrxi3[3]+mixr3[3]);
		  outi[3+4*j+16*i]=(auxfin1[1])*(mrxr3[3]-mixi3[3])+(auxfin1[0])*(mrxi3[3]+mixr3[3]);


  	  }
    }

}

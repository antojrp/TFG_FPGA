#include <math.h>
#include <iostream>
using namespace std;

void tree_n2d4(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float outr[4], float outi[4], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4],float mr_4[4][4], float mi_4[4][4])
{
#pragma HLS INTERFACE mode=s_axilite port=inr_1
#pragma HLS INTERFACE mode=s_axilite port=ini_1
#pragma HLS INTERFACE mode=s_axilite port=inr_2
#pragma HLS INTERFACE mode=s_axilite port=ini_2
#pragma HLS INTERFACE mode=s_axilite port=outr
#pragma HLS INTERFACE mode=s_axilite port=outi
#pragma HLS INTERFACE mode=s_axilite port=mr_1
#pragma HLS INTERFACE mode=s_axilite port=mi_1
#pragma HLS INTERFACE mode=s_axilite port=mr_2
#pragma HLS INTERFACE mode=s_axilite port=mi_2
#pragma HLS INTERFACE mode=s_axilite port=mr_3
#pragma HLS INTERFACE mode=s_axilite port=mi_3
#pragma HLS INTERFACE mode=s_axilite port=mr_4
#pragma HLS INTERFACE mode=s_axilite port=mi_4


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4], auxr_3[4], auxi_3[4];
  float mrxr4[4], mixr4[4], mrxi4[4], mixi4[4], auxr_4[4], auxi_4[4];

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


  for(int i = 0; i<4; i++) {
	  auxr_2[i]=mrxr1[i]-mixi1[i];
	  auxi_2[i]=mixr1[i]+mrxi1[i];

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


  auxr_3[0]=mrxr2[0]-mixi2[0];
  auxi_3[0]=mixr2[0]+mrxi2[0];
  auxr_3[1]=mrxr2[1]-mixi2[1];
  auxi_3[1]=mixr2[1]+mrxi2[1];
  auxr_3[2]=mrxr2[2]-mixi2[2];
  auxi_3[2]=mixr2[2]+mrxi2[2];
  auxr_3[3]=mrxr2[3]-mixi2[3];
  auxi_3[3]=mixr2[3]+mrxi2[3];




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

  

  auxr_4[0]=mrxr3[0]-mixi3[0];
  auxi_4[0]=mixr3[0]+mrxi3[0];
  auxr_4[1]=mrxr3[1]-mixi3[1];
  auxi_4[1]=mixr3[1]+mrxi3[1];
  auxr_4[2]=mrxr3[2]-mixi3[2];
  auxi_4[2]=mixr3[2]+mrxi3[2];
  auxr_4[3]=mrxr3[3]-mixi3[3];
  auxi_4[3]=mixr3[3]+mrxi3[3];

for(int i = 0; i < 4; i++) {
          mrxr4[i]= 0;
          mrxi4[i]= 0;
          mixr4[i]= 0;
          mixi4[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr4[i] += mr_4[i][k] * auxr_4[k];
            mrxi4[i] += mr_4[i][k] * auxi_4[k];
            mixr4[i] += mi_4[i][k] * auxr_4[k];
            mixi4[i] += mi_4[i][k] * auxi_4[k];
          }
        }

for(int i = 0; i<4; i++) {
  	  outr[i]=mrxr4[i]-mixi4[i];
  	  outi[i]=mixr4[i]+mrxi4[i];
    }

}

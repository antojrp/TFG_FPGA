#include <math.h>
#include <iostream>
using namespace std;

void tree_n4d2(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
float outr[16], float outi[16], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4],float mr_5[4][4], float mi_5[4][4],float mr_6[4][4], float mi_6[4][4])
{
#pragma HLS INTERFACE mode=s_axilite port=inr_1
#pragma HLS INTERFACE mode=s_axilite port=ini_1
#pragma HLS INTERFACE mode=s_axilite port=inr_2
#pragma HLS INTERFACE mode=s_axilite port=ini_2
#pragma HLS INTERFACE mode=s_axilite port=inr_3
#pragma HLS INTERFACE mode=s_axilite port=ini_3
#pragma HLS INTERFACE mode=s_axilite port=inr_4
#pragma HLS INTERFACE mode=s_axilite port=ini_4

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
#pragma HLS INTERFACE mode=s_axilite port=mr_5
#pragma HLS INTERFACE mode=s_axilite port=mi_5
#pragma HLS INTERFACE mode=s_axilite port=mr_6
#pragma HLS INTERFACE mode=s_axilite port=mi_6


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4];

  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4], auxr_3[4], auxi_3[4];
  float mrxr4[4], mixr4[4], mrxi4[4], mixi4[4], auxr_4[4], auxi_4[4];
  float mrxr5[4], mixr5[4], mrxi5[4], mixi5[4], auxr_5[4], auxi_5[4];
  float mrxr6[4], mixr6[4], mrxi6[4], mixi6[4], auxr_6[4], auxi_6[4];


  for(int i=0; i<2; i++){
	  for(int j=0; j<2; j++){
		  auxr_1[i]=inr_1[i]*inr_2[j]-ini_1[i]*ini_2[j];
		  auxi_1[i]=inr_1[i]*ini_2[j]+ini_1[i]*inr_2[j];

		  auxr_2[i]=inr_3[i]*inr_4[j]-ini_3[i]*ini_4[j];
		  auxi_2[i]=inr_3[i]*ini_4[j]+ini_3[i]*inr_4[j];
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


  for(int i=0; i<2; i++){
  	  for(int j=0; j<4; j=j+2){
  		  auxr_3[j/2+4*i]=(mrxr1[i]-mixi1[i])*(mrxr2[j]-mixi2[j])-(mrxi1[i]+mixr1[i])*(mrxi2[j]+mrxi2[j]);
  		  auxi_3[j/2+4*i]=(mrxr1[i]-mixi1[i])*(mrxi2[j]+mrxi2[j])+(mrxi1[i]+mixr1[i])*(mrxr2[j]-mixi2[j]);

  		  auxr_5[j/2+4*i]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[j]-mixi2[j])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[j]+mrxi2[j]);
  		  auxi_5[j/2+4*i]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[j]+mrxi2[j])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[j]-mixi2[j]);

  	  }
  	  for(int j=1; j<4; j=j+2){
  		  auxr_4[(j-1)/2+4*i]=(mrxr1[i]-mixi1[i])*(mrxr2[j]-mixi2[j])-(mrxi1[i]+mixr1[i])*(mrxi2[j]+mrxi2[j]);
  		  auxi_4[(j-1)/2+4*i]=(mrxr1[i]-mixi1[i])*(mrxi2[j]+mrxi2[j])+(mrxi1[i]+mixr1[i])*(mrxr2[j]-mixi2[j]);

  		  auxr_6[(j-1)/2+4*i]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[j]-mixi2[j])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[j]+mrxi2[j]);
  		  auxi_6[(j-1)/2+4*i]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[j]+mrxi2[j])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[j]-mixi2[j]);
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
  for(int i = 0; i < 4; i++) {
          mrxr5[i]= 0;
          mrxi5[i]= 0;
          mixr5[i]= 0;
          mixi5[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr5[i] += mr_5[i][k] * auxr_5[k];
            mrxi5[i] += mr_5[i][k] * auxi_5[k];
            mixr5[i] += mi_5[i][k] * auxr_5[k];
            mixi5[i] += mi_5[i][k] * auxi_5[k];
          }
        }
  for(int i = 0; i < 4; i++) {
          mrxr6[i]= 0;
          mrxi6[i]= 0;
          mixr6[i]= 0;
          mixi6[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr6[i] += mr_6[i][k] * auxr_6[k];
            mrxi6[i] += mr_6[i][k] * auxi_6[k];
            mixr6[i] += mi_6[i][k] * auxr_6[k];
            mixi6[i] += mi_6[i][k] * auxi_6[k];
          }
        }

  for(int i = 0; i<4; i++) {
    	  outr[2*i]=mrxr3[i]-mixi3[i];
    	  outi[2*i]=mixr3[i]+mrxi3[i];
    	  outr[2*i+1]=mrxr4[i]-mixi4[i];
    	  outi[2*i+1]=mixr4[i]+mrxi4[i];

    	  outr[2*i+8]=mrxr5[i]-mixi5[i];
    	  outi[2*i+8]=mixr5[i]+mrxi5[i];
    	  outr[2*i+9]=mrxr6[i]-mixi6[i];
    	  outi[2*i+9]=mixr6[i]+mrxi6[i];
          }

}

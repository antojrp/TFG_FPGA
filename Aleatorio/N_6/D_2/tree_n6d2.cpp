#include <math.h>
#include <iostream>
using namespace std;

void tree_n6d2(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
		float inr_5[2], float ini_5[2], float inr_6[2], float ini_6[2], float outr[64], float outi[64], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4],
		float mr_5[4][4], float mi_5[4][4], float mr_6[4][4], float mi_6[4][4], float mr_7[4][4], float mi_7[4][4],float mr_8[4][4], float mi_8[4][4], float mr_9[4][4], float mi_9[4][4],
		float mr_10[4][4], float mi_10[4][4], float mr_11[4][4], float mi_11[4][4], float mr_12[4][4], float mi_12[4][4],float mr_13[4][4], float mi_13[4][4], float mr_14[4][4], float mi_14[4][4],
		float mr_15[4][4], float mi_15[4][4], float mr_16[4][4], float mi_16[4][4], float mr_17[4][4], float mi_17[4][4],float mr_18[4][4], float mi_18[4][4], float mr_19[4][4], float mi_19[4][4],
		float mr_20[4][4], float mi_20[4][4], float mr_21[4][4], float mi_21[4][4], float mr_22[4][4], float mi_22[4][4],float mr_23[4][4], float mi_23[4][4], float mr_24[4][4], float mi_24[4][4],
		float mr_25[4][4], float mi_25[4][4], float mr_26[4][4], float mi_26[4][4], float mr_27[4][4], float mi_27[4][4],float mr_28[4][4], float mi_28[4][4], float mr_29[4][4], float mi_29[4][4],
		float mr_30[4][4], float mi_30[4][4], float mr_31[4][4], float mi_31[4][4], float mr_32[4][4], float mi_32[4][4],float mr_33[4][4], float mi_33[4][4], float mr_34[4][4], float mi_34[4][4],
		float mr_35[4][4], float mi_35[4][4])
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

#pragma HLS INTERFACE mode=s_axilite port=mr_4
#pragma HLS INTERFACE mode=s_axilite port=mi_4
#pragma HLS INTERFACE mode=s_axilite port=mr_5
#pragma HLS INTERFACE mode=s_axilite port=mi_5
#pragma HLS INTERFACE mode=s_axilite port=mr_6
#pragma HLS INTERFACE mode=s_axilite port=mi_6
#pragma HLS INTERFACE mode=s_axilite port=mr_7
#pragma HLS INTERFACE mode=s_axilite port=mi_7
#pragma HLS INTERFACE mode=s_axilite port=mr_8
#pragma HLS INTERFACE mode=s_axilite port=mi_8
#pragma HLS INTERFACE mode=s_axilite port=mr_9
#pragma HLS INTERFACE mode=s_axilite port=mi_9
#pragma HLS INTERFACE mode=s_axilite port=mr_10
#pragma HLS INTERFACE mode=s_axilite port=mi_10
#pragma HLS INTERFACE mode=s_axilite port=mr_11
#pragma HLS INTERFACE mode=s_axilite port=mi_11
#pragma HLS INTERFACE mode=s_axilite port=mr_12
#pragma HLS INTERFACE mode=s_axilite port=mi_12
#pragma HLS INTERFACE mode=s_axilite port=mr_13
#pragma HLS INTERFACE mode=s_axilite port=mi_13
#pragma HLS INTERFACE mode=s_axilite port=mr_14
#pragma HLS INTERFACE mode=s_axilite port=mi_14
#pragma HLS INTERFACE mode=s_axilite port=mr_15
#pragma HLS INTERFACE mode=s_axilite port=mi_15
#pragma HLS INTERFACE mode=s_axilite port=mr_16
#pragma HLS INTERFACE mode=s_axilite port=mi_16
#pragma HLS INTERFACE mode=s_axilite port=mr_17
#pragma HLS INTERFACE mode=s_axilite port=mi_17
#pragma HLS INTERFACE mode=s_axilite port=mr_18
#pragma HLS INTERFACE mode=s_axilite port=mi_18
#pragma HLS INTERFACE mode=s_axilite port=mr_19
#pragma HLS INTERFACE mode=s_axilite port=mi_19

#pragma HLS INTERFACE mode=s_axilite port=mr_20
#pragma HLS INTERFACE mode=s_axilite port=mi_20
#pragma HLS INTERFACE mode=s_axilite port=mr_21
#pragma HLS INTERFACE mode=s_axilite port=mi_21
#pragma HLS INTERFACE mode=s_axilite port=mr_22
#pragma HLS INTERFACE mode=s_axilite port=mi_22
#pragma HLS INTERFACE mode=s_axilite port=mr_23
#pragma HLS INTERFACE mode=s_axilite port=mi_23
#pragma HLS INTERFACE mode=s_axilite port=mr_24
#pragma HLS INTERFACE mode=s_axilite port=mi_24
#pragma HLS INTERFACE mode=s_axilite port=mr_25
#pragma HLS INTERFACE mode=s_axilite port=mi_25
#pragma HLS INTERFACE mode=s_axilite port=mr_26
#pragma HLS INTERFACE mode=s_axilite port=mi_26
#pragma HLS INTERFACE mode=s_axilite port=mr_27
#pragma HLS INTERFACE mode=s_axilite port=mi_27
#pragma HLS INTERFACE mode=s_axilite port=mr_28
#pragma HLS INTERFACE mode=s_axilite port=mi_28
#pragma HLS INTERFACE mode=s_axilite port=mr_29
#pragma HLS INTERFACE mode=s_axilite port=mi_29
#pragma HLS INTERFACE mode=s_axilite port=mr_30
#pragma HLS INTERFACE mode=s_axilite port=mi_30
#pragma HLS INTERFACE mode=s_axilite port=mr_31
#pragma HLS INTERFACE mode=s_axilite port=mi_31
#pragma HLS INTERFACE mode=s_axilite port=mr_32
#pragma HLS INTERFACE mode=s_axilite port=mi_32
#pragma HLS INTERFACE mode=s_axilite port=mr_33
#pragma HLS INTERFACE mode=s_axilite port=mi_33
#pragma HLS INTERFACE mode=s_axilite port=mr_34
#pragma HLS INTERFACE mode=s_axilite port=mi_34
#pragma HLS INTERFACE mode=s_axilite port=mr_35
#pragma HLS INTERFACE mode=s_axilite port=mi_35


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4], auxfin1[2], auxfin2[2];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4], auxr_3[4], auxi_3[4];

  float mrxr4[4], mixr4[4], mrxi4[4], mixi4[4], auxr_4[4], auxi_4[4];
  float mrxr5[4], mixr5[4], mrxi5[4], mixi5[4], auxr_5[4], auxi_5[4];
  float mrxr6[4], mixr6[4], mrxi6[4], mixi6[4], auxr_6[4], auxi_6[4];
  float mrxr7[4], mixr7[4], mrxi7[4], mixi7[4], auxr_7[4], auxi_7[4];
  float mrxr8[4], mixr8[4], mrxi8[4], mixi8[4], auxr_8[4], auxi_8[4];
  float mrxr9[4], mixr9[4], mrxi9[4], mixi9[4], auxr_9[4], auxi_9[4];
  float mrxr10[4], mixr10[4], mrxi10[4], mixi10[4], auxr_10[4], auxi_10[4];
  float mrxr11[4], mixr11[4], mrxi11[4], mixi11[4], auxr_11[4], auxi_11[4];
  float mrxr12[4], mixr12[4], mrxi12[4], mixi12[4], auxr_12[4], auxi_12[4];
  float mrxr13[4], mixr13[4], mrxi13[4], mixi13[4], auxr_13[4], auxi_13[4];
  float mrxr14[4], mixr14[4], mrxi14[4], mixi14[4], auxr_14[4], auxi_14[4];
  float mrxr15[4], mixr15[4], mrxi15[4], mixi15[4], auxr_15[4], auxi_15[4];
  float mrxr16[4], mixr16[4], mrxi16[4], mixi16[4], auxr_16[4], auxi_16[4];
  float mrxr17[4], mixr17[4], mrxi17[4], mixi17[4], auxr_17[4], auxi_17[4];
  float mrxr18[4], mixr18[4], mrxi18[4], mixi18[4], auxr_18[4], auxi_18[4];
  float mrxr19[4], mixr19[4], mrxi19[4], mixi19[4], auxr_19[4], auxi_19[4];


  float mrxr20[4], mixr20[4], mrxi20[4], mixi20[4], auxr_20[4], auxi_20[4];
  float mrxr21[4], mixr21[4], mrxi21[4], mixi21[4], auxr_21[4], auxi_21[4];
  float mrxr22[4], mixr22[4], mrxi22[4], mixi22[4], auxr_22[4], auxi_22[4];
  float mrxr23[4], mixr23[4], mrxi23[4], mixi23[4], auxr_23[4], auxi_23[4];
  float mrxr24[4], mixr24[4], mrxi24[4], mixi24[4], auxr_24[4], auxi_24[4];
  float mrxr25[4], mixr25[4], mrxi25[4], mixi25[4], auxr_25[4], auxi_25[4];
  float mrxr26[4], mixr26[4], mrxi26[4], mixi26[4], auxr_26[4], auxi_26[4];
  float mrxr27[4], mixr27[4], mrxi27[4], mixi27[4], auxr_27[4], auxi_27[4];
  float mrxr28[4], mixr28[4], mrxi28[4], mixi28[4], auxr_28[4], auxi_28[4];
  float mrxr29[4], mixr29[4], mrxi29[4], mixi29[4], auxr_29[4], auxi_29[4];
  float mrxr30[4], mixr30[4], mrxi30[4], mixi30[4], auxr_30[4], auxi_30[4];
  float mrxr31[4], mixr31[4], mrxi31[4], mixi31[4], auxr_31[4], auxi_31[4];
  float mrxr32[4], mixr32[4], mrxi32[4], mixi32[4], auxr_32[4], auxi_32[4];
  float mrxr33[4], mixr33[4], mrxi33[4], mixi33[4], auxr_33[4], auxi_33[4];
  float mrxr34[4], mixr34[4], mrxi34[4], mixi34[4], auxr_34[4], auxi_34[4];
  float mrxr35[4], mixr35[4], mrxi35[4], mixi35[4], auxr_35[4], auxi_35[4];


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


  for(int i=0; i<2; i++){
  	  for(int j=0; j<2; j++){
  		  auxfin1[0]=(mrxr1[i]-mixi1[i])*(mrxr2[2*j]-mixi2[2*j])-(mrxi1[i]+mixr1[i])*(mrxi2[2*j]+mrxi2[2*j]);
		  auxfin1[1]=(mrxr1[i]-mixi1[i])*(mrxi2[2*j]+mrxi2[2*j])+(mrxi1[i]+mixr1[i])*(mrxr2[2*j]-mixi2[2*j]);
		  auxfin1[2]=(mrxr1[i]-mixi1[i])*(mrxr2[2*j+1]-mixi2[2*j+1])-(mrxi1[i]+mixr1[i])*(mrxi2[2*j+1]+mrxi2[2*j+1]);
		  auxfin1[3]=(mrxr1[i]-mixi1[i])*(mrxi2[2*j+1]+mrxi2[2*j+1])+(mrxi1[i]+mixr1[i])*(mrxr2[2*j+1]-mixi2[2*j+1]);
		  auxfin1[4]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[2*j]-mixi2[2*j])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[2*j]+mrxi2[2*j]);
		  auxfin1[5]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[2*j]+mrxi2[2*j])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[2*j]-mixi2[2*j]);
		  auxfin1[6]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[2*j+1]-mixi2[2*j+1])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[2*j+1]+mrxi2[2*j+1]);
		  auxfin1[7]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[2*j+1]+mrxi2[2*j+1])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[2*j+1]-mixi2[2*j+1]);


		  auxr_4[j+2*i]=(auxfin1[0])*(mrxr3[0]-mixi3[0])-(auxfin1[1])*(mrxi3[0]+mixr3[0]);
		  auxi_4[j+2*i]=(auxfin1[1])*(mrxr3[0]-mixi3[0])+(auxfin1[0])*(mrxi3[0]+mixr3[0]);

		  auxr_5[j+2*i]=(auxfin1[0])*(mrxr3[1]-mixi3[1])-(auxfin1[1])*(mrxi3[1]+mixr3[1]);
		  auxi_5[j+2*i]=(auxfin1[1])*(mrxr3[1]-mixi3[1])+(auxfin1[0])*(mrxi3[1]+mixr3[1]);

		  auxr_6[j+2*i]=(auxfin1[0])*(mrxr3[2]-mixi3[2])-(auxfin1[1])*(mrxi3[2]+mixr3[2]);
		  auxr_6[j+2*i]=(auxfin1[1])*(mrxr3[2]-mixi3[2])+(auxfin1[0])*(mrxi3[2]+mixr3[2]);

		  auxr_7[j+2*i]=(auxfin1[0])*(mrxr3[3]-mixi3[3])-(auxfin1[1])*(mrxi3[3]+mixr3[3]);
		  auxr_7[j+2*i]=(auxfin1[1])*(mrxr3[3]-mixi3[3])+(auxfin1[0])*(mrxi3[3]+mixr3[3]);

		  auxr_8[j+2*i]=(auxfin1[2])*(mrxr3[0]-mixi3[0])-(auxfin1[3])*(mrxi3[0]+mixr3[0]);
		  auxi_8[j+2*i]=(auxfin1[3])*(mrxr3[0]-mixi3[0])+(auxfin1[2])*(mrxi3[0]+mixr3[0]);

		  auxr_9[j+2*i]=(auxfin1[2])*(mrxr3[1]-mixi3[1])-(auxfin1[3])*(mrxi3[1]+mixr3[1]);
		  auxi_9[j+2*i]=(auxfin1[3])*(mrxr3[1]-mixi3[1])+(auxfin1[2])*(mrxi3[1]+mixr3[1]);

		  auxr_10[j+2*i]=(auxfin1[2])*(mrxr3[2]-mixi3[2])-(auxfin1[3])*(mrxi3[2]+mixr3[2]);
		  auxr_10[j+2*i]=(auxfin1[3])*(mrxr3[2]-mixi3[2])+(auxfin1[2])*(mrxi3[2]+mixr3[2]);

		  auxr_11[j+2*i]=(auxfin1[2])*(mrxr3[3]-mixi3[3])-(auxfin1[3])*(mrxi3[3]+mixr3[3]);
		  auxr_11[j+2*i]=(auxfin1[3])*(mrxr3[3]-mixi3[3])+(auxfin1[2])*(mrxi3[3]+mixr3[3]);


		  auxr_12[j+2*i]=(auxfin1[4])*(mrxr3[0]-mixi3[0])-(auxfin1[5])*(mrxi3[0]+mixr3[0]);
		  auxi_12[j+2*i]=(auxfin1[5])*(mrxr3[0]-mixi3[0])+(auxfin1[4])*(mrxi3[0]+mixr3[0]);

		  auxr_13[j+2*i]=(auxfin1[4])*(mrxr3[1]-mixi3[1])-(auxfin1[5])*(mrxi3[1]+mixr3[1]);
		  auxi_13[j+2*i]=(auxfin1[5])*(mrxr3[1]-mixi3[1])+(auxfin1[4])*(mrxi3[1]+mixr3[1]);

		  auxr_14[j+2*i]=(auxfin1[4])*(mrxr3[2]-mixi3[2])-(auxfin1[5])*(mrxi3[2]+mixr3[2]);
		  auxr_14[j+2*i]=(auxfin1[5])*(mrxr3[2]-mixi3[2])+(auxfin1[4])*(mrxi3[2]+mixr3[2]);

		  auxr_15[j+2*i]=(auxfin1[4])*(mrxr3[3]-mixi3[3])-(auxfin1[5])*(mrxi3[3]+mixr3[3]);
		  auxr_15[j+2*i]=(auxfin1[5])*(mrxr3[3]-mixi3[3])+(auxfin1[4])*(mrxi3[3]+mixr3[3]);

		  auxr_16[j+2*i]=(auxfin1[6])*(mrxr3[0]-mixi3[0])-(auxfin1[7])*(mrxi3[0]+mixr3[0]);
		  auxi_16[j+2*i]=(auxfin1[7])*(mrxr3[0]-mixi3[0])+(auxfin1[6])*(mrxi3[0]+mixr3[0]);

		  auxr_17[j+2*i]=(auxfin1[6])*(mrxr3[1]-mixi3[1])-(auxfin1[7])*(mrxi3[1]+mixr3[1]);
		  auxi_17[j+2*i]=(auxfin1[7])*(mrxr3[1]-mixi3[1])+(auxfin1[6])*(mrxi3[1]+mixr3[1]);

		  auxr_18[j+2*i]=(auxfin1[6])*(mrxr3[2]-mixi3[2])-(auxfin1[7])*(mrxi3[2]+mixr3[2]);
		  auxr_18[j+2*i]=(auxfin1[7])*(mrxr3[2]-mixi3[2])+(auxfin1[6])*(mrxi3[2]+mixr3[2]);

		  auxr_19[j+2*i]=(auxfin1[6])*(mrxr3[3]-mixi3[3])-(auxfin1[7])*(mrxi3[3]+mixr3[3]);
		  auxr_19[j+2*i]=(auxfin1[7])*(mrxr3[3]-mixi3[3])+(auxfin1[6])*(mrxi3[3]+mixr3[3]);


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
  for(int i = 0; i < 4; i++) {
          mrxr7[i]= 0;
          mrxi7[i]= 0;
          mixr7[i]= 0;
          mixi7[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr7[i] += mr_7[i][k] * auxr_7[k];
            mrxi7[i] += mr_7[i][k] * auxi_7[k];
            mixr7[i] += mi_7[i][k] * auxr_7[k];
            mixi7[i] += mi_7[i][k] * auxi_7[k];
          }
        }
  for(int i = 0; i < 4; i++) {
          mrxr8[i]= 0;
          mrxi8[i]= 0;
          mixr8[i]= 0;
          mixi8[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr8[i] += mr_8[i][k] * auxr_8[k];
            mrxi8[i] += mr_8[i][k] * auxi_8[k];
            mixr8[i] += mi_8[i][k] * auxr_8[k];
            mixi8[i] += mi_8[i][k] * auxi_8[k];
          }
        }
  for(int i = 0; i < 4; i++) {
          mrxr9[i]= 0;
          mrxi9[i]= 0;
          mixr9[i]= 0;
          mixi9[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr9[i] += mr_9[i][k] * auxr_9[k];
            mrxi9[i] += mr_9[i][k] * auxi_9[k];
            mixr9[i] += mi_9[i][k] * auxr_9[k];
            mixi9[i] += mi_9[i][k] * auxi_9[k];
          }
        }
  for(int i = 0; i < 4; i++) {
          mrxr10[i]= 0;
          mrxi10[i]= 0;
          mixr10[i]= 0;
          mixi10[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr10[i] += mr_10[i][k] * auxr_10[k];
            mrxi10[i] += mr_10[i][k] * auxi_10[k];
            mixr10[i] += mi_10[i][k] * auxr_10[k];
            mixi10[i] += mi_10[i][k] * auxi_10[k];
          }
        }
  for(int i = 0; i < 4; i++) {
          mrxr11[i]= 0;
          mrxi11[i]= 0;
          mixr11[i]= 0;
          mixi11[i]= 0;
          for(int k = 0; k < 4; k++) {
            mrxr11[i] += mr_11[i][k] * auxr_11[k];
            mrxi11[i] += mr_11[i][k] * auxi_11[k];
            mixr11[i] += mi_11[i][k] * auxr_11[k];
            mixi11[i] += mi_11[i][k] * auxi_11[k];
          }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr12[i]= 0;
		  mrxi12[i]= 0;
		  mixr12[i]= 0;
		  mixi12[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr12[i] += mr_12[i][k] * auxr_12[k];
			mrxi12[i] += mr_12[i][k] * auxi_12[k];
			mixr12[i] += mi_12[i][k] * auxr_12[k];
			mixi12[i] += mi_12[i][k] * auxi_12[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr13[i]= 0;
		  mrxi13[i]= 0;
		  mixr13[i]= 0;
		  mixi13[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr13[i] += mr_13[i][k] * auxr_13[k];
			mrxi13[i] += mr_13[i][k] * auxi_13[k];
			mixr13[i] += mi_13[i][k] * auxr_13[k];
			mixi13[i] += mi_13[i][k] * auxi_13[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr14[i]= 0;
		  mrxi14[i]= 0;
		  mixr14[i]= 0;
		  mixi14[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr14[i] += mr_14[i][k] * auxr_14[k];
			mrxi14[i] += mr_14[i][k] * auxi_14[k];
			mixr14[i] += mi_14[i][k] * auxr_14[k];
			mixi14[i] += mi_14[i][k] * auxi_14[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr15[i]= 0;
		  mrxi15[i]= 0;
		  mixr15[i]= 0;
		  mixi15[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr15[i] += mr_15[i][k] * auxr_15[k];
			mrxi15[i] += mr_15[i][k] * auxi_15[k];
			mixr15[i] += mi_15[i][k] * auxr_15[k];
			mixi15[i] += mi_15[i][k] * auxi_15[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr16[i]= 0;
		  mrxi16[i]= 0;
		  mixr16[i]= 0;
		  mixi16[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr16[i] += mr_16[i][k] * auxr_16[k];
			mrxi16[i] += mr_16[i][k] * auxi_16[k];
			mixr16[i] += mi_16[i][k] * auxr_16[k];
			mixi16[i] += mi_16[i][k] * auxi_16[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr17[i]= 0;
		  mrxi17[i]= 0;
		  mixr17[i]= 0;
		  mixi17[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr17[i] += mr_17[i][k] * auxr_17[k];
			mrxi17[i] += mr_17[i][k] * auxi_17[k];
			mixr17[i] += mi_17[i][k] * auxr_17[k];
			mixi17[i] += mi_17[i][k] * auxi_17[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr18[i]= 0;
		  mrxi18[i]= 0;
		  mixr18[i]= 0;
		  mixi18[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr18[i] += mr_18[i][k] * auxr_18[k];
			mrxi18[i] += mr_18[i][k] * auxi_18[k];
			mixr18[i] += mi_18[i][k] * auxr_18[k];
			mixi18[i] += mi_18[i][k] * auxi_18[k];
		  }
  }
  for(int i = 0; i < 4; i++) {
		  mrxr19[i]= 0;
		  mrxi19[i]= 0;
		  mixr19[i]= 0;
		  mixi19[i]= 0;
		  for(int k = 0; k < 4; k++) {
			mrxr19[i] += mr_19[i][k] * auxr_19[k];
			mrxi19[i] += mr_19[i][k] * auxi_19[k];
			mixr19[i] += mi_19[i][k] * auxr_19[k];
			mixi19[i] += mi_19[i][k] * auxi_19[k];
		  }
  }
	auxr_20[0]=mrxr4[0]-mixi4[0];
	auxi_20[0]=mrxi4[0]+mixr4[0];
	auxr_20[1]=mrxr6[0]-mixi6[0];
	auxi_20[1]=mrxi6[0]+mixr6[0];
	auxr_20[2]=mrxr8[0]-mixi8[0];
	auxi_20[2]=mrxi8[0]+mixr8[0];
	auxr_20[3]=mrxr10[0]-mixi10[0];
	auxi_20[3]=mrxi10[0]+mixr10[0];

	auxr_21[0]=mrxr5[0]-mixi5[0];
	auxi_21[0]=mrxi5[0]+mixr5[0];
	auxr_21[1]=mrxr7[0]-mixi7[0];
	auxi_21[1]=mrxi7[0]+mixr7[0];
	auxr_21[2]=mrxr9[0]-mixi9[0];
	auxi_21[2]=mrxi9[0]+mixr9[0];
	auxr_21[3]=mrxr11[0]-mixi11[0];
	auxi_21[3]=mrxi11[0]+mixr11[0];

	auxr_22[0]=mrxr4[1]-mixi4[1];
	auxi_22[0]=mrxi4[1]+mixr4[1];
	auxr_22[1]=mrxr6[1]-mixi6[1];
	auxi_22[1]=mrxi6[1]+mixr6[1];
	auxr_22[2]=mrxr8[1]-mixi8[1];
	auxi_22[2]=mrxi8[1]+mixr8[1];
	auxr_22[3]=mrxr10[1]-mixi10[1];
	auxi_22[3]=mrxi10[1]+mixr10[1];

	auxr_23[0]=mrxr5[1]-mixi5[1];
	auxi_23[0]=mrxi5[1]+mixr5[1];
	auxr_23[1]=mrxr7[1]-mixi7[1];
	auxi_23[1]=mrxi7[1]+mixr7[1];
	auxr_23[2]=mrxr9[1]-mixi9[1];
	auxi_23[2]=mrxi9[1]+mixr9[1];
	auxr_23[3]=mrxr11[1]-mixi11[1];
	auxi_23[3]=mrxi11[1]+mixr11[1];

	auxr_24[0]=mrxr4[2]-mixi4[2];
	auxi_24[0]=mrxi4[2]+mixr4[2];
	auxr_24[1]=mrxr6[2]-mixi6[2];
	auxi_24[1]=mrxi6[2]+mixr6[2];
	auxr_24[2]=mrxr8[2]-mixi8[2];
	auxi_24[2]=mrxi8[2]+mixr8[2];
	auxr_24[3]=mrxr10[2]-mixi10[2];
	auxi_24[3]=mrxi10[2]+mixr10[2];

	auxr_25[0]=mrxr5[2]-mixi5[3];
	auxi_25[0]=mrxi5[2]+mixr5[3];
	auxr_25[1]=mrxr7[2]-mixi7[3];
	auxi_25[1]=mrxi7[2]+mixr7[3];
	auxr_25[2]=mrxr9[2]-mixi9[3];
	auxi_25[2]=mrxi9[2]+mixr9[3];
	auxr_25[3]=mrxr11[2]-mixi11[2];
	auxi_25[3]=mrxi11[2]+mixr11[2];

	auxr_26[0]=mrxr4[3]-mixi4[3];
	auxi_26[0]=mrxi4[3]+mixr4[3];
	auxr_26[1]=mrxr6[3]-mixi6[3];
	auxi_26[1]=mrxi6[3]+mixr6[3];
	auxr_26[2]=mrxr8[3]-mixi8[3];
	auxi_26[2]=mrxi8[3]+mixr8[3];
	auxr_26[3]=mrxr10[3]-mixi10[3];
	auxi_26[3]=mrxi10[3]+mixr10[3];

	auxr_27[0]=mrxr5[3]-mixi5[3];
	auxi_27[0]=mrxi5[3]+mixr5[3];
	auxr_27[1]=mrxr7[3]-mixi7[3];
	auxi_27[1]=mrxi7[3]+mixr7[3];
	auxr_27[2]=mrxr9[3]-mixi9[3];
	auxi_27[2]=mrxi9[3]+mixr9[3];
	auxr_27[3]=mrxr11[3]-mixi11[3];
	auxi_27[3]=mrxi11[3]+mixr11[3];

	auxr_28[0]=mrxr12[0]-mixi12[0];
	auxi_28[0]=mrxi12[0]+mixr12[0];
	auxr_28[1]=mrxr14[0]-mixi14[0];
	auxi_28[1]=mrxi14[0]+mixr14[0];
	auxr_28[2]=mrxr16[0]-mixi16[0];
	auxi_28[2]=mrxi16[0]+mixr16[0];
	auxr_28[3]=mrxr18[0]-mixi18[0];
	auxi_28[3]=mrxi18[0]+mixr18[0];

	auxr_29[0]=mrxr13[0]-mixi13[0];
	auxi_29[0]=mrxi13[0]+mixr13[0];
	auxr_29[1]=mrxr15[0]-mixi15[0];
	auxi_29[1]=mrxi15[0]+mixr15[0];
	auxr_29[2]=mrxr17[0]-mixi17[0];
	auxi_29[2]=mrxi17[0]+mixr17[0];
	auxr_29[3]=mrxr19[0]-mixi19[0];
	auxi_29[3]=mrxi19[0]+mixr19[0];

	auxr_30[0]=mrxr12[1]-mixi12[1];
	auxi_30[0]=mrxi12[1]+mixr12[1];
	auxr_30[1]=mrxr14[1]-mixi14[1];
	auxi_30[1]=mrxi14[1]+mixr14[1];
	auxr_30[2]=mrxr16[1]-mixi16[1];
	auxi_30[2]=mrxi16[1]+mixr16[1];
	auxr_30[3]=mrxr18[1]-mixi18[1];
	auxi_30[3]=mrxi18[1]+mixr18[1];

	auxr_31[0]=mrxr13[1]-mixi13[1];
	auxi_31[0]=mrxi13[1]+mixr13[1];
	auxr_31[1]=mrxr15[1]-mixi15[1];
	auxi_31[1]=mrxi15[1]+mixr15[1];
	auxr_31[2]=mrxr17[1]-mixi17[1];
	auxi_31[2]=mrxi17[1]+mixr17[1];
	auxr_31[3]=mrxr19[1]-mixi19[1];
	auxi_31[3]=mrxi19[1]+mixr19[1];

	auxr_32[0]=mrxr12[2]-mixi12[2];
	auxi_32[0]=mrxi12[2]+mixr12[2];
	auxr_32[1]=mrxr14[2]-mixi14[2];
	auxi_32[1]=mrxi14[2]+mixr14[2];
	auxr_32[2]=mrxr16[2]-mixi16[2];
	auxi_32[2]=mrxi16[2]+mixr16[2];
	auxr_32[3]=mrxr18[2]-mixi18[2];
	auxi_32[3]=mrxi18[2]+mixr18[2];

	auxr_33[0]=mrxr13[2]-mixi13[3];
	auxi_33[0]=mrxi13[2]+mixr13[3];
	auxr_33[1]=mrxr15[2]-mixi15[3];
	auxi_33[1]=mrxi15[2]+mixr15[3];
	auxr_33[2]=mrxr17[2]-mixi17[3];
	auxi_33[2]=mrxi17[2]+mixr17[3];
	auxr_33[3]=mrxr19[2]-mixi19[2];
	auxi_33[3]=mrxi19[2]+mixr19[2];

	auxr_34[0]=mrxr12[3]-mixi12[3];
	auxi_34[0]=mrxi12[3]+mixr12[3];
	auxr_34[1]=mrxr14[3]-mixi14[3];
	auxi_34[1]=mrxi14[3]+mixr14[3];
	auxr_34[2]=mrxr16[3]-mixi16[3];
	auxi_34[2]=mrxi16[3]+mixr16[3];
	auxr_34[3]=mrxr18[3]-mixi18[3];
	auxi_34[3]=mrxi18[3]+mixr18[3];

	auxr_35[0]=mrxr13[3]-mixi13[3];
	auxi_35[0]=mrxi13[3]+mixr13[3];
	auxr_35[1]=mrxr15[3]-mixi15[3];
	auxi_35[1]=mrxi15[3]+mixr15[3];
	auxr_35[2]=mrxr17[3]-mixi17[3];
	auxi_35[2]=mrxi17[3]+mixr17[3];
	auxr_35[3]=mrxr19[3]-mixi19[3];
	auxi_35[3]=mrxi19[3]+mixr19[3];

	for(int i = 0; i < 4; i++) {
	          mrxr20[i]= 0;
	          mrxi20[i]= 0;
	          mixr20[i]= 0;
	          mixi20[i]= 0;
	          for(int k = 0; k < 4; k++) {
	            mrxr20[i] += mr_20[i][k] * auxr_20[k];
	            mrxi20[i] += mr_20[i][k] * auxi_20[k];
	            mixr20[i] += mi_20[i][k] * auxr_20[k];
	            mixi20[i] += mi_20[i][k] * auxi_20[k];
	          }
	        }
	for(int i = 0; i < 4; i++) {
			  mrxr21[i]= 0;
			  mrxi21[i]= 0;
			  mixr21[i]= 0;
			  mixi21[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr21[i] += mr_21[i][k] * auxr_21[k];
				mrxi21[i] += mr_21[i][k] * auxi_21[k];
				mixr21[i] += mi_21[i][k] * auxr_21[k];
				mixi21[i] += mi_21[i][k] * auxi_21[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr22[i]= 0;
			  mrxi22[i]= 0;
			  mixr22[i]= 0;
			  mixi22[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr22[i] += mr_22[i][k] * auxr_22[k];
				mrxi22[i] += mr_22[i][k] * auxi_22[k];
				mixr22[i] += mi_22[i][k] * auxr_22[k];
				mixi22[i] += mi_22[i][k] * auxi_22[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr23[i]= 0;
			  mrxi23[i]= 0;
			  mixr23[i]= 0;
			  mixi23[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr23[i] += mr_23[i][k] * auxr_23[k];
				mrxi23[i] += mr_23[i][k] * auxi_23[k];
				mixr23[i] += mi_23[i][k] * auxr_23[k];
				mixi23[i] += mi_23[i][k] * auxi_23[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr24[i]= 0;
			  mrxi24[i]= 0;
			  mixr24[i]= 0;
			  mixi24[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr24[i] += mr_24[i][k] * auxr_24[k];
				mrxi24[i] += mr_24[i][k] * auxi_24[k];
				mixr24[i] += mi_24[i][k] * auxr_24[k];
				mixi24[i] += mi_24[i][k] * auxi_24[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr25[i]= 0;
			  mrxi25[i]= 0;
			  mixr25[i]= 0;
			  mixi25[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr25[i] += mr_25[i][k] * auxr_25[k];
				mrxi25[i] += mr_25[i][k] * auxi_25[k];
				mixr25[i] += mi_25[i][k] * auxr_25[k];
				mixi25[i] += mi_25[i][k] * auxi_25[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
				  mrxr26[i]= 0;
				  mrxi26[i]= 0;
				  mixr26[i]= 0;
				  mixi26[i]= 0;
				  for(int k = 0; k < 4; k++) {
					mrxr26[i] += mr_26[i][k] * auxr_26[k];
					mrxi26[i] += mr_26[i][k] * auxi_26[k];
					mixr26[i] += mi_26[i][k] * auxr_26[k];
					mixi26[i] += mi_26[i][k] * auxi_26[k];
				  }
				}
	for(int i = 0; i < 4; i++) {
			  mrxr27[i]= 0;
			  mrxi27[i]= 0;
			  mixr27[i]= 0;
			  mixi27[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr27[i] += mr_27[i][k] * auxr_27[k];
				mrxi27[i] += mr_27[i][k] * auxi_27[k];
				mixr27[i] += mi_27[i][k] * auxr_27[k];
				mixi27[i] += mi_27[i][k] * auxi_27[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr28[i]= 0;
			  mrxi28[i]= 0;
			  mixr28[i]= 0;
			  mixi28[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr28[i] += mr_28[i][k] * auxr_28[k];
				mrxi28[i] += mr_28[i][k] * auxi_28[k];
				mixr28[i] += mi_28[i][k] * auxr_28[k];
				mixi28[i] += mi_28[i][k] * auxi_28[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr29[i]= 0;
			  mrxi29[i]= 0;
			  mixr29[i]= 0;
			  mixi29[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr29[i] += mr_29[i][k] * auxr_29[k];
				mrxi29[i] += mr_29[i][k] * auxi_29[k];
				mixr29[i] += mi_29[i][k] * auxr_29[k];
				mixi29[i] += mi_29[i][k] * auxi_29[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr30[i]= 0;
			  mrxi30[i]= 0;
			  mixr30[i]= 0;
			  mixi30[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr30[i] += mr_30[i][k] * auxr_30[k];
				mrxi30[i] += mr_30[i][k] * auxi_30[k];
				mixr30[i] += mi_30[i][k] * auxr_30[k];
				mixi30[i] += mi_30[i][k] * auxi_30[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr31[i]= 0;
			  mrxi31[i]= 0;
			  mixr31[i]= 0;
			  mixi31[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr31[i] += mr_31[i][k] * auxr_31[k];
				mrxi31[i] += mr_31[i][k] * auxi_31[k];
				mixr31[i] += mi_31[i][k] * auxr_31[k];
				mixi31[i] += mi_31[i][k] * auxi_31[k];
			  }
				}
	for(int i = 0; i < 4; i++) {
			  mrxr32[i]= 0;
			  mrxi32[i]= 0;
			  mixr32[i]= 0;
			  mixi32[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr32[i] += mr_32[i][k] * auxr_32[k];
				mrxi32[i] += mr_32[i][k] * auxi_32[k];
				mixr32[i] += mi_32[i][k] * auxr_32[k];
				mixi32[i] += mi_32[i][k] * auxi_32[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr33[i]= 0;
			  mrxi33[i]= 0;
			  mixr33[i]= 0;
			  mixi33[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr33[i] += mr_33[i][k] * auxr_33[k];
				mrxi33[i] += mr_33[i][k] * auxi_33[k];
				mixr33[i] += mi_33[i][k] * auxr_33[k];
				mixi33[i] += mi_33[i][k] * auxi_33[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr34[i]= 0;
			  mrxi34[i]= 0;
			  mixr34[i]= 0;
			  mixi34[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr34[i] += mr_34[i][k] * auxr_34[k];
				mrxi34[i] += mr_34[i][k] * auxi_34[k];
				mixr34[i] += mi_34[i][k] * auxr_34[k];
				mixi34[i] += mi_34[i][k] * auxi_34[k];
			  }
			}

	for(int i = 0; i < 4; i++) {
			  mrxr35[i]= 0;
			  mrxi35[i]= 0;
			  mixr35[i]= 0;
			  mixi35[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr35[i] += mr_35[i][k] * auxr_35[k];
				mrxi35[i] += mr_35[i][k] * auxi_35[k];
				mixr35[i] += mi_35[i][k] * auxr_35[k];
				mixi35[i] += mi_35[i][k] * auxi_35[k];
			  }
			}

	for(int i=0; i<4; i++){
		outr[8*i]=mrxr20[i]-mixi20[i];
		outi[8*i]=mrxi20[i]+mixr20[i];
		outr[8*i+1]=mrxr21[i]-mixi21[i];
		outi[8*i+1]=mrxi21[i]+mixr21[i];
		outr[8*i+2]=mrxr22[i]-mixi22[i];
		outi[8*i+2]=mrxi22[i]+mixr22[i];
		outr[8*i+3]=mrxr23[i]-mixi23[i];
		outi[8*i+3]=mrxi23[i]+mixr23[i];
		outr[8*i+4]=mrxr24[i]-mixi24[i];
		outi[8*i+4]=mrxi24[i]+mixr24[i];
		outr[8*i+5]=mrxr25[i]-mixi25[i];
		outi[8*i+5]=mrxi25[i]+mixr25[i];
		outr[8*i+6]=mrxr26[i]-mixi26[i];
		outi[8*i+6]=mrxi26[i]+mixr26[i];
		outr[8*i+7]=mrxr27[i]-mixi27[i];
		outi[8*i+7]=mrxi27[i]+mixr27[i];

		outr[8*i+32]=mrxr28[i]-mixi28[i];
		outi[8*i+32]=mrxi28[i]+mixr28[i];
		outr[8*i+1+32]=mrxr29[i]-mixi29[i];
		outi[8*i+1+32]=mrxi29[i]+mixr29[i];
		outr[8*i+2+32]=mrxr30[i]-mixi30[i];
		outi[8*i+2+32]=mrxi30[i]+mixr30[i];
		outr[8*i+3+32]=mrxr31[i]-mixi31[i];
		outi[8*i+3+32]=mrxi31[i]+mixr31[i];
		outr[8*i+4+32]=mrxr32[i]-mixi32[i];
		outi[8*i+4+32]=mrxi32[i]+mixr32[i];
		outr[8*i+5+32]=mrxr33[i]-mixi33[i];
		outi[8*i+5+32]=mrxi33[i]+mixr33[i];
		outr[8*i+6+32]=mrxr34[i]-mixi34[i];
		outi[8*i+6+32]=mrxi34[i]+mixr34[i];
		outr[8*i+7+32]=mrxr35[i]-mixi35[i];
		outi[8*i+7+32]=mrxi35[i]+mixr35[i];

	}

}



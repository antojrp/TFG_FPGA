#include <math.h>
#include <iostream>
using namespace std;

void tree_n5d4(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
		float inr_5[2], float ini_5[2], float outr[32], float outi[32],
		float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4],float mr_5[4][4], float mi_5[4][4],
		float mr_6[4][4], float mi_6[4][4], float mr_7[4][4], float mi_7[4][4], float mr_8[4][4], float mi_8[4][4],float mr_9[4][4], float mi_9[4][4], float mr_10[4][4], float mi_10[4][4],
		float mr_11[4][4], float mi_11[4][4], float mr_12[4][4], float mi_12[4][4], float mr_13[4][4], float mi_13[4][4], float mr_14[4][4], float mi_14[4][4],float mr_15[4][4], float mi_15[4][4],
		float mr_16[4][4], float mi_16[4][4], float mr_17[4][4], float mi_17[4][4], float mr_18[4][4], float mi_18[4][4], float mr_19[4][4], float mi_19[4][4], float mr_20[4][4], float mi_20[4][4],
		float mr_21[4][4], float mi_21[4][4], float mr_22[4][4], float mi_22[4][4], float mr_23[4][4], float mi_23[4][4], float mr_24[4][4], float mi_24[4][4], float mr_25[4][4], float mi_25[4][4],
		float mr_26[4][4], float mi_26[4][4], float mr_27[4][4], float mi_27[4][4], float mr_28[4][4], float mi_28[4][4], float mr_29[4][4], float mi_29[4][4], float mr_30[4][4], float mi_30[4][4],
		float mr_31[4][4], float mi_31[4][4], float mr_32[4][4], float mi_32[4][4], float mr_33[4][4], float mi_33[4][4], float mr_34[4][4], float mi_34[4][4], float mr_35[4][4], float mi_35[4][4],
		float mr_36[4][4], float mi_36[4][4], float mr_37[4][4], float mi_37[4][4], float mr_38[4][4], float mi_38[4][4], float mr_39[4][4], float mi_39[4][4], float mr_40[4][4], float mi_40[4][4],
		float mr_41[4][4], float mi_41[4][4], float mr_42[4][4], float mi_42[4][4], float mr_43[4][4], float mi_43[4][4], float mr_44[4][4], float mi_44[4][4], float mr_45[4][4], float mi_45[4][4],
		float mr_46[4][4], float mi_46[4][4], float mr_47[4][4], float mi_47[4][4], float mr_48[4][4], float mi_48[4][4], float mr_49[4][4], float mi_49[4][4], float mr_50[4][4], float mi_50[4][4])
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
#pragma HLS INTERFACE mode=s_axilite port=mr_36
#pragma HLS INTERFACE mode=s_axilite port=mi_36
#pragma HLS INTERFACE mode=s_axilite port=mr_37
#pragma HLS INTERFACE mode=s_axilite port=mi_37
#pragma HLS INTERFACE mode=s_axilite port=mr_38
#pragma HLS INTERFACE mode=s_axilite port=mi_38
#pragma HLS INTERFACE mode=s_axilite port=mr_39
#pragma HLS INTERFACE mode=s_axilite port=mi_39
#pragma HLS INTERFACE mode=s_axilite port=mr_40
#pragma HLS INTERFACE mode=s_axilite port=mi_40
#pragma HLS INTERFACE mode=s_axilite port=mr_41
#pragma HLS INTERFACE mode=s_axilite port=mi_41
#pragma HLS INTERFACE mode=s_axilite port=mr_42
#pragma HLS INTERFACE mode=s_axilite port=mi_42

#pragma HLS INTERFACE mode=s_axilite port=mr_43
#pragma HLS INTERFACE mode=s_axilite port=mi_43
#pragma HLS INTERFACE mode=s_axilite port=mr_44
#pragma HLS INTERFACE mode=s_axilite port=mi_44
#pragma HLS INTERFACE mode=s_axilite port=mr_45
#pragma HLS INTERFACE mode=s_axilite port=mi_45
#pragma HLS INTERFACE mode=s_axilite port=mr_46
#pragma HLS INTERFACE mode=s_axilite port=mi_46
#pragma HLS INTERFACE mode=s_axilite port=mr_47
#pragma HLS INTERFACE mode=s_axilite port=mi_47
#pragma HLS INTERFACE mode=s_axilite port=mr_48
#pragma HLS INTERFACE mode=s_axilite port=mi_48
#pragma HLS INTERFACE mode=s_axilite port=mr_49
#pragma HLS INTERFACE mode=s_axilite port=mi_49
#pragma HLS INTERFACE mode=s_axilite port=mr_50
#pragma HLS INTERFACE mode=s_axilite port=mi_50


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4],auxfin[8];

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
  float mrxr36[4], mixr36[4], mrxi36[4], mixi36[4], auxr_36[4], auxi_36[4];
  float mrxr37[4], mixr37[4], mrxi37[4], mixi37[4], auxr_37[4], auxi_37[4];
  float mrxr38[4], mixr38[4], mrxi38[4], mixi38[4], auxr_38[4], auxi_38[4];
  float mrxr39[4], mixr39[4], mrxi39[4], mixi39[4], auxr_39[4], auxi_39[4];
  float mrxr40[4], mixr40[4], mrxi40[4], mixi40[4], auxr_40[4], auxi_40[4];
  float mrxr41[4], mixr41[4], mrxi41[4], mixi41[4], auxr_41[4], auxi_41[4];
  float mrxr42[4], mixr42[4], mrxi42[4], mixi42[4], auxr_42[4], auxi_42[4];

  float mrxr43[4], mixr43[4], mrxi43[4], mixi43[4], auxr_43[4], auxi_43[4];
  float mrxr44[4], mixr44[4], mrxi44[4], mixi44[4], auxr_44[4], auxi_44[4];
  float mrxr45[4], mixr45[4], mrxi45[4], mixi45[4], auxr_45[4], auxi_45[4];
  float mrxr46[4], mixr46[4], mrxi46[4], mixi46[4], auxr_46[4], auxi_46[4];
  float mrxr47[4], mixr47[4], mrxi47[4], mixi47[4], auxr_47[4], auxi_47[4];
  float mrxr48[4], mixr48[4], mrxi48[4], mixi48[4], auxr_48[4], auxi_48[4];
  float mrxr49[4], mixr49[4], mrxi49[4], mixi49[4], auxr_49[4], auxi_49[4];
  float mrxr50[4], mixr50[4], mrxi50[4], mixi50[4], auxr_50[4], auxi_50[4];
		




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
  	  for(int j=0; j<2; j++){
  		  auxfin[0]=(mrxr1[i]-mixi1[i])*(mrxr2[2*j]-mixi2[2*j])-(mrxi1[i]+mixr1[i])*(mrxi2[2*j]+mrxi2[2*j]);
		  auxfin[1]=(mrxr1[i]-mixi1[i])*(mrxi2[2*j]+mrxi2[2*j])+(mrxi1[i]+mixr1[i])*(mrxr2[2*j]-mixi2[2*j]);
  		  auxfin[2]=(mrxr1[i]-mixi1[i])*(mrxr2[2*j+1]-mixi2[2*j+1])-(mrxi1[i]+mixr1[i])*(mrxi2[2*j+1]+mrxi2[2*j+1]);
		  auxfin[3]=(mrxr1[i]-mixi1[i])*(mrxi2[2*j+1]+mrxi2[2*j+1])+(mrxi1[i]+mixr1[i])*(mrxr2[2*j+1]-mixi2[2*j+1]);

  		  auxfin[4]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[2*j]-mixi2[2*j])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[2*j]+mrxi2[2*j]);
		  auxfin[5]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[2*j]+mrxi2[2*j])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[2*j]-mixi2[2*j]);
  		  auxfin[6]=(mrxr1[i+2]-mixi1[i+2])*(mrxr2[2*j+1]-mixi2[2*j+1])-(mrxi1[i+2]+mixr1[i+2])*(mrxi2[2*j+1]+mrxi2[2*j+1]);
		  auxfin[7]=(mrxr1[i+2]-mixi1[i+2])*(mrxi2[2*j+1]+mrxi2[2*j+1])+(mrxi1[i+2]+mixr1[i+2])*(mrxr2[2*j+1]-mixi2[2*j+1]);

		  auxr_3[j+2*i]=(auxfin[0])*inr_5[0]-(auxfin[1])*ini_5[0];
		  auxi_3[j+2*i]=(auxfin[1])*inr_5[0]+(auxfin[0])*ini_5[0];
		  auxr_4[j+2*i]=(auxfin[0])*inr_5[1]-(auxfin[1])*ini_5[1];
		  auxi_4[j+2*i]=(auxfin[1])*inr_5[1]+(auxfin[0])*ini_5[1];

		  auxr_5[j+2*i]=(auxfin[2])*inr_5[0]-(auxfin[3])*ini_5[0];
		  auxi_5[j+2*i]=(auxfin[3])*inr_5[0]+(auxfin[2])*ini_5[0];
		  auxr_6[j+2*i]=(auxfin[2])*inr_5[1]-(auxfin[3])*ini_5[1];
          auxi_6[j+2*i]=(auxfin[3])*inr_5[1]+(auxfin[2])*ini_5[1];

          auxr_7[j+2*i]=(auxfin[4])*inr_5[0]-(auxfin[5])*ini_5[0];
          auxi_7[j+2*i]=(auxfin[5])*inr_5[0]+(auxfin[4])*ini_5[0];
          auxr_8[j+2*i]=(auxfin[4])*inr_5[1]-(auxfin[5])*ini_5[1];
          auxi_8[j+2*i]=(auxfin[5])*inr_5[1]+(auxfin[4])*ini_5[1];

          auxr_9[j+2*i]=(auxfin[6])*inr_5[0]-(auxfin[7])*ini_5[0];
          auxi_9[j+2*i]=(auxfin[7])*inr_5[0]+(auxfin[6])*ini_5[0];
          auxr_10[j+2*i]=(auxfin[6])*inr_5[1]-(auxfin[7])*ini_5[1];
          auxi_10[j+2*i]=(auxfin[7])*inr_5[1]+(auxfin[6])*ini_5[1];

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

  auxr_11[0]=mrxr3[0]-mixi3[0];
  auxi_11[0]=mrxi3[0]+mixr3[0];
  auxr_11[1]=mrxr4[0]-mixi4[0];
  auxi_11[1]=mrxi4[0]+mixr4[0];
  auxr_11[2]=mrxr5[0]-mixi5[0];
  auxi_11[2]=mrxi5[0]+mixr5[0];
  auxr_11[3]=mrxr6[0]-mixi6[0];
  auxi_11[3]=mrxi6[0]+mixr6[0];

  auxr_12[0]=mrxr3[1]-mixi3[1];
  auxi_12[0]=mrxi3[1]+mixr3[1];
  auxr_12[1]=mrxr4[1]-mixi4[1];
  auxi_12[1]=mrxi4[1]+mixr4[1];
  auxr_12[2]=mrxr5[1]-mixi5[1];
  auxi_12[2]=mrxi5[1]+mixr5[1];
  auxr_12[3]=mrxr6[1]-mixi6[1];
  auxi_12[3]=mrxi6[1]+mixr6[1];

  auxr_13[0]=mrxr3[2]-mixi3[2];
  auxi_13[0]=mrxi3[2]+mixr3[2];
  auxr_13[1]=mrxr4[2]-mixi4[2];
  auxi_13[1]=mrxi4[2]+mixr4[2];
  auxr_13[2]=mrxr5[2]-mixi5[2];
  auxi_13[2]=mrxi5[2]+mixr5[2];
  auxr_13[3]=mrxr6[2]-mixi6[2];
  auxi_13[3]=mrxi6[2]+mixr6[2];

  auxr_14[0]=mrxr3[3]-mixi3[3];
  auxi_14[0]=mrxi3[3]+mixr3[3];
  auxr_14[1]=mrxr4[3]-mixi4[3];
  auxi_14[1]=mrxi4[3]+mixr4[3];
  auxr_14[2]=mrxr5[3]-mixi5[3];
  auxi_14[2]=mrxi5[3]+mixr5[3];
  auxr_14[3]=mrxr6[3]-mixi6[3];
  auxi_14[3]=mrxi6[3]+mixr6[3];

  auxr_15[0]=mrxr7[0]-mixi7[0];
  auxi_15[0]=mrxi7[0]+mixr7[0];
  auxr_15[1]=mrxr8[0]-mixi8[0];
  auxi_15[1]=mrxi8[0]+mixr8[0];
  auxr_15[2]=mrxr9[0]-mixi9[0];
  auxi_15[2]=mrxi9[0]+mixr9[0];
  auxr_15[3]=mrxr10[0]-mixi10[0];
  auxi_15[3]=mrxi10[0]+mixr10[0];

  auxr_16[0]=mrxr7[1]-mixi7[1];
  auxi_16[0]=mrxi7[1]+mixr7[1];
  auxr_16[1]=mrxr8[1]-mixi8[1];
  auxi_16[1]=mrxi8[1]+mixr8[1];
  auxr_16[2]=mrxr9[1]-mixi9[1];
  auxi_16[2]=mrxi9[1]+mixr9[1];
  auxr_16[3]=mrxr10[1]-mixi10[1];
  auxi_16[3]=mrxi10[1]+mixr10[1];

  auxr_17[0]=mrxr7[2]-mixi7[2];
  auxi_17[0]=mrxi7[2]+mixr7[2];
  auxr_17[1]=mrxr8[2]-mixi8[2];
  auxi_17[1]=mrxi8[2]+mixr8[2];
  auxr_17[2]=mrxr9[2]-mixi9[2];
  auxi_17[2]=mrxi9[2]+mixr9[2];
  auxr_17[3]=mrxr10[2]-mixi10[2];
  auxi_17[3]=mrxi10[2]+mixr10[2];

  auxr_18[0]=mrxr7[3]-mixi7[3];
  auxi_18[0]=mrxi7[3]+mixr7[3];
  auxr_18[1]=mrxr8[3]-mixi8[3];
  auxi_18[1]=mrxi8[3]+mixr8[3];
  auxr_18[2]=mrxr9[3]-mixi9[3];
  auxi_18[2]=mrxi9[3]+mixr9[3];
  auxr_18[3]=mrxr10[3]-mixi10[3];
  auxi_18[3]=mrxi10[3]+mixr10[3];


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



  auxr_19[0]=mrxr11[0]-mixi11[0];
  auxi_19[0]=mrxi11[0]+mixr11[0];
  auxr_19[1]=mrxr13[0]-mixi13[0];
  auxi_19[1]=mrxi13[0]+mixr13[0];
  auxr_19[2]=mrxr15[0]-mixi15[0];
  auxi_19[2]=mrxi15[0]+mixr15[0];
  auxr_19[3]=mrxr17[0]-mixi17[0];
  auxi_19[3]=mrxi17[0]+mixr17[0];

  auxr_20[0]=mrxr11[1]-mixi11[1];
  auxi_20[0]=mrxi11[1]+mixr11[1];
  auxr_20[1]=mrxr13[1]-mixi13[1];
  auxi_20[1]=mrxi13[1]+mixr13[1];
  auxr_20[2]=mrxr15[1]-mixi15[1];
  auxi_20[2]=mrxi15[1]+mixr15[1];
  auxr_20[3]=mrxr17[1]-mixi17[1];
  auxi_20[3]=mrxi17[1]+mixr17[1];

  auxr_21[0]=mrxr11[2]-mixi11[2];
  auxi_21[0]=mrxi11[2]+mixr11[2];
  auxr_21[1]=mrxr13[2]-mixi13[2];
  auxi_21[1]=mrxi13[2]+mixr13[2];
  auxr_21[2]=mrxr15[2]-mixi15[2];
  auxi_21[2]=mrxi15[2]+mixr15[2];
  auxr_21[3]=mrxr17[2]-mixi17[2];
  auxi_21[3]=mrxi17[2]+mixr17[2];

  auxr_22[0]=mrxr11[3]-mixi11[3];
  auxi_22[0]=mrxi11[3]+mixr11[3];
  auxr_22[1]=mrxr13[3]-mixi13[3];
  auxi_22[1]=mrxi13[3]+mixr13[3];
  auxr_22[2]=mrxr15[3]-mixi15[3];
  auxi_22[2]=mrxi15[3]+mixr15[3];
  auxr_22[3]=mrxr17[3]-mixi17[3];
  auxi_22[3]=mrxi17[3]+mixr17[3];

  auxr_23[0]=mrxr12[0]-mixi12[0];
  auxi_23[0]=mrxi12[0]+mixr12[0];
  auxr_23[1]=mrxr14[0]-mixi14[0];
  auxi_23[1]=mrxi14[0]+mixr14[0];
  auxr_23[2]=mrxr16[0]-mixi16[0];
  auxi_23[2]=mrxi16[0]+mixr16[0];
  auxr_23[3]=mrxr18[0]-mixi18[0];
  auxi_23[3]=mrxi18[0]+mixr18[0];

  auxr_24[0]=mrxr12[1]-mixi12[1];
  auxi_24[0]=mrxi12[1]+mixr12[1];
  auxr_24[1]=mrxr14[1]-mixi14[1];
  auxi_24[1]=mrxi14[1]+mixr14[1];
  auxr_24[2]=mrxr16[1]-mixi16[1];
  auxi_24[2]=mrxi16[1]+mixr16[1];
  auxr_24[3]=mrxr18[1]-mixi18[1];
  auxi_24[3]=mrxi18[1]+mixr18[1];

  auxr_25[0]=mrxr12[2]-mixi12[2];
  auxi_25[0]=mrxi12[2]+mixr12[2];
  auxr_25[1]=mrxr14[2]-mixi14[2];
  auxi_25[1]=mrxi14[2]+mixr14[2];
  auxr_25[2]=mrxr16[2]-mixi16[2];
  auxi_25[2]=mrxi16[2]+mixr16[2];
  auxr_25[3]=mrxr18[2]-mixi18[2];
  auxi_25[3]=mrxi18[2]+mixr18[2];

  auxr_26[0]=mrxr12[3]-mixi12[3];
  auxi_26[0]=mrxi12[3]+mixr12[3];
  auxr_26[1]=mrxr14[3]-mixi14[3];
  auxi_26[1]=mrxi14[3]+mixr14[3];
  auxr_26[2]=mrxr16[3]-mixi16[3];
  auxi_26[2]=mrxi16[3]+mixr16[3];
  auxr_26[3]=mrxr18[3]-mixi18[3];
  auxi_26[3]=mrxi18[3]+mixr18[3];

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



  auxi_27[0]=mrxr19[0]-mixi19[0];
  auxi_27[0]=mrxi19[0]+mixr19[0];
  auxi_27[1]=mrxr21[0]-mixi21[0];
  auxi_27[1]=mrxi21[0]+mixr21[0];
  auxi_27[2]=mrxr23[0]-mixi23[0];
  auxi_27[2]=mrxi23[0]+mixr23[0];
  auxi_27[3]=mrxr25[0]-mixi25[0];
  auxi_27[3]=mrxi25[0]+mixr25[0];

  auxi_28[0]=mrxr20[0]-mixi20[0];
  auxi_28[0]=mrxi20[0]+mixr20[0];
  auxi_28[1]=mrxr22[0]-mixi22[0];
  auxi_28[1]=mrxi22[0]+mixr22[0];
  auxi_28[2]=mrxr24[0]-mixi24[0];
  auxi_28[2]=mrxi24[0]+mixr24[0];
  auxi_28[3]=mrxr26[0]-mixi26[0];
  auxi_28[3]=mrxi26[0]+mixr26[0];

  auxi_29[0]=mrxr19[1]-mixi19[1];
  auxi_29[0]=mrxi19[1]+mixr19[1];
  auxi_29[1]=mrxr21[1]-mixi21[1];
  auxi_29[1]=mrxi21[1]+mixr21[1];
  auxi_29[2]=mrxr23[1]-mixi23[1];
  auxi_29[2]=mrxi23[1]+mixr23[1];
  auxi_29[3]=mrxr25[1]-mixi25[1];
  auxi_29[3]=mrxi25[1]+mixr25[1];

  auxi_30[0]=mrxr20[1]-mixi20[1];
  auxi_30[0]=mrxi20[1]+mixr20[1];
  auxi_30[1]=mrxr22[1]-mixi22[1];
  auxi_30[1]=mrxi22[1]+mixr22[1];
  auxi_30[2]=mrxr24[1]-mixi24[1];
  auxi_30[2]=mrxi24[1]+mixr24[1];
  auxi_30[3]=mrxr26[1]-mixi26[1];
  auxi_30[3]=mrxi26[1]+mixr26[1];

  auxi_31[0]=mrxr19[2]-mixi19[2];
  auxi_31[0]=mrxi19[2]+mixr19[2];
  auxi_31[1]=mrxr21[2]-mixi21[2];
  auxi_31[1]=mrxi21[2]+mixr21[2];
  auxi_31[2]=mrxr23[2]-mixi23[2];
  auxi_31[2]=mrxi23[2]+mixr23[2];
  auxi_31[3]=mrxr25[2]-mixi25[2];
  auxi_31[3]=mrxi25[2]+mixr25[2];

  auxi_32[0]=mrxr20[2]-mixi20[2];
  auxi_32[0]=mrxi20[2]+mixr20[2];
  auxi_32[1]=mrxr22[2]-mixi22[2];
  auxi_32[1]=mrxi22[2]+mixr22[2];
  auxi_32[2]=mrxr24[2]-mixi24[2];
  auxi_32[2]=mrxi24[2]+mixr24[2];
  auxi_32[3]=mrxr26[2]-mixi26[2];
  auxi_32[3]=mrxi26[2]+mixr26[2];

  auxi_33[0]=mrxr19[3]-mixi19[3];
  auxi_33[0]=mrxi19[3]+mixr19[3];
  auxi_33[1]=mrxr21[3]-mixi21[3];
  auxi_33[1]=mrxi21[3]+mixr21[3];
  auxi_33[2]=mrxr23[3]-mixi23[3];
  auxi_33[2]=mrxi23[3]+mixr23[3];
  auxi_33[3]=mrxr25[3]-mixi25[3];
  auxi_33[3]=mrxi25[3]+mixr25[3];

  auxi_34[0]=mrxr20[3]-mixi20[3];
  auxi_34[0]=mrxi20[3]+mixr20[3];
  auxi_34[1]=mrxr22[3]-mixi22[3];
  auxi_34[1]=mrxi22[3]+mixr22[3];
  auxi_34[2]=mrxr24[3]-mixi24[3];
  auxi_34[2]=mrxi24[3]+mixr24[3];
  auxi_34[3]=mrxr26[3]-mixi26[3];
  auxi_34[3]=mrxi26[3]+mixr26[3];

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


  auxi_35[0]=mrxr27[0]-mixi27[0];
  auxi_35[0]=mrxi27[0]+mixr27[0];
  auxi_35[1]=mrxr27[2]-mixi27[2];
  auxi_35[1]=mrxi27[2]+mixr27[2];
  auxi_35[2]=mrxr29[0]-mixi29[0];
  auxi_35[2]=mrxi29[0]+mixr29[0];
  auxi_35[3]=mrxr29[2]-mixi29[2];
  auxi_35[3]=mrxi29[2]+mixr29[2];

  auxi_36[0]=mrxr28[0]-mixi28[0];
  auxi_36[0]=mrxi28[0]+mixr28[0];
  auxi_36[1]=mrxr28[2]-mixi28[2];
  auxi_36[1]=mrxi28[2]+mixr28[2];
  auxi_36[2]=mrxr30[0]-mixi30[0];
  auxi_36[2]=mrxi30[0]+mixr30[0];
  auxi_36[3]=mrxr30[2]-mixi30[2];
  auxi_36[3]=mrxi30[2]+mixr30[2];

  auxi_37[0]=mrxr27[1]-mixi27[1];
  auxi_37[0]=mrxi27[1]+mixr27[1];
  auxi_37[1]=mrxr27[3]-mixi27[3];
  auxi_37[1]=mrxi27[3]+mixr27[3];
  auxi_37[2]=mrxr29[1]-mixi29[1];
  auxi_37[2]=mrxi29[1]+mixr29[1];
  auxi_37[3]=mrxr29[3]-mixi29[3];
  auxi_37[3]=mrxi29[3]+mixr29[3];

  auxi_38[0]=mrxr28[1]-mixi28[1];
  auxi_38[0]=mrxi28[1]+mixr28[1];
  auxi_38[1]=mrxr28[3]-mixi28[3];
  auxi_38[1]=mrxi28[3]+mixr28[3];
  auxi_38[2]=mrxr30[1]-mixi30[1];
  auxi_38[2]=mrxi30[1]+mixr30[1];
  auxi_38[3]=mrxr30[3]-mixi30[3];
  auxi_38[3]=mrxi30[3]+mixr30[3];

  auxi_39[0]=mrxr31[0]-mixi31[0];
  auxi_39[0]=mrxi31[0]+mixr31[0];
  auxi_39[1]=mrxr31[2]-mixi31[2];
  auxi_39[1]=mrxi31[2]+mixr31[2];
  auxi_39[2]=mrxr33[0]-mixi33[0];
  auxi_39[2]=mrxi33[0]+mixr33[0];
  auxi_39[3]=mrxr33[2]-mixi33[2];
  auxi_39[3]=mrxi33[2]+mixr33[2];

  auxi_40[0]=mrxr32[0]-mixi32[0];
  auxi_40[0]=mrxi32[0]+mixr32[0];
  auxi_40[1]=mrxr32[2]-mixi32[2];
  auxi_40[1]=mrxi32[2]+mixr32[2];
  auxi_40[2]=mrxr34[0]-mixi34[0];
  auxi_40[2]=mrxi34[0]+mixr34[0];
  auxi_40[3]=mrxr34[2]-mixi34[2];
  auxi_40[3]=mrxi34[2]+mixr34[2];

  auxi_41[0]=mrxr31[1]-mixi31[1];
  auxi_41[0]=mrxi31[1]+mixr31[1];
  auxi_41[1]=mrxr31[3]-mixi31[3];
  auxi_41[1]=mrxi31[3]+mixr31[3];
  auxi_41[2]=mrxr33[1]-mixi33[1];
  auxi_41[2]=mrxi33[1]+mixr33[1];
  auxi_41[3]=mrxr33[3]-mixi33[3];
  auxi_41[3]=mrxi33[3]+mixr33[3];

  auxi_42[0]=mrxr32[1]-mixi32[1];
  auxi_42[0]=mrxi32[1]+mixr32[1];
  auxi_42[1]=mrxr32[3]-mixi32[3];
  auxi_42[1]=mrxi32[3]+mixr32[3];
  auxi_42[2]=mrxr34[1]-mixi34[1];
  auxi_42[2]=mrxi34[1]+mixr34[1];
  auxi_42[3]=mrxr34[3]-mixi34[3];
  auxi_42[3]=mrxi34[3]+mixr34[3];

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

  for(int i = 0; i < 4; i++) {
            mrxr36[i]= 0;
            mrxi36[i]= 0;
            mixr36[i]= 0;
            mixi36[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr36[i] += mr_36[i][k] * auxr_36[k];
              mrxi36[i] += mr_36[i][k] * auxi_36[k];
              mixr36[i] += mi_36[i][k] * auxr_36[k];
              mixi36[i] += mi_36[i][k] * auxi_36[k];
            }
          }

  for(int i = 0; i < 4; i++) {
            mrxr37[i]= 0;
            mrxi37[i]= 0;
            mixr37[i]= 0;
            mixi37[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr37[i] += mr_37[i][k] * auxr_37[k];
              mrxi37[i] += mr_37[i][k] * auxi_37[k];
              mixr37[i] += mi_37[i][k] * auxr_37[k];
              mixi37[i] += mi_37[i][k] * auxi_37[k];
            }
          }

  for(int i = 0; i < 4; i++) {
            mrxr38[i]= 0;
            mrxi38[i]= 0;
            mixr38[i]= 0;
            mixi38[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr38[i] += mr_38[i][k] * auxr_38[k];
              mrxi38[i] += mr_38[i][k] * auxi_38[k];
              mixr38[i] += mi_38[i][k] * auxr_38[k];
              mixi38[i] += mi_38[i][k] * auxi_38[k];
            }
          }

 for(int i = 0; i < 4; i++) {
              mrxr39[i]= 0;
              mrxi39[i]= 0;
              mixr39[i]= 0;
              mixi39[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr39[i] += mr_39[i][k] * auxr_39[k];
                mrxi39[i] += mr_39[i][k] * auxi_39[k];
                mixr39[i] += mi_39[i][k] * auxr_39[k];
                mixi39[i] += mi_39[i][k] * auxi_39[k];
              }
            }


  for(int i = 0; i < 4; i++) {
              mrxr40[i]= 0;
              mrxi40[i]= 0;
              mixr40[i]= 0;
              mixi40[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr40[i] += mr_40[i][k] * auxr_40[k];
                mrxi40[i] += mr_40[i][k] * auxi_40[k];
                mixr40[i] += mi_40[i][k] * auxr_40[k];
                mixi40[i] += mi_40[i][k] * auxi_40[k];
              }
            }
  for(int i = 0; i < 4; i++) {
                mrxr41[i]= 0;
                mrxi41[i]= 0;
                mixr41[i]= 0;
                mixi41[i]= 0;
                for(int k = 0; k < 4; k++) {
                  mrxr41[i] += mr_41[i][k] * auxr_41[k];
                  mrxi41[i] += mr_41[i][k] * auxi_41[k];
                  mixr41[i] += mi_41[i][k] * auxr_41[k];
                  mixi41[i] += mi_41[i][k] * auxi_41[k];
                }
              }

  for(int i = 0; i < 4; i++) {
              mrxr42[i]= 0;
              mrxi42[i]= 0;
              mixr42[i]= 0;
              mixi42[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr42[i] += mr_42[i][k] * auxr_42[k];
                mrxi42[i] += mr_42[i][k] * auxi_42[k];
                mixr42[i] += mi_42[i][k] * auxr_42[k];
                mixi42[i] += mi_42[i][k] * auxi_42[k];
              }
            }


  auxr_43[0]=mrxr35[0]-mixi35[0];
  auxi_43[0]=mrxi35[0]+mixr35[0];
  auxr_43[1]=mrxr36[0]-mixi36[0];
  auxi_43[1]=mrxi36[0]+mixr36[0];
  auxr_43[2]=mrxr37[0]-mixi37[0];
  auxi_43[2]=mrxi37[0]+mixr37[0];
  auxr_43[3]=mrxr38[0]-mixi38[0];
  auxi_43[3]=mrxi38[0]+mixr38[0];

  auxr_44[0]=mrxr35[1]-mixi35[1];
  auxi_44[0]=mrxi35[1]+mixr35[1];
  auxr_44[1]=mrxr36[1]-mixi36[1];
  auxi_44[1]=mrxi36[1]+mixr36[1];
  auxr_44[2]=mrxr37[1]-mixi37[1];
  auxi_44[2]=mrxi37[1]+mixr37[1];
  auxr_44[3]=mrxr38[1]-mixi38[1];
  auxi_44[3]=mrxi38[1]+mixr38[1];

  auxr_45[0]=mrxr35[2]-mixi35[2];
  auxi_45[0]=mrxi35[2]+mixr35[2];
  auxr_45[1]=mrxr36[2]-mixi36[2];
  auxi_45[1]=mrxi36[2]+mixr36[2];
  auxr_45[2]=mrxr37[2]-mixi37[2];
  auxi_45[2]=mrxi37[2]+mixr37[2];
  auxr_45[3]=mrxr38[2]-mixi38[2];
  auxi_45[3]=mrxi38[2]+mixr38[2];

  auxr_46[0]=mrxr35[3]-mixi35[3];
  auxi_46[0]=mrxi35[3]+mixr35[3];
  auxr_46[1]=mrxr36[3]-mixi36[3];
  auxi_46[1]=mrxi36[3]+mixr36[3];
  auxr_46[2]=mrxr37[3]-mixi37[3];
  auxi_46[2]=mrxi37[3]+mixr37[3];
  auxr_46[3]=mrxr38[3]-mixi38[3];
  auxi_46[3]=mrxi38[3]+mixr38[3];

  auxr_47[0]=mrxr39[0]-mixi39[0];
  auxi_47[0]=mrxi39[0]+mixr39[0];
  auxr_47[1]=mrxr40[0]-mixi40[0];
  auxi_47[1]=mrxi40[0]+mixr40[0];
  auxr_47[2]=mrxr41[0]-mixi41[0];
  auxi_47[2]=mrxi41[0]+mixr41[0];
  auxr_47[3]=mrxr42[0]-mixi42[0];
  auxi_47[3]=mrxi42[0]+mixr42[0];

  auxr_48[0]=mrxr39[1]-mixi39[1];
  auxi_48[0]=mrxi39[1]+mixr39[1];
  auxr_48[1]=mrxr40[1]-mixi40[1];
  auxi_48[1]=mrxi40[1]+mixr40[1];
  auxr_48[2]=mrxr41[1]-mixi41[1];
  auxi_48[2]=mrxi41[1]+mixr41[1];
  auxr_48[3]=mrxr42[1]-mixi42[1];
  auxi_48[3]=mrxi42[1]+mixr42[1];

  auxr_49[0]=mrxr39[2]-mixi39[2];
  auxi_49[0]=mrxi39[2]+mixr39[2];
  auxr_49[1]=mrxr40[2]-mixi40[2];
  auxi_49[1]=mrxi40[2]+mixr40[2];
  auxr_49[2]=mrxr41[2]-mixi41[2];
  auxi_49[2]=mrxi41[2]+mixr41[2];
  auxr_49[3]=mrxr42[2]-mixi42[2];
  auxi_49[3]=mrxi42[2]+mixr42[2];

  auxr_50[0]=mrxr39[3]-mixi39[3];
  auxi_50[0]=mrxi39[3]+mixr39[3];
  auxr_50[1]=mrxr40[3]-mixi40[3];
  auxi_50[1]=mrxi40[3]+mixr40[3];
  auxr_50[2]=mrxr41[3]-mixi41[3];
  auxi_50[2]=mrxi41[3]+mixr41[3];
  auxr_50[3]=mrxr42[3]-mixi42[3];
  auxi_50[3]=mrxi42[3]+mixr42[3];

for(int i = 0; i < 4; i++) {
              mrxr43[i]= 0;
              mrxi43[i]= 0;
              mixr43[i]= 0;
              mixi43[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr43[i] += mr_43[i][k] * auxr_43[k];
                mrxi43[i] += mr_43[i][k] * auxi_43[k];
                mixr43[i] += mi_43[i][k] * auxr_43[k];
                mixi43[i] += mi_43[i][k] * auxi_43[k];
              }
            }

  for(int i = 0; i < 4; i++) {
              mrxr44[i]= 0;
              mrxi44[i]= 0;
              mixr44[i]= 0;
              mixi44[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr44[i] += mr_44[i][k] * auxr_44[k];
                mrxi44[i] += mr_44[i][k] * auxi_44[k];
                mixr44[i] += mi_44[i][k] * auxr_44[k];
                mixi44[i] += mi_44[i][k] * auxi_44[k];
              }
            }

  for(int i = 0; i < 4; i++) {
              mrxr45[i]= 0;
              mrxi45[i]= 0;
              mixr45[i]= 0;
              mixi45[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr45[i] += mr_45[i][k] * auxr_45[k];
                mrxi45[i] += mr_45[i][k] * auxi_45[k];
                mixr45[i] += mi_45[i][k] * auxr_45[k];
                mixi45[i] += mi_45[i][k] * auxi_45[k];
              }
            }

  for(int i = 0; i < 4; i++) {
              mrxr46[i]= 0;
              mrxi46[i]= 0;
              mixr46[i]= 0;
              mixi46[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr46[i] += mr_46[i][k] * auxr_46[k];
                mrxi46[i] += mr_46[i][k] * auxi_46[k];
                mixr46[i] += mi_46[i][k] * auxr_46[k];
                mixi46[i] += mi_46[i][k] * auxi_46[k];
              }
            }


  for(int i = 0; i < 4; i++) {
            mrxr47[i]= 0;
            mrxi47[i]= 0;
            mixr47[i]= 0;
            mixi47[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr47[i] += mr_47[i][k] * auxr_47[k];
              mrxi47[i] += mr_47[i][k] * auxi_47[k];
              mixr47[i] += mi_47[i][k] * auxr_47[k];
              mixi47[i] += mi_47[i][k] * auxi_47[k];
            }
          }

  for(int i = 0; i < 4; i++) {
            mrxr48[i]= 0;
            mrxi48[i]= 0;
            mixr48[i]= 0;
            mixi48[i]= 0;
            for(int k = 0; k < 4; k++) {
              mrxr48[i] += mr_48[i][k] * auxr_48[k];
              mrxi48[i] += mr_48[i][k] * auxi_48[k];
              mixr48[i] += mi_48[i][k] * auxr_48[k];
              mixi48[i] += mi_48[i][k] * auxi_48[k];
            }
          }

 for(int i = 0; i < 4; i++) {
              mrxr49[i]= 0;
              mrxi49[i]= 0;
              mixr49[i]= 0;
              mixi49[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr49[i] += mr_49[i][k] * auxr_49[k];
                mrxi49[i] += mr_49[i][k] * auxi_49[k];
                mixr49[i] += mi_49[i][k] * auxr_49[k];
                mixi49[i] += mi_49[i][k] * auxi_49[k];
              }
            }


  for(int i = 0; i < 4; i++) {
              mrxr50[i]= 0;
              mrxi50[i]= 0;
              mixr50[i]= 0;
              mixi50[i]= 0;
              for(int k = 0; k < 4; k++) {
                mrxr50[i] += mr_50[i][k] * auxr_50[k];
                mrxi50[i] += mr_50[i][k] * auxi_50[k];
                mixr50[i] += mi_50[i][k] * auxr_50[k];
                mixi50[i] += mi_50[i][k] * auxi_50[k];
              }
            }

for(int i = 0; i < 4; i++){
	  outr[i]=mrxr43[i]-mixi43[i];
	  outi[i]=mrxi43[i]+mixr43[i];
	  outr[i+4]=mrxr44[i]-mixi44[i];
	  outi[i+4]=mrxi44[i]+mixr44[i];
	  outr[i+8]=mrxr45[i]-mixi45[i];
	  outi[i+8]=mrxi45[i]+mixr45[i];
	  outr[i+44]=mrxr46[i]-mixi46[i];
	  outi[i+44]=mrxi46[i]+mixr46[i];
	  outr[i+48]=mrxr47[i]-mixi47[i];
	  outi[i+48]=mrxi47[i]+mixr47[i];
	  outr[i+20]=mrxr48[i]-mixi48[i];
	  outi[i+20]=mrxi48[i]+mixr48[i];
	  outr[i+24]=mrxr49[i]-mixi49[i];
	  outi[i+24]=mrxi49[i]+mixr49[i];
	  outr[i+28]=mrxr50[i]-mixi50[i];
	  outi[i+28]=mrxi50[i]+mixr50[i];

  }



}

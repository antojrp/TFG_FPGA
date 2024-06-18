#include <math.h>
#include <iostream>
using namespace std;

void tree_n4d3(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
float outr[16], float outi[16], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4],float mr_5[4][4], float mi_5[4][4],float mr_6[4][4], float mi_6[4][4],
float mr_7[4][4], float mi_7[4][4], float mr_8[4][4], float mi_8[4][4], float mr_9[4][4], float mi_9[4][4], float mr_10[4][4], float mi_10[4][4],
float mr_11[4][4], float mi_11[4][4], float mr_12[4][4], float mi_12[4][4], float mr_13[4][4], float mi_13[4][4], float mr_14[4][4], float mi_14[4][4])
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

  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4], auxr_1[4], auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4], auxr_2[4], auxi_2[4];

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


  auxr_7[0]=mrxr3[0]-mixi3[0];
  auxi_7[0]=mixr3[0]+mrxi3[0];
  auxr_7[1]=mrxr3[2]-mixi3[2];
  auxi_7[1]=mixr3[2]+mrxi3[2];
  auxr_7[2]=mrxr5[0]-mixi5[0];
  auxi_7[2]=mixr5[0]+mrxi5[0];
  auxr_7[3]=mrxr5[2]-mixi5[2];
  auxi_7[3]=mixr5[2]+mrxi5[2];

  auxr_8[0]=mrxr4[0]-mixi4[0];
  auxi_8[0]=mixr4[0]+mrxi4[0];
  auxr_8[1]=mrxr4[2]-mixi4[2];
  auxi_8[1]=mixr4[2]+mrxi4[2];
  auxr_8[2]=mrxr6[0]-mixi6[0];
  auxi_8[2]=mixr6[0]+mrxi6[0];
  auxr_8[3]=mrxr6[2]-mixi6[2];
  auxi_8[3]=mixr6[2]+mrxi6[2];

  auxr_9[0]=mrxr3[1]-mixi3[1];
  auxi_9[0]=mixr3[1]+mrxi3[1];
  auxr_9[1]=mrxr3[3]-mixi3[3];
  auxi_9[1]=mixr3[3]+mrxi3[3];
  auxr_9[2]=mrxr5[1]-mixi5[1];
  auxi_9[2]=mixr5[1]+mrxi5[1];
  auxr_9[3]=mrxr5[3]-mixi5[3];
  auxi_9[3]=mixr5[3]+mrxi5[3];

  auxr_10[0]=mrxr4[1]-mixi4[1];
  auxi_10[0]=mixr4[1]+mrxi4[1];
  auxr_10[1]=mrxr4[3]-mixi4[3];
  auxi_10[1]=mixr4[3]+mrxi4[3];
  auxr_10[2]=mrxr6[1]-mixi6[1];
  auxi_10[2]=mixr6[1]+mrxi6[1];
  auxr_10[3]=mrxr6[3]-mixi6[3];
  auxi_10[3]=mixr6[3]+mrxi6[3];



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


  auxr_11[0]=mrxr7[0]-mixi7[0];
  auxi_11[0]=mrxi7[0]+mixr7[0];
  auxr_11[1]=mrxr8[0]-mixi8[0];
  auxi_11[1]=mrxi8[0]+mixr8[0];
  auxr_11[2]=mrxr9[0]-mixi9[0];
  auxi_11[2]=mrxi9[0]+mixr9[0];
  auxr_11[3]=mrxr10[0]-mixi10[0];
  auxi_11[3]=mrxi10[0]+mixr10[0];

  auxr_12[0]=mrxr7[1]-mixi7[1];
  auxi_12[0]=mrxi7[1]+mixr7[1];
  auxr_12[1]=mrxr8[1]-mixi8[1];
  auxi_12[1]=mrxi8[1]+mixr8[1];
  auxr_12[2]=mrxr9[1]-mixi9[1];
  auxi_12[2]=mrxi9[1]+mixr9[1];
  auxr_12[3]=mrxr10[1]-mixi10[1];
  auxi_12[3]=mrxi10[1]+mixr10[1];

  auxr_13[0]=mrxr7[2]-mixi7[2];
  auxi_13[0]=mrxi7[2]+mixr7[2];
  auxr_13[1]=mrxr8[2]-mixi8[2];
  auxi_13[1]=mrxi8[2]+mixr8[2];
  auxr_13[2]=mrxr9[2]-mixi9[2];
  auxi_13[2]=mrxi9[2]+mixr9[2];
  auxr_13[3]=mrxr10[2]-mixi10[2];
  auxi_13[3]=mrxi10[2]+mixr10[2];

  auxr_14[0]=mrxr7[3]-mixi7[3];
  auxi_14[0]=mrxi7[3]+mixr7[3];
  auxr_14[1]=mrxr8[3]-mixi8[3];
  auxi_14[1]=mrxi8[3]+mixr8[3];
  auxr_14[2]=mrxr9[3]-mixi9[3];
  auxi_14[2]=mrxi9[3]+mixr9[3];
  auxr_14[3]=mrxr10[3]-mixi10[3];
  auxi_14[3]=mrxi10[3]+mixr10[3];



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

  for(int i=0; i<4; i++){
	  outr[i]=mrxr11[i]-mixi11[i];
	  outi[i]=mrxi11[i]+mixr11[i];

	  outr[i+4]=mrxr12[i]-mixi12[i];
	  outi[i+4]=mrxi12[i]+mixr12[i];

	  outr[i+8]=mrxr13[i]-mixi13[i];
	  outi[i+8]=mrxi13[i]+mixr13[i];

	  outr[i+12]=mrxr14[i]-mixi14[i];
	  outi[i+12]=mrxi14[i]+mixr14[i];

  }


}

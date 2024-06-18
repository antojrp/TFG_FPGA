#include <math.h>
#include <iostream>
using namespace std;

void tree_n3d4(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2],float inr_3[2], float ini_3[2], float outr[8], float outi[8],
		float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4], float mr_5[4][4], float mi_5[4][4],float mr_6[4][4], float mi_6[4][4],float mr_7[4][4], float mi_7[4][4])
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
#pragma HLS INTERFACE mode=s_axilite port=mr_4
#pragma HLS INTERFACE mode=s_axilite port=mi_4
#pragma HLS INTERFACE mode=s_axilite port=mr_5
#pragma HLS INTERFACE mode=s_axilite port=mi_5
#pragma HLS INTERFACE mode=s_axilite port=mr_6
#pragma HLS INTERFACE mode=s_axilite port=mi_6
#pragma HLS INTERFACE mode=s_axilite port=mr_7
#pragma HLS INTERFACE mode=s_axilite port=mi_7


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4],auxr_1[4],auxi_1[4];
  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4],auxr_2[4],auxi_2[4];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4],auxr_3[4],auxi_3[4];
  float mrxr4[4], mixr4[4], mrxi4[4], mixi4[4],auxr_4[4],auxi_4[4];
  float mrxr5[4], mixr5[4], mrxi5[4], mixi5[4],auxr_5[4],auxi_5[4];
  float mrxr6[4], mixr6[4], mrxi6[4], mixi6[4],auxr_6[4],auxi_6[4];
  float mrxr7[4], mixr7[4], mrxi7[4], mixi7[4],auxr_7[4],auxi_7[4];

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


	auxr_4[0]=mrxr2[0]-mixi2[0];
	auxi_4[0]=mixr2[0]+mrxi2[0];
	auxr_4[1]=mrxr2[2]-mixi2[2];
	auxi_4[1]=mixr2[2]+mrxi2[2];
	auxr_4[2]=mrxr3[0]-mixi3[0];
	auxi_4[2]=mixr3[0]+mrxi3[0];
	auxr_4[3]=mrxr3[2]-mixi3[2];
	auxi_4[3]=mixr3[2]+mrxi3[2];

	auxr_5[0]=mrxr2[1]-mixi2[1];
	auxi_5[0]=mixr2[1]+mrxi2[1];
	auxr_5[1]=mrxr2[3]-mixi2[3];
	auxi_5[1]=mixr2[3]+mrxi2[3];
	auxr_5[2]=mrxr3[1]-mixi3[1];
	auxi_5[2]=mixr3[1]+mrxi3[1];
	auxr_5[3]=mrxr3[3]-mixi3[3];
	auxi_5[3]=mixr3[3]+mrxi3[3];




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

   
auxr_6[0]=mrxr4[0]-mixi4[0];
auxi_6[0]=mixr4[0]+mrxi4[0];
auxr_6[1]=mrxr4[2]-mixi4[2];
auxi_6[1]=mixr4[2]+mrxi4[2];
auxr_6[2]=mrxr5[0]-mixi5[0];
auxi_6[2]=mixr5[0]+mrxi5[0];
auxr_6[3]=mrxr5[2]-mixi5[2];
auxi_6[3]=mixr5[2]+mrxi5[2];

auxr_7[0]=mrxr4[1]-mixi4[1];
auxi_7[0]=mixr4[1]+mrxi4[1];
auxr_7[1]=mrxr4[3]-mixi4[3];
auxi_7[1]=mixr4[3]+mrxi4[3];
auxr_7[2]=mrxr5[1]-mixi5[1];
auxi_7[2]=mixr5[1]+mrxi5[1];
auxr_7[3]=mrxr5[3]-mixi5[3];
auxi_7[3]=mixr5[3]+mrxi5[3];

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

for(int i = 0; i<4; i++) {
	  outr[i]=mrxr6[i]-mixi6[i];
	  outi[i]=mixr6[i]+mrxi6[i];
  	  outr[i+4]=mrxr7[i]-mixi7[i];
  	  outi[i+4]=mixr7[i]+mrxi7[i];
      }

}

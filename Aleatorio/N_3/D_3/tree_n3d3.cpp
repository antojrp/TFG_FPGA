#include <math.h>
#include <iostream>
using namespace std;

void tree_n3d3(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2],float inr_3[2], float ini_3[2], float outr[8], float outi[8],
		float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4], float mr_5[4][4], float mi_5[4][4])
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


  float mrxr1[4], mixr1[4], mrxi1[4], mixi1[4],auxr_1[4],auxi_1[4];

  float mrxr2[4], mixr2[4], mrxi2[4], mixi2[4],auxr_2[4],auxi_2[4];
  float mrxr3[4], mixr3[4], mrxi3[4], mixi3[4],auxr_3[4],auxi_3[4];

  float mrxr4[4], mixr4[4], mrxi4[4], mixi4[4],auxr_4[4],auxi_4[4];
  float mrxr5[4], mixr5[4], mrxi5[4], mixi5[4],auxr_5[4],auxi_5[4];

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

// Calculamos el estado total del sistema actualizando 4 coordenadas reales y 4 imaginarias
// corresponden a multiplicar un bloque del vector una matriz 2 x 2

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


// Realizamos una traslacion de los qubits en la red 1D de
// 1a posicion para multiplicar matrices usando la estructura de suma directa

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

    for(int i = 0; i<4; i++) {
  	  outr[2*i]=mrxr4[i]-mixi4[i];
  	  outi[2*i]=mixr4[i]+mrxi4[i];

  	  outr[2*i+1]=mrxr5[i]-mixi5[i];
  	  outi[2*i+1]=mixr5[i]+mrxi5[i];
        }
}

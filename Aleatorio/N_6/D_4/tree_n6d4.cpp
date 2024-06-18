#include <math.h>
#include <iostream>
using namespace std;

void tree_n6d4(float inr_1[2], float ini_1[2],float inr_2[2], float ini_2[2], float inr_3[2], float ini_3[2],float inr_4[2], float ini_4[2],
		float inr_5[2], float ini_5[2], float inr_6[2], float ini_6[2], float outr[64], float outi[64], float mr_1[4][4], float mi_1[4][4], float mr_2[4][4], float mi_2[4][4], float mr_3[4][4], float mi_3[4][4], float mr_4[4][4], float mi_4[4][4],
		float mr_5[4][4], float mi_5[4][4], float mr_6[4][4], float mi_6[4][4], float mr_7[4][4], float mi_7[4][4],float mr_8[4][4], float mi_8[4][4], float mr_9[4][4], float mi_9[4][4],
		float mr_10[4][4], float mi_10[4][4], float mr_11[4][4], float mi_11[4][4], float mr_12[4][4], float mi_12[4][4],float mr_13[4][4], float mi_13[4][4], float mr_14[4][4], float mi_14[4][4],
		float mr_15[4][4], float mi_15[4][4], float mr_16[4][4], float mi_16[4][4], float mr_17[4][4], float mi_17[4][4],float mr_18[4][4], float mi_18[4][4], float mr_19[4][4], float mi_19[4][4],
		float mr_20[4][4], float mi_20[4][4], float mr_21[4][4], float mi_21[4][4], float mr_22[4][4], float mi_22[4][4],float mr_23[4][4], float mi_23[4][4], float mr_24[4][4], float mi_24[4][4],
		float mr_25[4][4], float mi_25[4][4], float mr_26[4][4], float mi_26[4][4], float mr_27[4][4], float mi_27[4][4],float mr_28[4][4], float mi_28[4][4], float mr_29[4][4], float mi_29[4][4],
		float mr_30[4][4], float mi_30[4][4], float mr_31[4][4], float mi_31[4][4], float mr_32[4][4], float mi_32[4][4],float mr_33[4][4], float mi_33[4][4], float mr_34[4][4], float mi_34[4][4],
		float mr_35[4][4], float mi_35[4][4], float mr_36[4][4], float mi_36[4][4], float mr_37[4][4], float mi_37[4][4],float mr_38[4][4], float mi_38[4][4], float mr_39[4][4], float mi_39[4][4],
		float mr_40[4][4], float mi_40[4][4], float mr_41[4][4], float mi_41[4][4], float mr_42[4][4], float mi_42[4][4],float mr_43[4][4], float mi_43[4][4], float mr_44[4][4], float mi_44[4][4],
		float mr_45[4][4], float mi_45[4][4], float mr_46[4][4], float mi_46[4][4], float mr_47[4][4], float mi_47[4][4],float mr_48[4][4], float mi_48[4][4], float mr_49[4][4], float mi_49[4][4],
		float mr_50[4][4], float mi_50[4][4], float mr_51[4][4], float mi_51[4][4], float mr_52[4][4], float mi_52[4][4],float mr_53[4][4], float mi_53[4][4], float mr_54[4][4], float mi_54[4][4],
		float mr_55[4][4], float mi_55[4][4], float mr_56[4][4], float mi_56[4][4], float mr_57[4][4], float mi_57[4][4],float mr_58[4][4], float mi_58[4][4], float mr_59[4][4], float mi_59[4][4],
		float mr_60[4][4], float mi_60[4][4], float mr_61[4][4], float mi_61[4][4], float mr_62[4][4], float mi_62[4][4],float mr_63[4][4], float mi_63[4][4], float mr_64[4][4], float mi_64[4][4],
		float mr_65[4][4], float mi_65[4][4], float mr_66[4][4], float mi_66[4][4], float mr_67[4][4], float mi_67[4][4],float mr_68[4][4], float mi_68[4][4], float mr_69[4][4], float mi_69[4][4],
		float mr_70[4][4], float mi_70[4][4], float mr_71[4][4], float mi_71[4][4], float mr_72[4][4], float mi_72[4][4],float mr_73[4][4], float mi_73[4][4], float mr_74[4][4], float mi_74[4][4],
		float mr_75[4][4], float mi_75[4][4], float mr_76[4][4], float mi_76[4][4], float mr_77[4][4], float mi_77[4][4],float mr_78[4][4], float mi_78[4][4], float mr_79[4][4], float mi_79[4][4],
		float mr_80[4][4], float mi_80[4][4], float mr_81[4][4], float mi_81[4][4], float mr_82[4][4], float mi_82[4][4],float mr_83[4][4], float mi_83[4][4], float mr_84[4][4], float mi_84[4][4],
		float mr_85[4][4], float mi_85[4][4], float mr_86[4][4], float mi_86[4][4], float mr_87[4][4], float mi_87[4][4],float mr_88[4][4], float mi_88[4][4], float mr_89[4][4], float mi_89[4][4],
		float mr_90[4][4], float mi_90[4][4], float mr_91[4][4], float mi_91[4][4], float mr_92[4][4], float mi_92[4][4],float mr_93[4][4], float mi_93[4][4], float mr_94[4][4], float mi_94[4][4],
		float mr_95[4][4], float mi_95[4][4], float mr_96[4][4], float mi_96[4][4], float mr_97[4][4], float mi_97[4][4],float mr_98[4][4], float mi_98[4][4], float mr_99[4][4], float mi_99[4][4],
		float mr_100[4][4], float mi_100[4][4], float mr_101[4][4], float mi_101[4][4], float mr_102[4][4], float mi_102[4][4],float mr_103[4][4], float mi_103[4][4], float mr_104[4][4], float mi_104[4][4],
		float mr_105[4][4], float mi_105[4][4], float mr_106[4][4], float mi_106[4][4], float mr_107[4][4], float mi_107[4][4],float mr_108[4][4], float mi_108[4][4], float mr_109[4][4], float mi_109[4][4],
		float mr_110[4][4], float mi_110[4][4], float mr_111[4][4], float mi_111[4][4], float mr_112[4][4], float mi_112[4][4],float mr_113[4][4], float mi_113[4][4], float mr_114[4][4], float mi_114[4][4],
		float mr_115[4][4], float mi_115[4][4])
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
#pragma HLS INTERFACE mode=s_axilite port=mr_51
#pragma HLS INTERFACE mode=s_axilite port=mi_51

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
#pragma HLS INTERFACE mode=s_axilite port=mr_51
#pragma HLS INTERFACE mode=s_axilite port=mi_51

#pragma HLS INTERFACE mode=s_axilite port=mr_52
#pragma HLS INTERFACE mode=s_axilite port=mi_52
#pragma HLS INTERFACE mode=s_axilite port=mr_53
#pragma HLS INTERFACE mode=s_axilite port=mi_53
#pragma HLS INTERFACE mode=s_axilite port=mr_54
#pragma HLS INTERFACE mode=s_axilite port=mi_54
#pragma HLS INTERFACE mode=s_axilite port=mr_55
#pragma HLS INTERFACE mode=s_axilite port=mi_55
#pragma HLS INTERFACE mode=s_axilite port=mr_56
#pragma HLS INTERFACE mode=s_axilite port=mi_56
#pragma HLS INTERFACE mode=s_axilite port=mr_57
#pragma HLS INTERFACE mode=s_axilite port=mi_57
#pragma HLS INTERFACE mode=s_axilite port=mr_58
#pragma HLS INTERFACE mode=s_axilite port=mi_58
#pragma HLS INTERFACE mode=s_axilite port=mr_59
#pragma HLS INTERFACE mode=s_axilite port=mi_59
#pragma HLS INTERFACE mode=s_axilite port=mr_60
#pragma HLS INTERFACE mode=s_axilite port=mi_60
#pragma HLS INTERFACE mode=s_axilite port=mr_61
#pragma HLS INTERFACE mode=s_axilite port=mi_61
#pragma HLS INTERFACE mode=s_axilite port=mr_62
#pragma HLS INTERFACE mode=s_axilite port=mi_62
#pragma HLS INTERFACE mode=s_axilite port=mr_63
#pragma HLS INTERFACE mode=s_axilite port=mi_63
#pragma HLS INTERFACE mode=s_axilite port=mr_64
#pragma HLS INTERFACE mode=s_axilite port=mi_64
#pragma HLS INTERFACE mode=s_axilite port=mr_65
#pragma HLS INTERFACE mode=s_axilite port=mi_65
#pragma HLS INTERFACE mode=s_axilite port=mr_66
#pragma HLS INTERFACE mode=s_axilite port=mi_66
#pragma HLS INTERFACE mode=s_axilite port=mr_67
#pragma HLS INTERFACE mode=s_axilite port=mi_67

#pragma HLS INTERFACE mode=s_axilite port=mr_68
#pragma HLS INTERFACE mode=s_axilite port=mi_68
#pragma HLS INTERFACE mode=s_axilite port=mr_69
#pragma HLS INTERFACE mode=s_axilite port=mi_69
#pragma HLS INTERFACE mode=s_axilite port=mr_70
#pragma HLS INTERFACE mode=s_axilite port=mi_70
#pragma HLS INTERFACE mode=s_axilite port=mr_71
#pragma HLS INTERFACE mode=s_axilite port=mi_71
#pragma HLS INTERFACE mode=s_axilite port=mr_72
#pragma HLS INTERFACE mode=s_axilite port=mi_72
#pragma HLS INTERFACE mode=s_axilite port=mr_73
#pragma HLS INTERFACE mode=s_axilite port=mi_73
#pragma HLS INTERFACE mode=s_axilite port=mr_74
#pragma HLS INTERFACE mode=s_axilite port=mi_74
#pragma HLS INTERFACE mode=s_axilite port=mr_75
#pragma HLS INTERFACE mode=s_axilite port=mi_75
#pragma HLS INTERFACE mode=s_axilite port=mr_76
#pragma HLS INTERFACE mode=s_axilite port=mi_76
#pragma HLS INTERFACE mode=s_axilite port=mr_77
#pragma HLS INTERFACE mode=s_axilite port=mi_77
#pragma HLS INTERFACE mode=s_axilite port=mr_78
#pragma HLS INTERFACE mode=s_axilite port=mi_78
#pragma HLS INTERFACE mode=s_axilite port=mr_79
#pragma HLS INTERFACE mode=s_axilite port=mi_79
#pragma HLS INTERFACE mode=s_axilite port=mr_80
#pragma HLS INTERFACE mode=s_axilite port=mi_80
#pragma HLS INTERFACE mode=s_axilite port=mr_81
#pragma HLS INTERFACE mode=s_axilite port=mi_81
#pragma HLS INTERFACE mode=s_axilite port=mr_82
#pragma HLS INTERFACE mode=s_axilite port=mi_82
#pragma HLS INTERFACE mode=s_axilite port=mr_83
#pragma HLS INTERFACE mode=s_axilite port=mi_83

#pragma HLS INTERFACE mode=s_axilite port=mr_84
#pragma HLS INTERFACE mode=s_axilite port=mi_84
#pragma HLS INTERFACE mode=s_axilite port=mr_85
#pragma HLS INTERFACE mode=s_axilite port=mi_85
#pragma HLS INTERFACE mode=s_axilite port=mr_86
#pragma HLS INTERFACE mode=s_axilite port=mi_86
#pragma HLS INTERFACE mode=s_axilite port=mr_87
#pragma HLS INTERFACE mode=s_axilite port=mi_87
#pragma HLS INTERFACE mode=s_axilite port=mr_88
#pragma HLS INTERFACE mode=s_axilite port=mi_88
#pragma HLS INTERFACE mode=s_axilite port=mr_89
#pragma HLS INTERFACE mode=s_axilite port=mi_89
#pragma HLS INTERFACE mode=s_axilite port=mr_90
#pragma HLS INTERFACE mode=s_axilite port=mi_90
#pragma HLS INTERFACE mode=s_axilite port=mr_91
#pragma HLS INTERFACE mode=s_axilite port=mi_91
#pragma HLS INTERFACE mode=s_axilite port=mr_92
#pragma HLS INTERFACE mode=s_axilite port=mi_92
#pragma HLS INTERFACE mode=s_axilite port=mr_93
#pragma HLS INTERFACE mode=s_axilite port=mi_93
#pragma HLS INTERFACE mode=s_axilite port=mr_94
#pragma HLS INTERFACE mode=s_axilite port=mi_94
#pragma HLS INTERFACE mode=s_axilite port=mr_95
#pragma HLS INTERFACE mode=s_axilite port=mi_95
#pragma HLS INTERFACE mode=s_axilite port=mr_96
#pragma HLS INTERFACE mode=s_axilite port=mi_96
#pragma HLS INTERFACE mode=s_axilite port=mr_97
#pragma HLS INTERFACE mode=s_axilite port=mi_97
#pragma HLS INTERFACE mode=s_axilite port=mr_98
#pragma HLS INTERFACE mode=s_axilite port=mi_98
#pragma HLS INTERFACE mode=s_axilite port=mr_99
#pragma HLS INTERFACE mode=s_axilite port=mi_99

#pragma HLS INTERFACE mode=s_axilite port=mr_100
#pragma HLS INTERFACE mode=s_axilite port=mi_100
#pragma HLS INTERFACE mode=s_axilite port=mr_101
#pragma HLS INTERFACE mode=s_axilite port=mi_101
#pragma HLS INTERFACE mode=s_axilite port=mr_102
#pragma HLS INTERFACE mode=s_axilite port=mi_102
#pragma HLS INTERFACE mode=s_axilite port=mr_103
#pragma HLS INTERFACE mode=s_axilite port=mi_103
#pragma HLS INTERFACE mode=s_axilite port=mr_104
#pragma HLS INTERFACE mode=s_axilite port=mi_104
#pragma HLS INTERFACE mode=s_axilite port=mr_105
#pragma HLS INTERFACE mode=s_axilite port=mi_105
#pragma HLS INTERFACE mode=s_axilite port=mr_106
#pragma HLS INTERFACE mode=s_axilite port=mi_106
#pragma HLS INTERFACE mode=s_axilite port=mr_107
#pragma HLS INTERFACE mode=s_axilite port=mi_107
#pragma HLS INTERFACE mode=s_axilite port=mr_108
#pragma HLS INTERFACE mode=s_axilite port=mi_108
#pragma HLS INTERFACE mode=s_axilite port=mr_109
#pragma HLS INTERFACE mode=s_axilite port=mi_109
#pragma HLS INTERFACE mode=s_axilite port=mr_110
#pragma HLS INTERFACE mode=s_axilite port=mi_110
#pragma HLS INTERFACE mode=s_axilite port=mr_111
#pragma HLS INTERFACE mode=s_axilite port=mi_111
#pragma HLS INTERFACE mode=s_axilite port=mr_112
#pragma HLS INTERFACE mode=s_axilite port=mi_112
#pragma HLS INTERFACE mode=s_axilite port=mr_113
#pragma HLS INTERFACE mode=s_axilite port=mi_113
#pragma HLS INTERFACE mode=s_axilite port=mr_114
#pragma HLS INTERFACE mode=s_axilite port=mi_114
#pragma HLS INTERFACE mode=s_axilite port=mr_115
#pragma HLS INTERFACE mode=s_axilite port=mi_115


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
  float mrxr51[4], mixr51[4], mrxi51[4], mixi51[4], auxr_51[4], auxi_51[4];

  float mrxr52[4], mixr52[4], mrxi52[4], mixi52[4], auxr_52[4], auxi_52[4];
  float mrxr53[4], mixr53[4], mrxi53[4], mixi53[4], auxr_53[4], auxi_53[4];
  float mrxr54[4], mixr54[4], mrxi54[4], mixi54[4], auxr_54[4], auxi_54[4];
  float mrxr55[4], mixr55[4], mrxi55[4], mixi55[4], auxr_55[4], auxi_55[4];
  float mrxr56[4], mixr56[4], mrxi56[4], mixi56[4], auxr_56[4], auxi_56[4];
  float mrxr57[4], mixr57[4], mrxi57[4], mixi57[4], auxr_57[4], auxi_57[4];
  float mrxr58[4], mixr58[4], mrxi58[4], mixi58[4], auxr_58[4], auxi_58[4];
  float mrxr59[4], mixr59[4], mrxi59[4], mixi59[4], auxr_59[4], auxi_59[4];
  float mrxr60[4], mixr60[4], mrxi60[4], mixi60[4], auxr_60[4], auxi_60[4];
  float mrxr61[4], mixr61[4], mrxi61[4], mixi61[4], auxr_61[4], auxi_61[4];
  float mrxr62[4], mixr62[4], mrxi62[4], mixi62[4], auxr_62[4], auxi_62[4];
  float mrxr63[4], mixr63[4], mrxi63[4], mixi63[4], auxr_63[4], auxi_63[4];
  float mrxr64[4], mixr64[4], mrxi64[4], mixi64[4], auxr_64[4], auxi_64[4];
  float mrxr65[4], mixr65[4], mrxi65[4], mixi65[4], auxr_65[4], auxi_65[4];
  float mrxr66[4], mixr66[4], mrxi66[4], mixi66[4], auxr_66[4], auxi_66[4];
  float mrxr67[4], mixr67[4], mrxi67[4], mixi67[4], auxr_67[4], auxi_67[4];

  float mrxr68[4], mixr68[4], mrxi68[4], mixi68[4], auxr_68[4], auxi_68[4];
  float mrxr69[4], mixr69[4], mrxi69[4], mixi69[4], auxr_69[4], auxi_69[4];
  float mrxr70[4], mixr70[4], mrxi70[4], mixi70[4], auxr_70[4], auxi_70[4];
  float mrxr71[4], mixr71[4], mrxi71[4], mixi71[4], auxr_71[4], auxi_71[4];
  float mrxr72[4], mixr72[4], mrxi72[4], mixi72[4], auxr_72[4], auxi_72[4];
  float mrxr73[4], mixr73[4], mrxi73[4], mixi73[4], auxr_73[4], auxi_73[4];
  float mrxr74[4], mixr74[4], mrxi74[4], mixi74[4], auxr_74[4], auxi_74[4];
  float mrxr75[4], mixr75[4], mrxi75[4], mixi75[4], auxr_75[4], auxi_75[4];
  float mrxr76[4], mixr76[4], mrxi76[4], mixi76[4], auxr_76[4], auxi_76[4];
  float mrxr77[4], mixr77[4], mrxi77[4], mixi77[4], auxr_77[4], auxi_77[4];
  float mrxr78[4], mixr78[4], mrxi78[4], mixi78[4], auxr_78[4], auxi_78[4];
  float mrxr79[4], mixr79[4], mrxi79[4], mixi79[4], auxr_79[4], auxi_79[4];
  float mrxr80[4], mixr80[4], mrxi80[4], mixi80[4], auxr_80[4], auxi_80[4];
  float mrxr81[4], mixr81[4], mrxi81[4], mixi81[4], auxr_81[4], auxi_81[4];
  float mrxr82[4], mixr82[4], mrxi82[4], mixi82[4], auxr_82[4], auxi_82[4];
  float mrxr83[4], mixr83[4], mrxi83[4], mixi83[4], auxr_83[4], auxi_83[4];

  float mrxr84[4], mixr84[4], mrxi84[4], mixi84[4], auxr_84[4], auxi_84[4];
  float mrxr85[4], mixr85[4], mrxi85[4], mixi85[4], auxr_85[4], auxi_85[4];
  float mrxr86[4], mixr86[4], mrxi86[4], mixi86[4], auxr_86[4], auxi_86[4];
  float mrxr87[4], mixr87[4], mrxi87[4], mixi87[4], auxr_87[4], auxi_87[4];
  float mrxr88[4], mixr88[4], mrxi88[4], mixi88[4], auxr_88[4], auxi_88[4];
  float mrxr89[4], mixr89[4], mrxi89[4], mixi89[4], auxr_89[4], auxi_89[4];
  float mrxr90[4], mixr90[4], mrxi90[4], mixi90[4], auxr_90[4], auxi_90[4];
  float mrxr91[4], mixr91[4], mrxi91[4], mixi91[4], auxr_91[4], auxi_91[4];
  float mrxr92[4], mixr92[4], mrxi92[4], mixi92[4], auxr_92[4], auxi_92[4];
  float mrxr93[4], mixr93[4], mrxi93[4], mixi93[4], auxr_93[4], auxi_93[4];
  float mrxr94[4], mixr94[4], mrxi94[4], mixi94[4], auxr_94[4], auxi_94[4];
  float mrxr95[4], mixr95[4], mrxi95[4], mixi95[4], auxr_95[4], auxi_95[4];
  float mrxr96[4], mixr96[4], mrxi96[4], mixi96[4], auxr_96[4], auxi_96[4];
  float mrxr97[4], mixr97[4], mrxi97[4], mixi97[4], auxr_97[4], auxi_97[4];
  float mrxr98[4], mixr98[4], mrxi98[4], mixi98[4], auxr_98[4], auxi_98[4];
  float mrxr99[4], mixr99[4], mrxi99[4], mixi99[4], auxr_99[4], auxi_99[4];

  float mrxr100[4], mixr100[4], mrxi100[4], mixi100[4], auxr_100[4], auxi_100[4];
  float mrxr101[4], mixr101[4], mrxi101[4], mixi101[4], auxr_101[4], auxi_101[4];
  float mrxr102[4], mixr102[4], mrxi102[4], mixi102[4], auxr_102[4], auxi_102[4];
  float mrxr103[4], mixr103[4], mrxi103[4], mixi103[4], auxr_103[4], auxi_103[4];
  float mrxr104[4], mixr104[4], mrxi104[4], mixi104[4], auxr_104[4], auxi_104[4];
  float mrxr105[4], mixr105[4], mrxi105[4], mixi105[4], auxr_105[4], auxi_105[4];
  float mrxr106[4], mixr106[4], mrxi106[4], mixi106[4], auxr_106[4], auxi_106[4];
  float mrxr107[4], mixr107[4], mrxi107[4], mixi107[4], auxr_107[4], auxi_107[4];
  float mrxr108[4], mixr108[4], mrxi108[4], mixi108[4], auxr_108[4], auxi_108[4];
  float mrxr109[4], mixr109[4], mrxi109[4], mixi109[4], auxr_109[4], auxi_109[4];
  float mrxr110[4], mixr110[4], mrxi110[4], mixi110[4], auxr_110[4], auxi_110[4];
  float mrxr111[4], mixr111[4], mrxi111[4], mixi111[4], auxr_111[4], auxi_111[4];
  float mrxr112[4], mixr112[4], mrxi112[4], mixi112[4], auxr_112[4], auxi_112[4];
  float mrxr113[4], mixr113[4], mrxi113[4], mixi113[4], auxr_113[4], auxi_113[4];
  float mrxr114[4], mixr114[4], mrxi114[4], mixi114[4], auxr_114[4], auxi_114[4];
  float mrxr115[4], mixr115[4], mrxi115[4], mixi115[4], auxr_115[4], auxi_115[4];

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


	auxr_36[0]=mrxr20[0]-mixi20[0];
	auxi_36[0]=mrxi20[0]+mixr20[0];
	auxr_36[1]=mrxr20[2]-mixi20[2];
	auxi_36[1]=mrxi20[2]+mixr20[2];
	auxr_36[2]=mrxr28[0]-mixi28[0];
	auxi_36[2]=mrxi28[0]+mixr28[0];
	auxr_36[3]=mrxr28[2]-mixi28[2];
	auxi_36[3]=mrxi28[2]+mixr28[2];

	auxr_37[0]=mrxr21[0]-mixi21[0];
	auxi_37[0]=mrxi21[0]+mixr21[0];
	auxr_37[1]=mrxr21[2]-mixi21[2];
	auxi_37[1]=mrxi21[2]+mixr21[2];
	auxr_37[2]=mrxr29[0]-mixi29[0];
	auxi_37[2]=mrxi29[0]+mixr29[0];
	auxr_37[3]=mrxr29[2]-mixi29[2];
	auxi_37[3]=mrxi29[2]+mixr29[2];

	auxr_38[0]=mrxr22[0]-mixi22[0];
	auxi_38[0]=mrxi22[0]+mixr22[0];
	auxr_38[1]=mrxr22[2]-mixi22[2];
	auxi_38[1]=mrxi22[2]+mixr22[2];
	auxr_38[2]=mrxr30[0]-mixi30[0];
	auxi_38[2]=mrxi30[0]+mixr30[0];
	auxr_38[3]=mrxr30[2]-mixi30[2];
	auxi_38[3]=mrxi30[2]+mixr30[2];

	auxr_39[0]=mrxr23[0]-mixi23[0];
	auxi_39[0]=mrxi23[0]+mixr23[0];
	auxr_39[1]=mrxr23[2]-mixi23[2];
	auxi_39[1]=mrxi23[2]+mixr23[2];
	auxr_39[2]=mrxr31[0]-mixi31[0];
	auxi_39[2]=mrxi31[0]+mixr31[0];
	auxr_39[3]=mrxr31[2]-mixi31[2];
	auxi_39[3]=mrxi31[2]+mixr31[2];

	auxr_40[0]=mrxr24[0]-mixi24[0];
	auxi_40[0]=mrxi24[0]+mixr24[0];
	auxr_40[1]=mrxr24[2]-mixi24[2];
	auxi_40[1]=mrxi24[2]+mixr24[2];
	auxr_40[2]=mrxr32[0]-mixi32[0];
	auxi_40[2]=mrxi32[0]+mixr32[0];
	auxr_40[3]=mrxr32[2]-mixi32[2];
	auxi_40[3]=mrxi32[2]+mixr32[2];

	auxr_41[0]=mrxr25[0]-mixi25[0];
	auxi_41[0]=mrxi25[0]+mixr25[0];
	auxr_41[1]=mrxr25[2]-mixi25[2];
	auxi_41[1]=mrxi25[2]+mixr25[2];
	auxr_41[2]=mrxr33[0]-mixi33[0];
	auxi_41[2]=mrxi33[0]+mixr33[0];
	auxr_41[3]=mrxr33[2]-mixi33[2];
	auxi_41[3]=mrxi33[2]+mixr33[2];

	auxr_42[0]=mrxr26[0]-mixi26[0];
	auxi_42[0]=mrxi26[0]+mixr26[0];
	auxr_42[1]=mrxr26[2]-mixi26[2];
	auxi_42[1]=mrxi26[2]+mixr26[2];
	auxr_42[2]=mrxr34[0]-mixi34[0];
	auxi_42[2]=mrxi34[0]+mixr34[0];
	auxr_42[3]=mrxr34[2]-mixi34[2];
	auxi_42[3]=mrxi34[2]+mixr34[2];

	auxr_43[0]=mrxr27[0]-mixi27[0];
	auxi_43[0]=mrxi27[0]+mixr27[0];
	auxr_43[1]=mrxr27[2]-mixi27[2];
	auxi_43[1]=mrxi27[2]+mixr27[2];
	auxr_43[2]=mrxr35[0]-mixi35[0];
	auxi_43[2]=mrxi35[0]+mixr35[0];
	auxr_43[3]=mrxr35[2]-mixi35[2];
	auxi_43[3]=mrxi35[2]+mixr35[2];

	auxr_44[0]=mrxr20[1]-mixi20[1];
	auxi_44[0]=mrxi20[1]+mixr20[1];
	auxr_44[1]=mrxr20[3]-mixi20[3];
	auxi_44[1]=mrxi20[3]+mixr20[3];
	auxr_44[2]=mrxr28[1]-mixi28[1];
	auxi_44[2]=mrxi28[1]+mixr28[1];
	auxr_44[3]=mrxr28[3]-mixi28[3];
	auxi_44[3]=mrxi28[3]+mixr28[3];

	auxr_45[0]=mrxr21[1]-mixi21[1];
	auxi_45[0]=mrxi21[1]+mixr21[1];
	auxr_45[1]=mrxr21[3]-mixi21[3];
	auxi_45[1]=mrxi21[3]+mixr21[3];
	auxr_45[2]=mrxr29[1]-mixi29[1];
	auxi_45[2]=mrxi29[1]+mixr29[1];
	auxr_45[3]=mrxr29[3]-mixi29[3];
	auxi_45[3]=mrxi29[3]+mixr29[3];

	auxr_46[0]=mrxr22[1]-mixi22[1];
	auxi_46[0]=mrxi22[1]+mixr22[1];
	auxr_46[1]=mrxr22[3]-mixi22[3];
	auxi_46[1]=mrxi22[3]+mixr22[3];
	auxr_46[2]=mrxr30[1]-mixi30[1];
	auxi_46[2]=mrxi30[1]+mixr30[1];
	auxr_46[3]=mrxr30[3]-mixi30[3];
	auxi_46[3]=mrxi30[3]+mixr30[3];

	auxr_47[0]=mrxr23[1]-mixi23[1];
	auxi_47[0]=mrxi23[1]+mixr23[1];
	auxr_47[1]=mrxr23[3]-mixi23[3];
	auxi_47[1]=mrxi23[3]+mixr23[3];
	auxr_47[2]=mrxr31[1]-mixi31[1];
	auxi_47[2]=mrxi31[1]+mixr31[1];
	auxr_47[3]=mrxr31[3]-mixi31[3];
	auxi_47[3]=mrxi31[3]+mixr31[3];

	auxr_48[0]=mrxr24[1]-mixi24[1];
	auxi_48[0]=mrxi24[1]+mixr24[1];
	auxr_48[1]=mrxr24[3]-mixi24[3];
	auxi_48[1]=mrxi24[3]+mixr24[3];
	auxr_48[2]=mrxr32[1]-mixi32[1];
	auxi_48[2]=mrxi32[1]+mixr32[1];
	auxr_48[3]=mrxr32[3]-mixi32[3];
	auxi_48[3]=mrxi32[3]+mixr32[3];

	auxr_49[0]=mrxr25[1]-mixi25[1];
	auxi_49[0]=mrxi25[1]+mixr25[1];
	auxr_49[1]=mrxr25[3]-mixi25[3];
	auxi_49[1]=mrxi25[3]+mixr25[3];
	auxr_49[2]=mrxr33[1]-mixi33[1];
	auxi_49[2]=mrxi33[1]+mixr33[1];
	auxr_49[3]=mrxr33[3]-mixi33[3];
	auxi_49[3]=mrxi33[3]+mixr33[3];

	auxr_50[0]=mrxr26[1]-mixi26[1];
	auxi_50[0]=mrxi26[1]+mixr26[1];
	auxr_50[1]=mrxr26[3]-mixi26[3];
	auxi_50[1]=mrxi26[3]+mixr26[3];
	auxr_50[2]=mrxr34[1]-mixi34[1];
	auxi_50[2]=mrxi34[1]+mixr34[1];
	auxr_50[3]=mrxr34[3]-mixi34[3];
	auxi_50[3]=mrxi34[3]+mixr34[3];

	auxr_51[0]=mrxr27[1]-mixi27[1];
	auxi_51[0]=mrxi27[1]+mixr27[1];
	auxr_51[1]=mrxr27[3]-mixi27[3];
	auxi_51[1]=mrxi27[3]+mixr27[3];
	auxr_51[2]=mrxr35[1]-mixi35[1];
	auxi_51[2]=mrxi35[1]+mixr35[1];
	auxr_51[3]=mrxr35[3]-mixi35[3];
	auxi_51[3]=mrxi35[3]+mixr35[3];

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
		
	for(int i = 0; i < 4; i++) {
			  mrxr51[i]= 0;
			  mrxi51[i]= 0;
			  mixr51[i]= 0;
			  mixi51[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr51[i] += mr_51[i][k] * auxr_51[k];
				mrxi51[i] += mr_51[i][k] * auxi_51[k];
				mixr51[i] += mi_51[i][k] * auxr_51[k];
				mixi51[i] += mi_51[i][k] * auxi_51[k];
			  }
			}	

	auxr_52[0]=mrxr36[0]-mixi36[0];
	auxi_52[0]=mrxi36[0]+mixr36[0];
	auxr_52[1]=mrxr40[0]-mixi40[0];
	auxi_52[1]=mrxi40[0]+mixr40[0];
	auxr_52[2]=mrxr44[0]-mixi44[0];
	auxi_52[2]=mrxi44[0]+mixr44[0];
	auxr_52[3]=mrxr48[0]-mixi48[0];
	auxi_52[3]=mrxr48[0]+mixr48[0];

	auxr_53[0]=mrxr37[0]-mixi37[0];
	auxi_53[0]=mrxi37[0]+mixr37[0];
	auxr_53[1]=mrxr41[0]-mixi41[0];
	auxi_53[1]=mrxi41[0]+mixr41[0];
	auxr_53[2]=mrxr45[0]-mixi45[0];
	auxi_53[2]=mrxi45[0]+mixr45[0];
	auxr_53[3]=mrxr49[0]-mixi49[0];
	auxi_53[3]=mrxr49[0]+mixr49[0];

	auxr_54[0]=mrxr38[0]-mixi38[0];
	auxi_54[0]=mrxi38[0]+mixr38[0];
	auxr_54[1]=mrxr42[0]-mixi42[0];
	auxi_54[1]=mrxi42[0]+mixr42[0];
	auxr_54[2]=mrxr46[0]-mixi46[0];
	auxi_54[2]=mrxi46[0]+mixr46[0];
	auxr_54[3]=mrxr50[0]-mixi50[0];
	auxi_54[3]=mrxr50[0]+mixr50[0];

	auxr_55[0]=mrxr39[0]-mixi39[0];
	auxi_55[0]=mrxi39[0]+mixr39[0];
	auxr_55[1]=mrxr43[0]-mixi43[0];
	auxi_55[1]=mrxi43[0]+mixr43[0];
	auxr_55[2]=mrxr47[0]-mixi47[0];
	auxi_55[2]=mrxi47[0]+mixr47[0];
	auxr_55[3]=mrxr51[0]-mixi51[0];
	auxi_55[3]=mrxr51[0]+mixr51[0];

	auxr_56[0]=mrxr36[1]-mixi36[1];
	auxi_56[0]=mrxi36[1]+mixr36[1];
	auxr_56[1]=mrxr40[1]-mixi40[1];
	auxi_56[1]=mrxi40[1]+mixr40[1];
	auxr_56[2]=mrxr44[1]-mixi44[1];
	auxi_56[2]=mrxi44[1]+mixr44[1];
	auxr_56[3]=mrxr48[1]-mixi48[1];
	auxi_56[3]=mrxr48[1]+mixr48[1];

	auxr_57[0]=mrxr37[1]-mixi37[1];
	auxi_57[0]=mrxi37[1]+mixr37[1];
	auxr_57[1]=mrxr41[1]-mixi41[1];
	auxi_57[1]=mrxi41[1]+mixr41[1];
	auxr_57[2]=mrxr45[1]-mixi45[1];
	auxi_57[2]=mrxi45[1]+mixr45[1];
	auxr_57[3]=mrxr49[1]-mixi49[1];
	auxi_57[3]=mrxr49[1]+mixr49[1];

	auxr_58[0]=mrxr38[1]-mixi38[1];
	auxi_58[0]=mrxi38[1]+mixr38[1];
	auxr_58[1]=mrxr42[1]-mixi42[1];
	auxi_58[1]=mrxi42[1]+mixr42[1];
	auxr_58[2]=mrxr46[1]-mixi46[1];
	auxi_58[2]=mrxi46[1]+mixr46[1];
	auxr_58[3]=mrxr50[1]-mixi50[1];
	auxi_58[3]=mrxr50[1]+mixr50[1];

	auxr_59[0]=mrxr39[1]-mixi39[1];
	auxi_59[0]=mrxi39[1]+mixr39[1];
	auxr_59[1]=mrxr43[1]-mixi43[1];
	auxi_59[1]=mrxi43[1]+mixr43[1];
	auxr_59[2]=mrxr47[1]-mixi47[1];
	auxi_59[2]=mrxi47[1]+mixr47[1];
	auxr_59[3]=mrxr51[1]-mixi51[1];
	auxi_59[3]=mrxr51[1]+mixr51[1];

	auxr_60[0]=mrxr36[2]-mixi36[2];
	auxi_60[0]=mrxi36[2]+mixr36[2];
	auxr_60[1]=mrxr40[2]-mixi40[2];
	auxi_60[1]=mrxi40[2]+mixr40[2];
	auxr_60[2]=mrxr44[2]-mixi44[2];
	auxi_60[2]=mrxi44[2]+mixr44[2];
	auxr_60[3]=mrxr48[2]-mixi48[2];
	auxi_60[3]=mrxr48[2]+mixr48[2];

	auxr_61[0]=mrxr37[2]-mixi37[2];
	auxi_61[0]=mrxi37[2]+mixr37[2];
	auxr_61[1]=mrxr41[2]-mixi41[2];
	auxi_61[1]=mrxi41[2]+mixr41[2];
	auxr_61[2]=mrxr45[2]-mixi45[2];
	auxi_61[2]=mrxi45[2]+mixr45[2];
	auxr_61[3]=mrxr49[2]-mixi49[2];
	auxi_61[3]=mrxr49[2]+mixr49[2];

	auxr_62[0]=mrxr38[2]-mixi38[2];
	auxi_62[0]=mrxi38[2]+mixr38[2];
	auxr_62[1]=mrxr42[2]-mixi42[2];
	auxi_62[1]=mrxi42[2]+mixr42[2];
	auxr_62[2]=mrxr46[2]-mixi46[2];
	auxi_62[2]=mrxi46[2]+mixr46[2];
	auxr_62[3]=mrxr50[2]-mixi50[2];
	auxi_62[3]=mrxr50[2]+mixr50[2];

	auxr_63[0]=mrxr39[2]-mixi39[2];
	auxi_63[0]=mrxi39[2]+mixr39[2];
	auxr_63[1]=mrxr43[2]-mixi43[2];
	auxi_63[1]=mrxi43[2]+mixr43[2];
	auxr_63[2]=mrxr47[2]-mixi47[2];
	auxi_63[2]=mrxi47[2]+mixr47[2];
	auxr_63[3]=mrxr51[2]-mixi51[2];
	auxi_63[3]=mrxr51[2]+mixr51[2];

	auxr_64[0]=mrxr36[3]-mixi36[3];
	auxi_64[0]=mrxi36[3]+mixr36[3];
	auxr_64[1]=mrxr40[3]-mixi40[3];
	auxi_64[1]=mrxi40[3]+mixr40[3];
	auxr_64[2]=mrxr44[3]-mixi44[3];
	auxi_64[2]=mrxi44[3]+mixr44[3];
	auxr_64[3]=mrxr48[3]-mixi48[3];
	auxi_64[3]=mrxr48[3]+mixr48[3];

	auxr_65[0]=mrxr37[3]-mixi37[3];
	auxi_65[0]=mrxi37[3]+mixr37[3];
	auxr_65[1]=mrxr41[3]-mixi41[3];
	auxi_65[1]=mrxi41[3]+mixr41[3];
	auxr_65[2]=mrxr45[3]-mixi45[3];
	auxi_65[2]=mrxi45[3]+mixr45[3];
	auxr_65[3]=mrxr49[3]-mixi49[3];
	auxi_65[3]=mrxr49[3]+mixr49[3];

	auxr_66[0]=mrxr38[3]-mixi38[3];
	auxi_66[0]=mrxi38[3]+mixr38[3];
	auxr_66[1]=mrxr42[3]-mixi42[3];
	auxi_66[1]=mrxi42[3]+mixr42[3];
	auxr_66[2]=mrxr46[3]-mixi46[3];
	auxi_66[2]=mrxi46[3]+mixr46[3];
	auxr_66[3]=mrxr50[3]-mixi50[3];
	auxi_66[3]=mrxr50[3]+mixr50[3];

	auxr_67[0]=mrxr39[3]-mixi39[3];
	auxi_67[0]=mrxi39[3]+mixr39[3];
	auxr_67[1]=mrxr43[3]-mixi43[3];
	auxi_67[1]=mrxi43[3]+mixr43[3];
	auxr_67[2]=mrxr47[3]-mixi47[3];
	auxi_67[2]=mrxi47[3]+mixr47[3];
	auxr_67[3]=mrxr51[3]-mixi51[3];
	auxi_67[3]=mrxr51[3]+mixr51[3];

	for(int i = 0; i < 4; i++) {
			  mrxr52[i]= 0;
			  mrxi52[i]= 0;
			  mixr52[i]= 0;
			  mixi52[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr52[i] += mr_52[i][k] * auxr_52[k];
				mrxi52[i] += mr_52[i][k] * auxi_52[k];
				mixr52[i] += mi_52[i][k] * auxr_52[k];
				mixi52[i] += mi_52[i][k] * auxi_52[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr53[i]= 0;
			  mrxi53[i]= 0;
			  mixr53[i]= 0;
			  mixi53[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr53[i] += mr_53[i][k] * auxr_53[k];
				mrxi53[i] += mr_53[i][k] * auxi_53[k];
				mixr53[i] += mi_53[i][k] * auxr_53[k];
				mixi53[i] += mi_53[i][k] * auxi_53[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr54[i]= 0;
			  mrxi54[i]= 0;
			  mixr54[i]= 0;
			  mixi54[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr54[i] += mr_54[i][k] * auxr_54[k];
				mrxi54[i] += mr_54[i][k] * auxi_54[k];
				mixr54[i] += mi_54[i][k] * auxr_54[k];
				mixi54[i] += mi_54[i][k] * auxi_54[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr55[i]= 0;
			  mrxi55[i]= 0;
			  mixr55[i]= 0;
			  mixi55[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr55[i] += mr_55[i][k] * auxr_55[k];
				mrxi55[i] += mr_55[i][k] * auxi_55[k];
				mixr55[i] += mi_55[i][k] * auxr_55[k];
				mixi55[i] += mi_55[i][k] * auxi_55[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr56[i]= 0;
			  mrxi56[i]= 0;
			  mixr56[i]= 0;
			  mixi56[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr56[i] += mr_56[i][k] * auxr_56[k];
				mrxi56[i] += mr_56[i][k] * auxi_56[k];
				mixr56[i] += mi_56[i][k] * auxr_56[k];
				mixi56[i] += mi_56[i][k] * auxi_56[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr57[i]= 0;
			  mrxi57[i]= 0;
			  mixr57[i]= 0;
			  mixi57[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr57[i] += mr_57[i][k] * auxr_57[k];
				mrxi57[i] += mr_57[i][k] * auxi_57[k];
				mixr57[i] += mi_57[i][k] * auxr_57[k];
				mixi57[i] += mi_57[i][k] * auxi_57[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr58[i]= 0;
			  mrxi58[i]= 0;
			  mixr58[i]= 0;
			  mixi58[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr58[i] += mr_58[i][k] * auxr_58[k];
				mrxi58[i] += mr_58[i][k] * auxi_58[k];
				mixr58[i] += mi_58[i][k] * auxr_58[k];
				mixi58[i] += mi_58[i][k] * auxi_58[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr59[i]= 0;
			  mrxi59[i]= 0;
			  mixr59[i]= 0;
			  mixi59[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr59[i] += mr_59[i][k] * auxr_59[k];
				mrxi59[i] += mr_59[i][k] * auxi_59[k];
				mixr59[i] += mi_59[i][k] * auxr_59[k];
				mixi59[i] += mi_59[i][k] * auxi_59[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr60[i]= 0;
			  mrxi60[i]= 0;
			  mixr60[i]= 0;
			  mixi60[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr60[i] += mr_60[i][k] * auxr_60[k];
				mrxi60[i] += mr_60[i][k] * auxi_60[k];
				mixr60[i] += mi_60[i][k] * auxr_60[k];
				mixi60[i] += mi_60[i][k] * auxi_60[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr61[i]= 0;
			  mrxi61[i]= 0;
			  mixr61[i]= 0;
			  mixi61[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr61[i] += mr_61[i][k] * auxr_61[k];
				mrxi61[i] += mr_61[i][k] * auxi_61[k];
				mixr61[i] += mi_61[i][k] * auxr_61[k];
				mixi61[i] += mi_61[i][k] * auxi_61[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr62[i]= 0;
			  mrxi62[i]= 0;
			  mixr62[i]= 0;
			  mixi62[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr62[i] += mr_62[i][k] * auxr_62[k];
				mrxi62[i] += mr_62[i][k] * auxi_62[k];
				mixr62[i] += mi_62[i][k] * auxr_62[k];
				mixi62[i] += mi_62[i][k] * auxi_62[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr63[i]= 0;
			  mrxi63[i]= 0;
			  mixr63[i]= 0;
			  mixi63[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr63[i] += mr_63[i][k] * auxr_63[k];
				mrxi63[i] += mr_63[i][k] * auxi_63[k];
				mixr63[i] += mi_63[i][k] * auxr_63[k];
				mixi63[i] += mi_63[i][k] * auxi_63[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr64[i]= 0;
			  mrxi64[i]= 0;
			  mixr64[i]= 0;
			  mixi64[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr64[i] += mr_64[i][k] * auxr_64[k];
				mrxi64[i] += mr_64[i][k] * auxi_64[k];
				mixr64[i] += mi_64[i][k] * auxr_64[k];
				mixi64[i] += mi_64[i][k] * auxi_64[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr65[i]= 0;
			  mrxi65[i]= 0;
			  mixr65[i]= 0;
			  mixi65[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr65[i] += mr_65[i][k] * auxr_65[k];
				mrxi65[i] += mr_65[i][k] * auxi_65[k];
				mixr65[i] += mi_65[i][k] * auxr_65[k];
				mixi65[i] += mi_65[i][k] * auxi_65[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr66[i]= 0;
			  mrxi66[i]= 0;
			  mixr66[i]= 0;
			  mixi66[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr66[i] += mr_66[i][k] * auxr_66[k];
				mrxi66[i] += mr_66[i][k] * auxi_66[k];
				mixr66[i] += mi_66[i][k] * auxr_66[k];
				mixi66[i] += mi_66[i][k] * auxi_66[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr67[i]= 0;
			  mrxi67[i]= 0;
			  mixr67[i]= 0;
			  mixi67[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr67[i] += mr_67[i][k] * auxr_67[k];
				mrxi67[i] += mr_67[i][k] * auxi_67[k];
				mixr67[i] += mi_67[i][k] * auxr_67[k];
				mixi67[i] += mi_67[i][k] * auxi_67[k];
			  }
			}
		
	auxr_68[0]=mrxr52[0]-mixi52[0];
	auxi_68[0]=mrxi52[0]+mixr52[0];
	auxr_68[1]=mrxr53[0]-mixi53[0];
	auxi_68[1]=mrxi53[0]+mixr53[0];
	auxr_68[2]=mrxr54[0]-mixi54[0];
	auxi_68[2]=mrxi54[0]+mixr54[0];
	auxr_68[3]=mrxr55[0]-mixi55[0];
	auxi_68[3]=mrxr55[0]+mixr55[0];

	auxr_69[0]=mrxr52[1]-mixi52[1];
	auxi_69[0]=mrxi52[1]+mixr52[1];
	auxr_69[1]=mrxr53[1]-mixi53[1];
	auxi_69[1]=mrxi53[1]+mixr53[1];
	auxr_69[2]=mrxr54[1]-mixi54[1];
	auxi_69[2]=mrxi54[1]+mixr54[1];
	auxr_69[3]=mrxr55[1]-mixi55[1];
	auxi_69[3]=mrxr55[1]+mixr55[1];

	auxr_70[0]=mrxr52[2]-mixi52[2];
	auxi_70[0]=mrxi52[2]+mixr52[2];
	auxr_70[1]=mrxr53[2]-mixi53[2];
	auxi_70[1]=mrxi53[2]+mixr53[2];
	auxr_70[2]=mrxr54[2]-mixi54[2];
	auxi_70[2]=mrxi54[2]+mixr54[2];
	auxr_70[3]=mrxr55[2]-mixi55[2];
	auxi_70[3]=mrxr55[2]+mixr55[2];

	auxr_71[0]=mrxr52[3]-mixi52[3];
	auxi_71[0]=mrxi52[3]+mixr52[3];
	auxr_71[1]=mrxr53[3]-mixi53[3];
	auxi_71[1]=mrxi53[3]+mixr53[3];
	auxr_71[2]=mrxr54[3]-mixi54[3];
	auxi_71[2]=mrxi54[3]+mixr54[3];
	auxr_71[3]=mrxr55[3]-mixi55[3];
	auxi_71[3]=mrxr55[3]+mixr55[3];

	auxr_72[0]=mrxr56[0]-mixi56[0];
	auxi_72[0]=mrxi56[0]+mixr56[0];
	auxr_72[1]=mrxr57[0]-mixi57[0];
	auxi_72[1]=mrxi57[0]+mixr57[0];
	auxr_72[2]=mrxr58[0]-mixi58[0];
	auxi_72[2]=mrxi58[0]+mixr58[0];
	auxr_72[3]=mrxr59[0]-mixi59[0];
	auxi_72[3]=mrxr59[0]+mixr59[0];

	auxr_73[0]=mrxr56[1]-mixi56[1];
	auxi_73[0]=mrxi56[1]+mixr56[1];
	auxr_73[1]=mrxr57[1]-mixi57[1];
	auxi_73[1]=mrxi57[1]+mixr57[1];
	auxr_73[2]=mrxr58[1]-mixi58[1];
	auxi_73[2]=mrxi58[1]+mixr58[1];
	auxr_73[3]=mrxr59[1]-mixi59[1];
	auxi_73[3]=mrxr59[1]+mixr59[1];

	auxr_74[0]=mrxr56[2]-mixi56[2];
	auxi_74[0]=mrxi56[2]+mixr56[2];
	auxr_74[1]=mrxr57[2]-mixi57[2];
	auxi_74[1]=mrxi57[2]+mixr57[2];
	auxr_74[2]=mrxr58[2]-mixi58[2];
	auxi_74[2]=mrxi58[2]+mixr58[2];
	auxr_74[3]=mrxr59[2]-mixi59[2];
	auxi_74[3]=mrxr59[2]+mixr59[2];

	auxr_75[0]=mrxr56[3]-mixi56[3];
	auxi_75[0]=mrxi56[3]+mixr56[3];
	auxr_75[1]=mrxr57[3]-mixi57[3];
	auxi_75[1]=mrxi57[3]+mixr57[3];
	auxr_75[2]=mrxr58[3]-mixi58[3];
	auxi_75[2]=mrxi58[3]+mixr58[3];
	auxr_75[3]=mrxr59[3]-mixi59[3];
	auxi_75[3]=mrxr59[3]+mixr59[3];

	auxr_76[0]=mrxr60[0]-mixi60[0];
	auxi_76[0]=mrxi60[0]+mixr60[0];
	auxr_76[1]=mrxr61[0]-mixi61[0];
	auxi_76[1]=mrxi61[0]+mixr61[0];
	auxr_76[2]=mrxr62[0]-mixi62[0];
	auxi_76[2]=mrxi62[0]+mixr62[0];
	auxr_76[3]=mrxr63[0]-mixi63[0];
	auxi_76[3]=mrxr63[0]+mixr63[0];

	auxr_77[0]=mrxr60[1]-mixi60[1];
	auxi_77[0]=mrxi60[1]+mixr60[1];
	auxr_77[1]=mrxr61[1]-mixi61[1];
	auxi_77[1]=mrxi61[1]+mixr61[1];
	auxr_77[2]=mrxr62[1]-mixi62[1];
	auxi_77[2]=mrxi62[1]+mixr62[1];
	auxr_77[3]=mrxr63[1]-mixi63[1];
	auxi_77[3]=mrxr63[1]+mixr63[1];

	auxr_78[0]=mrxr60[2]-mixi60[2];
	auxi_78[0]=mrxi60[2]+mixr60[2];
	auxr_78[1]=mrxr61[2]-mixi61[2];
	auxi_78[1]=mrxi61[2]+mixr61[2];
	auxr_78[2]=mrxr62[2]-mixi62[2];
	auxi_78[2]=mrxi62[2]+mixr62[2];
	auxr_78[3]=mrxr63[2]-mixi63[2];
	auxi_78[3]=mrxr63[2]+mixr63[2];

	auxr_79[0]=mrxr60[2]-mixi60[3];
	auxi_79[0]=mrxi60[2]+mixr60[3];
	auxr_79[1]=mrxr61[2]-mixi61[3];
	auxi_79[1]=mrxi61[2]+mixr61[3];
	auxr_79[2]=mrxr62[2]-mixi62[3];
	auxi_79[2]=mrxi62[2]+mixr62[3];
	auxr_79[3]=mrxr63[2]-mixi63[3];
	auxi_79[3]=mrxr63[2]+mixr63[3];

	auxr_80[0]=mrxr64[0]-mixi64[0];
	auxi_80[0]=mrxi64[0]+mixr64[0];
	auxr_80[1]=mrxr65[0]-mixi65[0];
	auxi_80[1]=mrxi65[0]+mixr65[0];
	auxr_80[2]=mrxr66[0]-mixi66[0];
	auxi_80[2]=mrxi66[0]+mixr66[0];
	auxr_80[3]=mrxr67[0]-mixi67[0];
	auxi_80[3]=mrxr67[0]+mixr67[0];

	auxr_81[0]=mrxr64[1]-mixi64[1];
	auxi_81[0]=mrxi64[1]+mixr64[1];
	auxr_81[1]=mrxr65[1]-mixi65[1];
	auxi_81[1]=mrxi65[1]+mixr65[1];
	auxr_81[2]=mrxr66[1]-mixi66[1];
	auxi_81[2]=mrxi66[1]+mixr66[1];
	auxr_81[3]=mrxr67[1]-mixi67[1];
	auxi_81[3]=mrxr67[1]+mixr67[1];

	auxr_82[0]=mrxr64[2]-mixi64[2];
	auxi_82[0]=mrxi64[2]+mixr64[2];
	auxr_82[1]=mrxr65[2]-mixi65[2];
	auxi_82[1]=mrxi65[2]+mixr65[2];
	auxr_82[2]=mrxr66[2]-mixi66[2];
	auxi_82[2]=mrxi66[2]+mixr66[2];
	auxr_82[3]=mrxr67[2]-mixi67[2];
	auxi_82[3]=mrxr67[2]+mixr67[2];

	auxr_83[0]=mrxr64[3]-mixi64[3];
	auxi_83[0]=mrxi64[3]+mixr64[3];
	auxr_83[1]=mrxr65[3]-mixi65[3];
	auxi_83[1]=mrxi65[3]+mixr65[3];
	auxr_83[2]=mrxr66[3]-mixi66[3];
	auxi_83[2]=mrxi66[3]+mixr66[3];
	auxr_83[3]=mrxr67[3]-mixi67[3];
	auxi_83[3]=mrxr67[3]+mixr67[3];

	for(int i = 0; i < 4; i++) {
			  mrxr68[i]= 0;
			  mrxi68[i]= 0;
			  mixr68[i]= 0;
			  mixi68[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr68[i] += mr_68[i][k] * auxr_68[k];
				mrxi68[i] += mr_68[i][k] * auxi_68[k];
				mixr68[i] += mi_68[i][k] * auxr_68[k];
				mixi68[i] += mi_68[i][k] * auxi_68[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr69[i]= 0;
			  mrxi69[i]= 0;
			  mixr69[i]= 0;
			  mixi69[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr69[i] += mr_69[i][k] * auxr_69[k];
				mrxi69[i] += mr_69[i][k] * auxi_69[k];
				mixr69[i] += mi_69[i][k] * auxr_69[k];
				mixi69[i] += mi_69[i][k] * auxi_69[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr70[i]= 0;
			  mrxi70[i]= 0;
			  mixr70[i]= 0;
			  mixi70[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr70[i] += mr_70[i][k] * auxr_70[k];
				mrxi70[i] += mr_70[i][k] * auxi_70[k];
				mixr70[i] += mi_70[i][k] * auxr_70[k];
				mixi70[i] += mi_70[i][k] * auxi_70[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr71[i]= 0;
			  mrxi71[i]= 0;
			  mixr71[i]= 0;
			  mixi71[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr71[i] += mr_71[i][k] * auxr_71[k];
				mrxi71[i] += mr_71[i][k] * auxi_71[k];
				mixr71[i] += mi_71[i][k] * auxr_71[k];
				mixi71[i] += mi_71[i][k] * auxi_71[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr72[i]= 0;
			  mrxi72[i]= 0;
			  mixr72[i]= 0;
			  mixi72[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr72[i] += mr_72[i][k] * auxr_72[k];
				mrxi72[i] += mr_72[i][k] * auxi_72[k];
				mixr72[i] += mi_72[i][k] * auxr_72[k];
				mixi72[i] += mi_72[i][k] * auxi_72[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr73[i]= 0;
			  mrxi73[i]= 0;
			  mixr73[i]= 0;
			  mixi73[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr73[i] += mr_73[i][k] * auxr_73[k];
				mrxi73[i] += mr_73[i][k] * auxi_73[k];
				mixr73[i] += mi_73[i][k] * auxr_73[k];
				mixi73[i] += mi_73[i][k] * auxi_73[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr74[i]= 0;
			  mrxi74[i]= 0;
			  mixr74[i]= 0;
			  mixi74[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr74[i] += mr_74[i][k] * auxr_74[k];
				mrxi74[i] += mr_74[i][k] * auxi_74[k];
				mixr74[i] += mi_74[i][k] * auxr_74[k];
				mixi74[i] += mi_74[i][k] * auxi_74[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr75[i]= 0;
			  mrxi75[i]= 0;
			  mixr75[i]= 0;
			  mixi75[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr75[i] += mr_75[i][k] * auxr_75[k];
				mrxi75[i] += mr_75[i][k] * auxi_75[k];
				mixr75[i] += mi_75[i][k] * auxr_75[k];
				mixi75[i] += mi_75[i][k] * auxi_75[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr76[i]= 0;
			  mrxi76[i]= 0;
			  mixr76[i]= 0;
			  mixi76[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr76[i] += mr_76[i][k] * auxr_76[k];
				mrxi76[i] += mr_76[i][k] * auxi_76[k];
				mixr76[i] += mi_76[i][k] * auxr_76[k];
				mixi76[i] += mi_76[i][k] * auxi_76[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr77[i]= 0;
			  mrxi77[i]= 0;
			  mixr77[i]= 0;
			  mixi77[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr77[i] += mr_77[i][k] * auxr_77[k];
				mrxi77[i] += mr_77[i][k] * auxi_77[k];
				mixr77[i] += mi_77[i][k] * auxr_77[k];
				mixi77[i] += mi_77[i][k] * auxi_77[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr78[i]= 0;
			  mrxi78[i]= 0;
			  mixr78[i]= 0;
			  mixi78[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr78[i] += mr_78[i][k] * auxr_78[k];
				mrxi78[i] += mr_78[i][k] * auxi_78[k];
				mixr78[i] += mi_78[i][k] * auxr_78[k];
				mixi78[i] += mi_78[i][k] * auxi_78[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr79[i]= 0;
			  mrxi79[i]= 0;
			  mixr79[i]= 0;
			  mixi79[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr79[i] += mr_79[i][k] * auxr_79[k];
				mrxi79[i] += mr_79[i][k] * auxi_79[k];
				mixr79[i] += mi_79[i][k] * auxr_79[k];
				mixi79[i] += mi_79[i][k] * auxi_79[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr80[i]= 0;
			  mrxi80[i]= 0;
			  mixr80[i]= 0;
			  mixi80[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr80[i] += mr_80[i][k] * auxr_80[k];
				mrxi80[i] += mr_80[i][k] * auxi_80[k];
				mixr80[i] += mi_80[i][k] * auxr_80[k];
				mixi80[i] += mi_80[i][k] * auxi_80[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr81[i]= 0;
			  mrxi81[i]= 0;
			  mixr81[i]= 0;
			  mixi81[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr81[i] += mr_81[i][k] * auxr_81[k];
				mrxi81[i] += mr_81[i][k] * auxi_81[k];
				mixr81[i] += mi_81[i][k] * auxr_81[k];
				mixi81[i] += mi_81[i][k] * auxi_81[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr82[i]= 0;
			  mrxi82[i]= 0;
			  mixr82[i]= 0;
			  mixi82[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr82[i] += mr_82[i][k] * auxr_82[k];
				mrxi82[i] += mr_82[i][k] * auxi_82[k];
				mixr82[i] += mi_82[i][k] * auxr_82[k];
				mixi82[i] += mi_82[i][k] * auxi_82[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr83[i]= 0;
			  mrxi83[i]= 0;
			  mixr83[i]= 0;
			  mixi83[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr83[i] += mr_83[i][k] * auxr_83[k];
				mrxi83[i] += mr_83[i][k] * auxi_83[k];
				mixr83[i] += mi_83[i][k] * auxr_83[k];
				mixi83[i] += mi_83[i][k] * auxi_83[k];
			  }
			}
	

	auxr_84[0]=mrxr68[0]-mixi68[0];
	auxi_84[0]=mrxi68[0]+mixr68[0];
	auxr_84[1]=mrxr70[0]-mixi70[0];
	auxi_84[1]=mrxi70[0]+mixr70[0];
	auxr_84[2]=mrxr72[0]-mixi72[0];
	auxi_84[2]=mrxi72[0]+mixr72[0];
	auxr_84[3]=mrxr74[0]-mixi74[0];
	auxi_84[3]=mrxi74[0]+mixr74[0];

	auxr_85[0]=mrxr68[1]-mixi68[1];
	auxi_85[0]=mrxi68[1]+mixr68[1];
	auxr_85[1]=mrxr70[1]-mixi70[1];
	auxi_85[1]=mrxi70[1]+mixr70[1];
	auxr_85[2]=mrxr72[1]-mixi72[1];
	auxi_85[2]=mrxi72[1]+mixr72[1];
	auxr_85[3]=mrxr74[1]-mixi74[1];
	auxi_85[3]=mrxi74[1]+mixr74[1];

	auxr_86[0]=mrxr68[2]-mixi68[2];
	auxi_86[0]=mrxi68[2]+mixr68[2];
	auxr_86[1]=mrxr70[2]-mixi70[2];
	auxi_86[1]=mrxi70[2]+mixr70[2];
	auxr_86[2]=mrxr72[2]-mixi72[2];
	auxi_86[2]=mrxi72[2]+mixr72[2];
	auxr_86[3]=mrxr74[2]-mixi74[2];
	auxi_86[3]=mrxi74[2]+mixr74[2];

	auxr_87[0]=mrxr68[3]-mixi68[3];
	auxi_87[0]=mrxi68[3]+mixr68[3];
	auxr_87[1]=mrxr70[3]-mixi70[3];
	auxi_87[1]=mrxi70[3]+mixr70[3];
	auxr_87[2]=mrxr72[3]-mixi72[3];
	auxi_87[2]=mrxi72[3]+mixr72[3];
	auxr_87[3]=mrxr74[3]-mixi74[3];
	auxi_87[3]=mrxi74[3]+mixr74[3];

	auxr_88[0]=mrxr70[0]-mixi69[0];
	auxi_88[0]=mrxi70[0]+mixr69[0];
	auxr_88[1]=mrxr71[0]-mixi71[0];
	auxi_88[1]=mrxi71[0]+mixr71[0];
	auxr_88[2]=mrxr73[0]-mixi73[0];
	auxi_88[2]=mrxi73[0]+mixr73[0];
	auxr_88[3]=mrxr75[0]-mixi75[0];
	auxi_88[3]=mrxi75[0]+mixr75[0];

	auxr_89[0]=mrxr70[1]-mixi69[1];
	auxi_89[0]=mrxi70[1]+mixr69[1];
	auxr_89[1]=mrxr71[1]-mixi71[1];
	auxi_89[1]=mrxi71[1]+mixr71[1];
	auxr_89[2]=mrxr73[1]-mixi73[1];
	auxi_89[2]=mrxi73[1]+mixr73[1];
	auxr_89[3]=mrxr75[1]-mixi75[1];
	auxi_89[3]=mrxi75[1]+mixr75[1];

	auxr_90[0]=mrxr70[2]-mixi69[2];
	auxi_90[0]=mrxi70[2]+mixr69[2];
	auxr_90[1]=mrxr71[2]-mixi71[2];
	auxi_90[1]=mrxi71[2]+mixr71[2];
	auxr_90[2]=mrxr73[2]-mixi73[2];
	auxi_90[2]=mrxi73[2]+mixr73[2];
	auxr_90[3]=mrxr75[2]-mixi75[2];
	auxi_90[3]=mrxi75[2]+mixr75[2];

	auxr_91[0]=mrxr70[3]-mixi69[3];
	auxi_91[0]=mrxi70[3]+mixr69[3];
	auxr_91[1]=mrxr71[3]-mixi71[3];
	auxi_91[1]=mrxi71[3]+mixr71[3];
	auxr_91[2]=mrxr73[3]-mixi73[3];
	auxi_91[2]=mrxi73[3]+mixr73[3];
	auxr_91[3]=mrxr75[3]-mixi75[3];
	auxi_91[3]=mrxi75[3]+mixr75[3];

	auxr_92[0]=mrxr76[0]-mixi76[0];
	auxi_92[0]=mrxi76[0]+mixr76[0];
	auxr_92[1]=mrxr78[0]-mixi78[0];
	auxi_92[1]=mrxi78[0]+mixr78[0];
	auxr_92[2]=mrxr80[0]-mixi80[0];
	auxi_92[2]=mrxi80[0]+mixr80[0];
	auxr_92[3]=mrxr82[0]-mixi82[0];
	auxi_92[3]=mrxi82[0]+mixr82[0];

	auxr_93[0]=mrxr76[1]-mixi76[1];
	auxi_93[0]=mrxi76[1]+mixr76[1];
	auxr_93[1]=mrxr78[1]-mixi78[1];
	auxi_93[1]=mrxi78[1]+mixr78[1];
	auxr_93[2]=mrxr80[1]-mixi80[1];
	auxi_93[2]=mrxi80[1]+mixr80[1];
	auxr_93[3]=mrxr82[1]-mixi82[1];
	auxi_93[3]=mrxi82[1]+mixr82[1];

	auxr_94[0]=mrxr76[2]-mixi76[2];
	auxi_94[0]=mrxi76[2]+mixr76[2];
	auxr_94[1]=mrxr78[2]-mixi78[2];
	auxi_94[1]=mrxi78[2]+mixr78[2];
	auxr_94[2]=mrxr80[2]-mixi80[2];
	auxi_94[2]=mrxi80[2]+mixr80[2];
	auxr_94[3]=mrxr82[2]-mixi82[2];
	auxi_94[3]=mrxi82[2]+mixr82[2];

	auxr_95[0]=mrxr76[3]-mixi76[3];
	auxi_95[0]=mrxi76[3]+mixr76[3];
	auxr_95[1]=mrxr78[3]-mixi78[3];
	auxi_95[1]=mrxi78[3]+mixr78[3];
	auxr_95[2]=mrxr80[3]-mixi80[3];
	auxi_95[2]=mrxi80[3]+mixr80[3];
	auxr_95[3]=mrxr82[3]-mixi82[3];
	auxi_95[3]=mrxi82[3]+mixr82[3];

	auxr_96[0]=mrxr77[0]-mixi77[0];
	auxi_96[0]=mrxi77[0]+mixr77[0];
	auxr_96[1]=mrxr79[0]-mixi79[0];
	auxi_96[1]=mrxi79[0]+mixr79[0];
	auxr_96[2]=mrxr81[0]-mixi81[0];
	auxi_96[2]=mrxi81[0]+mixr81[0];
	auxr_96[3]=mrxr83[0]-mixi83[0];
	auxi_96[3]=mrxi83[0]+mixr83[0];

	auxr_97[0]=mrxr77[1]-mixi77[1];
	auxi_97[0]=mrxi77[1]+mixr77[1];
	auxr_97[1]=mrxr79[1]-mixi79[1];
	auxi_97[1]=mrxi79[1]+mixr79[1];
	auxr_97[2]=mrxr81[1]-mixi81[1];
	auxi_97[2]=mrxi81[1]+mixr81[1];
	auxr_97[3]=mrxr83[1]-mixi83[1];
	auxi_97[3]=mrxi83[1]+mixr83[1];

	auxr_98[0]=mrxr77[2]-mixi77[2];
	auxi_98[0]=mrxi77[2]+mixr77[2];
	auxr_98[1]=mrxr79[2]-mixi79[2];
	auxi_98[1]=mrxi79[2]+mixr79[2];
	auxr_98[2]=mrxr81[2]-mixi81[2];
	auxi_98[2]=mrxi81[2]+mixr81[2];
	auxr_98[3]=mrxr83[2]-mixi83[2];
	auxi_98[3]=mrxi83[2]+mixr83[2];

	auxr_99[0]=mrxr77[3]-mixi77[3];
	auxi_99[0]=mrxi77[3]+mixr77[3];
	auxr_99[1]=mrxr79[3]-mixi79[3];
	auxi_99[1]=mrxi79[3]+mixr79[3];
	auxr_99[2]=mrxr81[3]-mixi81[3];
	auxi_99[2]=mrxi81[3]+mixr81[3];
	auxr_99[3]=mrxr83[3]-mixi83[3];
	auxi_99[3]=mrxi83[3]+mixr83[3];


	for(int i = 0; i < 4; i++) {
				  mrxr84[i]= 0;
				  mrxi84[i]= 0;
				  mixr84[i]= 0;
				  mixi84[i]= 0;
				  for(int k = 0; k < 4; k++) {
					mrxr84[i] += mr_84[i][k] * auxr_84[k];
					mrxi84[i] += mr_84[i][k] * auxi_84[k];
					mixr84[i] += mi_84[i][k] * auxr_84[k];
					mixi84[i] += mi_84[i][k] * auxi_84[k];
				  }
				}
	for(int i = 0; i < 4; i++) {
			  mrxr85[i]= 0;
			  mrxi85[i]= 0;
			  mixr85[i]= 0;
			  mixi85[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr85[i] += mr_85[i][k] * auxr_85[k];
				mrxi85[i] += mr_85[i][k] * auxi_85[k];
				mixr85[i] += mi_85[i][k] * auxr_85[k];
				mixi85[i] += mi_85[i][k] * auxi_85[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr86[i]= 0;
			  mrxi86[i]= 0;
			  mixr86[i]= 0;
			  mixi86[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr86[i] += mr_86[i][k] * auxr_86[k];
				mrxi86[i] += mr_86[i][k] * auxi_86[k];
				mixr86[i] += mi_86[i][k] * auxr_86[k];
				mixi86[i] += mi_86[i][k] * auxi_86[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr87[i]= 0;
			  mrxi87[i]= 0;
			  mixr87[i]= 0;
			  mixi87[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr87[i] += mr_87[i][k] * auxr_87[k];
				mrxi87[i] += mr_87[i][k] * auxi_87[k];
				mixr87[i] += mi_87[i][k] * auxr_87[k];
				mixi87[i] += mi_87[i][k] * auxi_87[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr88[i]= 0;
			  mrxi88[i]= 0;
			  mixr88[i]= 0;
			  mixi88[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr88[i] += mr_88[i][k] * auxr_88[k];
				mrxi88[i] += mr_88[i][k] * auxi_88[k];
				mixr88[i] += mi_88[i][k] * auxr_88[k];
				mixi88[i] += mi_88[i][k] * auxi_88[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr89[i]= 0;
			  mrxi89[i]= 0;
			  mixr89[i]= 0;
			  mixi89[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr89[i] += mr_89[i][k] * auxr_89[k];
				mrxi89[i] += mr_89[i][k] * auxi_89[k];
				mixr89[i] += mi_89[i][k] * auxr_89[k];
				mixi89[i] += mi_89[i][k] * auxi_89[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr90[i]= 0;
			  mrxi90[i]= 0;
			  mixr90[i]= 0;
			  mixi90[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr90[i] += mr_90[i][k] * auxr_90[k];
				mrxi90[i] += mr_90[i][k] * auxi_90[k];
				mixr90[i] += mi_90[i][k] * auxr_90[k];
				mixi90[i] += mi_90[i][k] * auxi_90[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr91[i]= 0;
			  mrxi91[i]= 0;
			  mixr91[i]= 0;
			  mixi91[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr91[i] += mr_91[i][k] * auxr_91[k];
				mrxi91[i] += mr_91[i][k] * auxi_91[k];
				mixr91[i] += mi_91[i][k] * auxr_91[k];
				mixi91[i] += mi_91[i][k] * auxi_91[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr92[i]= 0;
			  mrxi92[i]= 0;
			  mixr92[i]= 0;
			  mixi92[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr92[i] += mr_92[i][k] * auxr_92[k];
				mrxi92[i] += mr_92[i][k] * auxi_92[k];
				mixr92[i] += mi_92[i][k] * auxr_92[k];
				mixi92[i] += mi_92[i][k] * auxi_92[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr93[i]= 0;
			  mrxi93[i]= 0;
			  mixr93[i]= 0;
			  mixi93[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr93[i] += mr_93[i][k] * auxr_93[k];
				mrxi93[i] += mr_93[i][k] * auxi_93[k];
				mixr93[i] += mi_93[i][k] * auxr_93[k];
				mixi93[i] += mi_93[i][k] * auxi_93[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr94[i]= 0;
			  mrxi94[i]= 0;
			  mixr94[i]= 0;
			  mixi94[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr94[i] += mr_94[i][k] * auxr_94[k];
				mrxi94[i] += mr_94[i][k] * auxi_94[k];
				mixr94[i] += mi_94[i][k] * auxr_94[k];
				mixi94[i] += mi_94[i][k] * auxi_94[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr95[i]= 0;
			  mrxi95[i]= 0;
			  mixr95[i]= 0;
			  mixi95[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr95[i] += mr_95[i][k] * auxr_95[k];
				mrxi95[i] += mr_95[i][k] * auxi_95[k];
				mixr95[i] += mi_95[i][k] * auxr_95[k];
				mixi95[i] += mi_95[i][k] * auxi_95[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr96[i]= 0;
			  mrxi96[i]= 0;
			  mixr96[i]= 0;
			  mixi96[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr96[i] += mr_96[i][k] * auxr_96[k];
				mrxi96[i] += mr_96[i][k] * auxi_96[k];
				mixr96[i] += mi_96[i][k] * auxr_96[k];
				mixi96[i] += mi_96[i][k] * auxi_96[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr97[i]= 0;
			  mrxi97[i]= 0;
			  mixr97[i]= 0;
			  mixi97[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr97[i] += mr_97[i][k] * auxr_97[k];
				mrxi97[i] += mr_97[i][k] * auxi_97[k];
				mixr97[i] += mi_97[i][k] * auxr_97[k];
				mixi97[i] += mi_97[i][k] * auxi_97[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr98[i]= 0;
			  mrxi98[i]= 0;
			  mixr98[i]= 0;
			  mixi98[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr98[i] += mr_98[i][k] * auxr_98[k];
				mrxi98[i] += mr_98[i][k] * auxi_98[k];
				mixr98[i] += mi_98[i][k] * auxr_98[k];
				mixi98[i] += mi_98[i][k] * auxi_98[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr99[i]= 0;
			  mrxi99[i]= 0;
			  mixr99[i]= 0;
			  mixi99[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr99[i] += mr_99[i][k] * auxr_99[k];
				mrxi99[i] += mr_99[i][k] * auxi_99[k];
				mixr99[i] += mi_99[i][k] * auxr_99[k];
				mixi99[i] += mi_99[i][k] * auxi_99[k];
			  }
			}


	auxr_100[0]=mrxr84[0]-mixi84[0];
	auxi_100[0]=mrxi84[0]+mixr84[0];
	auxr_100[1]=mrxr86[0]-mixi86[0];
	auxi_100[1]=mrxi86[0]+mixr86[0];
	auxr_100[2]=mrxr88[0]-mixi88[0];
	auxi_100[2]=mrxi88[0]+mixr88[0];
	auxr_100[3]=mrxr90[0]-mixi90[0];
	auxi_100[3]=mrxi90[0]+mixr90[0];

	auxr_101[0]=mrxr85[0]-mixi85[0];
	auxi_101[0]=mrxi85[0]+mixr85[0];
	auxr_101[1]=mrxr87[0]-mixi87[0];
	auxi_101[1]=mrxi87[0]+mixr87[0];
	auxr_101[2]=mrxr89[0]-mixi89[0];
	auxi_101[2]=mrxi89[0]+mixr89[0];
	auxr_101[3]=mrxr91[0]-mixi91[0];
	auxi_101[3]=mrxi91[0]+mixr91[0];

	auxr_102[0]=mrxr84[1]-mixi84[1];
	auxi_102[0]=mrxi84[1]+mixr84[1];
	auxr_102[1]=mrxr86[1]-mixi86[1];
	auxi_102[1]=mrxi86[1]+mixr86[1];
	auxr_102[2]=mrxr88[1]-mixi88[1];
	auxi_102[2]=mrxi88[1]+mixr88[1];
	auxr_102[3]=mrxr90[1]-mixi90[1];
	auxi_102[3]=mrxi90[1]+mixr90[1];

	auxr_103[0]=mrxr85[1]-mixi85[1];
	auxi_103[0]=mrxi85[1]+mixr85[1];
	auxr_103[1]=mrxr87[1]-mixi87[1];
	auxi_103[1]=mrxi87[1]+mixr87[1];
	auxr_103[2]=mrxr89[1]-mixi89[1];
	auxi_103[2]=mrxi89[1]+mixr89[1];
	auxr_103[3]=mrxr91[1]-mixi91[1];
	auxi_103[3]=mrxi91[1]+mixr91[1];

	auxr_104[0]=mrxr84[2]-mixi84[2];
	auxi_104[0]=mrxi84[2]+mixr84[2];
	auxr_104[1]=mrxr86[2]-mixi86[2];
	auxi_104[1]=mrxi86[2]+mixr86[2];
	auxr_104[2]=mrxr88[2]-mixi88[2];
	auxi_104[2]=mrxi88[2]+mixr88[2];
	auxr_104[3]=mrxr90[2]-mixi90[2];
	auxi_104[3]=mrxi90[2]+mixr90[2];

	auxr_105[0]=mrxr85[2]-mixi85[3];
	auxi_105[0]=mrxi85[2]+mixr85[3];
	auxr_105[1]=mrxr87[2]-mixi87[3];
	auxi_105[1]=mrxi87[2]+mixr87[3];
	auxr_105[2]=mrxr89[2]-mixi89[3];
	auxi_105[2]=mrxi89[2]+mixr89[3];
	auxr_105[3]=mrxr91[2]-mixi91[2];
	auxi_105[3]=mrxi91[2]+mixr91[2];

	auxr_106[0]=mrxr84[3]-mixi84[3];
	auxi_106[0]=mrxi84[3]+mixr84[3];
	auxr_106[1]=mrxr86[3]-mixi86[3];
	auxi_106[1]=mrxi86[3]+mixr86[3];
	auxr_106[2]=mrxr88[3]-mixi88[3];
	auxi_106[2]=mrxi88[3]+mixr88[3];
	auxr_106[3]=mrxr90[3]-mixi90[3];
	auxi_106[3]=mrxi90[3]+mixr90[3];

	auxr_107[0]=mrxr85[3]-mixi85[3];
	auxi_107[0]=mrxi85[3]+mixr85[3];
	auxr_107[1]=mrxr87[3]-mixi87[3];
	auxi_107[1]=mrxi87[3]+mixr87[3];
	auxr_107[2]=mrxr89[3]-mixi89[3];
	auxi_107[2]=mrxi89[3]+mixr89[3];
	auxr_107[3]=mrxr91[3]-mixi91[3];
	auxi_107[3]=mrxi91[3]+mixr91[3];

	auxr_108[0]=mrxr92[0]-mixi92[0];
	auxi_108[0]=mrxi92[0]+mixr92[0];
	auxr_108[1]=mrxr94[0]-mixi94[0];
	auxi_108[1]=mrxi94[0]+mixr94[0];
	auxr_108[2]=mrxr96[0]-mixi96[0];
	auxi_108[2]=mrxi96[0]+mixr96[0];
	auxr_108[3]=mrxr98[0]-mixi98[0];
	auxi_108[3]=mrxi98[0]+mixr98[0];

	auxr_109[0]=mrxr93[0]-mixi93[0];
	auxi_109[0]=mrxi93[0]+mixr93[0];
	auxr_109[1]=mrxr95[0]-mixi95[0];
	auxi_109[1]=mrxi95[0]+mixr95[0];
	auxr_109[2]=mrxr97[0]-mixi97[0];
	auxi_109[2]=mrxi97[0]+mixr97[0];
	auxr_109[3]=mrxr99[0]-mixi99[0];
	auxi_109[3]=mrxi99[0]+mixr99[0];

	auxr_110[0]=mrxr92[1]-mixi92[1];
	auxi_110[0]=mrxi92[1]+mixr92[1];
	auxr_110[1]=mrxr94[1]-mixi94[1];
	auxi_110[1]=mrxi94[1]+mixr94[1];
	auxr_110[2]=mrxr96[1]-mixi96[1];
	auxi_110[2]=mrxi96[1]+mixr96[1];
	auxr_110[3]=mrxr98[1]-mixi98[1];
	auxi_110[3]=mrxi98[1]+mixr98[1];

	auxr_111[0]=mrxr93[1]-mixi93[1];
	auxi_111[0]=mrxi93[1]+mixr93[1];
	auxr_111[1]=mrxr95[1]-mixi95[1];
	auxi_111[1]=mrxi95[1]+mixr95[1];
	auxr_111[2]=mrxr97[1]-mixi97[1];
	auxi_111[2]=mrxi97[1]+mixr97[1];
	auxr_111[3]=mrxr99[1]-mixi99[1];
	auxi_111[3]=mrxi99[1]+mixr99[1];

	auxr_112[0]=mrxr92[2]-mixi92[2];
	auxi_112[0]=mrxi92[2]+mixr92[2];
	auxr_112[1]=mrxr94[2]-mixi94[2];
	auxi_112[1]=mrxi94[2]+mixr94[2];
	auxr_112[2]=mrxr96[2]-mixi96[2];
	auxi_112[2]=mrxi96[2]+mixr96[2];
	auxr_112[3]=mrxr98[2]-mixi98[2];
	auxi_112[3]=mrxi98[2]+mixr98[2];

	auxr_113[0]=mrxr93[2]-mixi93[3];
	auxi_113[0]=mrxi93[2]+mixr93[3];
	auxr_113[1]=mrxr95[2]-mixi95[3];
	auxi_113[1]=mrxi95[2]+mixr95[3];
	auxr_113[2]=mrxr97[2]-mixi97[3];
	auxi_113[2]=mrxi97[2]+mixr97[3];
	auxr_113[3]=mrxr99[2]-mixi99[2];
	auxi_113[3]=mrxi99[2]+mixr99[2];

	auxr_114[0]=mrxr92[3]-mixi92[3];
	auxi_114[0]=mrxi92[3]+mixr92[3];
	auxr_114[1]=mrxr94[3]-mixi94[3];
	auxi_114[1]=mrxi94[3]+mixr94[3];
	auxr_114[2]=mrxr96[3]-mixi96[3];
	auxi_114[2]=mrxi96[3]+mixr96[3];
	auxr_114[3]=mrxr98[3]-mixi98[3];
	auxi_114[3]=mrxi98[3]+mixr98[3];

	auxr_115[0]=mrxr93[3]-mixi93[3];
	auxi_115[0]=mrxi93[3]+mixr93[3];
	auxr_115[1]=mrxr95[3]-mixi95[3];
	auxi_115[1]=mrxi95[3]+mixr95[3];
	auxr_115[2]=mrxr97[3]-mixi97[3];
	auxi_115[2]=mrxi97[3]+mixr97[3];
	auxr_115[3]=mrxr99[3]-mixi99[3];
	auxi_115[3]=mrxi99[3]+mixr99[3];


	for(int i = 0; i < 4; i++) {
					  mrxr100[i]= 0;
					  mrxi100[i]= 0;
					  mixr100[i]= 0;
					  mixi100[i]= 0;
					  for(int k = 0; k < 4; k++) {
						mrxr100[i] += mr_100[i][k] * auxr_100[k];
						mrxi100[i] += mr_100[i][k] * auxi_100[k];
						mixr100[i] += mi_100[i][k] * auxr_100[k];
						mixi100[i] += mi_100[i][k] * auxi_100[k];
					  }
					}
	for(int i = 0; i < 4; i++) {
			  mrxr101[i]= 0;
			  mrxi101[i]= 0;
			  mixr101[i]= 0;
			  mixi101[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr101[i] += mr_101[i][k] * auxr_101[k];
				mrxi101[i] += mr_101[i][k] * auxi_101[k];
				mixr101[i] += mi_101[i][k] * auxr_101[k];
				mixi101[i] += mi_101[i][k] * auxi_101[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr102[i]= 0;
			  mrxi102[i]= 0;
			  mixr102[i]= 0;
			  mixi102[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr102[i] += mr_102[i][k] * auxr_102[k];
				mrxi102[i] += mr_102[i][k] * auxi_102[k];
				mixr102[i] += mi_102[i][k] * auxr_102[k];
				mixi102[i] += mi_102[i][k] * auxi_102[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr103[i]= 0;
			  mrxi103[i]= 0;
			  mixr103[i]= 0;
			  mixi103[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr103[i] += mr_103[i][k] * auxr_103[k];
				mrxi103[i] += mr_103[i][k] * auxi_103[k];
				mixr103[i] += mi_103[i][k] * auxr_103[k];
				mixi103[i] += mi_103[i][k] * auxi_103[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr104[i]= 0;
			  mrxi104[i]= 0;
			  mixr104[i]= 0;
			  mixi104[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr104[i] += mr_104[i][k] * auxr_104[k];
				mrxi104[i] += mr_104[i][k] * auxi_104[k];
				mixr104[i] += mi_104[i][k] * auxr_104[k];
				mixi104[i] += mi_104[i][k] * auxi_104[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr105[i]= 0;
			  mrxi105[i]= 0;
			  mixr105[i]= 0;
			  mixi105[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr105[i] += mr_105[i][k] * auxr_105[k];
				mrxi105[i] += mr_105[i][k] * auxi_105[k];
				mixr105[i] += mi_105[i][k] * auxr_105[k];
				mixi105[i] += mi_105[i][k] * auxi_105[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr106[i]= 0;
			  mrxi106[i]= 0;
			  mixr106[i]= 0;
			  mixi106[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr106[i] += mr_106[i][k] * auxr_106[k];
				mrxi106[i] += mr_106[i][k] * auxi_106[k];
				mixr106[i] += mi_106[i][k] * auxr_106[k];
				mixi106[i] += mi_106[i][k] * auxi_106[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr107[i]= 0;
			  mrxi107[i]= 0;
			  mixr107[i]= 0;
			  mixi107[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr107[i] += mr_107[i][k] * auxr_107[k];
				mrxi107[i] += mr_107[i][k] * auxi_107[k];
				mixr107[i] += mi_107[i][k] * auxr_107[k];
				mixi107[i] += mi_107[i][k] * auxi_107[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr108[i]= 0;
			  mrxi108[i]= 0;
			  mixr108[i]= 0;
			  mixi108[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr108[i] += mr_108[i][k] * auxr_108[k];
				mrxi108[i] += mr_108[i][k] * auxi_108[k];
				mixr108[i] += mi_108[i][k] * auxr_108[k];
				mixi108[i] += mi_108[i][k] * auxi_108[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr109[i]= 0;
			  mrxi109[i]= 0;
			  mixr109[i]= 0;
			  mixi109[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr109[i] += mr_109[i][k] * auxr_109[k];
				mrxi109[i] += mr_109[i][k] * auxi_109[k];
				mixr109[i] += mi_109[i][k] * auxr_109[k];
				mixi109[i] += mi_109[i][k] * auxi_109[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr110[i]= 0;
			  mrxi110[i]= 0;
			  mixr110[i]= 0;
			  mixi110[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr110[i] += mr_110[i][k] * auxr_110[k];
				mrxi110[i] += mr_110[i][k] * auxi_110[k];
				mixr110[i] += mi_110[i][k] * auxr_110[k];
				mixi110[i] += mi_110[i][k] * auxi_110[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr111[i]= 0;
			  mrxi111[i]= 0;
			  mixr111[i]= 0;
			  mixi111[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr111[i] += mr_111[i][k] * auxr_111[k];
				mrxi111[i] += mr_111[i][k] * auxi_111[k];
				mixr111[i] += mi_111[i][k] * auxr_111[k];
				mixi111[i] += mi_111[i][k] * auxi_111[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr112[i]= 0;
			  mrxi112[i]= 0;
			  mixr112[i]= 0;
			  mixi112[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr112[i] += mr_112[i][k] * auxr_112[k];
				mrxi112[i] += mr_112[i][k] * auxi_112[k];
				mixr112[i] += mi_112[i][k] * auxr_112[k];
				mixi112[i] += mi_112[i][k] * auxi_112[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr113[i]= 0;
			  mrxi113[i]= 0;
			  mixr113[i]= 0;
			  mixi113[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr113[i] += mr_113[i][k] * auxr_113[k];
				mrxi113[i] += mr_113[i][k] * auxi_113[k];
				mixr113[i] += mi_113[i][k] * auxr_113[k];
				mixi113[i] += mi_113[i][k] * auxi_113[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr114[i]= 0;
			  mrxi114[i]= 0;
			  mixr114[i]= 0;
			  mixi114[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr114[i] += mr_114[i][k] * auxr_114[k];
				mrxi114[i] += mr_114[i][k] * auxi_114[k];
				mixr114[i] += mi_114[i][k] * auxr_114[k];
				mixi114[i] += mi_114[i][k] * auxi_114[k];
			  }
			}
	for(int i = 0; i < 4; i++) {
			  mrxr115[i]= 0;
			  mrxi115[i]= 0;
			  mixr115[i]= 0;
			  mixi115[i]= 0;
			  for(int k = 0; k < 4; k++) {
				mrxr115[i] += mr_115[i][k] * auxr_115[k];
				mrxi115[i] += mr_115[i][k] * auxi_115[k];
				mixr115[i] += mi_115[i][k] * auxr_115[k];
				mixi115[i] += mi_115[i][k] * auxi_115[k];
			  }
			}

	for(int i=0; i<4; i++){
			outr[8*i]=mrxr100[i]-mixi100[i];
			outi[8*i]=mrxi100[i]+mixr100[i];
			outr[8*i+1]=mrxr101[i]-mixi101[i];
			outi[8*i+1]=mrxi101[i]+mixr101[i];
			outr[8*i+2]=mrxr102[i]-mixi102[i];
			outi[8*i+2]=mrxi102[i]+mixr102[i];
			outr[8*i+3]=mrxr103[i]-mixi103[i];
			outi[8*i+3]=mrxi103[i]+mixr103[i];
			outr[8*i+4]=mrxr104[i]-mixi104[i];
			outi[8*i+4]=mrxi104[i]+mixr104[i];
			outr[8*i+5]=mrxr105[i]-mixi105[i];
			outi[8*i+5]=mrxi105[i]+mixr105[i];
			outr[8*i+6]=mrxr106[i]-mixi106[i];
			outi[8*i+6]=mrxi106[i]+mixr106[i];
			outr[8*i+7]=mrxr107[i]-mixi107[i];
			outi[8*i+7]=mrxi107[i]+mixr107[i];

			outr[8*i+112]=mrxr108[i]-mixi108[i];
			outi[8*i+112]=mrxi108[i]+mixr108[i];
			outr[8*i+1+112]=mrxr109[i]-mixi109[i];
			outi[8*i+1+112]=mrxi109[i]+mixr109[i];
			outr[8*i+2+112]=mrxr110[i]-mixi110[i];
			outi[8*i+2+112]=mrxi110[i]+mixr110[i];
			outr[8*i+3+112]=mrxr111[i]-mixi111[i];
			outi[8*i+3+112]=mrxi111[i]+mixr111[i];
			outr[8*i+4+112]=mrxr112[i]-mixi112[i];
			outi[8*i+4+112]=mrxi112[i]+mixr112[i];
			outr[8*i+5+112]=mrxr113[i]-mixi113[i];
			outi[8*i+5+112]=mrxi113[i]+mixr113[i];
			outr[8*i+6+112]=mrxr114[i]-mixi114[i];
			outi[8*i+6+112]=mrxi114[i]+mixr114[i];
			outr[8*i+7+112]=mrxr115[i]-mixi115[i];
			outi[8*i+7+112]=mrxi115[i]+mixr115[i];

		}
}


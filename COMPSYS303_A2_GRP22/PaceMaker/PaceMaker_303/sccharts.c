/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char AVI_TO;
char URI_stop;
char VSense;
char ASense;
char VRP_TO;
char URI_TO;
char LRI_TO;
char AEI_TO;
char PVARP_TO;
char VPace;
char APace;
char VRP_start;
char LRI_start;
char URI_start;
char AEI_start;
char PVARP_start;
char AVI_start;
char LRI_stop;
char AEI_stop;
char AVI_stop;
char _DDD_Pacemaker_local_URI_ex;
char _DDD_Pacemaker_local_PVARP_ex;
char _DDD_Pacemaker_local_VRP_ex;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char g9;
char g10;
char g11;
char g12;
char PRE_g12;
char g13;
char g14;
char g15;
char PRE_g15;
char g16;
char g16b;
char g17;
char PRE_g17;
char g18;
char g19;
char g20;
char g21;
char PRE_g21;
char g21b;
char g22;
char g22b;
char g23;
char g24;
char g25;
char g26;
char PRE_g26;
char g27;
char g28;
char g29;
char PRE_g29;
char g30;
char g30b;
char g31;
char PRE_g31;
char g32;
char g33;
char g34;
char PRE_g34;
char g35;
char g35b;
char g36;
char g37;
char g38;
char g39;
char g40;
char g41;
char g42;
char g43;
char PRE_g43;
char g44;
char g45;
char g46;
char PRE_g46;
char g47;
char g47b;
char g48;
char PRE_g48;
char g49;
char g50;
char g51;
char g52;
char g53;
char g54;
char g55;
char g56;
char g57;
char PRE_g57;
char g58;
char g59;
char g60;
char PRE_g60;
char g61;
char g62;
char g63;
char g64;
char g65;
char g66;
char PRE_g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char PRE_g72;
char g73;
char g73b;
char g74;
char g75;
char g76;
char PRE_g76;
char g77;
char g77b;
char g78;
char g79;
char g80;
char g81;
char g82;
char PRE_g82;
char g83;
char g84;
char g85;
char g86;
char g87;
char PRE_g87;
char g88;
char g89;
char g90;
char _GO;
char _cg9;
char _cg4;
char _cg7;
char _cg23;
char _cg13;
char _cg16;
char _cg20;
char _cg18;
char _cg40;
char _cg27;
char _cg30;
char _cg38;
char _cg32;
char _cg36;
char _cg54;
char _cg44;
char _cg47;
char _cg52;
char _cg49;
char _cg51;
char _cg63;
char _cg58;
char _cg61;
char _cg73;
char _cg79;
char _cg67;
char _cg75;
char _cg70;
char _cg74;
char _cg77;
char g10_e1;
char g24_e2;
char g41_e3;
char g55_e4;
char g64_e5;
char g80_e6;
char g84_e7;
char g85_e1_fix;
char g85_e1;
char g89_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g12 = 0;
   PRE_g15 = 0;
   PRE_g17 = 0;
   PRE_g21 = 0;
   PRE_g26 = 0;
   PRE_g29 = 0;
   PRE_g31 = 0;
   PRE_g34 = 0;
   PRE_g43 = 0;
   PRE_g46 = 0;
   PRE_g48 = 0;
   PRE_g57 = 0;
   PRE_g60 = 0;
   PRE_g66 = 0;
   PRE_g69 = 0;
   PRE_g72 = 0;
   PRE_g76 = 0;
   PRE_g82 = 0;
   PRE_g87 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g2 = g1;
      g88 =(PRE_g87);
      g86 = g0;
      g87 =(g88||g86);
      if(g87){
         VPace = 0;
         APace = 0;
         VRP_start = 0;
         LRI_start = 0;
         URI_start = 0;
         AEI_start = 0;
         PVARP_start = 0;
         AVI_start = 0;
         LRI_stop = 0;
         AEI_stop = 0;
         AVI_stop = 0;
         URI_stop = 0;
      }
      g81 = g1;
      g83 =(PRE_g82);
      g82 =(g81||g83);
      if(g82){
         _DDD_Pacemaker_local_PVARP_ex = 0;
         _DDD_Pacemaker_local_VRP_ex = 0;
         _DDD_Pacemaker_local_URI_ex = 0;
      }
      g18 =(PRE_g17);
      _cg18 = URI_TO;
      g20 =(g18&&(!(_cg18)));
      _cg20 = VSense;
      g21 =(g20&&_cg20);
      if(g21){
         URI_stop =(URI_stop||1);
      }
      g21b = g21;
      if(g21b){
         _DDD_Pacemaker_local_URI_ex =(_DDD_Pacemaker_local_URI_ex||1);
      }
      g19 =(g18&&_cg18);
      if(g19){
         _DDD_Pacemaker_local_URI_ex =(_DDD_Pacemaker_local_URI_ex||1);
      }
      g77 =(PRE_g76);
      g77b = g77;
      _cg77 = _DDD_Pacemaker_local_URI_ex;
      g78 =(g77b&&_cg77);
      if(g78){
         VPace =(VPace||1);
      }
      g32 =(PRE_g31);
      _cg32 = VSense;
      g36 =(g32&&(!(_cg32)));
      _cg36 = VPace;
      g38 =(g36&&(!(_cg36)));
      _cg38 = LRI_TO;
      g39 =(g38&&_cg38);
      if(g39){
         VPace =(VPace||1);
      }
      g4 =(PRE_g3);
      _cg4 = VSense;
      g9 =(g4&&(!(_cg4)));
      _cg9 = VPace;
      g7 =(PRE_g6);
      _cg7 = VRP_TO;
      g8 =(g7&&_cg7);
      if(g8){
         _DDD_Pacemaker_local_VRP_ex =(_DDD_Pacemaker_local_VRP_ex||1);
      }
      g3 =(g2||(g9&&(!(_cg9)))||g8);
      g5 =((g4&&_cg4)||(g9&&_cg9));
      if(g5){
         VRP_start =(VRP_start||1);
      }
      g6 =((g7&&(!(_cg7)))||g5);
      g11 = g1;
      g13 =(PRE_g12);
      _cg13 = VSense;
      g23 =(g13&&(!(_cg13)));
      _cg23 = VPace;
      g12 =(g19||(g23&&(!(_cg23)))||g11);
      g14 =((g13&&_cg13)||(g23&&_cg23));
      if(g14){
         URI_start =(URI_start||1);
      }
      g22 =(PRE_g21);
      g22b = g22;
      if(g22b){
         URI_start =(URI_start||1);
      }
      g16 =(PRE_g15);
      g16b = g16;
      _cg16 = _DDD_Pacemaker_local_VRP_ex;
      g15 =(g22b||g14||(g16b&&(!(_cg16))));
      g17 =((g20&&(!(_cg20)))||(g16b&&_cg16));
      g25 = g1;
      g27 =(PRE_g26);
      _cg27 = VSense;
      g40 =(g27&&(!(_cg27)));
      _cg40 = VPace;
      g26 =(g25||(g40&&(!(_cg40))));
      g28 =((g40&&_cg40)||(g27&&_cg27));
      if(g28){
         LRI_start =(LRI_start||1);
      }
      g35 =(PRE_g34);
      g35b = g35;
      if(g35b){
         LRI_start =(LRI_start||1);
      }
      g30 =(PRE_g29);
      g30b = g30;
      _cg30 = _DDD_Pacemaker_local_VRP_ex;
      g29 =(g28||g35b||(g30b&&(!(_cg30))));
      g31 =((g30b&&_cg30)||(g38&&(!(_cg38))));
      g33 =(g32&&_cg32);
      if(g33){
         LRI_stop =(LRI_stop||1);
      }
      g37 =(g36&&_cg36);
      if(g37){
         LRI_stop =(LRI_stop||1);
      }
      g34 =(g33||g37||g39);
      g42 = g1;
      g49 =(PRE_g48);
      _cg49 = ASense;
      g51 =(g49&&(!(_cg49)));
      _cg51 = APace;
      g52 =(g51&&(!(_cg51)));
      _cg52 = AEI_TO;
      g53 =(g52&&_cg52);
      if(g53){
         APace =(APace||1);
      }
      g50 =((g51&&_cg51)||(g49&&_cg49));
      if(g50){
         AEI_stop =(AEI_stop||1);
      }
      g44 =(PRE_g43);
      _cg44 = VSense;
      g54 =(g44&&(!(_cg44)));
      _cg54 = VPace;
      g43 =(g53||g42||g50||(g54&&(!(_cg54))));
      g45 =((g44&&_cg44)||(g54&&_cg54));
      if(g45){
         AEI_start =(AEI_start||1);
      }
      g61 =(PRE_g60);
      _cg61 = PVARP_TO;
      g62 =(g61&&_cg61);
      if(g62){
         _DDD_Pacemaker_local_PVARP_ex =(_DDD_Pacemaker_local_PVARP_ex||1);
      }
      g47 =(PRE_g46);
      g47b = g47;
      _cg47 = _DDD_Pacemaker_local_PVARP_ex;
      g46 =((g47b&&(!(_cg47)))||g45);
      g48 =((g47b&&_cg47)||(g52&&(!(_cg52))));
      g56 = g1;
      g58 =(PRE_g57);
      _cg58 = VSense;
      g63 =(g58&&(!(_cg58)));
      _cg63 = VPace;
      g57 =(g62||(g63&&(!(_cg63)))||g56);
      g59 =((g58&&_cg58)||(g63&&_cg63));
      if(g59){
         PVARP_start =(PVARP_start||1);
      }
      g60 =(g59||(g61&&(!(_cg61))));
      g65 = g1;
      g73 =(PRE_g72);
      g73b = g73;
      _cg73 = _DDD_Pacemaker_local_PVARP_ex;
      g67 =(PRE_g66);
      _cg67 = ASense;
      g79 =(g67&&(!(_cg67)));
      _cg79 = APace;
      g66 =((g73b&&_cg73)||g65||g78||(g79&&(!(_cg79))));
      g68 =((g67&&_cg67)||(g79&&_cg79));
      if(g68){
         AVI_start =(AVI_start||1);
      }
      g70 =(PRE_g69);
      _cg70 = VSense;
      g74 =(g70&&(!(_cg70)));
      _cg74 = VPace;
      g75 =(g74&&(!(_cg74)));
      _cg75 = AVI_TO;
      g69 =(g68||(g75&&(!(_cg75))));
      g71 =((g70&&_cg70)||(g74&&_cg74));
      if(g71){
         AVI_stop =(AVI_stop||1);
      }
      g72 =(g71||(g73b&&(!(_cg73))));
      g76 =((g77b&&(!(_cg77)))||(g75&&_cg75));
      g10_e1 =(!((g4||g7)));
      g24_e2 =(!((g13||g16||g18||g22)));
      g41_e3 =(!((g27||g30||g32||g35)));
      g55_e4 =(!((g44||g47||g49)));
      g64_e5 =(!((g58||g61)));
      g80_e6 =(!((g67||g70||g73||g77)));
      g84_e7 =(!(g83));
      g85_e1_fix =(g30||g47||g61||g70||g83||g18||g32||g49||g73||g77||g35);
      g85_e1 =(!((g4||g13||g27||g44||g58||g67||g7||g16||g22||g85_e1_fix)));
      g89_e2 =(!(g88));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g12 = g12;
   PRE_g15 = g15;
   PRE_g17 = g17;
   PRE_g21 = g21;
   PRE_g26 = g26;
   PRE_g29 = g29;
   PRE_g31 = g31;
   PRE_g34 = g34;
   PRE_g43 = g43;
   PRE_g46 = g46;
   PRE_g48 = g48;
   PRE_g57 = g57;
   PRE_g60 = g60;
   PRE_g66 = g66;
   PRE_g69 = g69;
   PRE_g72 = g72;
   PRE_g76 = g76;
   PRE_g82 = g82;
   PRE_g87 = g87;
   _PRE_GO = _GO;
   return;
}

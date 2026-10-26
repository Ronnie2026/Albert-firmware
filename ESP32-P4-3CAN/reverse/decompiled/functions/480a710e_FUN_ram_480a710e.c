/* Firmware entry: 0x480a710e */

int FUN_ram_480a710e(char *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  char *pcVar12;
  char cVar13;
  short *psVar14;
  short sVar15;
  char *pcVar16;
  int *piVar17;
  undefined2 *puVar18;
  undefined **ppuVar19;
  uint uVar20;
  int *piVar21;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined2 uStack_164;
  undefined1 uStack_162;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_bf;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined4 uStack_ac;
  undefined1 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined2 local_99 [12];
  undefined2 uStack_80;
  short local_7e [30];
  short asStack_42 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar17 = &local_1e0;
  *param_4 = "invalid_json";
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if ((char *)0x30000 < param_2) {
    *param_4 = "payload_too_large";
    return 0;
  }
  pcVar12 = param_2 + (int)param_1;
  bVar1 = false;
  pcVar16 = param_1;
  do {
    cVar13 = *pcVar16;
    cVar2 = cVar13;
    if (bVar1) {
      do {
        while (cVar2 == '\\') {
          if (pcVar12 == pcVar16 + 1) goto LAB_ram_480a71bc;
          if (((((pcVar16[1] == 'u') && (pcVar16 + 1 + (4 - (int)param_1) < param_2)) &&
               (pcVar16[2] == '0')) && ((pcVar16[3] == '0' && (pcVar16[4] == '0')))) &&
             (pcVar16[5] == '0')) {
            return 0;
          }
          pcVar16 = pcVar16 + 2;
          if (pcVar16 == pcVar12) goto LAB_ram_480a71bc;
          cVar2 = *pcVar16;
        }
        pcVar16 = pcVar16 + 1;
        if (pcVar16 == pcVar12) goto LAB_ram_480a71bc;
        cVar13 = *pcVar16;
        bVar1 = cVar2 != '\"';
        cVar2 = cVar13;
      } while (bVar1);
    }
    pcVar16 = pcVar16 + 1;
    bVar1 = cVar13 == '\"';
  } while (pcVar12 != pcVar16);
LAB_ram_480a71bc:
  iVar6 = FUN_ram_48076154(param_1,param_2,0x30000,25000,param_4);
  if (iVar6 == 0) {
    return 0;
  }
  iVar7 = FUN_ram_48129d0c();
  if (iVar7 == 0) {
    FUN_ram_48129c8a(iVar6,"drivers");
  }
  else {
    for (piVar21 = *(int **)(iVar6 + 8); piVar21 != (int *)0x0; piVar21 = (int *)*piVar21) {
      iVar7 = piVar21[8];
      if (iVar7 == 0) {
LAB_ram_480a7224:
        FUN_ram_48129c8a(iVar6,"drivers");
        goto LAB_ram_480a7246;
      }
      ppuVar19 = &PTR_s_schema_version_ram_481cc404_ram_48222748;
      while( true ) {
        puVar11 = *ppuVar19;
        ppuVar19 = ppuVar19 + 1;
        iVar8 = FUN_ram_4ff453ae(iVar7,puVar11);
        if (iVar8 == 0) break;
        if (ppuVar19 == &PTR_s_track_ram_481c61cc_ram_4822276c) goto LAB_ram_480a7224;
      }
    }
    local_1e0 = 0;
    uStack_1dc = 0;
    uVar9 = FUN_ram_48129c8a(iVar6,"schema_version");
    iVar7 = FUN_ram_480762ce(uVar9,0xffffffff,0,&local_1e0);
    if (iVar7 != 0) {
      if ((local_1e0 == 1) && (uStack_1dc == 0)) {
        iVar7 = FUN_ram_480a6348(iVar6,"active_driver_id",0xffffffff,0,param_3);
        if ((((iVar7 != 0) &&
             (iVar7 = FUN_ram_480a6348(iVar6,"last_driver_id",0xffffffff,0,param_3 + 4), iVar7 != 0)
             ) && (iVar7 = FUN_ram_480a6348(iVar6,"next_driver_id",0xffffffff,0,param_3 + 8),
                  iVar7 != 0)) &&
           ((iVar7 = FUN_ram_480a6348(iVar6,"next_driver_use_sequence",0xffffffff,0,param_3 + 0xc),
            iVar7 != 0 &&
            (iVar7 = FUN_ram_4807806e(iVar6,"auto_recognition_enabled",param_3 + 0x10), iVar7 != 0))
           )) {
          local_1e0 = 0x1000d01;
          uStack_1d8 = 0x1010101;
          uStack_1d4 = 0x2010101;
          uStack_1d0 = 0x200f001;
          uStack_1cc = 0x46003c;
          uStack_1c8 = 0x5a0050;
          uStack_1c4 = 0x780064;
          uStack_1c0 = 0x82008c;
          uStack_1bc = 0x10200f0;
          uStack_1b4 = 0x10301;
          uStack_1b0 = 0x1f401388;
          uStack_1dc = CONCAT22(0xf,(undefined2)uStack_1dc);
          uStack_1dc = CONCAT31(uStack_1dc._1_3_,1);
          uStack_1b8 = 0x10001;
          FUN_ram_4805228e(&uStack_1ac);
          uStack_178 = 0x2d0100;
          uStack_170 = 0x1000001;
          uStack_184 = CONCAT22(0x6e,(undefined2)uStack_184);
          uStack_180 = 0x820079;
          uStack_174 = 0x2000000;
          uStack_162 = 2;
          uStack_160 = 0x4b003e8;
          uStack_15c = 0x12c04b0;
          uStack_154 = 0x500;
          uStack_150 = 0x753007d0;
          uStack_144 = 0xa3c;
          uStack_140 = 0x1f40a00;
          uStack_13c = 0x960101;
          uStack_138 = 0x9600b4;
          uStack_134 = 0xb400b4;
          uStack_130 = 0xb400f0;
          uStack_12c = 0x6400f0;
          uStack_17c = 0x100;
          uStack_16c = 0x100;
          uStack_164 = 0x100;
          uStack_14c = 0x100;
          uStack_124 = 2000;
          uStack_110 = 2000;
          uStack_120 = 3000;
          uStack_114 = 3000;
          uStack_10c = 3000;
          uStack_168 = 0x10000;
          uStack_158 = 0x10001;
          uStack_148 = 0;
          uStack_128 = uStack_128 & 0xffff0000;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_108 = 4000;
          uStack_100 = 2000;
          uStack_104 = 1000;
          uStack_fc = 5000;
          uStack_f4 = 0x2d00;
          uStack_e8 = 0x960064;
          uStack_e4 = 0x6405;
          uStack_d8 = 0xa0ff0550;
          uStack_d0 = 0x7e3f0128;
          uStack_cc = CONCAT22(uStack_cc._2_2_,0xe6c2);
          uStack_ec = CONCAT13(uStack_ec._3_1_,0x10000);
          uStack_dc = 0;
          uStack_f8 = 0x2ee;
          uStack_f0 = 0x500000;
          uStack_ec = CONCAT22(uStack_ec._2_2_,0xfa);
          uStack_e0 = CONCAT13(uStack_e0._3_1_,0x76400);
          uStack_d4 = 0x30000;
          do {
            *(undefined1 *)((int)piVar17 + 0x116) = 1;
            *(undefined1 *)((int)piVar17 + 0x117) = 0x3c;
            *(undefined1 *)((int)piVar17 + 0x118) = 0x5a;
            *(undefined1 *)((int)piVar17 + 0x119) = 0x9f;
            *(undefined1 *)((int)piVar17 + 0x11a) = 0xe6;
            piVar17 = (int *)((int)piVar17 + 5);
          } while ((int *)((int)&uStack_1c4 + 2) != piVar17);
          FUN_ram_48041e5a(&uStack_ac);
          local_7e[9] = 0x1e;
          local_7e[8] = 0;
          FUN_ram_4ff45158(param_3 + 0x347c,&local_1e0,0x176);
          uVar9 = FUN_ram_48129c8a(iVar6,"globals");
          iVar7 = FUN_ram_480a6a7e(uVar9,param_3 + 0x347c);
          if (iVar7 != 0) {
            uVar9 = FUN_ram_48129c8a(iVar6,"drivers");
            iVar7 = FUN_ram_48129cfa();
            if (((iVar7 != 0) && (iVar7 = FUN_ram_48129c58(uVar9), -1 < iVar7)) &&
               (iVar7 = FUN_ram_48129c58(uVar9), iVar7 < 0x21)) {
              bVar5 = FUN_ram_48129c58(uVar9);
              *(byte *)(param_3 + 0x3414) = bVar5;
              iVar7 = param_3 + 0x14;
              uVar20 = 0;
              while (uVar20 < bVar5) {
                memset(&local_1e0,0,0x1a0);
                uStack_1a4 = 0x1010101;
                uStack_1a0 = 0x2010101;
                uStack_19c = 0x200f001;
                uStack_198 = 0x46003c;
                uStack_194 = 0x5a0050;
                uStack_190 = 0x780064;
                uStack_18c = 0x82008c;
                uStack_188 = 0x10200f0;
                uStack_184 = 0x10001;
                uStack_180 = 0x10301;
                uStack_17c = 0x1f401388;
                uStack_1bc = CONCAT22(5,(undefined2)uStack_1bc);
                uStack_1b8 = 0x50005;
                uStack_1b4 = CONCAT22(uStack_1b4._2_2_,5);
                uStack_1ac = 0x1000d01;
                uStack_1a8 = 0xf0001;
                FUN_ram_4805228e(&uStack_178);
                uVar3 = uStack_124;
                uVar10 = uStack_130;
                uStack_150 = CONCAT22(0x6e,(undefined2)uStack_150);
                uStack_14c = 0x820079;
                uStack_12c = 0x4b003e8;
                uStack_128 = 0x12c04b0;
                uStack_11c = 0x753007d0;
                uStack_110 = CONCAT22(uStack_110._2_2_,0xa3c);
                uStack_10c = CONCAT22(500,CONCAT11(10,(undefined1)uStack_10c));
                uStack_108 = 0x960101;
                uStack_104 = 0x9600b4;
                uStack_100 = 0xb400b4;
                uStack_fc = 0xb400f0;
                uStack_f8 = 0x6400f0;
                uStack_142 = 0x2d;
                uStack_f0 = 2000;
                uStack_dc = 2000;
                uStack_ec = 3000;
                uStack_e0 = 3000;
                uStack_d8 = 3000;
                uStack_120._0_2_ = CONCAT11(5,(undefined1)uStack_120);
                uStack_147 = 1;
                uStack_144 = CONCAT11(1,(undefined1)uStack_144);
                uStack_13c = CONCAT31(uStack_13c._1_3_,1);
                uStack_13c = CONCAT13(1,(undefined3)uStack_13c);
                uStack_138._0_2_ = CONCAT11(1,(undefined1)uStack_138);
                uStack_134._0_3_ = CONCAT12(1,(undefined2)uStack_134);
                uStack_124 = CONCAT31(uStack_124._1_3_,1);
                uVar4 = uStack_124;
                uStack_124._3_1_ = SUB41(uVar3,3);
                uStack_124._0_3_ = CONCAT12(1,(short)uVar4);
                uStack_118._0_2_ = CONCAT11(1,(undefined1)uStack_118);
                uStack_140 = CONCAT13(2,(undefined3)uStack_140);
                uStack_130._3_1_ = SUB41(uVar10,3);
                uStack_130._0_3_ = CONCAT12(2,CONCAT11(1,(undefined1)uStack_130));
                uStack_d4 = 4000;
                uStack_cc = 2000;
                uStack_d0 = 1000;
                uStack_c8 = 5000;
                uStack_bf = 0x2d;
                uStack_ba = 0x50;
                uStack_b8 = 0xfa;
                uStack_b3 = 100;
                uStack_ac = 0xa0ff0550;
                uStack_a6 = 3;
                uStack_a4 = 0x7e3f0128;
                uStack_a0 = 0x3c01e6c2;
                uStack_9c = 0x9f5a;
                uStack_c4 = 0x2ee;
                uStack_b2 = 7;
                uStack_9a = 0xe6;
                puVar18 = local_99;
                do {
                  *(undefined1 *)puVar18 = 1;
                  *(undefined1 *)((int)puVar18 + 1) = 0x3c;
                  *(undefined1 *)(puVar18 + 1) = 0x5a;
                  *(undefined1 *)((int)puVar18 + 3) = 0x9f;
                  *(undefined1 *)(puVar18 + 2) = 0xe6;
                  puVar18 = (undefined2 *)((int)puVar18 + 5);
                } while (&uStack_80 != puVar18);
                uStack_80 = 0;
                memset(local_7e,0,0x3c);
                psVar14 = local_7e;
                sVar15 = 5;
                do {
                  *psVar14 = sVar15;
                  sVar15 = sVar15 + 5;
                  psVar14 = psVar14 + 1;
                } while (psVar14 != asStack_42);
                FUN_ram_4ff45158(iVar7,&local_1e0,0x19e);
                uVar10 = FUN_ram_48129c6e(uVar9,uVar20);
                iVar8 = FUN_ram_480a6cba(uVar10,iVar7);
                uVar20 = uVar20 + 1;
                iVar7 = iVar7 + 0x1a0;
                if (iVar8 == 0) goto LAB_ram_480a7628;
                bVar5 = *(byte *)(param_3 + 0x3414);
              }
              uVar9 = FUN_ram_48129c8a(iVar6,"seat_slots");
              iVar7 = FUN_ram_480788da(uVar9,param_3);
              if ((iVar7 != 0) && (iVar7 = FUN_ram_48076846(param_3), iVar7 != 0)) {
                FUN_ram_481295cc(iVar6);
                *param_4 = 0;
                return iVar7;
              }
            }
LAB_ram_480a7628:
            FUN_ram_481295cc(iVar6);
            goto LAB_ram_480a724c;
          }
          FUN_ram_48129c8a(iVar6,"drivers");
          goto LAB_ram_480a7246;
        }
      }
      else {
        *param_4 = "unsupported_schema";
      }
    }
    FUN_ram_48129c8a(iVar6,"drivers");
  }
LAB_ram_480a7246:
  FUN_ram_481295cc(iVar6);
LAB_ram_480a724c:
  *param_4 = "invalid_model";
  return 0;
}



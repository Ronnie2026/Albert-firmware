/* Firmware entry: 0x48095c68 */

uint FUN_ram_48095c68(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [44];
  undefined1 uStack_dc;
  undefined2 uStack_c6;
  undefined4 uStack_a8;
  undefined1 uStack_58;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar7 = *(byte *)(param_2 + 0x57c);
  if (bVar7 == 0) {
    uVar12 = 0;
  }
  else {
    iVar11 = 0;
    bVar3 = 0;
    uVar12 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_2 + 0x578) + iVar11);
      if (*(char *)((int)piVar2 + 0xc1) != '\0') {
        iStack_160 = piVar2[10];
        iStack_15c = piVar2[0xb];
        iStack_158 = piVar2[0xc];
        iStack_154 = piVar2[0xd];
        iStack_150 = piVar2[0xe];
        iStack_14c = piVar2[0xf];
        uStack_148 = piVar2[0x10];
        iStack_144 = piVar2[0x11];
        iStack_140 = piVar2[0x12];
        iStack_138 = piVar2[0x20];
        iStack_134 = piVar2[0x21];
        iVar14 = piVar2[0xb];
        iStack_130 = piVar2[0x22];
        uVar1 = *(undefined1 *)((int)piVar2 + 0x42);
        uStack_13c = 0;
        uStack_128 = 0;
        iStack_124 = 0;
        uStack_120 = 0;
        iStack_11c = 0;
        iStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        iStack_12c = piVar2[0x23];
        iVar13 = piVar2[0x13];
        uVar4 = FUN_ram_4ff21a0a();
        fence();
        fence();
        if ((param_3 == 0) || (param_4 <= uVar12)) {
          *(int *)(param_2 + 0x2eec) = *(int *)(param_2 + 0x2eec) + 1;
        }
        else {
          iVar5 = uVar12 * 0x58;
          iStack_15c = CONCAT31(iStack_15c._1_3_,(char)iVar14);
          uStack_148._0_3_ = CONCAT12(uVar1,(undefined2)uStack_148);
          uStack_114 = CONCAT13(*(char *)(param_1 + 0x18c6e) != '\0',
                                *(undefined3 *)((int)piVar2 + 0xba));
          uVar12 = uVar12 + 1 & 0xff;
          uStack_128 = CONCAT22(&sedeleg,CONCAT11(1,(undefined1)uStack_128));
          iStack_124 = iVar13;
          uStack_120 = uVar4;
          iStack_11c = piVar2[0x14];
          iStack_118 = piVar2[0x15];
          uStack_110 = *(undefined4 *)(param_1 + 0x18c70);
          FUN_ram_4ff45158(iVar5 + param_3,&iStack_160,0x54);
        }
        cVar8 = *(char *)((int)piVar2 + 0xbf);
        *(int *)(param_2 + 0x3040) = *(int *)(param_2 + 0x3040) + 1;
        *(int *)(param_2 + 0x2ecc) = *(int *)(param_2 + 0x2ecc) + 1;
        if ((cVar8 != '\0') || (*(char *)((int)piVar2 + 0xbb) != '\0')) {
          *(int *)(param_2 + 0x303c) = *(int *)(param_2 + 0x303c) + 1;
        }
        iVar14 = piVar2[10];
        uVar4 = FUN_ram_4ff3c5de();
        uVar6 = (uint)*(byte *)(param_2 + 0x30ce);
        if (uVar6 == 0) {
          cVar8 = '\x01';
          uVar6 = 0;
LAB_ram_48095ee4:
          iVar13 = uVar6 * 0xc + param_2;
          *(int *)(iVar13 + 0x3228) = iVar14;
          *(undefined4 *)(iVar13 + 0x3230) = uVar4;
          *(undefined4 *)(iVar13 + 0x322c) = 1;
          *(char *)(param_2 + 0x30ce) = cVar8;
        }
        else {
          piVar10 = (int *)(param_2 + 0x3228);
          uVar9 = 0;
          do {
            iVar13 = *piVar10;
            piVar10 = piVar10 + 3;
            if (iVar14 == iVar13) {
              iVar14 = uVar9 * 0xc + param_2;
              *(undefined4 *)(iVar14 + 0x3230) = uVar4;
              *(int *)(iVar14 + 0x322c) = *(int *)(iVar14 + 0x322c) + 1;
              goto LAB_ram_48095e2a;
            }
            uVar9 = uVar9 + 1;
          } while (uVar6 != uVar9);
          cVar8 = *(byte *)(param_2 + 0x30ce) + 1;
          if (uVar6 < 8) goto LAB_ram_48095ee4;
          *(int *)(param_2 + 0x30c4) = *(int *)(param_2 + 0x30c4) + 1;
        }
LAB_ram_48095e2a:
        memset(auStack_108,0,200);
        uStack_c6 = 1;
        uStack_dc = 8;
        uStack_a8 = 0xffffffff;
        uStack_58 = 0xff;
        FUN_ram_4ff45158(piVar2,auStack_108,0xc2);
        *piVar2 = param_2;
        bVar7 = *(byte *)(param_2 + 0x57c);
      }
      bVar3 = bVar3 + 1;
      iVar11 = iVar11 + 200;
    } while (bVar3 < bVar7);
  }
  *(undefined1 *)(param_2 + 0x582) = 0;
  *(undefined4 *)(param_2 + 0x3068) = 0;
  return uVar12;
}



/* Firmware entry: 0x480f9fa8 */

/* WARNING: Type propagation algorithm not settling */

byte FUN_ram_480f9fa8(int *param_1,undefined1 param_2,byte param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int local_180 [21];
  int local_12c [18];
  undefined4 local_e4;
  int iStack_e0;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  int local_d4 [21];
  undefined1 uStack_80;
  undefined1 uStack_75;
  undefined1 uStack_56;
  int aiStack_44 [4];
  
  iVar13 = DAT_ram_4ff6dd80;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar15 = param_1 + 0xb;
  if (*param_1 == DAT_ram_4ff6dd80) goto LAB_ram_480f9fe8;
  iVar16 = FUN_ram_4807e216(DAT_ram_4ff6dd80,*param_1,piVar15);
  if (iVar16 == 0) {
    return 0;
  }
  iVar16 = *param_1;
  if (iVar16 == iVar13) goto LAB_ram_480f9fe8;
  if (iVar13 != DAT_ram_4ff6dd4c) goto LAB_ram_480fa2c2;
  fence();
  if ((DAT_ram_4ff6de94 & 0x80) == 0) {
LAB_ram_480fa404:
    iVar16 = FUN_ram_480f571c(iVar16);
    if (iVar16 != 0) {
LAB_ram_480f9fe8:
      if ((iVar13 != 0) && (DAT_ram_4ff5c53c != (int *)0x0)) {
        piVar18 = DAT_ram_4ff5c53c;
        do {
          if (piVar18 == DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49) goto LAB_ram_480fa034;
          iVar16 = *piVar18;
          piVar18 = piVar18 + 0x49;
        } while (iVar13 != iVar16);
        if ((iVar13 != *param_1) && (DAT_ram_4ff6dd78 != '\0')) {
          FUN_ram_48052e70();
        }
      }
LAB_ram_480fa034:
      piVar17 = &local_e4;
      piVar18 = piVar15;
      do {
        iVar16 = piVar18[1];
        iVar12 = piVar18[2];
        iVar14 = piVar18[3];
        *piVar17 = *piVar18;
        piVar17[1] = iVar16;
        piVar17[2] = iVar12;
        piVar17[3] = iVar14;
        piVar18 = piVar18 + 4;
        piVar17 = piVar17 + 4;
      } while (piVar18 != param_1 + 0x33);
      *piVar17 = *piVar18;
      FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
      uVar8 = DAT_ram_4ff619e6;
      uVar7 = DAT_ram_4ff619c7;
      uVar6 = DAT_ram_4ff619bc;
      uVar5 = DAT_ram_4ff61964._1_1_;
      uVar4 = (undefined1)DAT_ram_4ff61964;
      uVar3 = DAT_ram_4ff61960._3_1_;
      uVar2 = DAT_ram_4ff61960._2_1_;
      uVar1 = DAT_ram_4ff61958._1_1_;
      FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
      local_e4._1_1_ = uVar1;
      uStack_da = uVar2;
      uStack_d9 = uVar3;
      uStack_d8._0_1_ = uVar4;
      uStack_d8._1_1_ = uVar5;
      uStack_80 = uVar6;
      uStack_75 = uVar7;
      uStack_56 = uVar8;
      iVar16 = FUN_ram_480f9e86(*param_1,&local_e4);
      if (iVar16 != 0) {
        piVar18 = &local_e4;
        do {
          iVar16 = piVar18[1];
          iVar12 = piVar18[2];
          *piVar15 = *piVar18;
          iVar14 = piVar18[3];
          piVar15[1] = iVar16;
          piVar15[2] = iVar12;
          piVar15[3] = iVar14;
          piVar18 = piVar18 + 4;
          piVar15 = piVar15 + 4;
        } while (piVar18 != aiStack_44);
        DAT_ram_4ff6dd80 = *param_1;
        *piVar15 = *piVar18;
        if (DAT_ram_4ff6dd80 != iVar13) {
          DAT_ram_4ff6dd7c = iVar13;
        }
        iVar13 = DAT_ram_4ff47e7c + 1;
        if (DAT_ram_4ff47e7c == 0) {
          iVar13 = 2;
          DAT_ram_4ff47e7c = 1;
        }
        DAT_ram_4ff47e78 = param_3 ^ 1;
        param_1[9] = DAT_ram_4ff47e7c;
        DAT_ram_4ff47e7c = iVar13;
        *(byte *)((int)param_1 + 0x29) = param_3;
        if (param_4 != 0) {
          *(undefined1 *)(param_1 + 10) = 0;
        }
        FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
        uVar1 = DAT_ram_4ff61958._1_1_;
        FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
        FUN_ram_48032f3e(uVar1);
        piVar15 = local_12c;
        piVar18 = param_1 + 0x34;
        DAT_ram_4ff5c538 = 0;
        DAT_ram_4ff5c534 = 0;
        DAT_ram_4ff5c530 = 0;
        do {
          iVar19 = piVar18[1];
          iVar14 = piVar18[2];
          iVar13 = piVar18[3];
          iVar16 = piVar18[4];
          iVar12 = piVar18[5];
          *piVar15 = *piVar18;
          piVar15[1] = iVar19;
          piVar15[2] = iVar14;
          piVar15[3] = iVar13;
          piVar15[4] = iVar16;
          piVar15[5] = iVar12;
          piVar18 = piVar18 + 6;
          piVar15 = piVar15 + 6;
        } while (piVar18 != param_1 + 0x46);
        piVar18 = local_12c;
        piVar15 = local_180;
        do {
          iVar19 = *piVar18;
          iVar14 = piVar18[1];
          iVar13 = piVar18[2];
          iVar16 = piVar18[3];
          iVar12 = piVar18[4];
          piVar15[5] = piVar18[5];
          *piVar15 = iVar19;
          piVar15[1] = iVar14;
          piVar15[2] = iVar13;
          piVar15[3] = iVar16;
          piVar15[4] = iVar12;
          piVar18 = piVar18 + 6;
          piVar15 = piVar15 + 6;
        } while (piVar18 != &local_e4);
        DAT_ram_4ff6dd79 = param_2;
        FUN_ram_480f50d2(&DAT_ram_4ff60e20,local_180);
        FUN_ram_480f47ac(&DAT_ram_4ff60e20,(char)param_1[0x46],*(undefined1 *)((int)param_1 + 0x119)
                        );
        FUN_ram_480f4aca(&DAT_ram_4ff60e20,(int)param_1 + 0x11a);
        if (DAT_ram_4ff6de6e == '\0') {
          iVar13 = FUN_ram_48035914();
        }
        else {
          DAT_ram_4ff5ca60 = DAT_ram_4ff5ca60 + 1;
          DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 1;
          DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
          iVar13 = FUN_ram_480ee046();
        }
        iVar16 = 0;
        if (DAT_ram_4ff6dd78 != '\0') {
          iVar16 = FUN_ram_480aecea();
        }
        if (DAT_ram_4ff6de6e == '\0') {
          bVar9 = FUN_ram_48031876();
        }
        else {
          DAT_ram_4ff5ca6c = DAT_ram_4ff5ca6c + 1;
          DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 8;
          DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
          bVar9 = FUN_ram_480ee046();
        }
        if (DAT_ram_4ff6de6e == '\0') {
          bVar10 = FUN_ram_48031a56();
        }
        else {
          DAT_ram_4ff5ca64 = DAT_ram_4ff5ca64 + 1;
          DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 2;
          DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
          bVar10 = FUN_ram_480ee046();
        }
        if (DAT_ram_4ff6de6e == '\0') {
          bVar11 = FUN_ram_480316a0();
        }
        else {
          DAT_ram_4ff5ca68 = DAT_ram_4ff5ca68 + 1;
          DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 4;
          DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
          bVar11 = FUN_ram_480ee046();
        }
        if (iVar13 != 0) {
          if (iVar16 != 0) {
            return bVar10 & bVar9 & bVar11;
          }
          return 0;
        }
        return 0;
      }
      FUN_ram_480f571c(iVar13);
      if (DAT_ram_4ff6dd34 == '\0') {
        return 0;
      }
      if (*param_1 == DAT_ram_4ff6dd30) {
        DAT_ram_4ff6dd34 = 0;
        DAT_ram_4ff6dd30 = 0;
        return 0;
      }
      return 0;
    }
  }
  else {
    FUN_ram_4802e260(0x80);
    iVar12 = FUN_ram_480ee046(0x80);
    if (iVar12 != 0) goto LAB_ram_480fa404;
  }
  iVar16 = *param_1;
LAB_ram_480fa2c2:
  if (DAT_ram_4ff6dd34 == '\0') {
    return 0;
  }
  if (DAT_ram_4ff6dd30 == iVar16) {
    DAT_ram_4ff6dd30 = 0;
    DAT_ram_4ff6dd34 = 0;
    return 0;
  }
  return 0;
}



/* Firmware entry: 0x480952dc */

char FUN_ram_480952dc(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iStack_7c;
  undefined1 *puStack_78;
  code *pcStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = *(int *)(param_2 + 0x574);
  if ((iVar11 == 0) || (iVar3 = FUN_ram_4ff3b5f0(iVar11,0xffffffff), iVar3 != 1)) {
    return '\0';
  }
  iVar3 = FUN_ram_4ff2bcc4();
  if (iVar3 == 0) {
    pcVar13 = (char *)(param_1 + 0x18c6c);
    fence();
    if (*pcVar13 == '\0') {
      iVar3 = param_2 + 0x874;
      FUN_ram_4ff3ec14(iVar3,0xffffffff);
      iVar14 = *(int *)(param_2 + 0x2c);
      if (iVar14 == 0) {
        if (*(char *)(param_2 + 0x14) == '\x01') {
          uVar7 = *(uint *)(param_1 + 0x18d84) + 1;
          uVar6 = uVar7 & 0x7fffffff;
          if ((uVar7 & 0x7fffffff) == 0) {
            uVar6 = 1;
          }
          fence();
          *(uint *)(param_1 + 0x18d84) = uVar6;
        }
        *(undefined1 *)(param_2 + 0x882) = 1;
        puVar8 = (undefined1 *)(param_2 + 0x5d6);
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 0x24;
        } while (puVar8 != (undefined1 *)(param_2 + 0x85e));
        *(undefined1 *)(param_2 + 0x5b4) = 0;
        *(undefined1 *)(param_2 + 0x5b5) = 0;
        *(undefined1 *)(param_2 + 0x5b6) = 0;
        FUN_ram_4ff3ee10(iVar3);
        uStack_3c = (uint)*(byte *)(param_2 + 0x57d);
        uStack_68 = *(undefined4 *)(param_2 + 0xc);
        uStack_64 = *(undefined4 *)(param_2 + 0x10);
        uStack_54 = *(undefined4 *)(param_2 + 0x24);
        uStack_60 = 0xffffffff;
        uStack_5c = 0xffffffff;
        uStack_40 = 0xff;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_38 = 1;
        if (*(char *)(param_2 + 0x14) == '\x01') {
          uStack_38 = 3;
        }
        iStack_7c = 0;
        uStack_34 = (uint)(byte)((*(byte *)(param_2 + 0x28) & 1) << 2);
        iVar14 = FUN_ram_4ff2f082(&uStack_68,&iStack_7c);
        if (iVar14 == 0) {
          puStack_78 = &LAB_ram_4ff26638;
          pcStack_74 = FUN_ram_4ff2696c;
          puStack_70 = &LAB_ram_4ff224d6;
          puStack_6c = &LAB_ram_4ff21e30;
          iVar14 = FUN_ram_4ff2db00(iStack_7c,&puStack_78,param_2);
          if (iVar14 != 0) goto LAB_ram_480954e6;
          iVar14 = FUN_ram_48094ad2(param_1,iStack_7c,param_2);
          if (iVar14 != 0) {
            FUN_ram_4ff3ec14(iVar3,0xffffffff);
            iVar14 = 1;
            goto LAB_ram_480954f2;
          }
          if (*(char *)(param_2 + 4) == '\0') {
            puVar8 = &DAT_ram_500d7000;
          }
          else if (*(char *)(param_2 + 4) == '\x01') {
            puVar8 = &DAT_ram_500d8000;
          }
          else {
            puVar8 = &DAT_ram_500d9000;
          }
          uVar12 = *(undefined4 *)(puVar8 + 0x3c);
          uVar10 = *(undefined4 *)(puVar8 + 0x38);
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
          *(short *)(param_2 + 0x8c8) = (short)uVar12;
          *(short *)(param_2 + 0x8ca) = (short)uVar10;
          *(undefined1 *)(param_2 + 0x8cc) = 1;
          FUN_ram_4ff3ee10(iVar3);
          iVar14 = FUN_ram_4ff2bcc4();
          if (iVar14 != 0) {
            FUN_ram_4ff3ec14(iVar3);
LAB_ram_480956be:
            iVar14 = 0x103;
            goto LAB_ram_480954f2;
          }
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
          if (param_3 == 0) {
            iVar14 = FUN_ram_4ff2bcc4();
            if (iVar14 == 0) {
              fence();
              param_3 = 0;
              if (*pcVar13 == '\0') {
LAB_ram_480956e8:
                *(int *)(param_2 + 0x2c) = iStack_7c;
                *(undefined4 *)(param_2 + 0x888) = 0;
                *(undefined4 *)(param_2 + 0x88c) = 0;
                *(undefined4 *)(param_2 + 0x8a8) = 0;
                *(undefined4 *)(param_2 + 0x8ac) = 0;
                *(ushort *)(param_2 + 0x87c) = (ushort)param_3 & 0xff | (ushort)(param_3 << 8);
                *(undefined2 *)(param_2 + 0x87e) = 0;
                *(undefined1 *)(param_2 + 0x882) = 0;
                *(undefined1 *)(param_2 + 0x881) = 0;
                *(undefined2 *)(param_2 + 0x884) = 0;
                *(undefined4 *)(param_2 + 0x3084) = 0;
                *(int *)(param_2 + 0x3078) = param_3;
                FUN_ram_4ff27ffa(param_2);
                FUN_ram_4ff3ee10(iVar3);
                cVar1 = '\x01';
                goto LAB_ram_48095348;
              }
            }
            goto LAB_ram_480956be;
          }
          iVar14 = FUN_ram_4ff2d91e(iStack_7c);
          if (iVar14 == 0) {
            iVar14 = FUN_ram_4ff2bcc4();
            if (iVar14 == 0) {
              fence();
              if (*pcVar13 == '\0') goto LAB_ram_480956e8;
              iVar14 = 0x103;
            }
            else {
              iVar14 = 0x103;
            }
          }
          iVar4 = FUN_ram_4ff2d996(iStack_7c);
          bVar9 = iVar4 != 0 && iVar4 != 0x103;
        }
        else {
LAB_ram_480954e6:
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
LAB_ram_480954f2:
          bVar9 = false;
        }
        *(int *)(param_2 + 0x2c) = iStack_7c;
        *(undefined1 *)(param_2 + 0x884) = 1;
        *(bool *)(param_2 + 0x87c) = bVar9;
        *(undefined1 *)(param_2 + 0x87d) = 0;
        *(undefined2 *)(param_2 + 0x87e) = 0;
        *(undefined1 *)(param_2 + 0x882) = 0;
        *(undefined4 *)(param_2 + 0x8c8) = 0;
        *(undefined1 *)(param_2 + 0x8cc) = 0;
        *(int *)(param_2 + 0x3084) = iVar14;
        *(undefined4 *)(param_2 + 0x3078) = 0;
        FUN_ram_4ff27ffa(param_2);
        FUN_ram_4ff3ee10(iVar3);
        cVar1 = '\0';
        if (iStack_7c == 0) goto LAB_ram_48095348;
        iVar4 = FUN_ram_4ff2d996();
        if ((iVar4 == 0) || (iVar4 == 0x103)) {
          iVar4 = FUN_ram_4ff2da0e(iStack_7c);
          if (iVar4 == 0) {
            iStack_7c = 0;
            bVar9 = false;
            iVar4 = iVar14;
          }
          else {
            bVar9 = false;
          }
        }
        FUN_ram_4ff3ec14(iVar3,0xffffffff);
        *(int *)(param_2 + 0x2c) = iStack_7c;
        *(char *)(param_2 + 0x87c) = bVar9 & iStack_7c != 0;
        *(undefined1 *)(param_2 + 0x87d) = 0;
        *(int *)(param_2 + 0x3084) = iVar4;
LAB_ram_48095420:
        FUN_ram_4ff27ffa(param_2);
      }
      else {
        cVar1 = '\x01';
        if (param_3 != 0) {
          cVar1 = *(char *)(param_2 + 0x87d);
        }
        if ((((*(char *)(param_2 + 0x87c) == '\0') && (*(char *)(param_2 + 0x884) == '\0')) &&
            (*(char *)(param_2 + 0x882) == '\0')) &&
           (((*(char *)(param_2 + 0x87e) == '\0' && (*(char *)(param_2 + 0x883) == '\0')) &&
            ((*(int *)(param_2 + 0x3084) == 0 && (cVar1 == '\0')))))) {
          iVar4 = FUN_ram_4ff2d91e(iVar14);
          if (iVar4 == 0) {
            iVar5 = FUN_ram_4ff2bcc4();
            if (iVar5 == 0) {
              fence();
              if (*pcVar13 == '\0') {
                bVar9 = true;
                cVar1 = '\x01';
                uVar10 = 1;
                uVar2 = 0;
                goto LAB_ram_48095402;
              }
              iVar14 = FUN_ram_4ff2d996(iVar14);
              bVar9 = iVar14 != 0 && iVar14 != 0x103;
            }
            else {
              iVar14 = FUN_ram_4ff2d996(iVar14);
              bVar9 = iVar14 != 0 && iVar14 != 0x103;
            }
            uVar10 = 0;
            uVar2 = 1;
            iVar4 = 0x103;
          }
          else {
            iVar14 = FUN_ram_4ff2d996(iVar14);
            bVar9 = iVar14 != 0 && iVar14 != 0x103;
            uVar2 = 1;
            uVar10 = 0;
          }
LAB_ram_48095402:
          *(bool *)(param_2 + 0x87c) = bVar9;
          *(char *)(param_2 + 0x87d) = cVar1;
          *(undefined1 *)(param_2 + 0x884) = uVar2;
          *(int *)(param_2 + 0x3084) = iVar4;
          *(undefined4 *)(param_2 + 0x3078) = uVar10;
          goto LAB_ram_48095420;
        }
      }
      FUN_ram_4ff3ee10(iVar3);
      goto LAB_ram_48095348;
    }
  }
  cVar1 = '\0';
LAB_ram_48095348:
  FUN_ram_4ff3afa2(iVar11,0,0,0);
  return cVar1;
}



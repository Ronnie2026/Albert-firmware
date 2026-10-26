/* Firmware entry: 0x48094d0c */

undefined1 FUN_ram_48094d0c(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uStack_7c;
  ushort uStack_78;
  ushort uStack_74;
  ushort uStack_70;
  ushort uStack_6c;
  uint auStack_60 [7];
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar13 = *(int *)(param_2 + 0x574);
  if ((iVar13 == 0) || (iVar5 = FUN_ram_4ff3b5f0(iVar13,0xffffffff), iVar5 != 1)) {
    return 0;
  }
  iVar5 = param_2 + 0x874;
  uVar15 = FUN_ram_4ff21a0a();
  FUN_ram_4ff3ec14(iVar5,0xffffffff);
  if (*(int *)(param_2 + 0x2c) != 0) {
    uVar6 = FUN_ram_4ff21a0a();
    iVar7 = FUN_ram_48093896(param_2,uVar6);
    if (((((iVar7 == 0) && (*(char *)(param_2 + 0x582) == '\0')) &&
         (*(char *)(param_2 + 0x847) == '\0')) &&
        ((*(char *)(param_2 + 0x588) == '\0' && (*(char *)(param_2 + 0x870) == '\0')))) &&
       ((*(int *)(param_2 + 0x90) == 0 || (iVar7 = FUN_ram_4ff3b9c2(), iVar7 == 0)))) {
      piVar11 = *(int **)(param_2 + 0xf0);
      if (piVar11 != (int *)0x0) {
        if (*piVar11 == 0) {
          if (piVar11[1] == 0) goto LAB_ram_48094de4;
          cVar1 = *(char *)(piVar11[1] + 0x13a);
        }
        else {
          cVar1 = *(char *)(*piVar11 + 0x952);
        }
        if (cVar1 != '\0') goto LAB_ram_48094fa6;
      }
LAB_ram_48094de4:
      if ((((((*(int *)(param_2 + 0xf4) == 0) ||
             (*(char *)(*(int *)(param_2 + 0xf4) + 0x602) == '\0')) &&
            ((*(int *)(param_2 + 0xf8) == 0 || (iVar7 = FUN_ram_4ff3b9c2(), iVar7 == 0)))) &&
           ((((*(int *)(param_2 + 0x158) == 0 || (iVar7 = FUN_ram_4ff3b9c2(), iVar7 == 0)) &&
             (*(char *)(param_2 + 0x488) == '\0')) &&
            ((*(int *)(param_2 + 0x30) == 0 || (iVar7 = FUN_ram_4ff3b9c2(), iVar7 == 0)))))) &&
          (*(char *)(param_2 + 0x87e) == '\0')) && (*(char *)(param_2 + 0x882) == '\0')) {
        if (*(char *)(param_2 + 0x14) == '\x01') {
          FUN_ram_4ff230ce(param_1 + 0x18d84,0);
        }
        *(undefined1 *)(param_2 + 0x882) = 1;
        puVar12 = (undefined1 *)(param_2 + 0x5d6);
        do {
          *puVar12 = 0;
          puVar12 = puVar12 + 0x24;
        } while (puVar12 != (undefined1 *)(param_2 + 0x85e));
        *(undefined2 *)(param_2 + 0x5b4) = 0;
        *(undefined1 *)(param_2 + 0x5b6) = 0;
        *(undefined1 *)(param_2 + 0x87d) = 0;
        cVar1 = *(char *)(param_2 + 0x308d);
        cVar2 = *(char *)(param_2 + 0x87c);
        cVar3 = *(char *)(param_2 + 0x308e);
        uStack_78 = *(ushort *)(param_2 + 0x3090);
        uStack_74 = *(ushort *)(param_2 + 0x3092);
        uStack_70 = *(ushort *)(param_2 + 0x3094);
        uStack_6c = *(ushort *)(param_2 + 0x3096);
        iVar7 = *(int *)(param_2 + 0x2c);
        if (((cVar2 == '\0') || (iVar8 = FUN_ram_4ff2d996(iVar7), iVar8 == 0)) || (iVar8 == 0x103))
        {
          *(undefined1 *)(param_2 + 0x87c) = 0;
          FUN_ram_4ff3ee10(iVar5);
          uVar16 = FUN_ram_4ff21a0a();
          do {
            FUN_ram_4ff3ec14(iVar5,0xffffffff);
            if (((*(char *)(param_2 + 0x588) == '\0') && (*(char *)(param_2 + 0x847) == '\0')) &&
               (*(char *)(param_2 + 0x845) == '\0')) {
              FUN_ram_4ff3ee10();
              iVar8 = FUN_ram_48094ad2(param_1,iVar7,param_2);
              if (iVar8 == 0) {
                if (cVar2 == '\0') {
                  FUN_ram_4ff3ec14(iVar5,0xffffffff);
                  puVar4 = (undefined *)0x0;
                }
                else {
                  FUN_ram_48094a54(param_2);
                  FUN_ram_4ff3ec14(iVar5,0xffffffff);
                  iVar8 = FUN_ram_4ff2d91e(iVar7);
                  if (iVar8 != 0) {
                    iVar9 = FUN_ram_4ff2d996(iVar7);
                    if ((iVar9 == 0) || (iVar9 == 0x103)) {
                      *(undefined2 *)(param_2 + 0x87c) = 0;
                      FUN_ram_4ff3ee10(iVar5);
                      goto LAB_ram_48095128;
                    }
                    *(undefined1 *)(param_2 + 0x882) = 0;
                    *(undefined8 *)(param_2 + 0x8b0) = uVar15;
                    *(undefined2 *)(param_2 + 0x87c) = 1;
                    *(undefined1 *)(param_2 + 0x884) = 1;
                    *(int *)(param_2 + 0x3084) = iVar9;
                    *(undefined4 *)(param_2 + 0x3078) = 0;
                    goto LAB_ram_48095036;
                  }
                  puVar4 = &sedeleg;
                  *(undefined1 *)(param_2 + 0x882) = 0;
                  *(undefined **)(param_2 + 0x87c) = &sedeleg;
                  FUN_ram_4ff3ee10(iVar5);
                  FUN_ram_4ff3ec14(iVar5,0xffffffff);
                }
                *(undefined **)(param_2 + 0x87c) = puVar4;
                *(undefined1 *)(param_2 + 0x882) = 0;
                *(undefined1 *)(param_2 + 0x884) = 0;
                uVar14 = 1;
                uVar6 = 0;
              }
              else {
                iVar8 = 1;
                if (cVar2 != '\0') {
LAB_ram_48095128:
                  if (iVar7 != 0) {
                    auStack_60[0] = 0;
                    auStack_60[1] = 0;
                    auStack_60[2] = 0;
                    if (cVar1 == '\0') {
                      if (cVar3 == '\0') {
                        auStack_60[3] = 4;
                        auStack_60[0] = (uint)uStack_78;
                        auStack_60[2] = (uint)uStack_74;
                        iVar9 = FUN_ram_4ff2da86(iVar7,0,auStack_60);
                        if (iVar9 == 0) {
                          FUN_ram_4ff3ec14(iVar5,0xffffffff);
                          uStack_70 = 0;
                          uStack_6c = 0;
                          goto LAB_ram_48095198;
                        }
                      }
                      else {
                        uStack_44 = 8;
                        auStack_60[0] = (uStack_70 & 0x7ff) << 5 | (uint)uStack_78 << 0x15;
                        auStack_60[2] = (uStack_6c & 0x7ff) << 5 | (uint)uStack_74 << 0x15;
                        auStack_60[3] = 0xc;
                        iVar9 = FUN_ram_4ff2da86(iVar7,0,auStack_60);
                        if (iVar9 == 0) {
                          FUN_ram_4ff3ec14(iVar5,0xffffffff);
LAB_ram_48095198:
                          *(char *)(param_2 + 0x308d) = cVar1;
                          *(char *)(param_2 + 0x308e) = cVar3;
                          *(ushort *)(param_2 + 0x3090) = uStack_78;
                          *(ushort *)(param_2 + 0x3092) = uStack_74;
                          *(ushort *)(param_2 + 0x3094) = uStack_70;
                          *(ushort *)(param_2 + 0x3096) = uStack_6c;
                          FUN_ram_4ff3ee10(iVar5);
                        }
                      }
                    }
                    else {
                      auStack_60[3] = 4;
                      iVar9 = FUN_ram_4ff2da86(iVar7,0,auStack_60);
                      if (iVar9 == 0) {
                        FUN_ram_4ff3ec14(iVar5,0xffffffff);
                        cVar3 = '\0';
                        uStack_78 = 0;
                        uStack_74 = 0;
                        uStack_70 = 0;
                        uStack_6c = 0;
                        goto LAB_ram_48095198;
                      }
                    }
                  }
                  FUN_ram_48094a54(param_2);
                  FUN_ram_4ff3ec14(iVar5,0xffffffff);
                  iVar9 = FUN_ram_4ff2d91e(iVar7);
                  if (iVar9 != 0) {
                    iVar7 = FUN_ram_4ff2d996(iVar7);
                    *(bool *)(param_2 + 0x87c) = iVar7 != 0 && iVar7 != 0x103;
                    *(undefined1 *)(param_2 + 0x87d) = 0;
                    *(undefined4 *)(param_2 + 0x8c8) = 0;
                    *(undefined1 *)(param_2 + 0x8cc) = 0;
                  }
                  else {
                    *(undefined **)(param_2 + 0x87c) = &sedeleg;
                  }
                  uStack_7c = (uint)(iVar9 == 0);
                  *(undefined1 *)(param_2 + 0x882) = 0;
                  *(undefined8 *)(param_2 + 0x8b0) = uVar15;
                  *(undefined1 *)(param_2 + 0x884) = 1;
                  *(int *)(param_2 + 0x3084) = iVar8;
                  *(uint *)(param_2 + 0x3078) = uStack_7c;
                  goto LAB_ram_48095036;
                }
                FUN_ram_4ff3ec14(iVar5,0xffffffff);
                *(undefined2 *)(param_2 + 0x87c) = 0;
                *(undefined1 *)(param_2 + 0x882) = 0;
                *(undefined8 *)(param_2 + 0x8b0) = uVar15;
                *(undefined1 *)(param_2 + 0x884) = 1;
                uVar6 = 1;
                uVar14 = 0;
              }
              *(undefined4 *)(param_2 + 0x3084) = uVar6;
              FUN_ram_4ff27ffa(param_2);
              FUN_ram_4ff3ee10(iVar5);
              goto LAB_ram_48094fc6;
            }
            FUN_ram_4ff3ee10(iVar5);
            uVar17 = FUN_ram_4ff21a0a();
            uVar10 = (uint)uVar17 - (int)uVar16;
            if (((int)((ulonglong)uVar17 >> 0x20) - (int)((ulonglong)uVar16 >> 0x20) !=
                 (uint)((uint)uVar17 < uVar10)) || (19999 < uVar10)) goto LAB_ram_48095000;
            FUN_ram_4ff3c2b6(1);
          } while( true );
        }
        *(undefined1 *)(param_2 + 0x884) = 1;
        *(undefined1 *)(param_2 + 0x882) = 0;
        *(undefined8 *)(param_2 + 0x8b0) = uVar15;
        *(int *)(param_2 + 0x3084) = iVar8;
        *(undefined4 *)(param_2 + 0x3078) = 0;
        FUN_ram_4ff27ffa(param_2);
        FUN_ram_4ff3ee10(iVar5);
        goto LAB_ram_48094fc4;
      }
    }
  }
LAB_ram_48094fa6:
  *(undefined8 *)(param_2 + 0x8b0) = uVar15;
  *(undefined1 *)(param_2 + 0x884) = 1;
  FUN_ram_4ff3ee10(iVar5);
LAB_ram_48094fc4:
  uVar14 = 0;
LAB_ram_48094fc6:
  FUN_ram_4ff3afa2(iVar13,0,0,0);
  return uVar14;
LAB_ram_48095000:
  FUN_ram_4ff3ec14(iVar5,0xffffffff);
  *(int *)(param_2 + 0x8b0) = (int)uVar15;
  *(undefined1 *)(param_2 + 0x882) = 0;
  *(int *)(param_2 + 0x8b4) = (int)((ulonglong)uVar15 >> 0x20);
  *(undefined1 *)(param_2 + 0x884) = 1;
  *(undefined4 *)(param_2 + 0x3078) = 0;
  *(undefined4 *)(param_2 + 0x3084) = 0x107;
LAB_ram_48095036:
  FUN_ram_4ff27ffa(param_2);
  FUN_ram_4ff3ee10(iVar5);
  goto LAB_ram_48094fc4;
}



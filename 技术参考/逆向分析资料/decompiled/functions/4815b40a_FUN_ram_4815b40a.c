/* Firmware entry: 0x4815b40a */

int FUN_ram_4815b40a(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  uint uStack_64;
  undefined1 uStack_60;
  char cStack_5f;
  byte bStack_5e;
  undefined1 auStack_58 [24];
  undefined4 uStack_40;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar6 = uVar1 + 8;
  if ((uVar6 < 7) && ((0x51U >> (uVar6 & 0x1f) & 1) != 0)) {
    pcVar9 = *(code **)(**(int **)(param_1 + 0x50) + 0xc);
    iVar2 = (*pcVar9)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x20,param_1 + 0x18,0x20,
                      uVar6,pcVar9);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return iVar2;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar6 = 0;
  do {
    while (uVar3 = uVar6,
          uVar6 = *(uint *)((uVar3 >> 4) * 4 + param_1 + 0x18) >> ((uVar3 & 0xf) << 1) & 3,
          uVar6 == 2) {
      if (*(int *)(param_1 + 0x3c) == -1) {
        *(uint *)(param_1 + 0x3c) = uVar3;
      }
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      uVar6 = uVar3 + 1;
      if (uVar3 + 1 == 0x7e) goto LAB_ram_4815b4a0;
    }
    if (uVar6 == 0) {
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    }
    uVar6 = uVar3 + 1;
  } while (uVar3 + 1 != 0x7e);
LAB_ram_4815b4a0:
  uVar3 = uVar3 + 1;
  if (uVar1 == 0xfffffffe) {
    uVar1 = 0;
    do {
      if ((*(uint *)((uVar1 >> 4) * 4 + param_1 + 0x18) >> ((uVar1 & 0xf) << 1) & 3) == 3) {
        *(uint *)(param_1 + 0x38) = uVar1;
        goto LAB_ram_4815b654;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x7e);
    uVar1 = *(uint *)(param_1 + 0x38);
    while (uVar1 < 0x7e) {
LAB_ram_4815b654:
      iVar2 = **(int **)(param_1 + 0x50);
      pcVar9 = *(code **)(iVar2 + 0xc);
      iVar2 = (*pcVar9)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x40 + uVar1 * 0x20,
                        &uStack_40,4,iVar2,pcVar9);
      if (iVar2 != 0) goto LAB_ram_4815b672;
      uVar6 = *(uint *)(param_1 + 0x38);
      if (uStack_40 == 0xffffffff) {
        uVar3 = uVar6;
        if (0x7e < uVar6) {
          uVar3 = 0x7e;
        }
        if (uVar6 == 0) {
          return 0;
        }
        break;
      }
      if (0x7d < uVar6) {
        return -1;
      }
      uVar10 = *(uint *)((uVar6 >> 4) * 4 + param_1 + 0x18);
      iVar2 = FUN_ram_4815a6ca(param_1,uVar6,0);
      if (iVar2 != 0) goto LAB_ram_4815b672;
      uVar1 = *(int *)(param_1 + 0x38) + 1;
      *(uint *)(param_1 + 0x38) = uVar1;
      if ((uVar10 >> ((uVar6 & 0xf) << 1) & 3) == 2) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    }
    uVar1 = 0;
LAB_ram_4815b6aa:
    do {
      uVar6 = *(uint *)((uVar1 >> 4) * 4 + param_1 + 0x18) >> ((uVar1 & 0xf) << 1) & 3;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          pcVar9 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
          iVar2 = (*pcVar9)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x40 + uVar1 * 0x20,
                            &uStack_60,0x20,pcVar9);
          if (iVar2 != 0) goto LAB_ram_4815b672;
          iVar2 = FUN_ram_4815d6be(&uStack_60,uVar1 & 0xff);
          uVar6 = uVar1;
          if (iVar2 == 0) {
            iVar2 = FUN_ram_4815ac98(param_1,uVar1);
            if (iVar2 != 0) goto LAB_ram_4815b672;
            uVar4 = uVar1 + 1;
          }
          else {
            iVar2 = FUN_ram_4815d86c(param_1 + 0x44,&uStack_60,uVar1);
            if (iVar2 != 0) goto LAB_ram_4815b672;
            uVar10 = FUN_ram_4815da28(param_1 + 0x44,0,&uStack_60);
            if ((((byte)(cStack_5f + 0xbfU) < 2) || (uVar4 = uVar1 + 1, cStack_5f == '!')) &&
               (uVar4 = bStack_5e + uVar1, uVar7 = uVar1, uVar1 < uVar4)) {
              while (uVar8 = uVar7 >> 4, uVar5 = uVar7 & 0xf, uVar7 = uVar7 + 1,
                    (*(uint *)(uVar8 * 4 + param_1 + 0x18) >> (uVar5 << 1) & 3) == 2) {
                if (uVar7 == uVar4) goto LAB_ram_4815b788;
                if (uVar7 == 0x7e) {
                  return -1;
                }
              }
              FUN_ram_4815ac98(param_1,uVar1);
              uVar6 = 0xffffffff;
            }
            else {
LAB_ram_4815b788:
              if (uVar10 < uVar1) {
                FUN_ram_4815ac98(param_1);
              }
            }
          }
          uVar1 = uVar4;
          if (uVar3 <= uVar1) break;
          goto LAB_ram_4815b6aa;
        }
        iVar2 = FUN_ram_4815ac98(param_1,uVar1);
        if (iVar2 != 0) goto LAB_ram_4815b672;
      }
      uVar1 = uVar1 + 1;
      uVar6 = 0xffffffff;
    } while (uVar1 < uVar3);
    if (uVar6 != 0xffffffff) {
      uStack_64 = 0;
      iVar2 = FUN_ram_4815af12(param_1,uStack_60,cStack_5f,auStack_58,&uStack_64,&uStack_40,0xff);
      if (((iVar2 == 0) && (uStack_64 < uVar6)) && (iVar2 = FUN_ram_4815ac98(param_1), iVar2 != 0))
      {
LAB_ram_4815b672:
        *(undefined4 *)(param_1 + 0xc) = 0;
        return iVar2;
      }
    }
  }
  else if (((uVar1 & 0xfffffffb) == 0xfffffff8) && (uVar1 = *(uint *)(param_1 + 0x3c), uVar1 < 0x7e)
          ) {
    do {
      if ((*(uint *)((uVar1 >> 4) * 4 + param_1 + 0x18) >> ((uVar1 & 0xf) << 1) & 3) == 2) {
        pcVar9 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
        iVar2 = (*pcVar9)(*(int **)(param_1 + 0x50),uVar1 * 0x20 + *(int *)(param_1 + 8) + 0x40,
                          &uStack_40,0x20,pcVar9);
        if (iVar2 != 0) {
LAB_ram_4815b5ae:
          *(undefined4 *)(param_1 + 0xc) = 0;
          return iVar2;
        }
        iVar2 = FUN_ram_4815d6be(&uStack_40,uVar1 & 0xff);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4815ac98(param_1,uVar1);
          if (iVar2 != 0) goto LAB_ram_4815b5ae;
        }
        else {
          if (uStack_40._2_1_ == '\0') {
            return -1;
          }
          iVar2 = FUN_ram_4815d86c(param_1 + 0x44,&uStack_40,uVar1);
          if (iVar2 != 0) goto LAB_ram_4815b5ae;
          uVar6 = uStack_40 >> 0x10 & 0xff;
          if (((byte)(uStack_40._1_1_ + 0xbfU) < 2) || (uStack_40._1_1_ == '!')) {
            uVar10 = uVar1 + 1;
            uVar3 = uVar6 + uVar1;
            if (uVar10 < uVar3) {
              do {
                uVar7 = uVar10 >> 4;
                uVar4 = uVar10 & 0xf;
                if (uVar10 == 0x7e) {
                  return -1;
                }
                uVar10 = uVar10 + 1;
                if ((*(uint *)(uVar7 * 4 + param_1 + 0x18) >> (uVar4 << 1) & 3) != 2) {
                  FUN_ram_4815ac98(param_1,uVar1);
                  break;
                }
              } while (uVar10 != uVar3);
            }
          }
          uVar1 = uVar1 + (uVar6 - 1);
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x7e);
  }
  return 0;
}



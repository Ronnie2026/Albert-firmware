/* Firmware entry: 0x481796e2 */

int FUN_ram_481796e2(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 auStack_40 [2];
  undefined4 auStack_38 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == 0) || (iVar1 = FUN_ram_48178db6(param_1,1), iVar1 != 0)) {
    return -0x4080;
  }
  FUN_ram_4817fb86(auStack_a8);
  FUN_ram_4817fb86(auStack_a0);
  FUN_ram_4817fb86(auStack_98);
  FUN_ram_4817fb86(auStack_90);
  FUN_ram_4817fb86(auStack_78);
  FUN_ram_4817fb86(auStack_70);
  FUN_ram_4817fb86(auStack_88);
  FUN_ram_4817fb86(auStack_80);
  FUN_ram_4817fb86(auStack_68);
  FUN_ram_4817fb86(auStack_60);
  iVar1 = FUN_ram_481800da(auStack_a8,param_4,*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar4 = param_1 + 8;
    iVar1 = FUN_ram_4818023e(auStack_a8,iVar4);
    if (-1 < iVar1) {
      FUN_ram_4817fb90(auStack_a0);
      FUN_ram_4817fb90(auStack_98);
      FUN_ram_4817fb90(auStack_90);
      FUN_ram_4817fb90(auStack_78);
      FUN_ram_4817fb90(auStack_70);
      FUN_ram_4817fb90(auStack_a8);
      FUN_ram_4817fb90(auStack_88);
      FUN_ram_4817fb90(auStack_80);
      FUN_ram_4817fb90(auStack_60);
      FUN_ram_4817fb90(auStack_68);
      return -0x4304;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      FUN_ram_4817fb86(auStack_58);
      FUN_ram_4817fb86(auStack_50);
      FUN_ram_4817fb86(auStack_48);
      FUN_ram_4817fb86(auStack_40);
      FUN_ram_4817fb86(auStack_38);
      iVar1 = FUN_ram_4818126a(auStack_58,1,param_1 + 0x20,param_2,param_3);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_ram_48180ec2(auStack_38,auStack_48,auStack_58,param_1 + 0x20), iVar1 == 0)) {
        iVar1 = FUN_ram_481802e8(auStack_38,1);
        if (iVar1 == 0) {
          iVar1 = FUN_ram_4818126a(auStack_50,1,param_1 + 0x28,param_2,param_3);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_ram_48180ec2(auStack_38,auStack_40,auStack_50,param_1 + 0x28), iVar1 == 0)
             ) {
            iVar1 = FUN_ram_481802e8(auStack_38,1);
            if (iVar1 != 0) goto LAB_ram_48179bd6;
            iVar1 = FUN_ram_48178ce0(param_1 + 0x68,auStack_58,auStack_50,param_1);
            if (iVar1 == 0) {
              iVar5 = param_1 + 0x60;
              iVar1 = FUN_ram_48178ce0(iVar5,auStack_48,auStack_40,param_1);
              FUN_ram_4817fb90(auStack_58);
              FUN_ram_4817fb90(auStack_50);
              FUN_ram_4817fb90(auStack_48);
              FUN_ram_4817fb90(auStack_40);
              FUN_ram_4817fb90(auStack_38);
              if (iVar1 == 0) {
                iVar1 = FUN_ram_4817bc22(iVar5,iVar5,param_1 + 0x10,iVar4,param_1 + 0x48);
                goto joined_r0x48179bc2;
              }
              goto LAB_ram_48179752;
            }
          }
        }
        else {
LAB_ram_48179bd6:
          iVar1 = -0x4480;
        }
      }
      FUN_ram_4817fb90(auStack_58);
      FUN_ram_4817fb90(auStack_50);
      FUN_ram_4817fb90(auStack_48);
      FUN_ram_4817fb90(auStack_40);
      FUN_ram_4817fb90(auStack_38);
    }
    else {
      iVar5 = param_1 + 0x60;
      iVar1 = FUN_ram_4817bf84(iVar5,iVar5,iVar5);
      if ((iVar1 == 0) && (iVar1 = FUN_ram_48180a3c(iVar5,iVar5,iVar4), iVar1 == 0)) {
        iVar5 = param_1 + 0x68;
        iVar1 = FUN_ram_4817bf84(iVar5,iVar5,iVar5);
        if (iVar1 == 0) {
          iVar1 = FUN_ram_48180a3c(iVar5,iVar5,iVar4);
joined_r0x48179bc2:
          if (iVar1 == 0) {
            iVar1 = FUN_ram_4817bf84(auStack_a8,auStack_a8,param_1 + 0x60);
            if (((iVar1 == 0) && (iVar1 = FUN_ram_48180a3c(auStack_a8,auStack_a8,iVar4), iVar1 == 0)
                ) && (iVar1 = FUN_ram_4817fe72(auStack_68,auStack_a8), iVar1 == 0)) {
              iVar1 = FUN_ram_481805c8(auStack_a0,param_1 + 0x20,1);
              if (iVar1 == 0) {
                iVar1 = FUN_ram_481805c8(auStack_98,param_1 + 0x28,1);
                if (((((iVar1 == 0) &&
                      (iVar1 = FUN_ram_48181214(auStack_90,0x1c,param_2,param_3), iVar1 == 0)) &&
                     ((iVar1 = FUN_ram_4817bf84(auStack_78,auStack_a0,auStack_90), iVar1 == 0 &&
                      ((iVar1 = FUN_ram_4818058e(auStack_78,auStack_78,param_1 + 0x30), iVar1 == 0
                       && (iVar1 = FUN_ram_48181214(auStack_90,0x1c,param_2,param_3), iVar1 == 0))))
                     )) && (iVar1 = FUN_ram_4817bf84(auStack_70,auStack_98,auStack_90), iVar1 == 0))
                   && ((((iVar1 = FUN_ram_4818058e(auStack_70,auStack_70,param_1 + 0x38), iVar1 == 0
                         && (iVar1 = FUN_ram_4817bc22(auStack_88,auStack_a8,auStack_78,
                                                      param_1 + 0x20,param_1 + 0x50), iVar1 == 0))
                        && (iVar1 = FUN_ram_4817bc22(auStack_80,auStack_a8,auStack_70,param_1 + 0x28
                                                     ,param_1 + 0x58), iVar1 == 0)) &&
                       ((iVar1 = FUN_ram_48178ce0(auStack_a8,auStack_88,auStack_80,param_1),
                        iVar1 == 0 &&
                        (iVar1 = FUN_ram_4817bc22(auStack_60,auStack_a8,param_1 + 0x10,iVar4,
                                                  param_1 + 0x48), iVar1 == 0)))))) {
                  iVar1 = FUN_ram_4818023e(auStack_60,auStack_68);
                  if (iVar1 != 0) {
                    FUN_ram_4817fb90(auStack_a0);
                    FUN_ram_4817fb90(auStack_98);
                    FUN_ram_4817fb90(auStack_90);
                    FUN_ram_4817fb90(auStack_78);
                    FUN_ram_4817fb90(auStack_70);
                    FUN_ram_4817fb90(auStack_a8);
                    FUN_ram_4817fb90(auStack_88);
                    FUN_ram_4817fb90(auStack_80);
                    FUN_ram_4817fb90(auStack_60);
                    FUN_ram_4817fb90(auStack_68);
                    return -0x4380;
                  }
                  uVar2 = FUN_ram_48181d56(*(undefined4 *)(param_1 + 8));
                  uVar3 = (uint)*(ushort *)(param_1 + 0xe);
                  FUN_ram_4817fb86(auStack_40);
                  FUN_ram_4817fb86(auStack_38);
                  iVar1 = FUN_ram_48181e98(auStack_40,iVar4);
                  if (((iVar1 == 0) &&
                      (iVar1 = FUN_ram_4817fbba(auStack_38,uVar3 * 2 + 1), iVar1 == 0)) &&
                     ((iVar1 = FUN_ram_4817fbba(auStack_a8,uVar3), iVar1 == 0 &&
                      (iVar1 = FUN_ram_4817fbba(param_1 + 0x68,uVar3), iVar1 == 0)))) {
                    FUN_ram_481820d2(auStack_a8[0],auStack_a8[0],*(undefined4 *)(param_1 + 8),uVar3,
                                     uVar2,auStack_40[0],auStack_38[0]);
                    FUN_ram_48181d88(auStack_a8[0],auStack_a8[0],*(undefined4 *)(param_1 + 0x68),
                                     uVar3,*(undefined4 *)(param_1 + 8),uVar3,uVar2,auStack_38[0]);
                    FUN_ram_4817fb90(auStack_40);
                    FUN_ram_4817fb90(auStack_38);
                    iVar1 = FUN_ram_48180138(auStack_a8,param_5,*(undefined4 *)(param_1 + 4));
                    FUN_ram_4817fb90(auStack_a0);
                    FUN_ram_4817fb90(auStack_98);
                    FUN_ram_4817fb90(auStack_90);
                    FUN_ram_4817fb90(auStack_78);
                    FUN_ram_4817fb90(auStack_70);
                    FUN_ram_4817fb90(auStack_a8);
                    FUN_ram_4817fb90(auStack_88);
                    FUN_ram_4817fb90(auStack_80);
                    FUN_ram_4817fb90(auStack_60);
                    FUN_ram_4817fb90(auStack_68);
                    if (iVar1 == 0) {
                      return 0;
                    }
                    goto LAB_ram_4817978e;
                  }
                  FUN_ram_4817fb90(auStack_40);
                  FUN_ram_4817fb90(auStack_38);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_ram_48179752:
  FUN_ram_4817fb90(auStack_a0);
  FUN_ram_4817fb90(auStack_98);
  FUN_ram_4817fb90(auStack_90);
  FUN_ram_4817fb90(auStack_78);
  FUN_ram_4817fb90(auStack_70);
  FUN_ram_4817fb90(auStack_a8);
  FUN_ram_4817fb90(auStack_88);
  FUN_ram_4817fb90(auStack_80);
  FUN_ram_4817fb90(auStack_60);
  FUN_ram_4817fb90(auStack_68);
LAB_ram_4817978e:
  if (-0x80 < iVar1) {
    iVar1 = iVar1 + -0x4300;
  }
  return iVar1;
}



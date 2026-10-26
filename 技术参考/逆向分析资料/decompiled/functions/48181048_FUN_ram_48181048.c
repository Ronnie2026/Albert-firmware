/* Firmware entry: 0x48181048 */

int FUN_ram_48181048(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *local_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  int *piStack_38;
  undefined2 uStack_34;
  ushort uStack_32;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_40 = (int *)0x0;
  uStack_34 = 1;
  uStack_3c = 1;
  uStack_3a = 0;
  iVar3 = FUN_ram_4817fe72(&local_40);
  piVar8 = local_40;
  uVar2 = (uint)uStack_3a;
  if (iVar3 != 0) {
    if (local_40 != (int *)0x0) {
      FUN_ram_48178b14(local_40,uVar2 << 2);
    }
    return -0x10;
  }
  piStack_38 = (int *)0x0;
  uStack_32 = 0;
  iVar3 = FUN_ram_4817fe72(&piStack_38,param_3);
  piVar9 = piStack_38;
  uVar7 = (uint)uStack_32;
  if (iVar3 == 0) {
    uStack_34 = 1;
    uStack_3c = 1;
    uVar2 = uVar7;
    if (uVar7 == 0) {
      uVar2 = 1;
    }
    iVar3 = FUN_ram_4817fbba(&local_40,uVar2);
    piVar8 = local_40;
    uVar2 = (uint)uStack_3a;
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4817fbba(&piStack_38,uVar2);
      piVar9 = piStack_38;
      uVar7 = (uint)uStack_32;
      if (iVar3 == 0) {
        iVar3 = FUN_ram_481820ac(piVar8,uVar2);
        if (iVar3 == 0) {
          iVar5 = FUN_ram_4817fe72(param_1,&piStack_38);
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = -0x10;
          }
          goto LAB_ram_48181178;
        }
        iVar3 = FUN_ram_481820ac(piVar9,uVar7);
        if (iVar3 == 0) {
          iVar5 = FUN_ram_4817fe72(param_1,&local_40);
        }
        else {
          uVar1 = 0;
          piVar6 = piVar8;
          if (uVar2 == 0) {
            uVar10 = 0;
            if (uVar7 == 0) {
              uVar1 = 0;
            }
            else {
LAB_ram_48181112:
              uVar1 = 0;
              piVar6 = piVar9;
              do {
                iVar3 = *piVar6;
                piVar6 = piVar6 + 1;
                if (iVar3 != 0) {
                  if (uVar2 != 0) {
                    FUN_ram_48181940(piVar8,uVar2,uVar10);
                  }
                  iVar3 = __ctzsi2(iVar3);
                  uVar1 = uVar1 * 0x20 + iVar3;
                  goto LAB_ram_4818113a;
                }
                uVar1 = uVar1 + 1;
              } while (uVar1 < uVar7);
              uVar1 = 0;
              if (uVar2 != 0) {
                FUN_ram_48181940(piVar8,uVar2,uVar10);
              }
LAB_ram_4818113a:
              FUN_ram_48181940(piVar9,uVar7,uVar1);
            }
          }
          else {
            do {
              iVar3 = *piVar6;
              piVar6 = piVar6 + 1;
              if (iVar3 != 0) {
                iVar3 = __ctzsi2(iVar3);
                uVar10 = uVar1 * 0x20 + iVar3;
                break;
              }
              uVar1 = uVar1 + 1;
              uVar10 = 0;
            } while (uVar2 != uVar1);
            if (uVar7 != 0) goto LAB_ram_48181112;
            FUN_ram_48181940(piVar8,uVar2,uVar10);
            uVar1 = 0;
          }
          uVar4 = FUN_ram_48181632(piVar9,piVar8,uVar2);
          FUN_ram_48181712(piVar8,piVar9,uVar2,uVar4);
          iVar3 = FUN_ram_48180ec2(param_1,0,&local_40,&piStack_38);
          if (iVar3 != 0) goto LAB_ram_48181178;
          if (uVar10 < uVar1) {
            uVar1 = uVar10;
          }
          iVar5 = FUN_ram_4818014a(param_1,uVar1);
        }
        iVar3 = 0;
        if (iVar5 == 0) goto LAB_ram_48181178;
      }
    }
  }
  iVar3 = -0x10;
LAB_ram_48181178:
  if (piVar8 != (int *)0x0) {
    FUN_ram_48178b14(piVar8,uVar2 << 2);
  }
  if (piVar9 != (int *)0x0) {
    FUN_ram_48178b14(piVar9,uVar7 << 2);
  }
  return iVar3;
}



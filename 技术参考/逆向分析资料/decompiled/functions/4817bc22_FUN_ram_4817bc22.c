/* Firmware entry: 0x4817bc22 */

/* WARNING: Removing unreachable block (ram,0x4817bd98) */

int FUN_ram_4817bc22(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int *piStack_5c;
  int local_50;
  undefined2 uStack_4c;
  int local_48 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(&local_50);
  FUN_ram_4817fb86(local_48);
  iVar3 = FUN_ram_481802e8(param_4,0);
  if (((iVar3 < 1) || ((*(uint *)*param_4 & 1) == 0)) ||
     (iVar3 = FUN_ram_481802e8(param_3,0), iVar3 < 0)) {
    iVar3 = -4;
  }
  else {
    iVar3 = FUN_ram_481802e8(param_3,0);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4817ff24(param_1,1);
    }
    else {
      iVar3 = FUN_ram_481801be(param_2,param_4);
      piStack_5c = param_2;
      if (-1 < iVar3) {
        iVar3 = FUN_ram_4817fe72(&local_50,param_2);
        if (iVar3 != 0) goto LAB_ram_4817bc98;
        uStack_4c = 1;
        iVar3 = FUN_ram_48180a3c(&local_50,&local_50,param_4);
        if (iVar3 != 0) goto LAB_ram_4817bc98;
        iVar3 = FUN_ram_481802e8(&local_50,0);
        if (iVar3 != 0) {
          uStack_4c = (undefined2)param_2[1];
        }
        piStack_5c = &local_50;
      }
      uVar4 = (uint)*(ushort *)((int)piStack_5c + 6);
      if (uVar4 != 0) {
        iVar3 = *piStack_5c + uVar4 * 4;
        do {
          if (*(int *)(iVar3 + -4) != 0) break;
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -4;
        } while (uVar4 != 0);
      }
      uVar7 = (uint)*(ushort *)((int)param_3 + 6);
      if (uVar7 != 0) {
        iVar3 = *param_3 + uVar7 * 4;
        do {
          if (*(int *)(iVar3 + -4) != 0) {
            if (uVar4 < uVar7) {
              uVar4 = uVar7;
            }
            break;
          }
          uVar7 = uVar7 - 1;
          iVar3 = iVar3 + -4;
        } while (uVar7 != 0);
      }
      uVar7 = (uint)*(ushort *)((int)param_4 + 6);
      if (uVar7 != 0) {
        iVar3 = *param_4 + uVar7 * 4;
        do {
          if (*(int *)(iVar3 + -4) != 0) {
            if (uVar4 < uVar7) {
              uVar4 = uVar7;
            }
            break;
          }
          uVar7 = uVar7 - 1;
          iVar3 = iVar3 + -4;
        } while (uVar7 != 0);
      }
      uVar4 = FUN_ram_4818b4c6(uVar4);
      if (uVar4 << 5 < 0x1001) {
        if (param_5 == (int *)0x0) {
          param_5 = local_48;
        }
        if (((*param_5 != 0) && (uVar4 == *(ushort *)((int)param_5 + 6))) ||
           (iVar3 = FUN_ram_4817bbca(param_5,param_4,uVar4), iVar3 == 0)) {
          uVar8 = *(uint *)*param_4;
          iVar3 = 0x1f;
          uVar11 = 2;
          uVar1 = 0;
          uVar9 = 4;
          uVar2 = 0;
          iVar12 = 0;
          uVar10 = 1;
          do {
            uVar13 = __umoddi3(uVar10 * uVar8,
                               iVar12 * uVar8 + (int)((ulonglong)uVar10 * (ulonglong)uVar8 >> 0x20),
                               uVar9,uVar2);
            uVar6 = uVar10;
            if (CONCAT44(uVar1,uVar11) <= uVar13) {
              uVar6 = uVar10 + uVar11;
              iVar12 = iVar12 + uVar1 + (uint)(uVar6 < uVar10);
            }
            iVar3 = iVar3 + -1;
            uVar1 = uVar1 << 1 | uVar11 >> 0x1f;
            uVar11 = uVar11 << 1;
            uVar2 = uVar2 << 1 | uVar9 >> 0x1f;
            uVar9 = uVar9 << 1;
            uVar10 = uVar6;
          } while (iVar3 != 0);
          FUN_ram_4817c206();
          FUN_ram_4818b4f2();
          FUN_ram_4818b4de(1);
          if (DAT_ram_4ff6e29c == 0) {
            DAT_ram_4ff6e29c = FUN_ram_4ff3aca6(1,0,0,&DAT_ram_4ff6d57c,3);
            if (DAT_ram_4ff6e29c == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"bignum","E (%lu) %s: Failed to create intr semaphore\n",uVar5,
                               "bignum");
              iVar3 = -1;
              FUN_ram_4817c21c();
              goto LAB_ram_4817bc98;
            }
            iVar3 = FUN_ram_4800340c(0x44,0,FUN_ram_4ff2d62a,0,0);
            if (iVar3 != 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"bignum","E (%lu) %s: Failed to allocate RSA interrupt %d\n",uVar5,
                               "bignum",iVar3);
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e06();
            }
          }
          FUN_ram_4817c348(piStack_5c,param_3,param_4,param_5,-uVar6,uVar4);
          iVar3 = FUN_ram_4817fbba(param_1,uVar7);
          if (iVar3 == 0) {
            iVar12 = FUN_ram_4ff3b5f0(DAT_ram_4ff6e29c,2000);
            if (iVar12 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,&DAT_ram_481df198,
                               "E (%lu) %s: Timed out waiting for completion of MPI Interrupt\n",
                               uVar5,&DAT_ram_481df198);
              iVar3 = -1;
              FUN_ram_4817c21c();
            }
            else {
              FUN_ram_4818b4de(0);
              FUN_ram_4818b5f0(*param_1,*(undefined2 *)((int)param_1 + 6),uVar7);
              FUN_ram_4817c21c();
              if (((short)piStack_5c[1] == -1) && ((*(uint *)*param_3 & 1) != 0)) {
                *(undefined2 *)(param_1 + 1) = 0xffff;
                iVar3 = FUN_ram_4818058e(param_1,param_4,param_1);
              }
              else {
                *(undefined2 *)(param_1 + 1) = 1;
              }
            }
          }
          else {
            FUN_ram_4817c21c();
          }
        }
      }
      else {
        iVar3 = -0xe;
      }
    }
  }
LAB_ram_4817bc98:
  FUN_ram_4817fb90(local_48);
  FUN_ram_4817fb90(&local_50);
  return iVar3;
}



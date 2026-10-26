/* Firmware entry: 0x4817bf84 */

int FUN_ram_4817bf84(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_38 [8];
  int iStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4818006c(param_2);
  iVar3 = FUN_ram_4818006c(param_3);
  uVar7 = iVar2 + 0x1fU >> 5;
  uVar6 = iVar3 + 0x1fU >> 5;
  uVar1 = uVar7;
  if (uVar7 <= uVar6) {
    uVar1 = uVar6;
  }
  iVar4 = FUN_ram_4818b4c6(uVar1);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    iVar2 = FUN_ram_4817ff24(param_1,0);
    return iVar2;
  }
  if (iVar2 == 1) {
    iVar2 = FUN_ram_4817fe72(param_1,param_3);
    *(short *)(param_1 + 1) = (short)param_1[1] * (short)param_2[1];
  }
  else if (iVar3 == 1) {
    iVar2 = FUN_ram_4817fe72(param_1,param_2);
    *(short *)(param_1 + 1) = (short)param_1[1] * (short)param_3[1];
  }
  else {
    uVar1 = iVar2 + iVar3 + 0x1fU >> 5;
    iVar2 = FUN_ram_4817fbba(param_1,uVar1);
    if (iVar2 == 0) {
      if ((uint)(iVar4 << 5) < 0x801) {
        FUN_ram_4817c206();
        FUN_ram_4817c22e(param_2,param_3,iVar4);
        FUN_ram_4818b5f0(*param_1,*(undefined2 *)((int)param_1 + 6),uVar1);
        FUN_ram_4817c21c();
        *(short *)(param_1 + 1) = (short)param_2[1] * (short)param_3[1];
      }
      else {
        if (0x1000 < uVar1 << 5) {
          if (uVar7 < uVar6) {
            uStack_2c = (undefined2)param_3[1];
            iStack_30 = *param_3;
            param_3 = param_2;
            uVar7 = uVar6;
          }
          else {
            uStack_2c = (undefined2)param_2[1];
            iStack_30 = *param_2;
          }
          uVar7 = uVar7 >> 1;
          iStack_28 = uVar7 * 4 + iStack_30;
          uStack_2a = (undefined2)uVar7;
          FUN_ram_4817fb86(auStack_38);
          iVar2 = FUN_ram_4817bf84(auStack_38,param_3,&iStack_30);
          if (((iVar2 == 0) && (iVar2 = FUN_ram_4817bf84(param_1,param_3,&iStack_28), iVar2 == 0))
             && (iVar2 = FUN_ram_4818014a(param_1,uVar7 << 5), iVar2 == 0)) {
            iVar2 = FUN_ram_4818058e(param_1,param_1,auStack_38);
          }
          FUN_ram_4817fb90(auStack_38);
          return iVar2;
        }
        uVar5 = FUN_ram_4818b4c6(uVar1);
        FUN_ram_4817c206();
        FUN_ram_4817c274(param_2,param_3,uVar5);
        iVar2 = FUN_ram_4817fbba(param_1,uVar5);
        if (iVar2 == 0) {
          FUN_ram_4818b5f0(*param_1,*(undefined2 *)((int)param_1 + 6),uVar5);
          uVar7 = (uint)*(ushort *)((int)param_1 + 6);
          *(short *)(param_1 + 1) = (short)param_2[1] * (short)param_3[1];
          if (uVar7 != 0) {
            iVar3 = *param_1 + uVar7 * 4;
            do {
              if (*(int *)(iVar3 + -4) != 0) {
                uVar1 = uVar1 - uVar7;
                break;
              }
              uVar7 = uVar7 - 1;
              iVar3 = iVar3 + -4;
            } while (uVar7 != 0);
          }
          if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("esp_bignum.c",0x2b1,"mpi_mult_mpi_failover_mod_mult",
                             "z_words - mpi_words(Z) <= (size_t)1");
          }
        }
        FUN_ram_4817c21c();
      }
    }
  }
  return iVar2;
}



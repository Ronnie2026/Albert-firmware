/* Firmware entry: 0x4801e466 */

void FUN_ram_4801e466(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  piVar6 = (int *)*param_1;
  if (*piVar6 != 0x28aaeef9) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("protobuf-c.c",0xd07,"protobuf_c_message_free_unpacked",
                     "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
  }
  if (param_2 == 0) {
    param_2 = 0x4ff4851c;
  }
  uVar2 = piVar6[6];
  *param_1 = 0;
  iVar5 = 0;
  uVar1 = 0;
  if (uVar2 == 0) {
LAB_ram_4801e4f0:
    uVar2 = param_1[1];
    iVar5 = param_1[2];
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(uVar1 * 0x10 + iVar5 + 0xc) != 0) {
          (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
          iVar5 = param_1[2];
          uVar2 = param_1[1];
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    if (iVar5 != 0) {
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),iVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x4801e53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),param_1);
    return;
  }
LAB_ram_4801e4b0:
  iVar4 = piVar6[7] + iVar5;
  if (((*(uint *)(iVar4 + 0x20) & 4) == 0) ||
     (*(int *)(iVar4 + 4) == *(int *)(*(int *)(iVar4 + 0x10) + (int)param_1))) {
    if (*(int *)(iVar4 + 8) == 2) {
      piVar7 = *(int **)(*(int *)(iVar4 + 0x14) + (int)param_1);
      if (piVar7 == (int *)0x0) goto LAB_ram_4801e4de;
      iVar3 = *(int *)(iVar4 + 0xc);
      iVar4 = *(int *)((int)param_1 + *(int *)(iVar4 + 0x10));
      if (iVar3 == 0xe) {
        iVar3 = 0;
        piVar8 = piVar7;
        if (iVar4 != 0) {
          do {
            if (*piVar8 != 0) {
              (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
            }
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar4 != iVar3);
        }
      }
      else if (iVar3 == 0xf) {
        if (iVar4 != 0) {
          iVar3 = 0;
          piVar8 = piVar7 + 1;
          do {
            if (*piVar8 != 0) {
              (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
            }
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 2;
          } while (iVar4 != iVar3);
        }
      }
      else if ((iVar3 == 0x10) && (iVar4 != 0)) {
        iVar3 = 0;
        piVar8 = piVar7;
        do {
          iVar3 = iVar3 + 1;
          FUN_ram_4801e466(*piVar8,param_2);
          piVar8 = piVar8 + 1;
        } while (iVar4 != iVar3);
      }
      uVar1 = uVar1 + 1;
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),piVar7);
      uVar2 = piVar6[6];
      iVar5 = iVar5 + 0x30;
      if (uVar2 <= uVar1) goto LAB_ram_4801e4f0;
      goto LAB_ram_4801e4b0;
    }
    iVar3 = *(int *)(iVar4 + 0xc);
    if (iVar3 == 0xe) {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x14) + (int)param_1);
      if ((iVar3 == 0) || (*(int *)(iVar4 + 0x1c) == iVar3)) goto LAB_ram_4801e4de;
LAB_ram_4801e596:
      uVar1 = uVar1 + 1;
      iVar5 = iVar5 + 0x30;
      (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8));
      uVar2 = piVar6[6];
      if (uVar2 <= uVar1) goto LAB_ram_4801e4f0;
      goto LAB_ram_4801e4b0;
    }
    if (iVar3 == 0xf) {
      iVar3 = *(int *)((int)param_1 + *(int *)(iVar4 + 0x14) + 4);
      if ((iVar3 != 0) &&
         ((*(int *)(iVar4 + 0x1c) == 0 || (*(int *)(*(int *)(iVar4 + 0x1c) + 4) != iVar3))))
      goto LAB_ram_4801e596;
    }
    else if ((iVar3 == 0x10) &&
            ((iVar3 = *(int *)(*(int *)(iVar4 + 0x14) + (int)param_1), iVar3 != 0 &&
             (*(int *)(iVar4 + 0x1c) != iVar3)))) {
      FUN_ram_4801e466(iVar3,param_2);
      uVar2 = piVar6[6];
    }
  }
LAB_ram_4801e4de:
  uVar1 = uVar1 + 1;
  iVar5 = iVar5 + 0x30;
  if (uVar2 <= uVar1) goto LAB_ram_4801e4f0;
  goto LAB_ram_4801e4b0;
}



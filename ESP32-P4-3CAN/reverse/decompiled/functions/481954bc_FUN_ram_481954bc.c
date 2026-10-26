/* Firmware entry: 0x481954bc */

void FUN_ram_481954bc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481953ce(&DAT_ram_4ff6d634);
  piVar3 = (int *)(param_1 - 0x10);
  if (DAT_ram_4ff6d638 != (int *)0x0) {
    iVar5 = *(int *)(param_1 + -0x10);
    piVar4 = (int *)((int)piVar3 + iVar5);
    if (DAT_ram_4ff6d638 <= piVar4) {
      if (DAT_ram_4ff6d638 == piVar4) {
        iVar6 = *DAT_ram_4ff6d638;
        *(int *)(param_1 + -0xc) = DAT_ram_4ff6d638[1];
        *(int *)(param_1 + -0x10) = iVar6 + iVar5;
        DAT_ram_4ff6d638 = piVar3;
      }
      else {
        piVar2 = (int *)&DAT_ram_4ff6d638;
        piVar7 = DAT_ram_4ff6d638;
        while (piVar1 = (int *)piVar7[1], piVar1 != (int *)0x0) {
          if (piVar4 <= piVar1) {
            if (piVar4 == piVar1) {
              iVar5 = iVar5 + *piVar4;
              piVar7[1] = piVar4[1];
            }
            break;
          }
          piVar2 = piVar7 + 1;
          piVar7 = piVar1;
        }
        piVar4 = (int *)*piVar2;
        if (piVar3 == (int *)((int)piVar4 + *piVar4)) {
          *piVar4 = *piVar4 + iVar5;
        }
        else {
          iVar6 = piVar4[1];
          *(int *)(param_1 + -0x10) = iVar5;
          *(int *)(param_1 + -0xc) = iVar6;
          *(int **)(*piVar2 + 4) = piVar3;
        }
      }
      goto LAB_ram_481954f4;
    }
  }
  *(int **)(param_1 + -0xc) = DAT_ram_4ff6d638;
  DAT_ram_4ff6d638 = piVar3;
LAB_ram_481954f4:
  FUN_ram_48195404(&DAT_ram_4ff6d634);
  return;
}



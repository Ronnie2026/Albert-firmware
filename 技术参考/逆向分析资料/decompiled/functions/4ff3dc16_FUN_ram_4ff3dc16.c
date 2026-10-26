/* Firmware entry: 0x4ff3dc16 */

void FUN_ram_4ff3dc16(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x1478,"vTaskPriorityDisinheritAfterTimeout","pxTCB->uxMutexesHeld"
                      );
    }
    uVar3 = *(uint *)(param_1 + 0x54);
    if (uVar3 < param_2) {
      uVar2 = *(uint *)(param_1 + 0x2c);
      if (uVar2 == param_2) goto LAB_ram_4ff3dc46;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x2c);
      param_2 = uVar3;
      if (uVar2 == uVar3) goto LAB_ram_4ff3dc46;
    }
    if (*(int *)(param_1 + 0x58) == 1) {
      if ((&DAT_ram_4ff6da3c)[mhartid] == param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tasks.c",0x1493,"vTaskPriorityDisinheritAfterTimeout",
                         "pxTCB != pxCurrentTCBs[ xPortGetCoreID() ]");
      }
      *(uint *)(param_1 + 0x2c) = param_2;
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(uint *)(param_1 + 0x18) = 0x19 - param_2;
      }
      if (*(undefined **)(param_1 + 0x14) == &DAT_ram_4ff58c24 + uVar2 * 0x14) {
        iVar5 = param_1 + 4;
        FUN_ram_4ff3fb48(iVar5);
        uVar3 = *(uint *)(param_1 + 0x2c);
        if (DAT_ram_4ff6da24 < uVar3) {
          DAT_ram_4ff6da24 = uVar3;
        }
        piVar1 = (int *)(&DAT_ram_4ff58c24 + uVar3 * 0x14);
        iVar4 = *(int *)(&DAT_ram_4ff58c28 + uVar3 * 0x14);
        *(int *)(param_1 + 8) = iVar4;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 8);
        *(int *)(*(int *)(iVar4 + 8) + 4) = iVar5;
        *(int *)(iVar4 + 8) = iVar5;
        *(int **)(param_1 + 0x14) = piVar1;
        *piVar1 = *piVar1 + 1;
        FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar3,DAT_ram_4ff6da28);
      }
    }
  }
LAB_ram_4ff3dc46:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}



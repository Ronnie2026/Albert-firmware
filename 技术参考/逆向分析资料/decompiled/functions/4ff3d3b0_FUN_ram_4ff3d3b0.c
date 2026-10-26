/* Firmware entry: 0x4ff3d3b0 */

void FUN_ram_4ff3d3b0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_1[3];
  *param_1 = param_2 | 0x80000000;
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0xfe3,"vTaskRemoveFromUnorderedEventList","pxUnblockedTCB");
  }
  piVar4 = (int *)param_1[4];
  *(uint *)(param_1[1] + 8) = param_1[2];
  *(uint *)(param_1[2] + 4) = param_1[1];
  if ((uint *)piVar4[1] == param_1) {
    piVar4[1] = param_1[2];
  }
  param_1[4] = 0;
  iVar2 = *(int *)(uVar1 + 0x44);
  *piVar4 = *piVar4 + -1;
  if (iVar2 == 0x7fffffff) {
    if ((DAT_ram_4ff6d9f8 != 0) && (DAT_ram_4ff6d9fc != 0)) {
      iVar5 = mhartid << 2;
      iVar2 = mhartid;
      goto LAB_ram_4ff3d4ae;
    }
  }
  else {
    iVar5 = iVar2 * 4;
    if ((&DAT_ram_4ff6d9f8)[iVar2] != 0) {
LAB_ram_4ff3d4ae:
      if (*(int *)((int)&DAT_ram_4ff6d9f8 + iVar5) != 0) {
        iVar2 = (iVar5 + iVar2) * 4;
        piVar4 = (int *)(&DAT_ram_4ff58bd4 + iVar2);
        iVar2 = *(int *)(&DAT_ram_4ff58bd8 + iVar2);
        *(int *)(uVar1 + 0x1c) = iVar2;
        *(undefined4 *)(uVar1 + 0x20) = *(undefined4 *)(iVar2 + 8);
        *(uint *)(*(int *)(iVar2 + 8) + 4) = uVar1 + 0x18;
        *(uint *)(iVar2 + 8) = uVar1 + 0x18;
        *(int **)(uVar1 + 0x28) = piVar4;
        *piVar4 = *piVar4 + 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x1004,"vTaskRemoveFromUnorderedEventList",
                       "uxSchedulerSuspended[ xPendingListCore ] != ( UBaseType_t ) 0U");
    }
  }
  piVar4 = *(int **)(uVar1 + 0x14);
  iVar2 = uVar1 + 4;
  *(undefined4 *)(*(int *)(uVar1 + 8) + 8) = *(undefined4 *)(uVar1 + 0xc);
  *(undefined4 *)(*(int *)(uVar1 + 0xc) + 4) = *(undefined4 *)(uVar1 + 8);
  if (piVar4[1] == iVar2) {
    piVar4[1] = *(int *)(uVar1 + 0xc);
  }
  *(undefined4 *)(uVar1 + 0x14) = 0;
  uVar3 = *(uint *)(uVar1 + 0x2c);
  *piVar4 = *piVar4 + -1;
  if (DAT_ram_4ff6da24 < uVar3) {
    DAT_ram_4ff6da24 = uVar3;
  }
  piVar4 = (int *)(&DAT_ram_4ff58c24 + uVar3 * 0x14);
  iVar5 = *(int *)(&DAT_ram_4ff58c28 + uVar3 * 0x14);
  *(int *)(uVar1 + 8) = iVar5;
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(iVar5 + 8);
  *(int *)(*(int *)(iVar5 + 8) + 4) = iVar2;
  *(int *)(iVar5 + 8) = iVar2;
  *(int **)(uVar1 + 0x14) = piVar4;
  *piVar4 = *piVar4 + 1;
  FUN_ram_4ff2ad84(uVar1,uVar1 + 0x34,uVar3,DAT_ram_4ff6da28);
  iVar2 = FUN_ram_4ff3bb04(uVar1,*(undefined4 *)(uVar1 + 0x2c),0);
  if (iVar2 != 1) {
    return;
  }
  FUN_ram_4ff3ef0e();
  return;
}



/* Firmware entry: 0x4ff3db0a */

undefined4 FUN_ram_4ff3db0a(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if (param_1 != 0) {
    if ((&DAT_ram_4ff6da3c)[mhartid] != param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x1421,"xTaskPriorityDisinherit",
                       "pxTCB == pxCurrentTCBs[ xPortGetCoreID() ]");
    }
    iVar5 = *(int *)((&DAT_ram_4ff6da3c)[mhartid] + 0x58);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x1422,"xTaskPriorityDisinherit","pxTCB->uxMutexesHeld");
    }
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x58) = iVar5;
    if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x54)) && (iVar5 == 0)) {
      iVar5 = param_1 + 4;
      FUN_ram_4ff3fb48(iVar5);
      uVar3 = *(uint *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x18) = 0x19 - uVar3;
      uVar1 = DAT_ram_4ff6da24;
      *(uint *)(param_1 + 0x2c) = uVar3;
      if (uVar1 < uVar3) {
        DAT_ram_4ff6da24 = uVar3;
      }
      piVar6 = (int *)(&DAT_ram_4ff58c24 + uVar3 * 0x14);
      iVar4 = *(int *)(&DAT_ram_4ff58c28 + uVar3 * 0x14);
      *(int *)(param_1 + 8) = iVar4;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 8);
      *(int *)(*(int *)(iVar4 + 8) + 4) = iVar5;
      *(int *)(iVar4 + 8) = iVar5;
      *(int **)(param_1 + 0x14) = piVar6;
      uVar2 = 1;
      *piVar6 = *piVar6 + 1;
      FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar3,DAT_ram_4ff6da28);
      goto LAB_ram_4ff3db4a;
    }
  }
  uVar2 = 0;
LAB_ram_4ff3db4a:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar2;
}



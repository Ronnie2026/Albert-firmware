/* Firmware entry: 0x4ff3ceca */

void FUN_ram_4ff3ceca(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar1 = mhartid;
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
  }
  FUN_ram_4ff3fb48(param_1 + 4);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_4ff3fb48(param_1 + 0x18);
  }
  FUN_ram_4ff3faf8(&DAT_ram_4ff58bac,param_1 + 4);
  if (*(char *)(param_1 + 0x15c) == '\x01') {
    *(undefined1 *)(param_1 + 0x15c) = 0;
  }
  if (DAT_ram_4ff6da20 != 0) {
    if (*DAT_ram_4ff6da38 == 0) {
      DAT_ram_4ff6da08 = 0xffffffff;
      piVar3 = &DAT_ram_4ff6da3c + iVar1;
      iVar2 = *piVar3;
      goto joined_r0x4ff3cf94;
    }
    DAT_ram_4ff6da08 = *(undefined4 *)DAT_ram_4ff6da38[3];
  }
  piVar3 = &DAT_ram_4ff6da3c + iVar1;
  iVar2 = *piVar3;
joined_r0x4ff3cf94:
  if (iVar2 == param_1) {
    if (DAT_ram_4ff6da20 == 0) {
      if (DAT_ram_4ff58bac == DAT_ram_4ff6da2c) {
        *piVar3 = 0;
      }
      else {
        FUN_ram_4ff3cc34();
      }
    }
    else {
      if ((&DAT_ram_4ff6d9f8)[iVar1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tasks.c",0x7f2,"vTaskSuspend","uxSchedulerSuspended[ xCurCoreID ] == 0");
      }
      FUN_ram_4ff3ef0e();
    }
  }
  else if ((&DAT_ram_4ff6da3c)[iVar1 == 0] == param_1) {
    if (DAT_ram_4ff6da20 == 0) {
      (&DAT_ram_4ff6da3c)[iVar1 == 0] = 0;
    }
    else {
      thunk_FUN_ram_4ff2ca00();
    }
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}



/* Firmware entry: 0x4800668e */

undefined4 FUN_ram_4800668e(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (puVar1[1] - 1 < 2) {
    iVar3 = FUN_ram_4ff3ae5a(*puVar1);
    iVar4 = FUN_ram_4ff3d9a8();
    if (iVar3 != iVar4) {
      return 1;
    }
    uVar2 = *puVar1;
    if (puVar1[1] == 1) {
      iVar3 = FUN_ram_4ff3b1a4(uVar2);
      goto LAB_ram_480066b8;
    }
  }
  else {
    uVar2 = *puVar1;
  }
  iVar3 = FUN_ram_4ff3afa2(uVar2,0,0,0);
LAB_ram_480066b8:
  if (iVar3 == 1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("pthread.c",0x328,"pthread_mutex_unlock","false && \"Failed to unlock mutex!\"");
}



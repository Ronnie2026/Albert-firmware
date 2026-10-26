/* Firmware entry: 0x4814e30e */

undefined4 FUN_ram_4814e30e(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x6c,"sys_sem_new",
                     "initial_count invalid (neither 0 nor 1)");
  }
  iVar1 = FUN_ram_4ff3add0(1,0,3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_2 == 1) && (iVar1 = FUN_ram_4ff3afa2(iVar1,0,0,0), iVar1 != 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x77,"sys_sem_new",
                       "sys_sem_new: initial give failed");
    }
    uVar2 = 0;
  }
  return uVar2;
}



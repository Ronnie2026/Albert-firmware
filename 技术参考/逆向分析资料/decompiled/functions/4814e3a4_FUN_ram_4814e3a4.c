/* Firmware entry: 0x4814e3a4 */

void FUN_ram_4814e3a4(undefined4 *param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff3afa2(*param_1,0,0,0);
  if (uVar1 < 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x88,"sys_sem_signal",
                   "sys_sem_signal: sane return value");
}



/* Firmware entry: 0x4814e658 */

void FUN_ram_4814e658(undefined4 *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_ram_4ff3b9c2(*(undefined4 *)*param_1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x16b,"sys_mbox_free",
                       "mbox quence not empty");
    }
    FUN_ram_4ff3ba8e(*(undefined4 *)*param_1);
    FUN_ram_481393fc(*param_1);
    *param_1 = 0;
  }
  return;
}



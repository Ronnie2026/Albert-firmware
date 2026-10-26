/* Firmware entry: 0x4814e562 */

undefined4 FUN_ram_4814e562(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = auStack_14;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
  }
  if (param_3 == 0) {
    iVar2 = FUN_ram_4ff3b4aa(*(undefined4 *)*param_1,puVar1,0xffffffff);
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x136,"sys_arch_mbox_fetch",
                       "mbox fetch failed");
    }
  }
  else {
    iVar2 = FUN_ram_4ff3b4aa(*(undefined4 *)*param_1,puVar1);
    if (iVar2 == 0) {
      *puVar1 = 0;
      return 0xffffffff;
    }
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x13f,"sys_arch_mbox_fetch",
                       "mbox fetch failed");
    }
  }
  return 0;
}



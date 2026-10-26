/* Firmware entry: 0x4814e4f2 */

void FUN_ram_4814e4f2(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = param_2;
  iVar1 = FUN_ram_4ff3afa2(*(undefined4 *)*param_1,auStack_14,0xffffffff,0);
  if (iVar1 == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0xec,"sys_mbox_post",
                   "mbox post failed");
}



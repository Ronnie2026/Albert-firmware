/* Firmware entry: 0x481a3b24 */

undefined4
FUN_ram_481a3b24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e170 != 0) {
    uVar1 = FUN_ram_481a48dc(DAT_ram_4ff6e170,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0x103;
}



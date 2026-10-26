/* Firmware entry: 0x48179574 */

undefined4 FUN_ram_48179574(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481791c8();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48178db6(param_1,1), iVar1 == 0)) {
    iVar1 = FUN_ram_4817acfe(param_1 + 8,param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x10
                             ,0,0);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_ram_4817aee6(param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x30,
                                 param_1 + 0x38,param_1 + 0x40), iVar1 == 0)) {
      return 0;
    }
  }
  return 0xffffbe00;
}



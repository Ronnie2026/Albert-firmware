/* Firmware entry: 0x4819331c */

undefined4 FUN_ram_4819331c(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(code **)(param_1 + 0x14) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x48193322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0xffffffff;
}



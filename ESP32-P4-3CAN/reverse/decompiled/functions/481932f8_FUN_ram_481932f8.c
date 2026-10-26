/* Firmware entry: 0x481932f8 */

undefined4 FUN_ram_481932f8(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(code **)(param_1 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x481932fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xc))();
    return uVar1;
  }
  return 0xffffffff;
}



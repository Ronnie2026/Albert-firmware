/* Firmware entry: 0x48024e46 */

undefined4 FUN_ram_48024e46(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    if (DAT_ram_4ff6dbf4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x48024e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*DAT_ram_4ff6dbf4)(DAT_ram_4ff6dbec);
      return uVar1;
    }
  }
  else if ((param_1 == 1) && (DAT_ram_4ff6dbf8 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x48024e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_ram_4ff6dbf8)(DAT_ram_4ff6dbf0);
    return uVar1;
  }
  return 0xffffffff;
}



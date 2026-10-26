/* Firmware entry: 0x48160848 */

undefined4 FUN_ram_48160848(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4816084e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 4));
    return uVar1;
  }
  return 0x106;
}



/* Firmware entry: 0x48177194 */

undefined4 FUN_ram_48177194(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x481771a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xc))(param_2);
    return uVar1;
  }
  return 0;
}



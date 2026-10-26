/* Firmware entry: 0x4802a1d0 */

void FUN_ram_4802a1d0(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = &PTR_FUN_ram_4802a1d0_ram_481f5028;
  FUN_ram_4802a086();
  if (param_1[0x12] != 0) {
    FUN_ram_4ff3ba8e();
  }
  if ((code *)param_1[0xe] != (code *)0x0) {
    (*(code *)param_1[0xe])(param_1 + 0xc,param_1 + 0xc,3);
  }
  if ((code *)param_1[10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4802a212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[10])(param_1 + 8,param_1 + 8,3);
    return;
  }
  return;
}



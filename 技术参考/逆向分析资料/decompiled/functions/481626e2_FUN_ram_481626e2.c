/* Firmware entry: 0x481626e2 */

undefined4 FUN_ram_481626e2(undefined4 *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x481626e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*param_1)(param_1[1]);
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sd_power","E (%lu) %s: %s(%d): invalid arg: null pointer\n",uVar1,"sd_power",
                   "sd_pwr_ctrl_set_io_voltage",0x14);
  return 0x102;
}



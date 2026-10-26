/* Firmware entry: 0x480039e6 */

int FUN_ram_480039e6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 1) {
    if ((param_1 != 0) || (DAT_ram_4ff6d9e0 == 0)) {
      FUN_ram_4ff332dc(7,10000);
      DAT_ram_4ff6d9e0 = FUN_ram_4ff334a2();
    }
    return DAT_ram_4ff6d9e0;
  }
  return 17500000;
}



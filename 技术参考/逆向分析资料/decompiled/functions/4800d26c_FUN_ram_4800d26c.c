/* Firmware entry: 0x4800d26c */

undefined4 FUN_ram_4800d26c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db14 != 0) {
    DAT_ram_4ff6db14 = DAT_ram_4ff6db14 + 1;
    return 0;
  }
  DAT_ram_4ff6db18 = FUN_ram_4819c006("/dev/uart/0");
  DAT_ram_4ff6db1c = FUN_ram_4819c006("/dev/secondary",param_2,param_3);
  DAT_ram_4ff6db14 = DAT_ram_4ff6db14 + 1;
  return 0;
}



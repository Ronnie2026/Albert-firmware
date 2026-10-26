/* Firmware entry: 0x481a6030 */

undefined4 FUN_ram_481a6030(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff48030,0xffffffff);
  piVar2 = &DAT_ram_4ff58ba0;
  while ((*piVar2 != 0 && (param_1 != *piVar2))) {
    piVar2 = piVar2 + 1;
    if (piVar2 == &DAT_ram_4ff58bac) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff48030);
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sleep",
                       "E (%lu) %s: Registered deepsleep callbacks exceeds MAX_DSLP_HOOKS\n",uVar1,
                       "sleep");
      return 0x101;
    }
  }
  *piVar2 = param_1;
  FUN_ram_4ff3ee10(&DAT_ram_4ff48030);
  return 0;
}



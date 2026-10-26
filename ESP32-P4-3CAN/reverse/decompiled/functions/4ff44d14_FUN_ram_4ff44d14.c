/* Firmware entry: 0x4ff44d14 */

uint FUN_ram_4ff44d14(void)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4ff3d9d2();
  uVar1 = cycle;
  if (iVar2 != 1) {
    if ((DAT_ram_4ff6d990 == 0) && (mhartid == 0)) {
      iVar2 = ets_get_cpu_frequency();
      DAT_ram_4ff6d990 = uVar1 / (uint)(iVar2 * 1000);
      iVar2 = FUN_ram_4ff3eb8c();
    }
    else {
      iVar2 = FUN_ram_4ff3eb8c();
    }
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4ff3c5d4();
    }
    else {
      iVar2 = FUN_ram_4ff3c5de();
    }
    return iVar2 + DAT_ram_4ff6d990;
  }
  iVar2 = ets_get_cpu_frequency();
  return uVar1 / (uint)(iVar2 * 1000);
}



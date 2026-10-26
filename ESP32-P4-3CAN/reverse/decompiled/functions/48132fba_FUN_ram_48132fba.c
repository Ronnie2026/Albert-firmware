/* Firmware entry: 0x48132fba */

int FUN_ram_48132fba(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  do {
    if (param_1 == ((&DAT_ram_4ff4b9a4)[iVar1 * 2] & 0xf)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: %d mac type is incorrect (not found)\n",uVar2,
                   "system_api",param_1);
  return -1;
}



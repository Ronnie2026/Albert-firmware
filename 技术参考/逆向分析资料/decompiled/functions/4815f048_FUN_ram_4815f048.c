/* Firmware entry: 0x4815f048 */

int FUN_ram_4815f048(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*param_1 & 2) == 0) || ((param_1[0x31] & 0xc0) != 0x80)) {
    if ((*param_1 & 4) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = 8;
    if ((param_1[0x31] & 0xc0) != 0xc0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  else {
    uVar2 = 4;
  }
  iVar1 = (*(code *)param_1[7])(param_1[1],uVar2);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_common","E (%lu) %s: host.set_bus_width failed (0x%x)\n",uVar2,
                     "sdmmc_common",iVar1);
  }
  return iVar1;
}



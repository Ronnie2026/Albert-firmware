/* Firmware entry: 0x481617c8 */

int FUN_ram_481617c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0xc4) & 0xc0;
  uVar2 = 4;
  if (uVar3 != 0x80) {
    uVar2 = 8;
    if (uVar3 != 0xc0) {
      uVar2 = 1;
    }
  }
  iVar1 = FUN_ram_48162fa2(param_1,uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: set_bus_width failed (0x%x)\n",uVar2,"sdmmc_sd",iVar1);
  return iVar1;
}



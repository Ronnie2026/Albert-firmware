/* Firmware entry: 0x4812cec8 */

int FUN_ram_4812cec8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812e1d6(0,0,0);
  if (iVar1 == 0) {
    iVar1 = 0x10;
    do {
      iVar2 = FUN_ram_4812e1d6(0,iVar1,0);
      iVar1 = iVar1 + 1;
      if (iVar2 != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2;
      }
    } while (iVar1 != 0x20);
    iVar1 = FUN_ram_4812e1d6(0,0x20,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: invalid partition table, no app partitions\n",
                     uVar3,"esp_ota_ops");
    iVar1 = 0;
  }
  return iVar1;
}



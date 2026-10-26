/* Firmware entry: 0x4812cfa8 */

int FUN_ram_4812cfa8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4812fbe8(FUN_ram_4812d062);
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_ota_ops.c",0x2cc,"esp_ota_get_running_partition",
                     "phys_offs != SPI_FLASH_CACHE2PHYS_FAIL");
  }
  iVar2 = FUN_ram_4812e16a(0,0xff,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_ota_ops.c",0x2d1,"esp_ota_get_running_partition","it != NULL");
  }
  do {
    iVar3 = FUN_ram_4812e20a(iVar2);
    if (*(uint *)(iVar3 + 0xc) <= uVar1) {
      if (uVar1 < *(uint *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10)) {
        thunk_FUN_ram_4ff209c6();
        DAT_ram_4ff6e094 = iVar3;
        return iVar3;
      }
    }
    iVar2 = FUN_ram_4812e094(iVar2);
  } while (iVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}



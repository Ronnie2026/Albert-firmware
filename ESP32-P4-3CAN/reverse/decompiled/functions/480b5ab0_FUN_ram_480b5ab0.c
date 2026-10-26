/* Firmware entry: 0x480b5ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_480b5ab0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcac == 0) {
    iVar2 = FUN_ram_4ff206d8(0x6d9d8,0x404);
    if (iVar2 == 0) {
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_workspace_unavailable_ram_481ccd14;
      return 0;
    }
    FUN_ram_480906c0();
    DAT_ram_4ff6dcac = iVar2;
  }
  if (DAT_ram_4ff6dcaa == '\0') {
    puVar1 = (undefined4 *)FUN_ram_4812e1d6(1,0x82,"spiffs");
    if ((((puVar1 == (undefined4 *)0x0) || (puVar1[3] != 0x1910000)) || (puVar1[4] != 0x6c0000)) ||
       (*(char *)((int)puVar1 + 0x29) != '\0')) {
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_partition_geometry_ram_481cc7e4;
    }
    else {
      DAT_ram_4ff5bd68 = *puVar1;
      DAT_ram_4ff5bd6c = puVar1[1];
      DAT_ram_4ff5bd70 = puVar1[2];
      DAT_ram_4ff5bd7c = puVar1[5];
      DAT_ram_4ff5bd8c = 0;
      _DAT_ram_4ff5bd90 = puVar1[10] & 0xffffff00;
      DAT_ram_4ff5bd74 = 0x1930000;
      DAT_ram_4ff5bd78 = 0x63000;
      DAT_ram_4ff6dcb0 = &DAT_ram_4ff5bd68;
      DAT_ram_4ff5bd80 = 0x735f3470;
      DAT_ram_4ff5bd84 = 0x69747465;
      DAT_ram_4ff5bd88 = 0x73676e;
      iVar2 = FUN_ram_480b591c(&DAT_ram_4ff6dcb0,DAT_ram_4ff6dcac + 0x6d7d2);
      if (iVar2 != 0) {
        DAT_ram_4ff6dcaa = 1;
        return 1;
      }
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_flash_region_unowned_ram_481ccd2c;
    }
    return 0;
  }
  return 1;
}



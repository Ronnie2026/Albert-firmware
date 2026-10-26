/* Firmware entry: 0x481a60d4 */

undefined4 FUN_ram_481a60d4(uint param_1,uint param_2,uint *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (uint *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): null pointer\n",uVar2,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,
                     "esp_mmu_map_get_max_consecutive_free_block_size",0x116);
  }
  else {
    if (((param_1 & 1) == 0) || ((param_1 & 0x14) == 0)) {
      *param_3 = 0;
      FUN_ram_4ff216d6(&DAT_ram_4ff6c438);
      uVar3 = 0;
      if (DAT_ram_4ff6c3e4 != 0) {
        puVar5 = &DAT_ram_4ff6c3e4;
        iVar4 = 0;
        uVar3 = 0;
        do {
          iVar4 = iVar4 + 1;
          if (((param_1 == (puVar5[7] & param_1)) && (param_2 == (param_2 & puVar5[8]))) &&
             (uVar3 < (uint)puVar5[6])) {
            uVar3 = puVar5[6];
          }
          puVar5 = puVar5 + 10;
        } while (DAT_ram_4ff6c3e4 != iVar4);
      }
      *param_3 = uVar3;
      FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): invalid caps\n",uVar2,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,
                     "esp_mmu_map_get_max_consecutive_free_block_size",0x117);
  }
  return 0x102;
}



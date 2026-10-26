/* Firmware entry: 0x481a61e2 */

undefined4 FUN_ram_481a61e2(int param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == (uint *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): null pointer\n",uVar3,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map_reserve_block_with_caps",0x13b);
  }
  else {
    if (((param_2 & 1) == 0) || ((param_2 & 0x14) == 0)) {
      uVar6 = param_1 + 0xffffU & 0xffff0000;
      if (DAT_ram_4ff6c3e4 != 0) {
        puVar4 = &DAT_ram_4ff6c3fc;
        iVar2 = 0;
        do {
          if (((param_2 == (puVar4[1] & param_2)) && (param_3 == (puVar4[2] & param_3))) &&
             (uVar6 <= *puVar4)) {
            uVar5 = (&DAT_ram_4ff6c3f8)[iVar2 * 10];
            (&DAT_ram_4ff6c3fc)[iVar2 * 10] = (&DAT_ram_4ff6c3fc)[iVar2 * 10] - uVar6;
            (&DAT_ram_4ff6c3f8)[iVar2 * 10] = uVar5 + uVar6;
            uVar6 = 0x48000000;
            if (param_3 == 1) {
              uVar6 = 0x40000000;
            }
            *param_4 = uVar5 | uVar6;
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0;
          }
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 10;
        } while (iVar2 != DAT_ram_4ff6c3e4);
      }
      if (DAT_ram_4ff47dac != 0) {
        uVar3 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: no such vaddr range\n",uVar3,PTR_DAT_ram_481d4b48_ram_4ff52f94);
      }
      return 0x105;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): invalid caps\n",uVar3,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_map_reserve_block_with_caps",0x13c);
  }
  return 0x102;
}



/* Firmware entry: 0x4ff31690 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff31690(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int local_34 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_30100022();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54ff0 + 0x2d,0xac,
                     s_pmu_hp_system_init_default_ram_4ff53b2c,&DAT_ram_4ff55028);
  }
  iVar6 = 0;
  do {
    iVar2 = iVar6 << 1;
    local_34[0] = FUN_ram_4ff318f0(iVar2);
    local_34[1] = FUN_ram_4ff3192e(iVar2);
    local_34[2] = FUN_ram_4ff31966(iVar2);
    local_34[3] = FUN_ram_4ff3199e(iVar2);
    local_34[4] = FUN_ram_4ff319dc(iVar2);
    FUN_ram_4ff312aa(iVar3,iVar2,local_34);
    bVar1 = iVar6 != 1;
    iVar6 = 1;
  } while (bVar1);
  _DAT_ram_50110180 = _DAT_ram_50110180 & 0xfffffff8 | 4;
  iVar3 = FUN_ram_30100022();
  if (iVar3 != 0) {
    local_34[0] = FUN_ram_4ff31a14(0);
    local_34[1] = FUN_ram_4ff31a52(0);
    FUN_ram_4ff3157c(iVar3,0,local_34);
    local_34[0] = FUN_ram_4ff31a14(1);
    local_34[1] = FUN_ram_4ff31a52(1);
    FUN_ram_4ff3157c(iVar3,1,local_34);
    _DAT_ram_50110184 = _DAT_ram_50110184 & 0xfffffff8 | 4;
    puVar4 = (undefined4 *)FUN_ram_30100022();
    if (puVar4 != (undefined4 *)0x0) {
      local_34[0] = 0;
      iVar3 = *(int *)*puVar4;
      local_34[1] = 1;
      local_34[2] = 2;
      piVar5 = local_34;
      local_34[3] = 3;
      do {
        if (*piVar5 == 3) {
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xfffffffb;
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xfffffff7;
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xffffffef;
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xffffffdf;
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xfffffffd;
          *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) & 0xfffffffe;
        }
        else {
          iVar6 = *piVar5 * 4 + iVar3;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xfffffffb;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xfffffff7;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xffffffef;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xffffffdf;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xfffffffd;
          *(uint *)(iVar6 + 0xf4) = *(uint *)(iVar6 + 0xf4) & 0xfffffffe;
        }
        piVar5 = piVar5 + 1;
      } while (local_34 + 4 != piVar5);
      *(uint *)(iVar3 + 0xfc) = *(uint *)(iVar3 + 0xfc) & 0xffffffef;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xfffffffb;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xfffffff7;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xffffffef;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xffffffdf;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xfffffffd;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xfffffffe;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffffd;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffffe;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffffe;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffffd;
      FUN_ram_4ff31a90();
      FUN_ram_4ff31d2e(1);
      ets_delay_us(1000);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54ff0 + 0x2d,0x83,
                     s_pmu_power_domain_force_default_ram_4ff53af0,&DAT_ram_4ff55028);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54ff0 + 0x2d,0xc0,
                   s_pmu_lp_system_init_default_ram_4ff53b10,&DAT_ram_4ff55028);
}



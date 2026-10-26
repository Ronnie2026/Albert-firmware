/* Firmware entry: 0x4ff350f8 */

undefined4 FUN_ram_4ff350f8(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6dae8 = 0x1b0000;
  uStack_28 = 0;
  auStack_24[0] = 0;
  FUN_ram_4ff371e2(&uStack_28,auStack_24);
  iVar2 = param_1 * 0x10000;
  auStack_24[0] = auStack_24[0] & 0xffff0000;
  if (param_2 < iVar2 + DAT_ram_4ff6dae8) {
    if (DAT_ram_4ff47dac == 0) {
      uVar3 = 0x101;
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__PSRAM_space_not_enou_ram_4ff55814,uVar3,s_mmu_psram_ram_4ff55808,
                 DAT_ram_4ff6dae8,iVar2,iVar2 + DAT_ram_4ff6dae8);
      uVar3 = 0x101;
    }
  }
  else {
    DAT_ram_4ff6dae0 = auStack_24[0] + param_1 * -0x10000;
    DAT_ram_4ff6daf0 = 0x48000000;
    FUN_ram_4ff34f78(auStack_24[0],DAT_ram_4ff6dae8,0x48000000,iVar2);
    FUN_ram_4ff40eb2(0x48000000,DAT_ram_4ff6dae8);
    uVar1 = DAT_ram_4ff47dac;
    *param_3 = DAT_ram_4ff6dae8 >> 0x10;
    if (2 < uVar1) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_I___lu___s___text_xip_on_psram_ram_4ff55874,uVar3,s_mmu_psram_ram_4ff55808);
    }
    uVar3 = 0;
  }
  return uVar3;
}



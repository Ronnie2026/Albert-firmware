/* Firmware entry: 0x4ff3a470 */

void FUN_ram_4ff3a470(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44cee();
  ets_printf(s_I___lu___s__Init_core_dump_to_fl_ram_4ff55eec,uVar1,
             s_esp_core_dump_flash_ram_4ff58544);
  iVar2 = FUN_ram_4812e1d6(1,3,0);
  if (iVar2 == 0) {
    uVar1 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__No_core_dump_partiti_ram_4ff55c78,uVar1,
               s_esp_core_dump_flash_ram_4ff58544);
  }
  else {
    uVar1 = FUN_ram_4ff44cee();
    ets_printf(s_I___lu___s__Found_partition___s__ram_4ff55f14,uVar1,
               s_esp_core_dump_flash_ram_4ff58544,iVar2 + 0x18,*(undefined4 *)(iVar2 + 0xc),
               *(undefined4 *)(iVar2 + 0x10));
    DAT_ram_4ff5b0b4 = *(undefined4 *)(iVar2 + 0x10);
    DAT_ram_4ff5b0b8 = *(undefined1 *)(iVar2 + 0x29);
    DAT_ram_4ff5b0b0 = *(undefined4 *)(iVar2 + 0xc);
    DAT_ram_4ff5b0bc = crc32_le(0,&DAT_ram_4ff5b0b0,0xc);
    iVar3 = thunk_FUN_ram_4ff20684();
    if ((iVar3 != 0) && (*(char *)(iVar2 + 0x29) == '\0')) {
      uVar1 = FUN_ram_4ff44cee();
      ets_printf(s_W___lu___s__core_dump_partition_i_ram_4ff55f44,uVar1,
                 s_esp_core_dump_flash_ram_4ff58544);
      iStack_18 = 0;
      uStack_14 = 0;
      iVar2 = FUN_ram_4ff3a286();
      goto joined_r0x4ff3a544;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  iVar2 = FUN_ram_4ff3a286();
joined_r0x4ff3a544:
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4ff3a142(&iStack_18,&uStack_14), iVar2 == 0)) {
    uVar1 = FUN_ram_4ff44cee();
    ets_printf(s_I___lu___s__Found_core_dump__d_b_ram_4ff55f98,uVar1,
               s_esp_core_dump_flash_ram_4ff58544,uStack_14,*(undefined4 *)(iStack_18 + 0xc));
    return;
  }
  return;
}



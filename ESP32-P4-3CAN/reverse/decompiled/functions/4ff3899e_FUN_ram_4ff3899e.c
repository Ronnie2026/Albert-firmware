/* Firmware entry: 0x4ff3899e */

undefined4 FUN_ram_4ff3899e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_2c = strlcpy(&DAT_ram_4ff5b0c0,param_2,0x20);
  iStack_2c = iStack_2c + 1;
  uStack_28 = param_3;
  uStack_24 = param_4;
  iVar1 = FUN_ram_4ff39db0(param_1 + 0x54,&iStack_2c,0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4ff39db0(param_1 + 0x54,&DAT_ram_4ff5b0c0,iStack_2c + 3U & 0xfffffffc);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff56008,uVar2,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_write_note_header_ram_4ff58474,0xe4,iVar1);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff55fd0,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_write_note_header_ram_4ff58474,0xe0,iVar1);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



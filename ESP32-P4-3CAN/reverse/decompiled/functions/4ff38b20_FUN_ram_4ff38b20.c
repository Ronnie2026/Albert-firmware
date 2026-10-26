/* Firmware entry: 0x4ff38b20 */

int FUN_ram_4ff38b20(int param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    uVar5 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Invalid_data_ram_4ff560f0,uVar5,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_add_note_ram_4ff5849c,0x11a);
    return -3;
  }
  sVar3 = strlen(param_2);
  if (0x20 < sVar3 + 1) {
    uVar5 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Segment_note_ram_4ff56128,uVar5,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_write_note_ram_4ff5848c,0xf3,sVar3 + 1);
    iVar1 = 0;
    goto LAB_ram_4ff38c26;
  }
  uVar2 = param_5 + 3U & 0xfffffffc;
  iVar1 = (sVar3 + 4 & 0xfffffffc) + uVar2 + 0xc;
  if (*(short *)(param_1 + 0x48) != 2) goto LAB_ram_4ff38b72;
  iVar4 = FUN_ram_4ff3899e(param_1,param_2,param_5,param_3);
  if (iVar4 != 0) {
    iVar1 = -2;
    goto LAB_ram_4ff38c26;
  }
  iVar4 = FUN_ram_4ff39db0(param_1 + 0x54,param_4,param_5);
  if (iVar4 == 0) {
    if (0 < (int)(uVar2 - param_5)) {
      uStack_24 = 0;
      uStack_22 = 0;
      iVar4 = FUN_ram_4ff39db0(param_1 + 0x54,&uStack_24);
      if (iVar4 != 0) goto LAB_ram_4ff38bc8;
    }
LAB_ram_4ff38b72:
    if (0 < iVar1) {
      return iVar1;
    }
  }
  else {
LAB_ram_4ff38bc8:
    uVar5 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff56160,uVar5,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_write_note_ram_4ff5848c,0x10c,iVar4);
    iVar1 = -2;
  }
LAB_ram_4ff38c26:
  uVar5 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s___s__u___Write_ELF_no_ram_4ff56198,uVar5,s_esp_core_dump_elf_ram_4ff58514,
             s_elf_add_note_ram_4ff5849c,0x11e,iVar1);
  return iVar1;
}



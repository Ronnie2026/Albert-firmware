/* Firmware entry: 0x4ff38f82 */

int FUN_ram_4ff38f82(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_14 = 0;
  if (*(short *)(param_1 + 0x48) == 1) {
    uStack_2c = *(undefined4 *)(param_1 + 0x4c);
    local_30 = 4;
    uStack_18 = 6;
    iStack_20 = param_2;
    iStack_1c = param_2;
    iVar1 = FUN_ram_4ff39db0(param_1 + 0x54,&local_30,0x20);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
      return 0x20;
    }
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Write_ELF_se_ram_4ff56244,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_write_segment_header_ram_4ff5843c,0x97,iVar1);
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___NOTE_segment_ram_4ff563e4,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_process_note_segment_ram_4ff58458,0x188,
               0xfffffffe);
    param_2 = -2;
  }
  else {
    if (*(short *)(param_1 + 0x48) == 0) {
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
      return param_2 + 0x20;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  }
  return param_2;
}



/* Firmware entry: 0x4ff38ce4 */

uint FUN_ram_4ff38ce4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (param_3 == 0) {
    uVar3 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Invalid_data_ram_4ff56214,uVar3,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_add_segment_ram_4ff583f8,0xa7);
    uVar1 = 0xfffffffd;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x48);
    uVar1 = param_4 + 3U & 0xfffffffc;
    if (uVar4 == 0) {
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
      return uVar1 + 0x20;
    }
    if (uVar4 == 1) {
      uStack_2c = *(undefined4 *)(param_1 + 0x4c);
      uStack_18 = 6;
      local_30 = uVar4;
      uStack_28 = param_2;
      uStack_24 = param_2;
      uStack_20 = uVar1;
      uStack_1c = uVar1;
      iVar2 = FUN_ram_4ff39db0(param_1 + 0x54,&local_30,0x20);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar1;
        return 0x20;
      }
      uVar3 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Write_ELF_se_ram_4ff56244,uVar3,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_write_segment_header_ram_4ff5843c,0x97,iVar2
                );
      uVar3 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Write_ELF_se_ram_4ff56280,uVar3,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_add_segment_ram_4ff583f8,0xb6,0xfffffffe);
    }
    else {
      iVar2 = FUN_ram_4ff39db0(param_1 + 0x54,param_3,uVar1);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return uVar1;
      }
      uVar3 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s___s__u___Write_ELF_se_ram_4ff56280,uVar3,
                 s_esp_core_dump_elf_ram_4ff58514,s_elf_add_segment_ram_4ff583f8,0xc0,iVar2);
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



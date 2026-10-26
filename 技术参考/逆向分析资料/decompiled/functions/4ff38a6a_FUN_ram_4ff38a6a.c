/* Firmware entry: 0x4ff38a6a */

int FUN_ram_4ff38a6a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_18 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff56054 + 0x21,900,
                     s_elf_core_dump_image_mmap_ram_4ff5835c,s_core_data_handle_ram_4ff56040);
  }
  if (param_2 != 0) {
    iVar1 = FUN_ram_4ff3a142(&iStack_18,auStack_14);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_ram_4ff20684();
      if ((iVar1 == 0) || (*(char *)(iStack_18 + 0x29) != '\0')) {
        iVar1 = FUN_ram_4812e68a(iStack_18,0,auStack_14[0],0,param_2,param_1);
        return iVar1;
      }
      uVar2 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s__Flash_encryption_ena_ram_4ff56094,uVar2,
                 s_esp_core_dump_elf_ram_4ff58514);
      iVar1 = 0x106;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff56054 + 0x21,0x385,
                   s_elf_core_dump_image_mmap_ram_4ff5835c,s_map_addr_ram_4ff56088);
}



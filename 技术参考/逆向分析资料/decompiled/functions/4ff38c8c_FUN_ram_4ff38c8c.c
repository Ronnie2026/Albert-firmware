/* Firmware entry: 0x4ff38c8c */

undefined4 FUN_ram_4ff38c8c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3a870(param_2,auStack_14);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Zero_size_register_d_ram_4ff561d8,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,*param_2);
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = FUN_ram_4ff38b20(param_1,&DAT_ram_4ff5620c,1,auStack_14[0],iVar1);
  }
  return uVar2;
}



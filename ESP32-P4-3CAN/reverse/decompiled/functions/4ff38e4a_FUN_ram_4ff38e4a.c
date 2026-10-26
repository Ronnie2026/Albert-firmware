/* Firmware entry: 0x4ff38e4a */

int FUN_ram_4ff38e4a(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s___s__u___Invalid_inpu_ram_4ff562bc,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,s_elf_process_task_tcb_ram_4ff583d0,0x148);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_ram_4ff38ce4(param_1,*param_2,*param_2,0x160);
    if (0 < iVar1) {
      auStack_24[0] = 0;
      uVar2 = FUN_ram_4ff3a6ea(param_2,&uStack_28,auStack_24);
      iVar3 = FUN_ram_4ff38ce4(param_1,uStack_28,auStack_24[0],uVar2);
      if (iVar3 < 1) {
        uVar2 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Task__TCB__x____Stac_ram_4ff5635c,uVar2,
                   s_esp_core_dump_elf_ram_4ff58514,*param_2,param_2[1],iVar3);
        if (iVar3 == -2) {
          uVar2 = FUN_ram_4ff44cee();
          ets_printf(s_E___lu___s___s__u___Task__x__sta_ram_4ff563a4,uVar2,
                     s_esp_core_dump_elf_ram_4ff58514,s_elf_save_task_ram_4ff583e8,0x1d7,*param_2,
                     0xfffffffe);
          return -2;
        }
      }
      return iVar1 + iVar3;
    }
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Task__TCB__x__proces_ram_4ff562e8,uVar2,
               s_esp_core_dump_elf_ram_4ff58514,*param_2,iVar1);
  }
  uVar2 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s___s__u___Task__x__TCB_ram_4ff5631c,uVar2,s_esp_core_dump_elf_ram_4ff58514,
             s_elf_save_task_ram_4ff583e8,0x1d3,*param_2,iVar1);
  return iVar1;
}



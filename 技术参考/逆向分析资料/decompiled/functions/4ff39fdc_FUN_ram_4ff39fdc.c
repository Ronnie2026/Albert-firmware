/* Firmware entry: 0x4ff39fdc */

int FUN_ram_4ff39fdc(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_24[0] = 0;
  uVar2 = FUN_ram_4ff387c8();
  if ((char)param_1[9] != '\0') {
    iVar3 = FUN_ram_4ff39c78(DAT_ram_4ff5b0b0 + *param_1,param_1 + 1,0x20);
    if (iVar3 != 0) {
      uVar4 = FUN_ram_4ff44cee();
      ets_printf(s_E___lu___s__Failed_to_flush_cach_ram_4ff55c08,uVar4,
                 s_esp_core_dump_flash_ram_4ff58544,iVar3);
      return iVar3;
    }
    FUN_ram_4ff387e2(param_1 + 10,param_1 + 1,0x20);
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = *param_1 + 0x20;
  }
  FUN_ram_4ff3882e(param_1 + 10,auStack_24);
  if (uVar2 < 0x20) {
    piVar1 = param_1 + 1;
    FUN_ram_4ff45158(piVar1,auStack_24[0],uVar2);
    memset((void *)((int)piVar1 + uVar2),0,0x20 - uVar2);
    iVar3 = FUN_ram_4ff39c78(DAT_ram_4ff5b0b0 + *param_1,piVar1,0x20);
  }
  else {
    if ((uVar2 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    iVar3 = FUN_ram_4ff39c78(DAT_ram_4ff5b0b0 + *param_1,auStack_24[0],uVar2);
  }
  if (iVar3 == 0) {
    *param_1 = *param_1 + uVar2;
    uVar4 = FUN_ram_4ff44cee();
    ets_printf(s_I___lu___s__Write_end_offset_0x__ram_4ff55c40,uVar4,
               s_esp_core_dump_flash_ram_4ff58544,*param_1,uVar2);
    return 0;
  }
  uVar4 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s__Failed_to_flush_cach_ram_4ff55c08,uVar4,
             s_esp_core_dump_flash_ram_4ff58544,iVar3);
  return iVar3;
}



/* Firmware entry: 0x4ff39eca */

int FUN_ram_4ff39eca(void *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff387c8();
  uVar3 = *param_2 & 0x1f;
  iVar4 = 0;
  if (uVar3 != 0) {
    iVar4 = 0x20 - uVar3;
  }
  uVar3 = *param_2 + iVar1 + iVar4;
  if (DAT_ram_4ff5b0b4 < uVar3) {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Not_enough_space_to_s_ram_4ff55b7c,uVar2,
               s_esp_core_dump_flash_ram_4ff58544);
    return 0x101;
  }
  *param_2 = uVar3;
  memset(param_1,0,0x30);
  uVar3 = *param_2;
  uVar2 = FUN_ram_4ff44cee();
  uVar3 = ((uVar3 >> 0xc) + (uint)((uVar3 & 0xfff) != 0)) * 0x1000;
  ets_printf(s_I___lu___s__Erase_flash__d_bytes_ram_4ff55bb0,uVar2,
             s_esp_core_dump_flash_ram_4ff58544,uVar3,DAT_ram_4ff5b0b0);
  if (DAT_ram_4ff5b0b4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  iVar4 = FUN_ram_4ff45afe(DAT_ram_4ff6e0b8,DAT_ram_4ff5b0b0,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44cee();
  ets_printf(s_E___lu___s__Failed_to_erase_flas_ram_4ff55bdc,uVar2,
             s_esp_core_dump_flash_ram_4ff58544,iVar4);
  return iVar4;
}



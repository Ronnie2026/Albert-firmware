/* Firmware entry: 0x4ff39904 */

int FUN_ram_4ff39904(void)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [72];
  undefined2 uStack_50;
  int iStack_4c;
  ushort uStack_48;
  undefined1 auStack_44 [56];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_98,0,0x88);
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  iStack_b4 = 0x18;
  iVar1 = FUN_ram_4ff39d16();
  if (iVar1 == 0) {
    uStack_50 = 0;
    iVar1 = FUN_ram_4ff3905e(auStack_98);
    if (-1 < iVar1) {
      iStack_b4 = iStack_b4 + iVar1;
      iVar1 = FUN_ram_4ff39eca(auStack_44,&iStack_b4);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Failed_to_prepare_co_ram_4ff568fc,uVar2,
                   s_esp_core_dump_elf_ram_4ff58514,iVar1);
        return iVar1;
      }
      iVar1 = FUN_ram_4ff39fc8(auStack_44);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Failed_to_start_core_ram_4ff56934,uVar2,
                   s_esp_core_dump_elf_ram_4ff58514,iVar1);
        return iVar1;
      }
      iStack_b0 = iStack_b4;
      uStack_ac = FUN_ram_4ff387cc();
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = FUN_ram_4ff20626();
      iVar1 = FUN_ram_4ff39db0(auStack_44,&iStack_b0,0x18);
      if (iVar1 == 0) {
        iStack_4c = (uint)uStack_48 * 0x20 + 0x34;
        uStack_50 = 1;
        iVar1 = FUN_ram_4ff3905e(auStack_98);
        if (-1 < iVar1) {
          iStack_4c = (uint)uStack_48 * 0x20 + 0x34;
          uStack_50 = 2;
          iVar1 = FUN_ram_4ff3905e(auStack_98);
          if ((-1 < iVar1) && (iVar1 = FUN_ram_4ff39fdc(auStack_44), iVar1 != 0)) {
            uVar2 = FUN_ram_4ff44cee();
            ets_printf(s_E___lu___s__Failed_to_end_core_d_ram_4ff56998,uVar2,
                       s_esp_core_dump_elf_ram_4ff58514,iVar1);
          }
        }
      }
      else {
        uVar2 = FUN_ram_4ff44cee();
        ets_printf(s_E___lu___s__Failed_to_write_core_ram_4ff56964,uVar2,
                   s_esp_core_dump_elf_ram_4ff58514,iVar1);
      }
    }
  }
  else {
    uVar2 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Elf_write_init_faile_ram_4ff568d8,uVar2,
               s_esp_core_dump_elf_ram_4ff58514);
    iVar1 = -1;
  }
  return iVar1;
}



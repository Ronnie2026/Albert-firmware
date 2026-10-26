/* Firmware entry: 0x4ff2cefe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2cefe(uint param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                     uint param_6)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)(param_4 - param_5) < 8) {
    FUN_ram_4ff2cce2();
    do {
    } while ((int)(_DAT_ram_50124000 << 6) < 0);
    param_1 = param_3 << 8 | param_1;
    do {
    } while ((int)(param_1 << 6) < 0);
    _DAT_ram_50124000 =
         ((~(-1 << ((param_4 - param_5) + 1 & 0x1f)) & param_6) << (param_5 & 0x1f) & 0xff |
         (~(-1 << (param_5 & 0x1f)) | -1 << (param_4 + 1U & 0x1f)) & param_1 >> 0x10 & 0xff) << 0x10
         | param_1 | 0x1000000;
    do {
    } while ((int)(_DAT_ram_50124000 << 6) < 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_rom_regi2c_esp32p4.c",0xae,"regi2c_write_mask_impl","msb - lsb < 8");
}



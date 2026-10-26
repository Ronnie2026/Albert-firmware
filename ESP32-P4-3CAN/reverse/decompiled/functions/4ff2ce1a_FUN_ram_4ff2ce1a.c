/* Firmware entry: 0x4ff2ce1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff2ce1a(uint param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)(param_4 - param_5) < 8) {
    FUN_ram_4ff2cce2();
    do {
    } while ((int)(_DAT_ram_50124000 << 6) < 0);
    _DAT_ram_50124000 = param_3 << 8 | param_1;
    do {
    } while ((int)(_DAT_ram_50124000 << 6) < 0);
    return (_DAT_ram_50124000 >> 0x10 & 0xff) >> (param_5 & 0x1f) &
           ~(-1 << ((param_4 - param_5) + 1 & 0x1f)) & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_rom_regi2c_esp32p4.c",0x8d,"regi2c_read_mask_impl","msb - lsb < 8");
}



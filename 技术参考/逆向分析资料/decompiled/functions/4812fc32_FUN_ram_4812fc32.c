/* Firmware entry: 0x4812fc32 */

uint FUN_ram_4812fc32(uint param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 6) {
    uVar1 = thunk_FUN_ram_4ff34ef8();
    return uVar1;
  }
  if (param_1 < 6) {
    return (uint)(byte)(&DAT_ram_48235548)[param_1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("flash_ops.c",0xfa,"esp_mspi_get_io","io <= ESP_MSPI_IO_WP");
}



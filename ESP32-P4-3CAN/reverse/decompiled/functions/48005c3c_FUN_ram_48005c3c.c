/* Firmware entry: 0x48005c3c */

uint FUN_ram_48005c3c(uint *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (uint *)0x0) {
    return *param_1 >> 0x10 & 0xf;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("regdma_link.c",0x35e,"regdma_link_get_config_mode","config != NULL");
}



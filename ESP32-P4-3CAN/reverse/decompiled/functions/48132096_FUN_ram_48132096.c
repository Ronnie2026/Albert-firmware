/* Firmware entry: 0x48132096 */

void FUN_ram_48132096(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((0 < (int)param_2) && (0 < (int)param_3)) {
    iVar1 = *param_1;
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffe007f | (param_2 & 0x3ff) << 7;
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffffff80 | param_3 & 0x7f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/pau_hal.c",0x48,"pau_hal_set_regdma_wait_timeout",
                   "count > 0 && interval > 0");
}



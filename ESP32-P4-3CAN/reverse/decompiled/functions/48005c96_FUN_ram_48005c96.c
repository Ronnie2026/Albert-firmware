/* Firmware entry: 0x48005c96 */

void FUN_ram_48005c96(void)

{
  undefined *puVar1;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined *)FUN_ram_4ff3b204(1,&DAT_ram_4ff59f64);
  if (puVar1 != &DAT_ram_4ff59f64) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("locks.c",0x1a6,"esp_libc_locks_init",
                     "handle == (SemaphoreHandle_t) &s_common_mutex");
  }
  puVar1 = (undefined *)FUN_ram_4ff3b204(4,&DAT_ram_4ff59f08);
  if (puVar1 == &DAT_ram_4ff59f08) {
    auStack_14[0] = 0xbb10c433;
    esp_rom_newlib_init_common_mutexes(auStack_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("locks.c",0x1a8,"esp_libc_locks_init",
                   "handle == (SemaphoreHandle_t) &s_common_recursive_mutex");
}



/* Firmware entry: 0x4812fb50 */

void FUN_ram_4812fb50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      iVar2 = FUN_ram_481a687a(*(undefined4 *)(*param_1 + iVar1 * 4));
      if (iVar2 == 0x105) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("flash_mmap.c",0x10a,"spi_flash_munmap",
                         "0 && \"invalid handle, or handle already unmapped\"");
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  thunk_FUN_ram_4ff209c6(*param_1);
  thunk_FUN_ram_4ff209c6(param_1);
  return;
}



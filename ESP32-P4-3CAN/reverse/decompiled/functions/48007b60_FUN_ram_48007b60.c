/* Firmware entry: 0x48007b60 */

undefined4 FUN_ram_48007b60(uint param_1,void *param_2)

{
  void *pvVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    pvVar1 = memset(param_2,0,0x58);
    *(undefined4 *)((int)pvVar1 + 4) = 0x2000;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("uart_vfs.c",0x15c,"uart_fstat","fd >= 0 && fd < 3");
}



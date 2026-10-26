/* Firmware entry: 0x4ff3c666 */

undefined4 FUN_ram_4ff3c666(int param_1,undefined4 *param_2,int *param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0xb72,"xTaskGetStaticBuffers","ppuxStackBuffer != ((void *)0)");
  }
  if (param_3 != (int *)0x0) {
    if (param_1 == 0) {
      FUN_ram_4ff3ebfe();
      param_1 = (&DAT_ram_4ff6da3c)[mhartid];
      FUN_ram_4ff3ec08();
    }
    if (*(char *)(param_1 + 0x15d) == '\x02') {
      *param_2 = *(undefined4 *)(param_1 + 0x30);
      *param_3 = param_1;
    }
    else {
      if (*(char *)(param_1 + 0x15d) != '\x01') {
        return 0;
      }
      *param_2 = *(undefined4 *)(param_1 + 0x30);
      *param_3 = 0;
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0xb73,"xTaskGetStaticBuffers","ppxTaskBuffer != ((void *)0)");
}



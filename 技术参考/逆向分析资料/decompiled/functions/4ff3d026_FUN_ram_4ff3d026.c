/* Firmware entry: 0x4ff3d026 */

void FUN_ram_4ff3d026(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    FUN_ram_4ff3fb10(param_1,(&DAT_ram_4ff6da3c)[mhartid] + 0x18);
    FUN_ram_4ff3bbea(param_2,1);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0xea1,"vTaskPlaceOnEventList","pxEventList");
}



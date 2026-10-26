/* Firmware entry: 0x4ff3d136 */

void FUN_ram_4ff3d136(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    iVar1 = param_1[1];
    *(int *)((&DAT_ram_4ff6da3c)[mhartid] + 0x1c) = iVar1;
    *(undefined4 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x20) = *(undefined4 *)(iVar1 + 8);
    *(int *)(*(int *)(iVar1 + 8) + 4) = (&DAT_ram_4ff6da3c)[mhartid] + 0x18;
    *(int *)(iVar1 + 8) = (&DAT_ram_4ff6da3c)[mhartid] + 0x18;
    *(int **)((&DAT_ram_4ff6da3c)[mhartid] + 0x28) = param_1;
    *param_1 = *param_1 + 1;
    if (param_3 != 0) {
      param_2 = 0xffffffff;
    }
    FUN_ram_4ff3bbea(param_2,param_3);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0xef2,"vTaskPlaceOnEventListRestricted","pxEventList");
}



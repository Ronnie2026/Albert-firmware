/* Firmware entry: 0x4ff3d096 */

void FUN_ram_4ff3d096(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    piVar2 = &DAT_ram_4ff6da3c + iVar1;
    *(uint *)(*piVar2 + 0x18) = param_2 | 0x80000000;
    iVar1 = param_1[1];
    *(int *)(*piVar2 + 0x1c) = iVar1;
    *(undefined4 *)(*piVar2 + 0x20) = *(undefined4 *)(iVar1 + 8);
    *(int *)(*(int *)(iVar1 + 8) + 4) = *piVar2 + 0x18;
    *(int *)(iVar1 + 8) = *piVar2 + 0x18;
    *(int **)(*piVar2 + 0x28) = param_1;
    *param_1 = *param_1 + 1;
    FUN_ram_4ff3bbea(param_3);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0xec6,"vTaskPlaceOnUnorderedEventList","pxEventList");
}



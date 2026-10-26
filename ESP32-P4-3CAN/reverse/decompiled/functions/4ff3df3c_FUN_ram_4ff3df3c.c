/* Firmware entry: 0x4ff3df3c */

int FUN_ram_4ff3df3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    if (*(int *)((&DAT_ram_4ff6da3c)[mhartid] + 0x158) == 0) {
      *(undefined1 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x15c) = 1;
      if (param_3 != 0) {
        FUN_ram_4ff3bbea(param_3);
        FUN_ram_4ff3ef0e();
      }
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
    iVar2 = *(int *)((&DAT_ram_4ff6da3c)[mhartid] + 0x158);
    if (iVar2 != 0) {
      iVar1 = (&DAT_ram_4ff6da3c)[mhartid];
      if (param_2 == 0) {
        *(int *)(iVar1 + 0x158) = iVar2 + -1;
      }
      else {
        *(undefined4 *)(iVar1 + 0x158) = 0;
      }
    }
    *(undefined1 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x15c) = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tasks.c",0x1663,"ulTaskGenericNotifyTake","uxIndexToWait < 1");
}



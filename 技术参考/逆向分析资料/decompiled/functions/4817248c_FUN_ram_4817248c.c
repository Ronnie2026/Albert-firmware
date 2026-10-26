/* Firmware entry: 0x4817248c */

void FUN_ram_4817248c(byte param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    param_4 = param_2;
  }
  iVar1 = 0;
  if (param_5 != 0) {
    do {
      *(byte *)(param_2 + iVar1) =
           param_1 & *(byte *)(param_3 + iVar1) | ~param_1 & *(byte *)(param_4 + iVar1);
      iVar1 = iVar1 + 1;
    } while (param_5 != iVar1);
  }
  return;
}



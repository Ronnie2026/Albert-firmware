/* Firmware entry: 0x4814f71a */

void FUN_ram_4814f71a(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 8;
  FUN_ram_4814e762();
  iVar2 = *(int *)(param_1 + 0x18);
  FUN_ram_4814e79e();
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      while (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = iVar1 + 1;
        FUN_ram_4814e53a(param_1 + 0x10,&DAT_ram_48237593);
        if (iVar2 == iVar1) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
      FUN_ram_4814e53a(param_1 + 0x14,&DAT_ram_48237593);
    } while (iVar2 != iVar1);
  }
  return;
}



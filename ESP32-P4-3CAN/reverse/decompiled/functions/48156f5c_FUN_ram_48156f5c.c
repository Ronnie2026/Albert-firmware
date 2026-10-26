/* Firmware entry: 0x48156f5c */

undefined4 FUN_ram_48156f5c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe7) & 1) != 0)) {
    FUN_ram_4813a6fc(iVar1,1);
    return 0;
  }
  return 0xffffffff;
}



/* Firmware entry: 0x48154a04 */

void FUN_ram_48154a04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 + 0x24;
  if (-1 < (char)*(byte *)(param_1 + 0x35)) {
    FUN_ram_4815630e(iVar1,param_2);
    return;
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0x7f;
  FUN_ram_4814268a(&LAB_ram_481549e8,iVar1);
  FUN_ram_48155dde(iVar1);
  FUN_ram_4815630e(iVar1,param_2,param_3);
  return;
}



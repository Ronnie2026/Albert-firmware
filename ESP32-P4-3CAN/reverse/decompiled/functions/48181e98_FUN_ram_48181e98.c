/* Firmware entry: 0x48181e98 */

void FUN_ram_48181e98(undefined4 param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817ff24(param_1,1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_ram_4818014a(param_1,(uint)*(ushort *)(param_2 + 6) << 6), iVar1 == 0)) &&
     (iVar1 = FUN_ram_48180a3c(param_1,param_1,param_2), iVar1 == 0)) {
    FUN_ram_4817fdde(param_1,*(undefined2 *)(param_2 + 6));
    return;
  }
  return;
}



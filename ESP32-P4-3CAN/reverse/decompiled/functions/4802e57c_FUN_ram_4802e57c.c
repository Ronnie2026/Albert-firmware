/* Firmware entry: 0x4802e57c */

void FUN_ram_4802e57c(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_2;
  do {
    iVar2 = iVar1 + 2;
    FUN_ram_4819ad74(iVar1,3,&DAT_ram_481c3b70,*param_1);
    param_1 = param_1 + 1;
    iVar1 = iVar2;
  } while (iVar2 != param_3 * 2 + param_2);
  return;
}



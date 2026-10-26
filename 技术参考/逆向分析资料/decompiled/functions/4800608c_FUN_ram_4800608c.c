/* Firmware entry: 0x4800608c */

void FUN_ram_4800608c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3c5d4();
  param_2[3] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = iVar1 * 1000;
  FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
  lVar2 = FUN_ram_48005d3a();
  FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
  lVar3 = FUN_ram_481a9d86();
  __udivdi3((int)(lVar2 + lVar3),(int)((ulonglong)(lVar2 + lVar3) >> 0x20),1000000,0);
  return;
}



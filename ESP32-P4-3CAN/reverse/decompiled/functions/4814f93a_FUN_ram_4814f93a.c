/* Firmware entry: 0x4814f93a */

void FUN_ram_4814f93a(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_ram_4813c804(uVar1,param_1);
  FUN_ram_4813c80a(uVar1,FUN_ram_4814fac0);
  FUN_ram_4813c844(uVar1,FUN_ram_4815064a);
  FUN_ram_4813c8c8(uVar1,&DAT_ram_481506dc,2);
  FUN_ram_4813c87e(uVar1,&DAT_ram_4814fbec);
  return;
}



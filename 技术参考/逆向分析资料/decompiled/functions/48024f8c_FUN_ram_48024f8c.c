/* Firmware entry: 0x48024f8c */

void FUN_ram_48024f8c(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48025a72(400);
  DAT_ram_4ff6dbfc = 0;
  FUN_ram_48025bd6();
  uVar1 = FUN_ram_48024f10();
  FUN_ram_48025b80(FUN_ram_48024f1e,"loopTask",uVar1,0,1,&DAT_ram_4ff6dc00,0);
  return;
}



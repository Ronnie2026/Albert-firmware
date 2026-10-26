/* Firmware entry: 0x4802f07e */

void FUN_ram_4802f07e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_20 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022();
  FUN_ram_4802a928(auStack_20,param_3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}



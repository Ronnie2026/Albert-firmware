/* Firmware entry: 0x4ff3a9fa */

void FUN_ram_4ff3a9fa(undefined4 param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff36e7c(mhartid,&DAT_ram_4ff5b1b0,&DAT_ram_4ff5b1b4);
  FUN_ram_481a7350();
  DAT_ram_4ff5b1ac = &stack0xfffffff0;
  FUN_ram_4ff3857e();
  FUN_ram_481a7378(param_1,param_2);
  FUN_ram_481a7328();
  FUN_ram_4ff384de();
  FUN_ram_4ff38518(param_2);
  FUN_ram_4ff385ae(DAT_ram_4ff5b1ac);
  FUN_ram_481a7350();
  FUN_ram_481a7378(DAT_ram_4ff5b1b0,DAT_ram_4ff5b1b4);
  FUN_ram_481a7328();
  return;
}



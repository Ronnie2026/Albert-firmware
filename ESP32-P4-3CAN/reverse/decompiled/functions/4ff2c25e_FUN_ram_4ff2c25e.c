/* Firmware entry: 0x4ff2c25e */

void FUN_ram_4ff2c25e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  thunk_FUN_ram_4ff2c4d6();
  auStack_24[0] = 0;
  uVar1 = FUN_ram_4ff41722(param_1);
  FUN_ram_4ff4127c(uVar1,param_1,param_2,param_3,param_4,auStack_24);
  FUN_ram_4ff2c238(param_2,param_4);
  thunk_FUN_ram_4ff2c5d2();
  return;
}



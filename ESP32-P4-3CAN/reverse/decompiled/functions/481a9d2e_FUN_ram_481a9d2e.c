/* Firmware entry: 0x481a9d2e */

undefined4 FUN_ram_481a9d2e(int param_1)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = DAT_ram_4ff47dac;
  if (param_1 != 0) {
    FUN_ram_4ff44c40();
    iVar1 = FUN_ram_48001d52(param_1,auStack_14);
    if (iVar1 == 0) {
      FUN_ram_48001bb8(param_1,auStack_14);
      FUN_ram_48001e76(param_1,auStack_14[0]);
    }
    FUN_ram_4ff44cc4();
  }
  return auStack_14[0];
}



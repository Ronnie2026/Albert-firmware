/* Firmware entry: 0x4ff44d9e */

undefined4 FUN_ram_4ff44d9e(int param_1)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = DAT_ram_4ff47dac;
  if (param_1 != 0) {
    iVar1 = FUN_ram_4ff44c86();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_ram_48001d52(param_1,auStack_14);
    if (iVar1 == 0) {
      FUN_ram_48001bb8(param_1,auStack_14);
      FUN_ram_48001e76(param_1,auStack_14[0]);
    }
    FUN_ram_4ff44cc4();
  }
  return auStack_14[0];
}



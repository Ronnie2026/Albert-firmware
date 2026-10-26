/* Firmware entry: 0x4ff37658 */

void FUN_ram_4ff37658(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_14 = 0x50116000;
  uStack_18 = 0;
  FUN_ram_4fc001fc(&uStack_18,0,0,0);
  iVar1 = FUN_ram_4ff326f4();
  FUN_ram_4fc00208(&uStack_18);
  FUN_ram_4ff36c30(&uStack_18,0,(uint)(iVar1 * param_1) / 1000,4);
  FUN_ram_4fc00210(&uStack_18);
  FUN_ram_4fc0020c(&uStack_18);
  return;
}



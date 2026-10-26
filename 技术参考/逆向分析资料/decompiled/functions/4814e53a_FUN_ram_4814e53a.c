/* Firmware entry: 0x4814e53a */

int FUN_ram_4814e53a(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = param_2;
  iVar1 = FUN_ram_4ff3afa2(*(undefined4 *)*param_1,auStack_14,0,0);
  return -(uint)(iVar1 != 1);
}



/* Firmware entry: 0x4818059a */

void FUN_ram_4818059a(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iStack_1c;
  int *piStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_1c = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  piStack_18 = &iStack_1c;
  uStack_14 = (ushort)((int)param_3 >> 0x1f) | 1;
  uStack_12 = 1;
  FUN_ram_481804de(param_1,param_2,&piStack_18);
  return;
}



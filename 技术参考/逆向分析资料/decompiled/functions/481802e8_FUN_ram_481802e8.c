/* Firmware entry: 0x481802e8 */

void FUN_ram_481802e8(undefined4 param_1,uint param_2)

{
  int iStack_1c;
  int *piStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_1c = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
  piStack_18 = &iStack_1c;
  uStack_14 = (ushort)((int)param_2 >> 0x1f) | 1;
  uStack_12 = 1;
  FUN_ram_4818023e(param_1,&piStack_18);
  return;
}



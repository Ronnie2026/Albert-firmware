/* Firmware entry: 0x4817fbba */

undefined4 FUN_ram_4817fbba(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  if (*(ushort *)((int)param_1 + 6) < param_2) {
    iVar1 = thunk_FUN_ram_4817b126(param_2,4);
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff0;
    }
    if (*param_1 != 0) {
      FUN_ram_4ff45158(iVar1,*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
      FUN_ram_48178b14(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *param_1 = iVar1;
    *(short *)((int)param_1 + 6) = (short)param_2;
  }
  return 0;
}



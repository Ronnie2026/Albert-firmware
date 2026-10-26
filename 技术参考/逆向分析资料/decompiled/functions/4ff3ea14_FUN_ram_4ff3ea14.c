/* Firmware entry: 0x4ff3ea14 */

undefined4 FUN_ram_4ff3ea14(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3f2ac();
  if ((iVar1 != 0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    iVar2 = param_1[0x12];
    *param_2 = (int)param_1;
    param_2[1] = iVar1;
    param_2[2] = iVar2;
    return 1;
  }
  return 0;
}



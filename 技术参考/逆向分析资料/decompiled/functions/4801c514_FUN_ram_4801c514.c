/* Firmware entry: 0x4801c514 */

void FUN_ram_4801c514(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x84))(param_1[1]);
    iVar1 = param_1[1];
    pcVar2 = *(code **)(PTR_PTR_ram_4ff47e40 + 0x88);
    *param_2 = *param_1;
    *param_1 = (int)param_2;
    (*pcVar2)(iVar1);
    return;
  }
  return;
}



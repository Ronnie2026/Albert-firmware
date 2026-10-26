/* Firmware entry: 0x4801c46c */

int FUN_ram_4801c46c(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (int *)0x0) || ((uint)param_1[2] < param_2)) {
    return 0;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x84))(param_1[1]);
  piVar1 = (int *)*param_1;
  pcVar2 = *(code **)(PTR_PTR_ram_4ff47e40 + 0x88);
  if (piVar1 == (int *)0x0) {
    (*pcVar2)(param_1[1]);
    piVar1 = (int *)FUN_ram_48120778((param_1[2] & 0xffffffc0U) + 0x40);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  else {
    *param_1 = *piVar1;
    (*pcVar2)(param_1[1]);
  }
  if (param_3 == 0) {
    return (int)piVar1;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 4))(piVar1,0,param_2);
  return (int)piVar1;
}



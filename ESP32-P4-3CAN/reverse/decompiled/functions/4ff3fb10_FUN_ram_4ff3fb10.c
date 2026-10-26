/* Firmware entry: 0x4ff3fb10 */

void FUN_ram_4ff3fb10(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_2 == 0xffffffff) {
    piVar2 = (int *)param_1[4];
  }
  else {
    piVar2 = param_1 + 2;
    uVar1 = *(uint *)param_1[3];
    while (uVar1 <= *param_2) {
      piVar2 = (int *)piVar2[1];
      uVar1 = *(uint *)piVar2[1];
    }
  }
  param_2[1] = piVar2[1];
  *(uint **)(param_2[1] + 8) = param_2;
  param_2[2] = (uint)piVar2;
  piVar2[1] = (int)param_2;
  param_2[4] = (uint)param_1;
  *param_1 = *param_1 + 1;
  return;
}



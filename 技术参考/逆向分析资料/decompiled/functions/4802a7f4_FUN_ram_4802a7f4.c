/* Firmware entry: 0x4802a7f4 */

int * FUN_ram_4802a7f4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == 0) || (iVar1 = FUN_ram_4802a79a(param_1,param_3), iVar1 == 0)) {
    FUN_ram_4802a5b4(param_1);
    return param_1;
  }
  piVar2 = param_1;
  if (-1 < *(char *)((int)param_1 + 0xf)) {
    piVar2 = (int *)*param_1;
  }
  FUN_ram_4ff4522c(piVar2,param_2,param_3);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)param_3 & 0x7f;
    *(undefined1 *)(param_3 + (int)param_1) = 0;
    return param_1;
  }
  param_1[2] = param_3;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + param_3) = 0;
  }
  return param_1;
}



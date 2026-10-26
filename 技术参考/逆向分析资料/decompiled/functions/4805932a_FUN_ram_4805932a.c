/* Firmware entry: 0x4805932a */

void FUN_ram_4805932a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1 = param_1 + param_2 * 8;
  iVar1 = param_1 + 0x210;
  do {
    iVar2 = *(int *)(param_1 + 0x5a4) + 1;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x5a4) = iVar2;
    param_1 = param_1 + 0xb0;
  } while (param_1 != iVar1);
  return;
}



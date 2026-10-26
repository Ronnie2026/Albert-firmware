/* Firmware entry: 0x48181584 */

int FUN_ram_48181584(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    param_1 = param_1 + param_2 * 4;
    do {
      piVar1 = (int *)(param_1 + -4);
      param_1 = param_1 + -4;
      if (*piVar1 != 0) {
        iVar3 = __clzsi2();
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return (iVar2 + 1) * 0x20 - iVar3;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}



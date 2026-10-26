/* Firmware entry: 0x48180036 */

int FUN_ram_48180036(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(ushort *)((int)param_1 + 6) == 0) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  uVar1 = 0;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar2 != 0) {
      iVar2 = __ctzsi2();
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2 + uVar1 * 0x20;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != *(ushort *)((int)param_1 + 6));
  return 0;
}



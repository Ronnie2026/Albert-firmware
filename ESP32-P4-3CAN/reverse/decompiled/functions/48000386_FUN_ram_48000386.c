/* Firmware entry: 0x48000386 */

int FUN_ram_48000386(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (iVar3 = *param_1, iVar3 != 0)) {
    iVar2 = 0;
    do {
      param_1 = param_1 + 1;
      puVar1 = (ushort *)(iVar3 + 2);
      iVar3 = *param_1;
      iVar2 = iVar2 + (uint)*puVar1;
    } while (iVar3 != 0);
    return iVar2;
  }
  return 0;
}



/* Firmware entry: 0x4816af70 */

undefined2 FUN_ram_4816af70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  iVar2 = 5;
  piVar3 = &DAT_ram_482383d0;
  do {
    if (param_1 == iVar2) {
      return (&DAT_ram_482383c0)[iVar1 * 6];
    }
    iVar2 = *piVar3;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 != 0);
  return 0;
}



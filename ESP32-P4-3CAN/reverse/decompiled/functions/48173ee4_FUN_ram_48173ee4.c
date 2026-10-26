/* Firmware entry: 0x48173ee4 */

undefined4 * FUN_ram_48173ee4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e28c == 0) {
    piVar2 = &DAT_ram_4ff6d548;
    piVar4 = &DAT_ram_48238fe0;
    iVar1 = 0;
    iVar3 = 5;
    do {
      piVar4 = piVar4 + 3;
      *piVar2 = iVar3;
      iVar3 = *piVar4;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 != 0);
    (&DAT_ram_4ff6d548)[iVar1] = 0;
    DAT_ram_4ff6e28c = 1;
  }
  return &DAT_ram_4ff6d548;
}



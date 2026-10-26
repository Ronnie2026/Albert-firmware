/* Firmware entry: 0x480007aa */

undefined4 FUN_ram_480007aa(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 0;
  piVar3 = &DAT_ram_4ff58a24;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar1 == param_1) {
      (&DAT_ram_4ff58a24)[iVar2] = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5);
  return 0x103;
}



/* Firmware entry: 0x48145f5e */

void FUN_ram_48145f5e(int param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = &DAT_ram_4ff6cf50;
  iVar2 = 0;
  do {
    if (((char)piVar1[3] != '\0') && (*piVar1 == param_1)) {
      FUN_ram_48145980(iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 6;
  } while (iVar2 != 10);
  return;
}



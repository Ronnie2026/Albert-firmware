/* Firmware entry: 0x4816aeea */

undefined4 FUN_ram_4816aeea(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = 5;
  iVar2 = 0;
  piVar4 = &DAT_ram_482383d0;
  while (param_2 != iVar3) {
    iVar3 = *piVar4;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  if ((&DAT_ram_482383c0)[iVar2 * 6] == 0) {
    return 0xffffffff;
  }
  psVar5 = *(short **)(*param_1 + 100);
  if (psVar5 == (short *)0x0) {
    return 0xffffffff;
  }
  do {
    sVar1 = *psVar5;
    if (sVar1 == 0) {
      return 0xffffffff;
    }
    psVar5 = psVar5 + 1;
  } while ((&DAT_ram_482383c0)[iVar2 * 6] != sVar1);
  return 0;
}



/* Firmware entry: 0x4ff29cae */

uint FUN_ram_4ff29cae(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = 3;
  while( true ) {
    uVar2 = DAT_ram_4ff4d818;
    fence();
    piVar4 = &DAT_ram_4ff4d81c + DAT_ram_4ff4d818;
    if (1 < DAT_ram_4ff4d818) {
      return 2;
    }
    iVar1 = *piVar4;
    *piVar4 = iVar1 + 1;
    if (-1 < iVar1) break;
    *piVar4 = *piVar4 + -1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 2;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return uVar2;
}



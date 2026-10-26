/* Firmware entry: 0x48030904 */

void FUN_ram_48030904(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481308ba(0);
  if ((iVar1 == 0) || ((iVar1 == 0x102 && (iVar2 = FUN_ram_48130cec(0), iVar2 == 0)))) {
    piVar4 = &DAT_ram_4ff5bb98 + param_1;
    iVar1 = 1;
    if (*piVar4 == 0) {
      *piVar4 = 1;
    }
  }
  else {
    uVar3 = param_1 + 2 & 0xff;
    fence();
    (&DAT_ram_4ff5bb98)[uVar3] = iVar1;
    DAT_ram_4ff5bba8 = DAT_ram_4ff5bba8 | 1 << (param_1 & 0x1f);
    piVar4 = &DAT_ram_4ff5bb90 + uVar3;
    if (*piVar4 == 0) {
      *piVar4 = 2;
    }
    FUN_ram_4ff2bc94();
    iVar1 = 0;
  }
  if (DAT_ram_4ff6dc44 != 0) {
    FUN_ram_4ff3e004(DAT_ram_4ff6dc44,0,0,2,0);
  }
  do {
    do {
      iVar2 = FUN_ram_4802d220(param_1,iVar1);
    } while (iVar2 != 0);
    if (iVar1 != 0) {
      fence();
      if ((*piVar4 == 3) && (fence(), DAT_ram_4ff6df94 != '\0')) {
        return;
      }
      FUN_ram_48130b50();
    }
    iVar2 = FUN_ram_4ff3df3c(0,1,100);
    if (iVar2 != 0) {
      FUN_ram_4ff3c2b6(1);
    }
  } while( true );
}



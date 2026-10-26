/* Firmware entry: 0x4802d220 */

int FUN_ram_4802d220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = &DAT_ram_4ff5bb98 + param_1;
  fence();
  if (*piVar1 != 4) {
    return 0;
  }
  if (param_2 != 0) {
    iVar2 = FUN_ram_48130c7e(0);
    iVar3 = FUN_ram_48130cec(0);
    if ((iVar2 != 0) && ((iVar3 - 0x103U & 0xfffffffd) != 0)) {
      FUN_ram_4ff2bc94(4,param_1);
      FUN_ram_4ff3c2b6(100);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_2;
    }
  }
  if (*piVar1 == 4) {
    *piVar1 = 5;
  }
  if (DAT_ram_4ff6dc44 != 0) {
    FUN_ram_4ff3e004(DAT_ram_4ff6dc44,0,0,2,0);
  }
  do {
    FUN_ram_4ff3c2b6(1000);
  } while( true );
}



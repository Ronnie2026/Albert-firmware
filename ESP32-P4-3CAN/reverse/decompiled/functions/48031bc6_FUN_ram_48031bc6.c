/* Firmware entry: 0x48031bc6 */

undefined4 FUN_ram_48031bc6(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x04') {
    iVar3 = 0x88c;
    iVar5 = 0x18;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x04') {
    iVar3 = 0x3e04;
    iVar5 = 0x3590;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x04') goto LAB_ram_48031bf4;
    iVar5 = 0x6b08;
    iVar3 = 0x737c;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  if (*(char *)(iVar5 + param_1 + 0x504) != '\0') {
    FUN_ram_4ff3ee10();
    return 1;
  }
  cVar1 = *(char *)(iVar5 + param_1 + 0x505);
  FUN_ram_4ff3ee10(iVar3 + param_1);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_ram_48031bf4:
  pcVar6 = (char *)(param_1 + 0x1810c);
  pcVar7 = (char *)(param_1 + 0x18c64);
  pcVar2 = (char *)(param_1 + 0x4a0);
  do {
    if (((*pcVar6 != '\0') || (pcVar6[0x6cc] != '\0')) ||
       ((*(int *)(pcVar2 + -0x3f8) != 0 && (iVar3 = FUN_ram_4ff3b9c2(), iVar3 != 0)))) {
      return 1;
    }
    piVar4 = *(int **)(pcVar2 + -0x398);
    if (piVar4 != (int *)0x0) {
      if (*piVar4 == 0) {
        if (piVar4[1] == 0) goto LAB_ram_48031c54;
        cVar1 = *(char *)(piVar4[1] + 0x13a);
      }
      else {
        cVar1 = *(char *)(*piVar4 + 0x952);
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
LAB_ram_48031c54:
    if ((*(int *)(pcVar2 + -0x394) != 0) && (*(char *)(*(int *)(pcVar2 + -0x394) + 0x602) != '\0'))
    {
      return 1;
    }
    fence();
    if (*pcVar7 != '\0') {
      return 1;
    }
    if ((*(int *)(pcVar2 + -0x390) != 0) && (iVar3 = FUN_ram_4ff3b9c2(), iVar3 != 0)) {
      return 1;
    }
    if ((*(int *)(pcVar2 + -0x330) != 0) && (iVar3 = FUN_ram_4ff3b9c2(), iVar3 != 0)) {
      return 1;
    }
    if (*pcVar2 != '\0') {
      return 1;
    }
    pcVar6 = pcVar6 + 0x244;
    pcVar2 = pcVar2 + 0x3578;
    pcVar7 = pcVar7 + 1;
    if (pcVar6 == (char *)(param_1 + 0x187d8)) {
      return 0;
    }
  } while( true );
}



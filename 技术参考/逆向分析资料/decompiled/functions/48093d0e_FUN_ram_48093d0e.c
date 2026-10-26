/* Firmware entry: 0x48093d0e */

bool FUN_ram_48093d0e(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar8 = 0x88c;
    iVar4 = 0x18;
    iVar2 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar4 = 0x3590;
    iVar8 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return false;
    }
    iVar4 = 0x6b08;
    iVar8 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar8 + param_1,0xffffffff);
  iVar6 = iVar2 * 0x3578 + param_1;
  if ((*(char *)(iVar6 + 0x888) == '\0') &&
     ((*(int *)(iVar6 + 0xa8) == 0 || (iVar6 = FUN_ram_4ff3b9c2(), iVar6 == 0)))) {
    piVar7 = *(int **)(iVar2 * 0x3578 + param_1 + 0x108);
    if (piVar7 != (int *)0x0) {
      if (*piVar7 == 0) {
        if (piVar7[1] == 0) goto LAB_ram_48093dc8;
        cVar1 = *(char *)(piVar7[1] + 0x13a);
      }
      else {
        cVar1 = *(char *)(*piVar7 + 0x952);
      }
      if (cVar1 != '\0') goto LAB_ram_48093d88;
    }
LAB_ram_48093dc8:
    uVar5 = FUN_ram_4ff21a0a();
    iVar4 = FUN_ram_48093896(param_1 + iVar4,uVar5);
    if (((iVar4 == 0) && (iVar2 = param_1 + iVar2 * 0x3578, *(char *)(iVar2 + 0x59a) == '\0')) &&
       (*(char *)(iVar2 + 0x85f) == '\0')) {
      bVar3 = *(char *)(iVar2 + 0x5a0) == '\0';
      goto LAB_ram_48093d8a;
    }
  }
LAB_ram_48093d88:
  bVar3 = false;
LAB_ram_48093d8a:
  FUN_ram_4ff3ee10(iVar8 + param_1);
  return bVar3;
}



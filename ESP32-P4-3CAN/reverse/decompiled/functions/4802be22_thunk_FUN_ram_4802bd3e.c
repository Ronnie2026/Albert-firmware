/* Firmware entry: 0x4802be22 */

int thunk_FUN_ram_4802bd3e(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char *__s;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char acStack_25 [9];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = 10;
  if (param_3 == 10) {
    uVar5 = 10;
    if ((int)param_2 < 0) {
      iVar7 = (**(code **)(*param_1 + 8))(param_1,0x2d);
      param_2 = -param_2;
    }
    else {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 0;
    if (1 < (param_3 & 0xff)) {
      uVar5 = param_3 & 0xff;
    }
  }
  acStack_25[1] = 0;
  __s = acStack_25 + 1;
  do {
    cVar3 = (char)(param_2 % uVar5);
    cVar2 = cVar3 + '7';
    if (param_2 % uVar5 < 10) {
      cVar2 = cVar3 + '0';
    }
    __s[-1] = cVar2;
    __s = __s + -1;
    bVar1 = uVar5 <= param_2;
    param_2 = param_2 / uVar5;
  } while (bVar1);
  iVar6 = *param_1;
  sVar4 = strlen(__s);
  if (*(code **)(iVar6 + 0xc) == FUN_ram_4802b9f2) {
    if (sVar4 != 0) {
      iVar8 = 0;
      pcVar9 = __s + sVar4;
      while( true ) {
        cVar2 = *__s;
        __s = __s + 1;
        iVar6 = (**(code **)(iVar6 + 8))(param_1,cVar2);
        iVar8 = iVar8 + iVar6;
        if (__s == pcVar9) break;
        iVar6 = *param_1;
      }
      iVar7 = iVar7 + iVar8;
    }
  }
  else {
    iVar6 = (**(code **)(iVar6 + 0xc))(param_1,__s,sVar4);
    iVar7 = iVar7 + iVar6;
  }
  return iVar7;
}



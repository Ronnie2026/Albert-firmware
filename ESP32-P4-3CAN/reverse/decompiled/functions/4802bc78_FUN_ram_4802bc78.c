/* Firmware entry: 0x4802bc78 */

int FUN_ram_4802bc78(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char *__s;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char local_25 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *param_1;
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4802bc8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(iVar7 + 8))();
    return iVar7;
  }
  local_25[1] = 0;
  uVar5 = 10;
  if (1 < (param_3 & 0xff)) {
    uVar5 = param_3 & 0xff;
  }
  __s = local_25 + 1;
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
  sVar4 = strlen(__s);
  if (*(code **)(iVar7 + 0xc) == FUN_ram_4802b9f2) {
    iVar6 = 0;
    if (sVar4 != 0) {
      pcVar8 = __s + sVar4;
      iVar6 = 0;
      while( true ) {
        cVar2 = *__s;
        __s = __s + 1;
        iVar7 = (**(code **)(iVar7 + 8))(param_1,cVar2);
        iVar6 = iVar6 + iVar7;
        if (pcVar8 == __s) break;
        iVar7 = *param_1;
      }
    }
  }
  else {
    iVar6 = (**(code **)(iVar7 + 0xc))(param_1,__s,sVar4);
  }
  return iVar6;
}



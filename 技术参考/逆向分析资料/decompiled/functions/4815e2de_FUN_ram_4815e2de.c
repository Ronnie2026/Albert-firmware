/* Firmware entry: 0x4815e2de */

void FUN_ram_4815e2de(undefined4 *param_1,int param_2)

{
  size_t sVar1;
  void *__s;
  code *pcVar2;
  char *__s_00;
  char *pcVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s_00 = (char *)*param_1;
  pcVar3 = (char *)param_1[0x35];
  iVar4 = param_1[0x36];
  if (__s_00 == pcVar3) {
    sVar1 = param_1[0x37];
    if (__s_00[sVar1] != '\0') {
      sVar1 = strlen(__s_00);
      param_1[0x37] = sVar1;
    }
    param_2 = param_2 + sVar1;
    if (param_2 < iVar4) goto LAB_ram_4815e32a;
    if (param_2 < 100) goto LAB_ram_4815e3da;
LAB_ram_4815e378:
    sVar1 = param_2 << 1;
  }
  else {
    if (iVar4 < 0x1f5) {
      sVar1 = strlen(__s_00);
      param_1[0x37] = sVar1;
      param_2 = sVar1 + param_2;
      if (param_2 < iVar4) {
        FUN_ram_4ff454c4(pcVar3,__s_00);
        goto LAB_ram_4815e32a;
      }
    }
    else {
      thunk_FUN_ram_4ff209c6(pcVar3);
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      sVar1 = strlen((char *)*param_1);
      param_1[0x37] = sVar1;
      param_2 = sVar1 + param_2;
    }
    if (99 < param_2) goto LAB_ram_4815e378;
LAB_ram_4815e3da:
    sVar1 = 200;
  }
  __s = (void *)FUN_ram_4815e5c8(sVar1);
  memset(__s,0,sVar1);
  FUN_ram_4ff454c4(__s,*param_1);
  if (param_1[0x35] != 0) {
    thunk_FUN_ram_4ff209c6();
  }
  param_1[0x35] = __s;
  param_1[0x36] = sVar1;
LAB_ram_4815e32a:
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    if (pcVar2 == (code *)0x3) {
      thunk_FUN_ram_4ff209c6(*param_1);
    }
    else {
      (*pcVar2)();
    }
    param_1[1] = 0;
  }
  *param_1 = param_1[0x35];
  return;
}



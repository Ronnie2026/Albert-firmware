/* Firmware entry: 0x48033afa */

void FUN_ram_48033afa(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  puVar2 = (undefined1 *)(param_1 + 0x18d90);
  uVar3 = (undefined1)param_3;
  *puVar2 = uVar3;
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    iVar6 = 0x88c;
    iVar5 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x02') {
    iVar6 = 0x3e04;
    iVar5 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x02') {
      return;
    }
    iVar6 = 0x737c;
    iVar5 = 2;
  }
  iVar6 = iVar6 + param_1;
  FUN_ram_4ff3ec14(iVar6,0xffffffff);
  iVar4 = iVar5 * 0x3578 + param_1;
  if ((param_2 == *(int *)(iVar4 + 0x858)) && (*(byte *)(iVar4 + 0x85c) == param_3)) {
    cVar1 = *(char *)(iVar4 + 0x85e);
    *(undefined1 *)(iVar4 + 0x85e) = 0;
    FUN_ram_4ff3ee10(iVar6);
    fence();
    *puVar2 = uVar3;
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    iVar5 = iVar5 * 0x3578 + param_1;
    *(int *)(iVar5 + 0x858) = param_2;
    *(undefined1 *)(iVar5 + 0x85c) = uVar3;
    *(undefined1 *)(iVar5 + 0x85e) = 0;
    FUN_ram_4ff3ee10(iVar6);
    fence();
    *puVar2 = uVar3;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    iVar6 = 0x88c;
    iVar5 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x02') {
    iVar6 = 0x3e04;
    iVar5 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x02') {
      return;
    }
    iVar6 = 0x737c;
    iVar5 = 2;
  }
  FUN_ram_4ff3ec14(param_1 + iVar6,0xffffffff);
  iVar5 = *(int *)(iVar5 * 0x3578 + param_1 + 0x580);
  FUN_ram_4ff3ee10(param_1 + iVar6);
  if (iVar5 == 0) {
    return;
  }
  FUN_ram_4ff3e004(iVar5,0,0,2,0);
  return;
}



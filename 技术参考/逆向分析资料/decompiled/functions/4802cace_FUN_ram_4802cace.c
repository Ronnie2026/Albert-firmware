/* Firmware entry: 0x4802cace */

void FUN_ram_4802cace(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar3 = 0x88c;
    iVar2 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar3 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return;
    }
    iVar3 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  iVar4 = iVar2 * 0x3578 + param_1;
  cVar1 = *(char *)(iVar4 + 0x85f);
  if (cVar1 != '\0') {
    *(char *)(iVar4 + 0x85f) = cVar1 + -1;
  }
  iVar4 = iVar2 * 0x3578 + param_1;
  cVar1 = *(char *)(iVar4 + 0x860);
  if (cVar1 != '\0') {
    *(char *)(iVar4 + 0x860) = cVar1 + -1;
  }
  iVar2 = *(int *)(param_1 + iVar2 * 0x3578 + 0x588);
  FUN_ram_4ff3ee10(iVar3 + param_1);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4ff3e004(iVar2,0,0,2,0);
  return;
}



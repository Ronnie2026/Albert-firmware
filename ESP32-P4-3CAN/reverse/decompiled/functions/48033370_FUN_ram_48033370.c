/* Firmware entry: 0x48033370 */

void FUN_ram_48033370(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar3 = 0x88c;
    iVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x01') {
    iVar3 = 0x3e04;
    iVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x01') {
      return;
    }
    iVar3 = 0x737c;
    iVar1 = 2;
  }
  iVar3 = iVar3 + param_1;
  FUN_ram_4ff3ec14(iVar3,0xffffffff);
  iVar2 = iVar1 * 0x3578 + param_1;
  if (((param_2 == *(int *)(iVar2 + 0x858)) && (*(byte *)(iVar2 + 0x85c) == param_3)) &&
     (*(char *)(iVar2 + 0x85e) == '\0')) {
    FUN_ram_4ff3ee10(iVar3);
    return;
  }
  iVar1 = iVar1 * 0x3578 + param_1;
  *(int *)(iVar1 + 0x858) = param_2;
  *(char *)(iVar1 + 0x85c) = (char)param_3;
  *(undefined1 *)(iVar1 + 0x85e) = 0;
  FUN_ram_4ff3ee10(iVar3);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar3 = 0x88c;
    iVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x01') {
    iVar3 = 0x3e04;
    iVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x01') {
      return;
    }
    iVar3 = 0x737c;
    iVar1 = 2;
  }
  FUN_ram_4ff3ec14(param_1 + iVar3,0xffffffff);
  iVar1 = *(int *)(param_1 + iVar1 * 0x3578 + 0x580);
  FUN_ram_4ff3ee10(param_1 + iVar3);
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_4ff3e004(iVar1,0,0,2,0);
  return;
}



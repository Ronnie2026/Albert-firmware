/* Firmware entry: 0x48032620 */

void FUN_ram_48032620(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)((int)param_2 + 0xd);
  if (cVar1 == '\x01') {
    if (*param_2 != 0x3fd) {
      return;
    }
    if ((char)param_2[1] != '\b') {
      return;
    }
    if (2 < (*(byte *)((int)param_2 + 5) & 7)) {
      return;
    }
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    if (*param_2 != 0x3fd) {
      return;
    }
    if ((char)param_2[1] != '\b') {
      return;
    }
    if ((*(byte *)((int)param_2 + 5) & 7) != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x2c) == cVar1) {
    iVar3 = 0x88c;
    iVar4 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == cVar1) {
    iVar3 = 0x3e04;
    iVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != cVar1) {
      return;
    }
    iVar3 = 0x737c;
    iVar4 = 2;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  uVar2 = *(byte *)((int)param_2 + 5) & 7;
  if (*(int *)((iVar4 * 0xd5e + uVar2) * 4 + param_1 + 0x5a4) == param_2[8]) {
    *(undefined1 *)(param_1 + iVar4 * 0x3578 + uVar2 + 0x5cc) = 0;
  }
  FUN_ram_4ff3ee10(iVar3 + param_1);
  return;
}



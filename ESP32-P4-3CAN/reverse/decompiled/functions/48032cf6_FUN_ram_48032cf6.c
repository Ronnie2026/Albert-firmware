/* Firmware entry: 0x48032cf6 */

void FUN_ram_48032cf6(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    iVar3 = 0x88c;
    iVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x02') {
    iVar3 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x02') {
      return;
    }
    iVar3 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  iVar2 = iVar2 * 0x3578 + param_1;
  *(undefined4 *)(iVar2 + 0x5b8) = param_2;
  bVar1 = *(byte *)(iVar2 + 0x5b4);
  *(undefined4 *)(iVar2 + 0x5bc) = param_4;
  *(char *)(iVar2 + 0x5b4) = (char)param_3;
  FUN_ram_4ff3ee10(iVar3 + param_1);
  if (bVar1 != param_3) {
    FUN_ram_4ff3ec14(param_1 + 0x88c,0xffffffff);
    iVar2 = *(int *)(param_1 + 0x588);
    FUN_ram_4ff3ee10(param_1 + 0x88c);
    if (iVar2 != 0) {
      FUN_ram_4ff3e004(iVar2,0,0,2,0);
      return;
    }
  }
  return;
}



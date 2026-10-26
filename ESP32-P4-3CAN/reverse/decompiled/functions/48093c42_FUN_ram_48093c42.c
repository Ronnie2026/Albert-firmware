/* Firmware entry: 0x48093c42 */

bool FUN_ram_48093c42(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar4 = 0x88c;
    iVar5 = 0x18;
    iVar2 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar5 = 0x3590;
    iVar4 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return false;
    }
    iVar4 = 0x737c;
    iVar5 = 0x6b08;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar4 + param_1,0xffffffff);
  iVar2 = iVar2 * 0x3578 + param_1;
  if (*(char *)(iVar2 + 0x59a) == '\0') {
    uVar3 = FUN_ram_4ff21a0a();
    iVar5 = FUN_ram_48093896(param_1 + iVar5,uVar3);
    if (iVar5 == 0) {
      bVar1 = *(char *)(iVar2 + 0x85f) == '\0';
      goto LAB_ram_48093caa;
    }
  }
  bVar1 = false;
LAB_ram_48093caa:
  FUN_ram_4ff3ee10(iVar4 + param_1);
  return bVar1;
}



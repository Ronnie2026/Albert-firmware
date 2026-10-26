/* Firmware entry: 0x48136a1a */

int FUN_ram_48136a1a(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 2) {
    if (param_1 == 2) {
      cVar1 = (param_3 == 0x88) + ' ';
    }
    else {
      cVar1 = (param_3 == 0x88) + '(';
    }
    iVar4 = FUN_ram_4814ef00(cVar1,0,&DAT_ram_48135526);
  }
  else if (param_2 == 3) {
    uVar5 = 0x48;
    if (param_1 == 2) {
      uVar5 = 0x40;
    }
    iVar4 = FUN_ram_4814ef00(uVar5,param_3 & 0xff,&DAT_ram_48135526);
  }
  else {
    if (param_2 != 1) {
      puVar2 = (undefined4 *)FUN_ram_4819bf88();
      *puVar2 = 0x16;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -1;
    }
    uVar5 = 0x18;
    if (param_1 == 2) {
      uVar5 = 0x10;
    }
    iVar4 = FUN_ram_4814ef00(uVar5,0,&DAT_ram_48135526);
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x69;
  }
  else {
    iVar3 = FUN_ram_4813444a(iVar4,0);
    if (iVar3 != -1) {
      *(int *)(iVar4 + 0x1c) = iVar3;
      FUN_ram_48134a50(&DAT_ram_4ff6c614 + (iVar3 + -0x36) * 5);
      return iVar3;
    }
    FUN_ram_4814f028(iVar4);
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x17;
  }
  return -1;
}



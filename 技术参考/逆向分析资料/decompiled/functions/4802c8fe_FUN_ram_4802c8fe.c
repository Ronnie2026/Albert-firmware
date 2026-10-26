/* Firmware entry: 0x4802c8fe */

void FUN_ram_4802c8fe(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar2 = 0x88c;
    iVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar2 = 0x3e04;
    iVar1 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return;
    }
    iVar2 = 0x737c;
    iVar1 = 2;
  }
  FUN_ram_4ff3ec14(iVar2 + param_1,0xffffffff);
  iVar1 = *(int *)(param_1 + iVar1 * 0x3578 + 0x580);
  FUN_ram_4ff3ee10(iVar2 + param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_4ff3e004(iVar1,0,0,2,0);
  return;
}



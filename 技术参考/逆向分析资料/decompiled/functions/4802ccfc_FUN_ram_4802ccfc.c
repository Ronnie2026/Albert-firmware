/* Firmware entry: 0x4802ccfc */

undefined4 FUN_ram_4802ccfc(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar2 = 0x88c;
    iVar3 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar2 = 0x3e04;
    iVar3 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return 0;
    }
    iVar2 = 0x737c;
    iVar3 = 2;
  }
  FUN_ram_4ff3ec14(iVar2 + param_1,0xffffffff);
  uVar1 = *(undefined4 *)(param_1 + iVar3 * 0x3578 + 0x5a4);
  FUN_ram_4ff3ee10(iVar2 + param_1);
  return uVar1;
}



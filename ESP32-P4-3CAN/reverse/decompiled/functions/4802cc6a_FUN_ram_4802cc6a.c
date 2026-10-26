/* Firmware entry: 0x4802cc6a */

void FUN_ram_4802cc6a(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x2c) == param_2) {
    iVar1 = 0x88c;
    iVar2 = 0;
  }
  else if (*(byte *)(param_1 + 0x35a4) == param_2) {
    iVar1 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x6b1c) != param_2) {
      return;
    }
    iVar1 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar1 + param_1,0xffffffff);
  *(undefined1 *)(param_1 + iVar2 * 0x3578 + 0x85d) = param_3;
  FUN_ram_4ff3ee10(iVar1 + param_1);
  return;
}



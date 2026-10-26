/* Firmware entry: 0x4802c9a2 */

undefined4 FUN_ram_4802c9a2(int param_1)

{
  undefined4 uVar1;
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
      return 0;
    }
    iVar3 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  uVar1 = *(undefined4 *)(param_1 + iVar2 * 0x3578 + 0x5b8);
  FUN_ram_4ff3ee10(iVar3 + param_1);
  return uVar1;
}



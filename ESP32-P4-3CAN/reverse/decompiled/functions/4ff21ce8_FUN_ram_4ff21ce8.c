/* Firmware entry: 0x4ff21ce8 */

undefined4 FUN_ram_4ff21ce8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 2;
  uVar2 = 0;
  if (param_2 < 3) {
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
        return 0;
      }
      iVar3 = 0x737c;
    }
    FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
    uVar2 = *(undefined4 *)(param_1 + (iVar1 * 0xd5e + param_2) * 4 + 0x5a4);
    FUN_ram_4ff3ee10(iVar3 + param_1);
  }
  return uVar2;
}



/* Firmware entry: 0x4802f9a0 */

undefined4 FUN_ram_4802f9a0(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 2;
  uVar1 = 0;
  if (param_3 < 3) {
    if (*(byte *)(param_1 + 0x2c) == param_2) {
      iVar3 = 0x88c;
      iVar2 = 0;
    }
    else if (*(byte *)(param_1 + 0x35a4) == param_2) {
      iVar3 = 0x3e04;
      iVar2 = 1;
    }
    else {
      if (*(byte *)(param_1 + 0x6b1c) != param_2) {
        return 0;
      }
      iVar3 = 0x737c;
    }
    FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
    uVar1 = *(undefined4 *)(param_1 + (iVar2 * 0xd5e + param_3) * 4 + 0x5a4);
    FUN_ram_4ff3ee10(iVar3 + param_1);
  }
  return uVar1;
}



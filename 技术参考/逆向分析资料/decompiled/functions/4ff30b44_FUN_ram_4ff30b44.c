/* Firmware entry: 0x4ff30b44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30b44(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = (DAT_ram_4ff47de4 & 3) << 1;
  _DAT_ram_500e123c = _DAT_ram_500e123c & 0xfffffff9 | uVar4;
  _DAT_ram_500e1268 = uVar4 | _DAT_ram_500e1268 & 0xfffffff9;
  uVar4 = (uint)(byte)DAT_ram_4ff47de0;
  iVar3 = 0;
  iVar5 = 0xc;
  uVar2 = DAT_ram_4ff47de0._1_1_ & 0xf;
  uVar1 = 0xfffffff7;
  while (iVar3 != 0x13) {
    if (uVar1 < 10) {
      iVar3 = iVar3 + 1;
      *(uint *)(iVar5 + 0x500e1210) =
           *(uint *)(iVar5 + 0x500e1210) & 0xffffff0f | (uVar4 & 0xf) << 4;
    }
    else {
      iVar5 = (iVar3 + 4) * 4;
      iVar3 = iVar3 + 1;
      *(uint *)(iVar5 + 0x500e120c) =
           *(uint *)(iVar5 + 0x500e120c) & 0xffffff0f | (uVar4 & 0xf) << 4;
    }
    while( true ) {
      iVar5 = (iVar3 + 3) * 4;
      uVar1 = iVar3 - 9;
      if (iVar3 != 8) break;
      _DAT_ram_500e123c = _DAT_ram_500e123c & 0xffe1f87f | uVar2 << 7 | uVar2 << 0x11;
      iVar3 = 9;
    }
  }
  _DAT_ram_500e1268 = _DAT_ram_500e1268 & 0xffe1f87f | uVar2 << 7 | uVar2 << 0x11;
  return;
}



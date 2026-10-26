/* Firmware entry: 0x4ff30ab6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30ab6(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_500e123c = _DAT_ram_500e123c & 0xfffffff9;
  _DAT_ram_500e1268 = _DAT_ram_500e1268 & 0xfffffff9;
  iVar2 = 0;
  do {
    iVar1 = (iVar2 + 3) * 4;
    if (iVar2 < 9) {
      if (iVar2 == 8) {
        _DAT_ram_500e123c = _DAT_ram_500e123c & 0xffe1f87f;
      }
      else {
        iVar1 = (iVar2 + 4) * 4;
        *(uint *)(iVar1 + 0x500e120c) = *(uint *)(iVar1 + 0x500e120c) & 0xffffff0f;
      }
    }
    else {
      *(uint *)(iVar1 + 0x500e1210) = *(uint *)(iVar1 + 0x500e1210) & 0xffffff0f;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x13);
  _DAT_ram_500e1268 = _DAT_ram_500e1268 & 0xffe1f87f;
  return;
}



/* Firmware entry: 0x4802e4fc */

bool FUN_ram_4802e4fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_ram_4ff6dc98;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = false;
  if ((DAT_ram_4ff6dc98 != 0) && (bVar1 = false, *(char *)(DAT_ram_4ff6dc98 + 0x94) != '\0')) {
    bVar1 = false;
    if (*(char *)(DAT_ram_4ff6dc98 + 6) == '\x01') {
      iVar2 = FUN_ram_4ff453ae(param_1 + 0x71,DAT_ram_4ff6dc98 + 0x27);
      if ((iVar2 != 0) || (iVar2 = FUN_ram_4ff453ae(param_1 + 0x9a,iVar3 + 0x50), iVar2 != 0)) {
        return false;
      }
      iVar3 = FUN_ram_4ff453ae(param_1 + 0x41,iVar3 + 7);
      bVar1 = iVar3 == 0;
    }
  }
  return bVar1;
}



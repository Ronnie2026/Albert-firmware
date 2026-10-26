/* Firmware entry: 0x4802e468 */

bool FUN_ram_4802e468(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_ram_4ff6dc98;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc98 != 0) {
    if ((((*(char *)(DAT_ram_4ff6dc98 + 0x94) != '\0') ||
         (bVar3 = true, *(char *)(DAT_ram_4ff6dc98 + 4) != '\0')) &&
        (bVar3 = false, *(char *)(param_1 + 0x1e4) == '\x01')) &&
       (bVar3 = true, *(char *)(DAT_ram_4ff6dc98 + 6) == '\x01')) {
      iVar1 = FUN_ram_4ff453ae(param_1 + 0x71,DAT_ram_4ff6dc98 + 0x27);
      bVar3 = false;
      if ((iVar1 == 0) && (iVar1 = FUN_ram_4ff453ae(param_1 + 0x9a,iVar2 + 0x50), iVar1 == 0)) {
        iVar2 = FUN_ram_4ff453ae(param_1 + 0x41,iVar2 + 7);
        bVar3 = iVar2 == 0;
      }
    }
    return bVar3;
  }
  return false;
}



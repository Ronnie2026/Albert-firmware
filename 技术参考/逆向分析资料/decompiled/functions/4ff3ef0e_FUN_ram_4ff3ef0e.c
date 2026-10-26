/* Firmware entry: 0x4ff3ef0e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3ef0e(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = mhartid * 4;
  if (*(int *)(&DAT_ram_4ff6da74 + iVar2) != 0) {
    (&DAT_ram_4ff6da7c)[mhartid] = 1;
    *(undefined4 *)(&DAT_ram_4ff6da5c + mhartid * 4) = 1;
    return;
  }
  FUN_ram_4ff2ca00(mhartid);
  while( true ) {
    if ((&DAT_ram_4ff6da7c)[iVar1] == 0) {
      return;
    }
    if (*(int *)(&DAT_ram_4ff6da6c + iVar2) != 0) break;
    if (iVar1 == 0) {
      if (_DAT_ram_500e5010 == 0) {
        return;
      }
    }
    else if (_DAT_ram_500e5014 == 0) {
      return;
    }
  }
  return;
}



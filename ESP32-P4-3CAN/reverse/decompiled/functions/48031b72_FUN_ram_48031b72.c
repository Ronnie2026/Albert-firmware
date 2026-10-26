/* Firmware entry: 0x48031b72 */

void FUN_ram_48031b72(void)

{
  int iVar1;
  undefined1 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  do {
    uVar2 = 0xff;
    if (DAT_ram_4ff6dc5f < 2) {
      uVar2 = (&DAT_ram_48222610)[((uint)DAT_ram_4ff6dc5f * 3 + iVar1) * 8];
    }
    iVar1 = iVar1 + 1;
    FUN_ram_481212c6(uVar2,5);
  } while (iVar1 != 3);
  return;
}



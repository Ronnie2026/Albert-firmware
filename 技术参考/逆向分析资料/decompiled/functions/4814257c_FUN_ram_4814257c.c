/* Firmware entry: 0x4814257c */

void FUN_ram_4814257c(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6e1fc == 0) && ((DAT_ram_4ff6e1c4 != 0 || (DAT_ram_4ff6e1c0 != 0)))) {
    DAT_ram_4ff6e1fc = 1;
    iVar1 = thunk_FUN_ram_4ff3c5d4();
    FUN_ram_4814246a(iVar1 + 0xfa,FUN_ram_48142538,0);
    return;
  }
  return;
}



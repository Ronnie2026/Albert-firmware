/* Firmware entry: 0x4ff386ea */

void FUN_ram_4ff386ea(int param_1)

{
  int iVar1;
  byte bVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6db34 = *(undefined4 *)(param_1 + 0x1c);
  FUN_ram_4ff39cca();
  iVar1 = FUN_ram_4ff21474();
  bVar2 = 0;
  if (iVar1 != 0) {
    bVar2 = DAT_ram_4ff6e11c ^ 1;
  }
  FUN_ram_4ff3a5e4(param_1,bVar2);
  DAT_ram_4ff6db30 = &DAT_ram_4ff5b0a0;
  memset(&DAT_ram_4ff5a04c,0xa5,0x1064);
  FUN_ram_4ff2faf2(1);
  FUN_ram_4ff2fbfc(1,&DAT_ram_4ff5a04c,1);
  FUN_ram_4ff3a9fa(&DAT_ram_4ff5a04c,DAT_ram_4ff6db30);
  FUN_ram_4ff39cf0();
  return;
}



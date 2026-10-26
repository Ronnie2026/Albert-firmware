/* Firmware entry: 0x4802cd8c */

uint FUN_ram_4802cd8c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = (uint)DAT_ram_4ff4b8d1;
  fence();
  if (uVar2 < 0xc) {
    FUN_ram_4ff3ec14(param_1 + 0xb48,0xffffffff);
    iVar1 = param_1 + uVar2 * 0xf0;
    if ((*(char *)(iVar1 + 0xf0) == '\x02') && (*(char *)(iVar1 + 0x9a) == '\x04')) {
      FUN_ram_4ff3ee10(param_1 + 0xb48);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar2;
    }
    FUN_ram_4ff3ee10();
  }
  return 0xff;
}



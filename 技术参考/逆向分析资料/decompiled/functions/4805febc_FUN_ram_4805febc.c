/* Firmware entry: 0x4805febc */

void FUN_ram_4805febc(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48025ba6();
  if ((99 < (uint)(iVar1 - DAT_ram_4ff6de24)) &&
     (iVar2 = FUN_ram_4805fc76(&DAT_ram_4ff4899c,&DAT_ram_501080c0), DAT_ram_4ff6de24 = iVar1,
     iVar2 != 0)) {
    fence();
  }
  return;
}



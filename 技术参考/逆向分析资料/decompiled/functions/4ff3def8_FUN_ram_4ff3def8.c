/* Firmware entry: 0x4ff3def8 */

undefined4 FUN_ram_4ff3def8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if ((&DAT_ram_4ff6da3c)[mhartid] != 0) {
    iVar2 = (&DAT_ram_4ff6da3c)[mhartid];
    *(int *)(iVar2 + 0x58) = *(int *)(iVar2 + 0x58) + 1;
  }
  uVar1 = (&DAT_ram_4ff6da3c)[mhartid];
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar1;
}



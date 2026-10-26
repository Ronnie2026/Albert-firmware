/* Firmware entry: 0x4ff2cfd2 */

ulonglong FUN_ram_4ff2cfd2(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_4ff53380;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(uint *)(DAT_ram_4ff53380 + 0x10) = *(uint *)(DAT_ram_4ff53380 + 0x10) | 0x10000000;
  return *(ulonglong *)(iVar1 + 0x14) & 0xffffffffffff;
}



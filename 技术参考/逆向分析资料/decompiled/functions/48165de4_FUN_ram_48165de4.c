/* Firmware entry: 0x48165de4 */

void FUN_ram_48165de4(void)

{
  uint *puVar1;
  
  puVar1 = DAT_ram_4ff4ba24;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *DAT_ram_4ff4ba24 = *DAT_ram_4ff4ba24 & 0xfdffffff;
  *puVar1 = *puVar1 | 4;
  puVar1[0x20] = puVar1[0x20] & 0xfffffffd;
  puVar1[0x20] = puVar1[0x20] & 0xffffff7f;
  return;
}



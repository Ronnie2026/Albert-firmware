/* Firmware entry: 0x481888c4 */

undefined4 FUN_ram_481888c4(void)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_14[0] = 0;
  FUN_ram_481a5918(DAT_ram_4ff6e2a8,0,aiStack_14);
  do {
  } while ((*(uint *)(aiStack_14[0] * 0x68 + 0x5008a000) & 1) == 0);
  return 1;
}



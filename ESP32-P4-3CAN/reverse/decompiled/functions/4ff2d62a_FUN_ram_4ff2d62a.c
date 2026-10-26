/* Firmware entry: 0x4ff2d62a */

void FUN_ram_4ff2d62a(void)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4818b4f2();
  FUN_ram_4ff3b3d2(DAT_ram_4ff6e29c,aiStack_14);
  if (aiStack_14[0] == 0) {
    return;
  }
  FUN_ram_4ff3f038();
  return;
}



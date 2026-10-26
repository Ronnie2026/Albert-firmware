/* Firmware entry: 0x4ff2d658 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2d658(void)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_500900ac = 1;
  FUN_ram_4ff3b3d2(DAT_ram_4ff6e2a0,aiStack_14);
  if (aiStack_14[0] == 0) {
    return;
  }
  FUN_ram_4ff3f038();
  return;
}



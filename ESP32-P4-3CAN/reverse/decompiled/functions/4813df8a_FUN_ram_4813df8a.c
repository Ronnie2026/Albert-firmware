/* Firmware entry: 0x4813df8a */

void FUN_ram_4813df8a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4813d8b4();
  DAT_ram_4ff6e1bd = DAT_ram_4ff6e1bd + 1;
  if ((DAT_ram_4ff6e1bd & 1) == 0) {
    return;
  }
  FUN_ram_4813d954();
  return;
}



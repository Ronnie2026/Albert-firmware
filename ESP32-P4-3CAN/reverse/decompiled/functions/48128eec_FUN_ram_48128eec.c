/* Firmware entry: 0x48128eec */

void FUN_ram_48128eec(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4ff3fe68();
    return;
  }
  DAT_ram_4ff6e080 = param_2 | DAT_ram_4ff6e080;
  return;
}



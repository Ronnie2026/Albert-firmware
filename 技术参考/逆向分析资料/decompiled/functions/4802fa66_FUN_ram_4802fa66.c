/* Firmware entry: 0x4802fa66 */

void FUN_ram_4802fa66(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    FUN_ram_4811f7a0(1);
    fence();
    *(undefined1 *)(param_1 + 0x18c78) = 1;
    return;
  }
  FUN_ram_4811f7a0(0);
  fence();
  *(undefined1 *)(param_1 + 0x18c78) = 0;
  FUN_ram_4ff3ec14(param_1 + 0x88c,0xffffffff);
  FUN_ram_4ff3ee10(param_1 + 0x88c);
  FUN_ram_4ff3ec14(param_1 + 0x3e04,0xffffffff);
  FUN_ram_4ff3ee10(param_1 + 0x3e04);
  FUN_ram_4ff3ec14(param_1 + 0x737c,0xffffffff);
  FUN_ram_4ff3ee10(param_1 + 0x737c);
  return;
}



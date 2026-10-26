/* Firmware entry: 0x481517ce */

undefined4 FUN_ram_481517ce(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 + 0x10U & 0xff) < 0x11) {
    return *(undefined4 *)(&UNK_ram_48237594 + param_1 * -4);
  }
  return 5;
}



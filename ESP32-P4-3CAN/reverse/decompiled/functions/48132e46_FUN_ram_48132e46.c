/* Firmware entry: 0x48132e46 */

undefined4 FUN_ram_48132e46(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f38,0xffffffff);
  if (DAT_ram_4ff6e14c == '\0') {
    FUN_ram_4ff32c4a();
    DAT_ram_4ff6e148 = FUN_ram_480039e6(2);
    if (DAT_ram_4ff6e148 == 0) {
      FUN_ram_4ff32c66();
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
      return 0;
    }
  }
  DAT_ram_4ff6e14c = DAT_ram_4ff6e14c + '\x01';
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
  return 1;
}



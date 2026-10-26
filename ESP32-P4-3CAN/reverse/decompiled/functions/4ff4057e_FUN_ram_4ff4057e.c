/* Firmware entry: 0x4ff4057e */

void FUN_ram_4ff4057e(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f58,0xffffffff);
  if (DAT_ram_4ff6e15c != 0) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f58);
    return;
  }
  FUN_ram_4ff3fade(&DAT_ram_4ff6c5ec);
  FUN_ram_4ff3fade(&DAT_ram_4ff6c5d8);
  DAT_ram_4ff6e164 = &DAT_ram_4ff6c5ec;
  DAT_ram_4ff6e160 = &DAT_ram_4ff6c5d8;
  DAT_ram_4ff6e15c = FUN_ram_4ff3aca6(10,0x10,&DAT_ram_4ff6c538,&DAT_ram_4ff6c4dc,0);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f58);
  return;
}



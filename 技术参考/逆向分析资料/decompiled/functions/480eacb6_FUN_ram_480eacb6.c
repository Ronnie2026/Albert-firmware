/* Firmware entry: 0x480eacb6 */

void FUN_ram_480eacb6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    FUN_ram_480eaa3a(&DAT_ram_4ff48d94,2,&DAT_ram_4ff60e20);
  }
  fence();
  DAT_ram_4ff6df34 = (byte)param_1;
  fence();
  fence();
  DAT_ram_4ff47ec4 = DAT_ram_4ff6df34 ^ 1;
  fence();
  fence();
  DAT_ram_4ff6df38 = DAT_ram_4ff6df34;
  fence();
  fence();
  DAT_ram_4ff6a639 = DAT_ram_4ff6df34;
  return;
}



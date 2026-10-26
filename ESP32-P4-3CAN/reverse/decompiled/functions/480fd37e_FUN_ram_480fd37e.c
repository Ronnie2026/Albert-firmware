/* Firmware entry: 0x480fd37e */

void FUN_ram_480fd37e(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dea8 != 0) {
    FUN_ram_4ff3b5f0(DAT_ram_4ff6dea8,0xffffffff);
    fence();
    DAT_ram_4ff6dea4 = 0;
    if (DAT_ram_4ff6df2c != (int *)0x0) {
      (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,0);
      (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
    }
    FUN_ram_480329ca();
    FUN_ram_4802ce0c(3);
    DAT_ram_4ff6dea1 = 1;
    DAT_ram_4ff6dea2 = 0;
    fence();
    DAT_ram_4ff6dea0 = 0;
    fence();
    DAT_ram_4ff6de9c = 0;
    FUN_ram_480fd2fc(0);
    FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
    return;
  }
  fence();
  DAT_ram_4ff6dea4 = 0;
  if (DAT_ram_4ff6df2c != (int *)0x0) {
    (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,0);
    (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
  }
  FUN_ram_4802ce0c(3);
  FUN_ram_480fd2fc(0);
  return;
}



/* Firmware entry: 0x4800445e */

undefined4 FUN_ram_4800445e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  iVar1 = FUN_ram_48005306(&DAT_ram_481e464c,1,param_2,4,(&DAT_ram_4ff4bd3c)[param_1 * 6],
                           (&DAT_ram_4ff4bd40)[param_1 * 6],(&DAT_ram_4ff4bd44)[param_1 * 6],
                           (&DAT_ram_4ff4bd48)[param_1 * 6]);
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  if (iVar1 != 0) {
    FUN_ram_48003ade(0xf,iVar1,param_1);
    FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
    return 0;
  }
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  FUN_ram_48003d7e(param_2);
  return 0x101;
}



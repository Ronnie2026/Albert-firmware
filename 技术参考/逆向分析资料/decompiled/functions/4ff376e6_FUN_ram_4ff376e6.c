/* Firmware entry: 0x4ff376e6 */

void FUN_ram_4ff376e6(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(&DAT_ram_4ff4bc7c + mhartid * 4) + 1;
  *(uint *)(&DAT_ram_4ff4bc7c + mhartid * 4) = uVar1;
  if (uVar1 < 3) {
    return;
  }
  FUN_ram_4ff374f4(s_Panic_handler_entered_multiple_t_ram_4ff5412c);
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff37ff2();
}



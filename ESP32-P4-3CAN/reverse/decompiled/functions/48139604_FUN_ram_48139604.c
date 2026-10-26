/* Firmware entry: 0x48139604 */

void FUN_ram_48139604(uint param_1,uint param_2)

{
  undefined *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x11 < param_1) {
    return;
  }
  if (param_2 != 0) {
    puVar1 = (&PTR_DAT_ram_482367dc_ram_48236750)[param_1];
    if ((param_2 & 3) == 0) {
      FUN_ram_4814e762();
      if (puVar1 == &DAT_ram_482367d4) {
        DAT_ram_4ff6e1a0 = DAT_ram_4ff6e1a0 + -1;
      }
      FUN_ram_4814e79e();
      FUN_ram_481393fc(param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_48139514();
  }
  return;
}



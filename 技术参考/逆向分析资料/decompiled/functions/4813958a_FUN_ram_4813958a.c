/* Firmware entry: 0x4813958a */

void FUN_ram_4813958a(undefined *param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/memp.c",0x1af,"memp_free_pool",
                     "invalid pool desc");
  }
  if (param_2 != 0) {
    if ((param_2 & 3) == 0) {
      FUN_ram_4814e762();
      if (param_1 == &DAT_ram_482367d4) {
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



/* Firmware entry: 0x4ff21a32 */

void FUN_ram_4ff21a32(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 2) {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e1c,0xffffffff);
    (&DAT_ram_4ff48148)[param_3 * 2] = param_1;
    (&DAT_ram_4ff4814c)[param_3 * 2] = param_2;
    if ((DAT_ram_4ff4814c < DAT_ram_4ff48154) ||
       ((uVar1 = DAT_ram_4ff48150, uVar2 = DAT_ram_4ff48154, DAT_ram_4ff48154 == DAT_ram_4ff4814c &&
        (DAT_ram_4ff48148 < DAT_ram_4ff48150)))) {
      uVar1 = DAT_ram_4ff48148;
      uVar2 = DAT_ram_4ff4814c;
    }
    FUN_ram_4fc0023c(&DAT_ram_4ff59fc0,2,uVar1,uVar2);
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e1c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_timer_impl_systimer.c",0x4f,"esp_timer_impl_set_alarm_id",
                   "alarm_id < sizeof(timestamp_id) / sizeof(timestamp_id[0])");
}



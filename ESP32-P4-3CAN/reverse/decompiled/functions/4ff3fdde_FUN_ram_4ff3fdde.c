/* Firmware entry: 0x4ff3fdde */

uint FUN_ram_4ff3fdde(uint *param_1,uint param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x1f0,"xEventGroupClearBits","xEventGroup");
  }
  if (param_2 < 0x1000000) {
    FUN_ram_4ff3ec14(param_1 + 8,0xffffffff);
    uVar1 = *param_1;
    *param_1 = ~param_2 & uVar1;
    FUN_ram_4ff3ee10(param_1 + 8);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("event_groups.c",0x1f1,"xEventGroupClearBits",
                   "( uxBitsToClear & 0xff000000UL ) == 0");
}



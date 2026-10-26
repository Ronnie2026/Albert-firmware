/* Firmware entry: 0x4ff40024 */

bool FUN_ram_4ff40024(int param_1,int *param_2)

{
  bool bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x2cf,"xEventGroupGetStaticBuffer","pxEventBits");
  }
  if (param_2 != (int *)0x0) {
    bVar1 = *(char *)(param_1 + 0x1c) == '\x01';
    if (bVar1) {
      *param_2 = param_1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("event_groups.c",0x2d0,"xEventGroupGetStaticBuffer","ppxEventGroupBuffer");
}



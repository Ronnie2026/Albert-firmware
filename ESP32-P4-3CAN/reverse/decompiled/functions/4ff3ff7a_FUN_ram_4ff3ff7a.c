/* Firmware entry: 0x4ff3ff7a */

void FUN_ram_4ff3ff7a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x295,"vEventGroupDelete","pxEventBits");
  }
  FUN_ram_4ff3ec14(param_1 + 0x20,0xffffffff);
  FUN_ram_4ff3e3a2();
  if (*(int *)(param_1 + 4) != 0) {
    do {
      if (*(int *)(param_1 + 0x10) == param_1 + 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("event_groups.c",0x2a7,"vEventGroupDelete",
                         "pxTasksWaitingForBits->xListEnd.pxNext != ( const ListItem_t * ) &( pxTasksWaitingForBits->xListEnd )"
                        );
      }
      FUN_ram_4ff3d3b0(*(undefined4 *)(param_1 + 0x10),0x2000000);
    } while (*(int *)(param_1 + 4) != 0);
  }
  FUN_ram_4ff3e3ac();
  FUN_ram_4ff3ee10(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
  return;
}



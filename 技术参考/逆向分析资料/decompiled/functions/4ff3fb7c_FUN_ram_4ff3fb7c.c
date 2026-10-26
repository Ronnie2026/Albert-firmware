/* Firmware entry: 0x4ff3fb7c */

/* WARNING: Removing unreachable block (ram,0x4ff3fbda) */

undefined4 * FUN_ram_4ff3fb7c(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    FUN_ram_4ff3fade(param_1 + 1);
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[9] = 0;
    param_1[8] = 0xb33fffff;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("event_groups.c",0x6d,"xEventGroupCreateStatic","pxEventGroupBuffer");
}



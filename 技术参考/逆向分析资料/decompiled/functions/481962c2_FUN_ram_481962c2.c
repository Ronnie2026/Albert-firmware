/* Firmware entry: 0x481962c2 */

void FUN_ram_481962c2(undefined4 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819c22e(param_1,0);
  if (DAT_ram_4ff6e2ec != (code *)0x0) {
    (*DAT_ram_4ff6e2ec)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4800633c(param_1);
}



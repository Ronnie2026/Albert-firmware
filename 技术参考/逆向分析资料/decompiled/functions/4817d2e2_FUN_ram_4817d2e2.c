/* Firmware entry: 0x4817d2e2 */

void FUN_ram_4817d2e2(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x184) != 0) {
      FUN_ram_48184c08();
      thunk_FUN_ram_4ff209c6(*(undefined4 *)((int)param_1 + 0x184));
    }
    memset(param_1,0,0x188);
    return;
  }
  return;
}



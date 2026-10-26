/* Firmware entry: 0x4817d2b8 */

void FUN_ram_4817d2b8(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x188);
    FUN_ram_4818681c();
    *(undefined4 *)((int)param_1 + 0x180) = 0;
    return;
  }
  return;
}



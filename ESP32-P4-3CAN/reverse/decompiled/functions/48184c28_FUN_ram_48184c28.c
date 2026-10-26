/* Firmware entry: 0x48184c28 */

void FUN_ram_48184c28(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,100);
  *(undefined4 *)((int)param_1 + 0x58) = 10000;
  return;
}



/* Firmware entry: 0x4807a816 */

void FUN_ram_4807a816(void *param_1)

{
  void *pvVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvVar1 = param_1;
  do {
    pvVar1 = memset(pvVar1,0,0x85);
    pvVar1 = (void *)((int)pvVar1 + 0x88);
  } while (pvVar1 != (void *)((int)param_1 + 0x22000));
  pvVar1 = (void *)((int)param_1 + 0x22000);
  do {
    pvVar1 = memset(pvVar1,0,0x3c);
    pvVar1 = (void *)((int)pvVar1 + 0x40);
  } while (pvVar1 != (void *)((int)param_1 + 0x22500));
  *(undefined1 *)((int)param_1 + 0x22502) = 0;
  *(undefined2 *)((int)param_1 + 0x22500) = 0;
  *(undefined4 *)((int)param_1 + 0x22508) = 1;
  *(undefined4 *)((int)param_1 + 0x2250c) = 0;
  return;
}



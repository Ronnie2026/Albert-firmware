/* Firmware entry: 0x48030e10 */

int FUN_ram_48030e10(uint param_1,int param_2,int param_3,uint param_4)

{
  void *pvVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 <= param_4) {
    return -1;
  }
  pvVar1 = memchr((void *)(param_2 + param_4),param_3,param_1 - param_4);
  if (pvVar1 != (void *)0x0) {
    return (int)pvVar1 - param_2;
  }
  return -1;
}



/* Firmware entry: 0x4ff45080 */

void * FUN_ram_4ff45080(uint param_1,uint param_2)

{
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
    __s = (void *)FUN_ram_4ff2070c(param_1 * param_2);
    if (__s != (void *)0x0) {
      memset(__s,0,param_1 * param_2);
    }
    return __s;
  }
  return (void *)0x0;
}



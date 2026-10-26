/* Firmware entry: 0x48002128 */

void * FUN_ram_48002128(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
    __s = (void *)FUN_ram_4ff20956(param_1,param_2 * param_3,param_4);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2 * param_3);
    }
    return __s;
  }
  return (void *)0x0;
}



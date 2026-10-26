/* Firmware entry: 0x481779f2 */

void * FUN_ram_481779f2(void)

{
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (void *)thunk_FUN_ram_4817b126(1,0x10);
  if (__s != (void *)0x0) {
    memset(__s,0,0x10);
  }
  return __s;
}



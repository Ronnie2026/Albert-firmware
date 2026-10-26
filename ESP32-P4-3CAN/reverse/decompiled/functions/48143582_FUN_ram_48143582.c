/* Firmware entry: 0x48143582 */

void * FUN_ram_48143582(undefined1 param_1)

{
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (void *)FUN_ram_4813956e(1);
  if (__s != (void *)0x0) {
    memset(__s,0,0x50);
    *(undefined1 *)((int)__s + 0x14) = param_1;
    *(undefined1 *)((int)__s + 0x2c) = param_1;
    *(undefined1 *)((int)__s + 0x33) = 0x40;
    *(undefined1 *)((int)__s + 0x45) = 0x40;
  }
  return __s;
}



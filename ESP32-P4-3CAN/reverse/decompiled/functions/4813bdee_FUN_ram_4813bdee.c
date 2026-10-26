/* Firmware entry: 0x4813bdee */

void * FUN_ram_4813bdee(undefined1 param_1,undefined1 param_2)

{
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (void *)FUN_ram_4813956e(0);
  if (__s != (void *)0x0) {
    memset(__s,0,0x48);
    *(undefined1 *)((int)__s + 0x38) = param_2;
    *(undefined1 *)((int)__s + 0x14) = param_1;
    *(undefined1 *)((int)__s + 0x2c) = param_1;
    *(void **)((int)__s + 0x34) = DAT_ram_4ff6e1b8;
    DAT_ram_4ff6e1b8 = __s;
    *(undefined1 *)((int)__s + 0x33) = 0x40;
    *(undefined1 *)((int)__s + 0x3b) = 0x40;
  }
  return __s;
}



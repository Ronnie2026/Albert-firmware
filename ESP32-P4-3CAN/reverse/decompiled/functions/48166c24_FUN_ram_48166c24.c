/* Firmware entry: 0x48166c24 */

void FUN_ram_48166c24(int param_1)

{
  char *__s;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x60));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x50));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 100));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x58));
  __s = *(char **)(param_1 + 0x5c);
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    memset(__s,0,__n);
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x5c));
  }
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x4c));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x48));
  memset((void *)(param_1 + 0x48),0,0x34);
  return;
}



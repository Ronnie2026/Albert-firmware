/* Firmware entry: 0x4817ff24 */

undefined4 FUN_ram_4817ff24(int *param_1,uint param_2)

{
  size_t __n;
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(ushort *)((int)param_1 + 6) == 0) {
    __s = (void *)thunk_FUN_ram_4817b126(1,4);
    if (__s == (void *)0x0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff0;
    }
    if (*param_1 != 0) {
      FUN_ram_4ff45158(__s,*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
      FUN_ram_48178b14(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *param_1 = (int)__s;
    *(undefined2 *)((int)param_1 + 6) = 1;
    __n = 4;
  }
  else {
    __s = (void *)*param_1;
    __n = (uint)*(ushort *)((int)param_1 + 6) << 2;
  }
  memset(__s,0,__n);
  *(uint *)*param_1 = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
  *(ushort *)(param_1 + 1) = (ushort)((int)param_2 >> 0x1f) | 1;
  return 0;
}



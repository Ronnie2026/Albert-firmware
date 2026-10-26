/* Firmware entry: 0x4817fd64 */

undefined4 FUN_ram_4817fd64(int *param_1,uint param_2)

{
  void *__s;
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    if (param_1 != (int *)0x0) {
      if (*param_1 != 0) {
        FUN_ram_48178b14(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
      }
      param_1[1] = 1;
      *param_1 = 0;
      return 0;
    }
  }
  else {
    uVar2 = (uint)*(ushort *)((int)param_1 + 6);
    __s = (void *)*param_1;
    if (uVar2 != param_2) {
      if (__s != (void *)0x0) {
        FUN_ram_48178b14(__s,uVar2 << 2);
      }
      param_1[1] = 1;
      *param_1 = 0;
      uVar1 = FUN_ram_4817fbba(param_1,param_2);
      return uVar1;
    }
    memset(__s,0,uVar2 << 2);
    *(undefined2 *)(param_1 + 1) = 1;
  }
  return 0;
}



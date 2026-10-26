/* Firmware entry: 0x48195562 */

int FUN_ram_48195562(int param_1)

{
  void *pvVar1;
  void *extraout_a5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvVar1 = (void *)thunk_FUN_ram_4ff2070c(param_1 + 0x60);
  if ((pvVar1 == (void *)0x0) &&
     (pvVar1 = (void *)FUN_ram_4819543a(param_1 + 0x60), pvVar1 == (void *)0x0)) {
    FUN_ram_48195958();
    pvVar1 = extraout_a5;
  }
  pvVar1 = memset(pvVar1,0,0x60);
  return (int)pvVar1 + 0x60;
}



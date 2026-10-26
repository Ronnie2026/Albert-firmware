/* Firmware entry: 0x4ff230ce */

void FUN_ram_4ff230ce(uint *param_1,int param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1 + 1 & 0x7fffffff;
  if ((*param_1 + 1 & 0x7fffffff) == 0) {
    uVar1 = 1;
  }
  fence();
  *param_1 = uVar1 | param_2 << 0x1f;
  return;
}



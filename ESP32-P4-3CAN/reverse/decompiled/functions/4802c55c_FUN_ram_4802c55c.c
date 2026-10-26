/* Firmware entry: 0x4802c55c */

void FUN_ram_4802c55c(void *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x100);
  if (param_3 != 0) {
    puVar1 = param_2 + param_3;
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = (uint *)((uVar2 >> 5) * 4 + (int)param_1);
      if (uVar2 < 0x800) {
        *puVar3 = *puVar3 | 1 << (uVar2 & 0x1f);
      }
    } while (param_2 != puVar1);
  }
  return;
}



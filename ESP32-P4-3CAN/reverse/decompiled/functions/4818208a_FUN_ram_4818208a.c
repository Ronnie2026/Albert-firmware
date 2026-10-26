/* Firmware entry: 0x4818208a */

void FUN_ram_4818208a(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != 0) {
    puVar1 = param_2 + param_4;
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      param_3 = uVar2 - param_3;
      *param_1 = param_3;
      param_3 = (uint)(uVar2 < param_3);
      param_1 = param_1 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



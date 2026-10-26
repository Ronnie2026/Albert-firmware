/* Firmware entry: 0x48171fce */

undefined4 FUN_ram_48171fce(int *param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == 0) || ((*(uint *)(*param_1 + 4) & 0xf000) != 0x2000)) {
    return 0xffff9f00;
  }
  if (param_2 == 2) {
    param_1[3] = (int)&LAB_ram_481715e6;
    param_1[4] = (int)&LAB_ram_481717a8;
    return 0;
  }
  if (2 < param_2) {
    if (param_2 == 3) {
      param_1[3] = (int)&LAB_ram_48171686;
      param_1[4] = (int)&LAB_ram_48171610;
      return 0;
    }
    if (param_2 == 4) {
      param_1[3] = 0;
      param_1[4] = (int)&LAB_ram_48171670;
      return 0;
    }
    return 0xffff9f80;
  }
  if (param_2 != 0) {
    param_1[3] = (int)&LAB_ram_48171522;
    param_1[4] = (int)&LAB_ram_4817154e;
    return 0;
  }
  param_1[3] = (int)&LAB_ram_48171500;
  param_1[4] = (int)&LAB_ram_48171696;
  return 0;
}



/* Firmware entry: 0x4819d866 */

void FUN_ram_4819d866(uint *param_1,uint *param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
    *param_1 = *param_1 | param_1[1] << ((8 - param_3) * -4 + 0x20U & 0x1f);
    param_1[1] = param_1[1] >> ((8 - param_3) * 4 & 0x1fU);
    param_1 = param_1 + 1;
  } while (param_1 < param_2);
  return;
}



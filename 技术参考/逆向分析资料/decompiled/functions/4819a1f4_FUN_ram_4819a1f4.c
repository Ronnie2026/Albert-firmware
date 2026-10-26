/* Firmware entry: 0x4819a1f4 */

void FUN_ram_4819a1f4(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x19] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  memset(param_1 + 0x17,0,8);
  param_1[9] = FUN_ram_4819ae48;
  param_1[10] = &LAB_ram_4819ae82;
  param_1[0xb] = &LAB_ram_4819aedc;
  param_1[0xc] = &LAB_ram_4819af18;
  param_1[8] = param_1;
  if (((param_1 != &DAT_ram_4ff6d654) && (param_1 != (undefined4 *)&DAT_ram_4ff6d6bc)) &&
     (param_1 != (undefined4 *)&DAT_ram_4ff6d724)) {
    return;
  }
  FUN_ram_4ff2178e(param_1 + 0x16);
  return;
}



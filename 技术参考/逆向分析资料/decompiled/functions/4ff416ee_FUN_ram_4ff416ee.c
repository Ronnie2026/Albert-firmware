/* Firmware entry: 0x4ff416ee */

bool FUN_ram_4ff416ee(undefined4 param_1,int param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 + 0xc0000000U < 0x4000000) {
    return param_3 + param_2 + 0xbfffffffU < 0x4000000;
  }
  return param_2 + 0xb8000000U < 0x4000000 && param_3 + param_2 + 0xb7ffffffU < 0x4000000;
}



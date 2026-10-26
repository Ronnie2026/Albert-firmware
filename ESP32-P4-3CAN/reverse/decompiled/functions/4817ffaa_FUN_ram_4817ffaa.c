/* Firmware entry: 0x4817ffaa */

uint FUN_ram_4817ffaa(int *param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < (uint)*(ushort *)((int)param_1 + 6) << 5) {
    return *(uint *)(*param_1 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
  }
  return 0;
}



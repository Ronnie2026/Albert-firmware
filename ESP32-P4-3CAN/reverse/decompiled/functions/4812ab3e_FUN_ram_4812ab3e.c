/* Firmware entry: 0x4812ab3e */

uint FUN_ram_4812ab3e(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x20) {
    return *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x3c) >> (param_1 & 0x1f) & 1;
  }
  return (int)(*(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x40) & 0x1ffffff) >>
         (param_1 - 0x20 & 0x1f) & 1;
}



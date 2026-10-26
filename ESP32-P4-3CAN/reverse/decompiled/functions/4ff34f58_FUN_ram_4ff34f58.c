/* Firmware entry: 0x4ff34f58 */

uint FUN_ram_4ff34f58(int *param_1)

{
  bool bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    bVar1 = DAT_ram_4ff6dad8 == 0;
    *param_1 = DAT_ram_4ff6dad8;
    return -(uint)bVar1 & 0x103;
  }
  return 0x102;
}



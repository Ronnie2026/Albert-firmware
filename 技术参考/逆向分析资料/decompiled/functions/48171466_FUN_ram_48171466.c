/* Firmware entry: 0x48171466 */

ushort FUN_ram_48171466(ushort *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return *param_1 << 8 | *param_1 >> 8;
}



/* Firmware entry: 0x4812c13a */

uint FUN_ram_4812c13a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x37) {
    return ((byte)(&DAT_ram_48235e10)[param_1] ^ 0x80) >> 7;
  }
  return 0;
}



/* Firmware entry: 0x48040ff0 */

bool FUN_ram_48040ff0(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((1 < (param_2 - 1 & 0xff)) && (param_2 != 4)) {
    return false;
  }
  fence();
  return (param_2 & *(byte *)(param_1 + 0x10)) != 0;
}



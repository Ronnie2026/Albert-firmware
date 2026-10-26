/* Firmware entry: 0x4804999a */

bool FUN_ram_4804999a(int param_1,char param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)(param_1 + 9) != '\0') && (param_3 != 0)) && (param_3 == *(int *)(param_1 + 4))) {
    return *(byte *)(param_1 + 8) <= (byte)(param_2 - 1U);
  }
  return false;
}



/* Firmware entry: 0x4804a410 */

bool FUN_ram_4804a410(int param_1,int param_2)

{
  bool bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = false;
  if ((((*(char *)(param_1 + 0x97) != '\0') && (bVar1 = false, *(char *)(param_1 + 0x98) != '\0'))
      && (bVar1 = false, 1 < *(byte *)(param_1 + 0x9a))) &&
     ((*(char *)(param_1 + 0x99) == *(char *)(param_1 + 0x9b) &&
      ((byte)(*(char *)(param_1 + 0x99) - 3U) < 4)))) {
    bVar1 = (uint)(param_2 - *(int *)(param_1 + 0x9c)) < 0x3e9;
  }
  return bVar1;
}



/* Firmware entry: 0x48031012 */

byte FUN_ram_48031012(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = 0;
  if ((((*(char *)(param_1 + 1) != '\0') && (bVar1 = 0, *(char *)(param_1 + 2) != '\0')) &&
      (bVar1 = 0, *(char *)(param_1 + 4) == '\0')) &&
     ((bVar1 = 0, *(char *)(param_1 + 5) != '\0' && (bVar1 = 0, *(char *)(param_1 + 6) == '\0')))) {
    bVar1 = (*(byte *)(param_1 + 7) ^ 1) & *(byte *)(param_1 + 8);
  }
  return bVar1;
}



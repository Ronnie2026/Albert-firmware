/* Firmware entry: 0x48159122 */

byte FUN_ram_48159122(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10) + 0xe7);
  if ((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\0')) {
    return bVar1 >> 2 & 1;
  }
  return bVar1 & 1;
}



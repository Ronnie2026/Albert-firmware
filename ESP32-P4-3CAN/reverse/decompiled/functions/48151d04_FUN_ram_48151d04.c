/* Firmware entry: 0x48151d04 */

void FUN_ram_48151d04(int param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 0xd5);
  *(char *)(param_1 + 0xd5) = cVar1 + -1;
  if (cVar1 != '\x01') {
    return;
  }
  FUN_ram_4814ced4(param_1,9);
  return;
}



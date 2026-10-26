/* Firmware entry: 0x48143346 */

void FUN_ram_48143346(int param_1,int param_2)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = '\0';
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + 0xea) + '\x01';
  }
  *(char *)(param_1 + 0x30) = cVar1;
  return;
}



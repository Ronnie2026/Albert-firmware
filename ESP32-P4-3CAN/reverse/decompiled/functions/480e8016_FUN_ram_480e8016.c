/* Firmware entry: 0x480e8016 */

void FUN_ram_480e8016(int param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  cVar1 = *(char *)(param_1 + 0xb42);
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  if (cVar1 != '\0') {
    FUN_ram_48025b94();
    FUN_ram_480e6b84(param_1 + 0x33f4);
    return;
  }
  return;
}



/* Firmware entry: 0x4ff374f4 */

void FUN_ram_4ff374f4(char *param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    FUN_ram_4ff3732e(cVar1);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *param_1;
  }
  return;
}



/* Firmware entry: 0x4819d364 */

char FUN_ram_4819d364(char param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((byte)(param_1 - 0x30U) < 10) {
    cVar1 = param_1 + -0x20;
  }
  else if ((byte)(param_1 + 0x9fU) < 6) {
    cVar1 = param_1 + -0x47;
  }
  else {
    cVar1 = '\0';
    if ((byte)(param_1 + 0xbfU) < 6) {
      cVar1 = param_1 + -0x27;
    }
  }
  return cVar1;
}



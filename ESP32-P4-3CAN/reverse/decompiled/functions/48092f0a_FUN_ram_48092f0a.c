/* Firmware entry: 0x48092f0a */

char FUN_ram_48092f0a(uint param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = '\x05';
  if (param_1 == 5) {
    return '\a';
  }
  if (param_1 < 6) {
    if (((param_1 != 3) && (cVar1 = '\x06', param_1 != 4)) && (cVar1 = '\x03', param_1 != 1)) {
      if (param_1 == 2) {
        return '\x04';
      }
      cVar1 = '\b';
    }
  }
  else {
    cVar1 = '\n';
    if ((param_1 != 7) && (cVar1 = '\r', param_1 != 8)) {
      return (param_1 == 6) + '\b';
    }
  }
  return cVar1;
}



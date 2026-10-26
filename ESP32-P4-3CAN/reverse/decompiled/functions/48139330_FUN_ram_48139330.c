/* Firmware entry: 0x48139330 */

void FUN_ram_48139330(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    if (cVar1 == ':') {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 0x14) = 6;
      }
      FUN_ram_48149140(param_1);
      return;
    }
    if (cVar1 == '.') break;
    cVar1 = *pcVar2;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  FUN_ram_481477ca(param_1);
  return;
}



/* Firmware entry: 0x4807927c */

undefined4 FUN_ram_4807927c(char *param_1,size_t param_2)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  sVar2 = strlen(param_1);
  uVar3 = 0;
  if (sVar2 == param_2) {
    if (sVar2 != 0) {
      pcVar4 = param_1 + sVar2;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
          return 0;
        }
      } while (param_1 != pcVar4);
    }
    uVar3 = 1;
  }
  return uVar3;
}



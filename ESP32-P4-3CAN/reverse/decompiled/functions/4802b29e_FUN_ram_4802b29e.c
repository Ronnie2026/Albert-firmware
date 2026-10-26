/* Firmware entry: 0x4802b29e */

uint FUN_ram_4802b29e(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *__haystack;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = param_2[0xf];
  if (cVar1 < '\0') {
    uVar4 = (byte)param_2[0xf] & 0x7f;
  }
  else {
    uVar4 = *(uint *)(param_2 + 8);
  }
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  if (param_1[0xf] < '\0') {
    uVar3 = (byte)param_1[0xf] & 0x7f;
    if ((param_1[0xf] & 0x7fU) == 0) {
      return 0xffffffff;
    }
    if (uVar3 < uVar4) {
      return 0xffffffff;
    }
    if (uVar3 <= param_3) {
      param_3 = uVar3 - 1;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 8);
    if ((uVar3 == 0) || (uVar3 < uVar4)) {
      return 0xffffffff;
    }
    if (uVar3 <= param_3) {
      param_3 = uVar3 - 1;
    }
    param_1 = *(char **)param_1;
  }
  if (param_1 + param_3 < param_1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    __haystack = param_1;
    do {
      pcVar2 = param_2;
      if (-1 < cVar1) {
        pcVar2 = *(char **)param_2;
      }
      pcVar2 = strstr(__haystack,pcVar2);
      __haystack = pcVar2 + 1;
      if (pcVar2 == (char *)0x0) {
        return uVar4;
      }
      if ((uint)((int)pcVar2 - (int)param_1) <= param_3) {
        uVar4 = (int)pcVar2 - (int)param_1;
      }
    } while (__haystack <= param_1 + param_3);
  }
  return uVar4;
}



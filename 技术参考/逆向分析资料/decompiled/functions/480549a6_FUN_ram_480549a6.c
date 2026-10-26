/* Firmware entry: 0x480549a6 */

char FUN_ram_480549a6(int param_1,undefined1 param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xc3) != '\0') {
    if (param_4 == 4) {
      cVar1 = *(char *)(param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 8);
    }
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      return '\0';
    }
    if (*(char *)(param_1 + 0xac) != '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 8;
      return '\0';
    }
    if ((*(int *)(param_1 + 0x14) != 0) && ((uint)(param_5 - *(int *)(param_1 + 0x14)) < 0x2ef)) {
      if (*(char *)(param_1 + 0x48) == '\0') {
        *(undefined1 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined1 *)(param_1 + 0x57) = 0;
        *(undefined1 *)(param_1 + 0x5d) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined2 *)(param_1 + 0x48) = 1;
      }
      else {
        if (param_3 <= *(byte *)(param_1 + 0x4c)) {
          *(undefined1 *)(param_1 + 0x4e) = 4;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return '\0';
        }
        *(undefined1 *)(param_1 + 0x49) = 0;
      }
      *(undefined1 *)(param_1 + 0x4b) = param_2;
      *(char *)(param_1 + 0x4c) = (char)param_3;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      *(char *)(param_1 + 0x4d) = (char)param_4;
      *(undefined1 *)(param_1 + 0x4e) = 0;
      if (param_4 == 1) {
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        return cVar1;
      }
      if (param_4 == 2) {
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
        return cVar1;
      }
      if (param_4 != 3) {
        return cVar1;
      }
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      return cVar1;
    }
    *(undefined1 *)(param_1 + 0x4e) = 3;
  }
  return '\0';
}



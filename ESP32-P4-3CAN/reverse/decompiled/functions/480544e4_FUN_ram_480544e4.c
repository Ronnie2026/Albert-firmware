/* Firmware entry: 0x480544e4 */

void FUN_ram_480544e4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x4d) == '\x04') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (*(char *)(param_1 + 0x4a) != '\0') {
        *(undefined1 *)(param_1 + 0x49) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x49) = 1;
      if ((*(char *)(param_1 + 0x4a) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined1 *)(param_1 + 0xc0) = 0;
        *(undefined1 *)(param_1 + 0x5d) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined1 *)(param_1 + 0x5f) = 0;
        *(undefined1 *)(param_1 + 0x6c) = 0;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0x148);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  if ((bVar1 & 0xfb) == 0) {
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    return;
  }
  if (bVar1 == 6) {
    if ((*(char *)(param_1 + 0x155) == '\0') && (*(char *)(param_1 + 0x156) == '\0')) {
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      return;
    }
    iVar2 = param_2;
    if (param_2 == 0) {
      iVar2 = 1;
    }
    if (2 < *(byte *)(param_1 + 0x158)) {
      *(undefined1 *)(param_1 + 0x157) = 0;
      *(int *)(param_1 + 0x14c) = iVar2;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      *(undefined1 *)(param_1 + 0x148) = 6;
      return;
    }
    if ((*(int *)(param_1 + 0x160) != 0) && (param_2 - *(int *)(param_1 + 0x160) < 0x259)) {
      *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) + 1;
      *(undefined1 *)(param_1 + 0x157) = 0;
      *(undefined1 *)(param_1 + 0x1a4) = 0;
      *(int *)(param_1 + 0x14c) = iVar2;
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
      *(undefined1 *)(param_1 + 0x154) = 4;
      *(undefined1 *)(param_1 + 0x148) = 3;
      return;
    }
    *(int *)(param_1 + 0x14c) = iVar2;
    *(undefined1 *)(param_1 + 0x157) = 1;
    *(undefined1 *)(param_1 + 0x148) = 6;
    return;
  }
  if ((*(char *)(param_1 + 0x155) == '\0') && (*(char *)(param_1 + 0x156) == '\0')) {
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined1 *)(param_1 + 0x154) = 0;
    return;
  }
  if (((param_3 != 0) && (param_2 != 0)) && (bVar1 == 1)) {
    *(int *)(param_1 + 0x14c) = param_2;
    *(int *)(param_1 + 0x15c) = param_2 + 300;
    *(undefined1 *)(param_1 + 0x148) = 5;
    return;
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = 1;
  }
  if ((*(int *)(param_1 + 0x160) != 0) && (param_2 - *(int *)(param_1 + 0x160) < 0x259)) {
    *(int *)(param_1 + 0x14c) = iVar2;
    *(undefined1 *)(param_1 + 0x148) = 3;
    *(undefined1 *)(param_1 + 0x154) = 4;
    return;
  }
  *(int *)(param_1 + 0x14c) = iVar2;
  *(undefined1 *)(param_1 + 0x157) = 1;
  *(undefined1 *)(param_1 + 0x148) = 6;
  return;
}



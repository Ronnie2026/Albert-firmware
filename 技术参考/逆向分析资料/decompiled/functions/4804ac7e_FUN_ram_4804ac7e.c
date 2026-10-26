/* Firmware entry: 0x4804ac7e */

void FUN_ram_4804ac7e(int param_1,undefined4 param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0xa0) == '\x04') && (*(char *)(param_1 + 0xae) != '\0')) {
    if (param_3 != 0) {
      *(char *)(param_1 + 0xa3) = (char)param_3;
      return;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xae) = 1;
  if ((*(int *)(param_1 + 300) != 0) && (*(char *)(param_1 + 0x135) == '\0')) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  if ((*(char *)(param_1 + 0x128) != '\0') && (*(char *)(param_1 + 0x106) == '\0')) {
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  FUN_ram_4804a9c8();
  return;
}



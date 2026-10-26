/* Firmware entry: 0x4804b4a4 */

void FUN_ram_4804b4a4(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x128) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  *(undefined1 *)(param_1 + 0xa3) = 5;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (*(char *)(param_1 + 0x106) == '\0') {
    if ((1 < (byte)(*(char *)(param_1 + 0x107) - 2U)) && (*(char *)(param_1 + 0x107) != '\x05')) {
      FUN_ram_4804a9c8();
      return;
    }
    *(int *)(param_1 + 0xe8) = param_2 + 5;
    *(undefined1 *)(param_1 + 0xe5) = 1;
    return;
  }
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x150) == 0)) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 5;
  *(undefined1 *)(param_1 + 0xa2) = 10;
  return;
}



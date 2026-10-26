/* Firmware entry: 0x4804cd2c */

void FUN_ram_4804cd2c(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb2) = 0;
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined2 *)(param_1 + 100) = 1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_ram_4804cb48();
      return;
    }
    *(undefined4 *)(param_1 + 0x70) = param_2;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x56) = 0x70b;
  }
  return;
}



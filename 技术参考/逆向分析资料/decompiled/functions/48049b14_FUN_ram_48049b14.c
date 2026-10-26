/* Firmware entry: 0x48049b14 */

void FUN_ram_48049b14(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1 + 0x50);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 0x52);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 0x54);
  *(char *)(param_1 + 10) = *(char *)(param_1 + 0x56);
  if ((*(char *)(param_1 + 0x5c) == '\0') || (*(char *)(param_1 + 0x55) != '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    if (*(char *)(param_1 + 0x56) == '\0') {
      bVar1 = (*(byte *)(param_1 + 0x52) | *(byte *)(param_1 + 0x53)) ^ 1;
    }
  }
  *(byte *)(param_1 + 0xc) = bVar1;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x84);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0x5a);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x8e);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x90);
  return;
}



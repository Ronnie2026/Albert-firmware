/* Firmware entry: 0x48143474 */

void FUN_ram_48143474(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  
  cVar6 = DAT_ram_482366e8;
  uVar1 = DAT_ram_482366d4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x14) == '.') {
      *(char *)(param_1 + 0x2c) = DAT_ram_482366e8;
      uVar5 = DAT_ram_482366e4;
      uVar4 = DAT_ram_482366e0;
      uVar3 = DAT_ram_482366dc;
      uVar2 = DAT_ram_482366d8;
      if (cVar6 == '\x06') {
        *(undefined4 *)(param_1 + 0x18) = uVar1;
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        *(undefined4 *)(param_1 + 0x24) = uVar4;
        *(undefined1 *)(param_1 + 0x28) = uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = uVar1;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(char *)(param_1 + 0x2c) == '\x06') {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 6;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
    }
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  }
  return;
}



/* Firmware entry: 0x4813a0f4 */

void FUN_ram_4813a0f4(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 auStack_1c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xe7) & 4) != 0) {
    *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) & 0xfb;
    FUN_ram_4814e9d4();
    puVar1 = DAT_ram_4ff6e1b0;
    auStack_1c[0] = 0;
    *(undefined2 *)(param_1 + 0xde) = *(undefined2 *)(param_1 + 0xdc);
    while (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      (*pcVar2)(param_1,4,auStack_1c);
    }
    return;
  }
  return;
}



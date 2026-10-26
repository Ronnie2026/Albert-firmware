/* Firmware entry: 0x48139d84 */

void FUN_ram_48139d84(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 auStack_1c [16];
  
  puVar1 = DAT_ram_4ff6e1b0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xe7) & 1) != 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0xe7) | 1;
  *(byte *)(param_1 + 0xe7) = bVar2;
  auStack_1c[0] = 1;
  if (puVar1 != (undefined4 *)0x0) {
    do {
      pcVar3 = (code *)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      (*pcVar3)(param_1,8,auStack_1c);
    } while (puVar1 != (undefined4 *)0x0);
    bVar2 = *(byte *)(param_1 + 0xe7);
  }
  if ((bVar2 & 5) == 5) {
    if ((*(int *)(param_1 + 4) != 0) && ((bVar2 & 0x20) != 0)) {
      FUN_ram_48146b40(param_1);
    }
    FUN_ram_48149bb6(param_1);
  }
  FUN_ram_4814c8e2(param_1);
  return;
}



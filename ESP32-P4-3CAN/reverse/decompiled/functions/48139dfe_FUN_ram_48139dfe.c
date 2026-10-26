/* Firmware entry: 0x48139dfe */

void FUN_ram_48139dfe(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined1 auStack_1c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xe7);
  if ((bVar1 & 1) == 0) {
    return;
  }
  auStack_1c[0] = 0;
  puVar2 = DAT_ram_4ff6e1b0;
  if (DAT_ram_4ff6e1b0 != (undefined4 *)0x0) {
    do {
      pcVar3 = (code *)*puVar2;
      puVar2 = (undefined4 *)puVar2[1];
      (*pcVar3)(param_1,8,auStack_1c);
    } while (puVar2 != (undefined4 *)0x0);
    bVar1 = *(byte *)(param_1 + 0xe7);
  }
  *(byte *)(param_1 + 0xe7) = bVar1 & 0xfe;
  if ((bVar1 & 8) != 0) {
    FUN_ram_48145f5e(param_1);
  }
  FUN_ram_4814c77c(param_1);
  return;
}



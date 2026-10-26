/* Firmware entry: 0x480eaa3a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_480eaa3a(int param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_14c [308];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  _DAT_ram_4ff4b934 = _DAT_ram_4ff4b934 & 0xff;
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  fence();
  *(undefined1 *)(param_1 + 0x1299) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_48047848(*(int *)(param_1 + 8) + 0x2878);
  }
  if ((byte)(*(char *)(param_1 + 0x128c) - 3U) < 2) {
    *(undefined1 *)(param_1 + 0x128c) = 4;
    if (*(byte *)(param_1 + 0x1298) != 0) {
      puVar4 = (undefined1 *)(param_1 + 0x721);
      bVar2 = false;
      puVar3 = puVar4 + (uint)*(byte *)(param_1 + 0x1298) * 0xf4;
      do {
        piVar1 = (int *)(puVar4 + 0x7f);
        puVar4[0xe7] = 0;
        *puVar4 = 5;
        puVar4 = puVar4 + 0xf4;
        bVar2 = (bool)(bVar2 | *piVar1 != 0);
      } while (puVar4 != puVar3);
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x128d) = param_2;
        goto LAB_ram_480eaafe;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x128d) = param_2;
  *(undefined1 *)(param_1 + 0x128c) = 0;
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
  _DAT_ram_4ff4b934 = 0;
  fence();
  DAT_ram_4ff4b8d1 = 0xff;
  fence();
  DAT_ram_4ff4b8d0 = 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
LAB_ram_480eaafe:
  FUN_ram_4ff3ee10(param_1);
  memset(auStack_14c,0,300);
  FUN_ram_480ea70a(param_3,auStack_14c,0,0);
  return;
}



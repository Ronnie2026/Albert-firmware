/* Firmware entry: 0x48042e98 */

void FUN_ram_48042e98(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  bool bVar6;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = (undefined1 *)(param_1 + 0x90);
  for (puVar5 = (undefined1 *)(param_1 + 0x70); puVar5 != puVar8; puVar5 = puVar5 + 8) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
  }
  do {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8 = puVar8 + 8;
  } while (puVar8 != (undefined1 *)(param_1 + 0xb0));
  cVar7 = *(char *)(param_1 + 0x47);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  *(char *)(param_1 + 0xb5) = cVar7;
  iVar9 = *(int *)(param_1 + 0xd8) + 1;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  *(int *)(param_1 + 0xd8) = iVar9;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (((((*(char *)(param_1 + 0x1dd) == '\0') && (*(char *)(param_1 + 0x1de) == cVar7)) &&
       (*(char *)(param_1 + 0x1df) == '\0')) &&
      ((*(char *)(param_1 + 0x1e0) == *(char *)(param_1 + 0xb8) &&
       (*(int *)(param_1 + 0x1e4) == *(int *)(param_1 + 0xdc))))) &&
     ((*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0xe0) &&
      (*(int *)(param_1 + 0x1ec) == *(int *)(param_1 + 0xe4))))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1dd) = 0;
  *(char *)(param_1 + 0x1de) = cVar7;
  *(undefined1 *)(param_1 + 0x1df) = 0;
  *(char *)(param_1 + 0x1e0) = *(char *)(param_1 + 0xb8);
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0xe4);
  if (*(char *)(param_1 + 0x17d) == '\0') {
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    bVar6 = false;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    iVar9 = param_1;
    do {
      iVar3 = iVar9 + 5;
      bVar4 = *(byte *)(param_1 + 0x140) >> (uVar10 & 0x1f) & 1;
      do {
        pcVar1 = (char *)(iVar9 + 0x15f);
        pcVar2 = (char *)(iVar9 + 0x141);
        iVar9 = iVar9 + 1;
        bVar4 = bVar4 & *pcVar1 == *pcVar2;
      } while (iVar9 != iVar3);
      if (bVar4 == 0) {
        uVar11 = uVar11 | 1 << (uVar10 & 0x1f) & 0xffU;
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar3;
    } while (uVar10 != 6);
    *(char *)(param_1 + 0x1dc) = (char)uVar11;
    bVar6 = 0xb < *(byte *)(param_1 + 0x19c) && uVar11 != 0;
  }
  *(bool *)(param_1 + 0x1f5) = bVar6;
  if (*(char *)(param_1 + 0x19f) == '\0') {
    cVar7 = *(char *)(param_1 + 0x2e8);
    *(undefined1 *)(param_1 + 0x1f1) = *(undefined1 *)(param_1 + 0x1a2);
    *(undefined1 *)(param_1 + 499) = *(undefined1 *)(param_1 + 0x37c);
    *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_1 + 0x1a1);
  }
  else {
    cVar7 = *(char *)(param_1 + 0x2e8);
    *(char *)(param_1 + 0x1f1) = *(char *)(param_1 + 0x19f);
    *(undefined1 *)(param_1 + 499) = *(undefined1 *)(param_1 + 0x37c);
    *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_1 + 0x1a1);
  }
  if ((cVar7 != '\0') && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x31c))) {
    cVar7 = *(int *)(param_1 + 0x194) == *(int *)(param_1 + 0x31c);
  }
  *(char *)(param_1 + 0x1f2) = cVar7;
  iVar9 = *(int *)(param_1 + 0x1a4) + 1;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  *(int *)(param_1 + 0x1a4) = iVar9;
  return;
}



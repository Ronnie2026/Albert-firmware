/* Firmware entry: 0x480439fa */

void FUN_ram_480439fa(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x17d) == '\0') {
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    bVar8 = false;
  }
  else {
    uVar9 = 0;
    uVar10 = 0;
    iVar7 = param_1;
    do {
      iVar3 = iVar7 + 5;
      bVar4 = *(byte *)(param_1 + 0x140) >> (uVar9 & 0x1f) & 1;
      do {
        pcVar1 = (char *)(iVar7 + 0x15f);
        pcVar2 = (char *)(iVar7 + 0x141);
        iVar7 = iVar7 + 1;
        bVar4 = bVar4 & *pcVar1 == *pcVar2;
      } while (iVar3 != iVar7);
      if (bVar4 == 0) {
        uVar10 = uVar10 | 1 << (uVar9 & 0x1f) & 0xffU;
      }
      uVar9 = uVar9 + 1;
      iVar7 = iVar3;
    } while (uVar9 != 6);
    *(char *)(param_1 + 0x1dc) = (char)uVar10;
    bVar8 = 0xb < *(byte *)(param_1 + 0x19c) && uVar10 != 0;
  }
  cVar5 = *(char *)(param_1 + 0x19f);
  *(bool *)(param_1 + 0x1f5) = bVar8;
  if (cVar5 == '\0') {
    cVar5 = *(char *)(param_1 + 0x1a2);
  }
  cVar6 = *(char *)(param_1 + 0x2e8);
  *(char *)(param_1 + 0x1f1) = cVar5;
  *(undefined1 *)(param_1 + 499) = *(undefined1 *)(param_1 + 0x37c);
  *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_1 + 0x1a1);
  if ((cVar6 != '\0') && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x31c))) {
    cVar6 = *(int *)(param_1 + 0x194) == *(int *)(param_1 + 0x31c);
  }
  *(char *)(param_1 + 0x1f2) = cVar6;
  iVar7 = *(int *)(param_1 + 0x1a4) + 1;
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  *(int *)(param_1 + 0x1a4) = iVar7;
  return;
}



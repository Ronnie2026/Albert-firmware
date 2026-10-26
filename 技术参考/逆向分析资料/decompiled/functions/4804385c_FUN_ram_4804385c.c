/* Firmware entry: 0x4804385c */

void FUN_ram_4804385c(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 800) != param_2) {
    *(int *)(param_1 + 800) = param_2;
    *(undefined1 *)(param_1 + 0x132) = 0;
    *(undefined2 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    puVar3 = (undefined1 *)(param_1 + 0x90);
    for (puVar2 = (undefined1 *)(param_1 + 0x70); puVar2 != puVar3; puVar2 = puVar2 + 8) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
    }
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 8;
    } while (puVar3 != (undefined1 *)(param_1 + 0xb0));
    cVar1 = *(char *)(param_1 + 0x47);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(undefined2 *)(param_1 + 0xb6) = 0;
    *(char *)(param_1 + 0xb5) = cVar1;
    iVar4 = *(int *)(param_1 + 0xd8) + 1;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0xd8) = iVar4;
    *(undefined1 *)(param_1 + 0x110) = 0;
    iVar4 = *(int *)(param_1 + 0x1a4) + 1;
    if ((((*(char *)(param_1 + 0x1dd) != '\0') || (*(char *)(param_1 + 0x1de) != cVar1)) ||
        (*(char *)(param_1 + 0x1df) != '\0')) ||
       (((*(char *)(param_1 + 0x1e0) != *(char *)(param_1 + 0xb8) ||
         (*(int *)(param_1 + 0x1e4) != *(int *)(param_1 + 0xdc))) ||
        ((*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0xe0) ||
         (*(int *)(param_1 + 0x1ec) != *(int *)(param_1 + 0xe4))))))) {
      *(undefined1 *)(param_1 + 0x1dd) = 0;
      *(char *)(param_1 + 0x1de) = cVar1;
      *(undefined1 *)(param_1 + 0x1df) = 0;
      *(char *)(param_1 + 0x1e0) = *(char *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0xdc);
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0xe4);
      if (iVar4 == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x1a4) + 2;
      }
    }
    *(undefined1 *)(param_1 + 0x13f) = 0;
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined1 *)(param_1 + 0x17d) = 0;
    *(undefined1 *)(param_1 + 0x17f) = 0;
    *(undefined1 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    iVar5 = *(int *)(param_1 + 0x31c) + 1;
    *(undefined4 *)(param_1 + 0x2f0) = 8;
    *(undefined4 *)(param_1 + 0x304) = 0x10000;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    cVar1 = *(char *)(param_1 + 0x19f);
    *(int *)(param_1 + 0x31c) = iVar5;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined1 *)(param_1 + 0x1f5) = 0;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x1a2);
    }
    *(char *)(param_1 + 0x1f1) = cVar1;
    *(undefined1 *)(param_1 + 0x1f2) = 0;
    *(undefined1 *)(param_1 + 499) = *(undefined1 *)(param_1 + 0x37c);
    *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_1 + 0x1a1);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 1;
      return;
    }
    *(int *)(param_1 + 0x1a4) = iVar4;
  }
  return;
}



/* Firmware entry: 0x48107fd2 */

void FUN_ram_48107fd2(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cStack_25;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xaa4) == '\0') {
    if (*(char *)(param_1 + 0xabc) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xabd) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xabf) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xabe) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xac0) != '\0') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xaf4);
    if (*(char *)(param_1 + 0xac1) != cVar1) {
      return;
    }
    if (*(char *)(param_2 + 0x72) == '\0') {
      if (*(char *)(param_1 + 0x924) == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0xae9) == '\0') {
        return;
      }
      if ((*(byte *)(param_2 + 0x7a) != 0) &&
         (*(byte *)(param_2 + 0x7a) <= *(byte *)(param_1 + 0x925))) {
        return;
      }
      if (*(char *)(param_2 + 0x71) == '\0') {
        return;
      }
      if (*(char *)(param_2 + 0x73) == '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0xba4);
    }
    else {
      if (*(char *)(param_2 + 0x71) == '\0') {
        return;
      }
      cVar2 = *(char *)(param_2 + 0x73);
    }
    if (cVar2 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xb36) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xaec) != '\0') {
      return;
    }
    if (param_3 - *(int *)(param_1 + 0xb6c) < 0) {
      return;
    }
    if (*(int *)(param_1 + 0xaf8) == 0) {
      return;
    }
    if (300 < (uint)(param_3 - *(int *)(param_1 + 0xaf8))) {
      return;
    }
    if (*(char *)(param_1 + 0x911) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x90f) == '\0') {
      return;
    }
    if (300 < (uint)(param_3 - *(int *)(param_1 + 0x908))) {
      return;
    }
    if (cVar1 == '\x01') {
      if (*(char *)(param_2 + 0x74) == '\0') {
        return;
      }
    }
    else if ((cVar1 - 2U & 0xfd) != 0) {
      return;
    }
    cStack_25 = '\0';
    auStack_24[0] = 0x80000000;
    iVar3 = FUN_ram_48052348(param_1 + 0xa8c,param_1 + 0xa98,param_3,auStack_24,&cStack_25);
    if (iVar3 == 0) {
      return;
    }
    if (cStack_25 != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xaa6) = 0;
    *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
    *(undefined1 *)(param_1 + 0xab4) = 0;
    uVar6 = 2;
    if (cVar1 == '\x01') {
      uVar6 = 1;
    }
    *(char *)(param_1 + 0xaa8) = cVar1;
    *(undefined1 *)(param_1 + 0xaa7) = uVar6;
    *(int *)(param_1 + 0xab8) = param_3;
    *(undefined **)(param_1 + 0xaa4) = &sedeleg;
    *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_1 + 0xac4);
    return;
  }
  if (((((*(char *)(param_2 + 0x71) == '\0') || (*(char *)(param_2 + 0x73) == '\0')) ||
       ((*(char *)(param_1 + 0xaa7) == '\x01' && (*(char *)(param_2 + 0x74) == '\0')))) ||
      ((bVar5 = *(byte *)(param_2 + 0x72) ^ 1, bVar5 != 0 &&
       (((*(char *)(param_1 + 0x924) == '\0' || (*(char *)(param_1 + 0xae9) == '\0')) ||
        ((*(byte *)(param_2 + 0x7a) != 0 &&
         (*(byte *)(param_2 + 0x7a) <= *(byte *)(param_1 + 0x925))))))))) ||
     ((((((*(char *)(param_1 + 0xabc) == '\0' || (*(char *)(param_1 + 0xabd) == '\0')) ||
         (*(char *)(param_1 + 0xabf) == '\0')) ||
        ((*(char *)(param_1 + 0xabe) != '\0' || (*(char *)(param_1 + 0xac0) != '\0')))) ||
       (cVar1 = *(char *)(param_1 + 0xaf4), *(char *)(param_1 + 0xac1) != cVar1)) ||
      (((*(char *)(param_1 + 0x911) == '\0' || (*(char *)(param_1 + 0x90f) == '\0')) ||
       ((300 < (uint)(param_3 - *(int *)(param_1 + 0x908)) ||
        ((*(int *)(param_1 + 0xaf8) == 0 || (300 < (uint)(param_3 - *(int *)(param_1 + 0xaf8))))))))
      )))) {
LAB_ram_48108092:
    *(undefined4 *)(param_1 + 0xaa4) = 0;
    *(undefined1 *)(param_1 + 0xaa8) = 0;
    *(undefined1 *)(param_1 + 0xab4) = 0;
    *(undefined4 *)(param_1 + 0xab8) = 0;
    *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
    *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
    return;
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x74) == '\0') goto LAB_ram_48108092;
  }
  else if ((cVar1 - 2U & 0xfd) != 0) goto LAB_ram_48108092;
  if ((bVar5 != 0) && (*(char *)(param_1 + 0xba4) == '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0xb36) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xaec) != '\0') {
    return;
  }
  if (param_3 - *(int *)(param_1 + 0xb6c) < 0) {
    return;
  }
  cStack_25 = '\0';
  auStack_24[0] = 0x80000000;
  iVar3 = FUN_ram_48052348(param_1 + 0xa8c,param_1 + 0xa98,param_3,auStack_24,&cStack_25);
  if ((iVar3 == 0) || (cStack_25 != '\0')) goto LAB_ram_48108092;
  iVar3 = FUN_ram_480523e8(param_1 + 0xaa4,1,cVar1,1,auStack_24[0],*(undefined2 *)(param_2 + 0x82),
                           *(undefined2 *)(param_2 + 0x84),param_3);
  if (iVar3 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xabd) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
  *(undefined1 *)(param_1 + 0xae9) = 0;
  *(char *)(param_1 + 0xb8c) = (iVar3 != 1) + '\x06';
  *(int *)(param_1 + 0xb90) = *(int *)(param_1 + 0xb90) + 1;
  *(undefined2 *)(param_1 + 0xabe) = 1;
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x74) == '\0') {
      *(undefined1 *)(param_1 + 0xb94) = 0;
      return;
    }
    if (iVar3 != 1) {
      *(undefined1 *)(param_1 + 0xb94) = 2;
      goto LAB_ram_481082b0;
    }
    *(undefined1 *)(param_1 + 0xb94) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xb94) = 4;
    if (cVar1 == '\x04') {
LAB_ram_481082b0:
      uVar4 = 2;
      goto LAB_ram_48108252;
    }
  }
  uVar4 = 4;
LAB_ram_48108252:
  iVar3 = *(int *)(param_1 + 0xb88) + 1;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xb88) = iVar3;
  FUN_ram_48105658(param_1,uVar4,param_3,1);
  return;
}



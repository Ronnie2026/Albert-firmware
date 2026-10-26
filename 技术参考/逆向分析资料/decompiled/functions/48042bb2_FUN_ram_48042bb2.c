/* Firmware entry: 0x48042bb2 */

void FUN_ram_48042bb2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xf) == '\0') {
    return;
  }
  piVar1 = (int *)(param_1 + 0x38);
  piVar9 = (int *)(param_1 + 0x58);
  if ((*(int *)(param_1 + 0x78) != 0) && (piVar8 = piVar1, param_4 != *(int *)(param_1 + 0x78))) {
    for (; piVar8 != piVar9; piVar8 = piVar8 + 2) {
      *(undefined1 *)piVar8 = 0;
      *(undefined1 *)((int)piVar8 + 1) = 0;
      *(undefined1 *)((int)piVar8 + 2) = 0;
      *(undefined1 *)((int)piVar8 + 3) = 0;
      *(undefined1 *)(piVar8 + 1) = 0;
      *(undefined1 *)((int)piVar8 + 5) = 0;
      *(undefined1 *)((int)piVar8 + 6) = 0;
    }
    piVar8 = piVar9;
    do {
      *(undefined1 *)piVar8 = 0;
      *(undefined1 *)((int)piVar8 + 1) = 0;
      *(undefined1 *)((int)piVar8 + 2) = 0;
      *(undefined1 *)((int)piVar8 + 3) = 0;
      *(undefined1 *)(piVar8 + 1) = 0;
      *(undefined1 *)((int)piVar8 + 5) = 0;
      *(undefined1 *)((int)piVar8 + 6) = 0;
      piVar8 = piVar8 + 2;
    } while (piVar8 != (int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x7e) = 0;
    *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_1 + 0xf);
    iVar7 = *(int *)(param_1 + 0xa0) + 1;
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0xa0) = iVar7;
  }
  uVar4 = FUN_ram_480422d8(piVar1,param_2,param_3);
  if ((uVar4 >> 0x10 & (uint)*(byte *)(param_1 + 0x7e)) != 0) {
    do {
      *(undefined1 *)piVar1 = 0;
      *(undefined1 *)((int)piVar1 + 1) = 0;
      *(undefined1 *)((int)piVar1 + 2) = 0;
      *(undefined1 *)((int)piVar1 + 3) = 0;
      *(undefined1 *)(piVar1 + 1) = 0;
      *(undefined1 *)((int)piVar1 + 5) = 0;
      *(undefined1 *)((int)piVar1 + 6) = 0;
      piVar1 = piVar1 + 2;
    } while (piVar9 != piVar1);
    piVar1 = piVar9;
    do {
      *(undefined1 *)piVar1 = 0;
      *(undefined1 *)((int)piVar1 + 1) = 0;
      *(undefined1 *)((int)piVar1 + 2) = 0;
      *(undefined1 *)((int)piVar1 + 3) = 0;
      *(undefined1 *)(piVar1 + 1) = 0;
      *(undefined1 *)((int)piVar1 + 5) = 0;
      *(undefined1 *)((int)piVar1 + 6) = 0;
      piVar1 = piVar1 + 2;
    } while (piVar1 != (int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(byte *)(param_1 + 0x7d) = (-(*(char *)(param_1 + 0xf) == '\0') & 0xfbU) + 5;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x7e) = 0;
    iVar7 = *(int *)(param_1 + 0xa0) + 1;
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0xa0) = iVar7;
  }
  pcVar5 = (char *)(param_1 + 0x18);
  uVar6 = 0;
  uVar2 = 0;
  do {
    if (((((byte)uVar4 >> (uVar6 & 0x1f) & 1) != 0) &&
        ((*(byte *)(param_1 + 0x14) >> (uVar6 & 0x1f) & 1) != 0)) && (*pcVar5 != '\0')) {
      if ((*(char *)(param_1 + 0x11) == '\0') &&
         (((*(char *)((int)piVar9 + 5) == '\0' || (*(char *)((int)piVar9 + 6) == '\0')) ||
          (500 < (uint)(param_3 - *piVar9))))) {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          *(undefined1 *)(param_1 + 0x7d) = 2;
        }
      }
      else {
        uVar2 = 1 << (uVar6 & 0x1f) & 0xffU | uVar2;
      }
    }
    uVar6 = uVar6 + 1;
    piVar9 = piVar9 + 2;
    pcVar5 = pcVar5 + 5;
  } while (uVar6 != 4);
  if (uVar2 == 0) {
    uVar10 = (uint)*(byte *)(param_1 + 0x7f);
    goto LAB_ram_48042c66;
  }
  uVar6 = uVar2 & 1;
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    uVar10 = uVar2 | *(byte *)(param_1 + 0x7f);
    uVar2 = uVar2 | *(byte *)(param_1 + 0x7e);
    if ((uVar6 != 0) && ((uint)(param_3 - *(int *)(param_1 + 0x88)) < 0xc9)) goto LAB_ram_48042e6a;
  }
  else {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined2 *)(param_1 + 0x7e) = 0;
    uVar3 = __ctzsi2(uVar2);
    *(int *)(param_1 + 0x88) = param_3;
    *(undefined1 *)(param_1 + 0x80) = uVar3;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    uVar10 = uVar2;
    if (uVar6 != 0) {
LAB_ram_48042e6a:
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  *(char *)(param_1 + 0x7e) = (char)uVar2;
  *(char *)(param_1 + 0x7f) = (char)uVar10;
  iVar7 = *(int *)(param_1 + 0xa0) + 1;
  *(undefined1 *)(param_1 + 0x7d) = 3;
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
  }
  else {
    *(int *)(param_1 + 0xa0) = iVar7;
  }
LAB_ram_48042c66:
  uVar4 = uVar10 & uVar4 >> 8 & 0xff;
  if (uVar4 != 0) {
    if (uVar4 == uVar10) {
      uVar2 = 0;
      do {
        uVar3 = FUN_ram_48042696(param_1,uVar2 & 0xff,param_3);
        *(undefined1 *)(param_1 + uVar2 + 0x81) = uVar3;
        uVar2 = uVar2 + 1;
      } while (uVar2 != 4);
    }
    piVar1 = (int *)(param_1 + 0x90);
    uVar2 = 0;
    do {
      uVar6 = uVar2 & 0x1f;
      uVar2 = uVar2 + 1;
      if ((uVar4 >> uVar6 & 1) != 0) {
        *piVar1 = param_3;
      }
      piVar1 = piVar1 + 1;
    } while (uVar2 != 4);
    *(char *)(param_1 + 0x7f) = (char)(uVar10 & ~uVar4);
    iVar7 = *(int *)(param_1 + 0xa0) + 1;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 1;
    }
    else {
      *(int *)(param_1 + 0xa0) = iVar7;
    }
    if ((uVar10 & ~uVar4) == 0) {
      *(int *)(param_1 + 0x8c) = param_3;
      *(undefined2 *)(param_1 + 0x7c) = 0x402;
    }
  }
  return;
}



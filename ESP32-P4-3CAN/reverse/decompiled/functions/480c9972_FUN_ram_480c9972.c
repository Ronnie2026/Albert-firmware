/* Firmware entry: 0x480c9972 */

void FUN_ram_480c9972(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = param_2[1];
  cVar2 = param_3[1];
  bVar4 = true;
  if ((((cVar1 == cVar2) &&
       (((*(uint *)(param_2 + 0x9c) ^ *(uint *)(param_3 + 0x9c)) & 0xffff) == 0)) &&
      (*(short *)(param_2 + 0xa2) == *(short *)(param_3 + 0xa2))) &&
     ((param_2[0x10] == param_3[0x10] && (param_2[0xf] == param_3[0xf])))) {
    if (cVar1 == '\f') {
      iVar9 = 0x34;
      do {
        iVar10 = FUN_ram_4ff4511a(param_2 + iVar9,param_3 + iVar9,0xe);
        iVar9 = iVar9 + 0xe;
        if (iVar10 != 0) {
          bVar4 = true;
          goto LAB_ram_480c9e50;
        }
      } while (iVar9 != 0x5e);
      bVar4 = false;
LAB_ram_480c9e50:
      if ((((*(uint *)(param_2 + 0x10) ^ *(uint *)(param_3 + 0x10)) & 0xffffff) >> 8 == 0) &&
         (param_2[0x13] == param_3[0x13])) {
        if ((!bVar4) && (bVar4 = true, *(short *)(param_2 + 0x5e) == *(short *)(param_3 + 0x5e))) {
          bVar4 = *(int *)(param_2 + 0x60) != *(int *)(param_3 + 0x60);
        }
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
      if (cVar1 == '\x0e') {
        iVar9 = FUN_ram_4ff4511a(param_2 + 0x14,param_3 + 0x14,0xe);
        bVar4 = true;
        if ((iVar9 == 0) && (*(short *)(param_2 + 0x22) == *(short *)(param_3 + 0x22))) {
          bVar4 = param_2[0x24] != param_3[0x24];
        }
      }
    }
  }
  cVar3 = param_3[10];
  if (cVar3 == '\0') {
    cVar12 = param_2[0xb];
    if (cVar12 == '\0') {
      cVar13 = param_3[0xb];
      cVar11 = cVar13;
      if (cVar13 == '\0') {
        cVar12 = '\x01';
        goto LAB_ram_480c9ca8;
      }
    }
    else {
LAB_ram_480c9ca8:
      cVar13 = '\0';
      cVar11 = cVar12;
      if (param_2[0xe] == '\0') {
        cVar13 = param_3[0xe];
      }
    }
    if (cVar1 != cVar2) {
LAB_ram_480c99d6:
      uVar5 = FUN_ram_48025ba6();
      FUN_ram_480c70d0(param_1,uVar5);
      piVar8 = param_1 + 0x30;
      do {
        *piVar8 = 0;
        *(undefined1 *)(piVar8 + 1) = 0;
        piVar8[2] = 0;
        piVar8[3] = 0;
        *(undefined2 *)(piVar8 + 4) = 0;
        *(undefined1 *)((int)piVar8 + 0x12) = 0;
        *(undefined1 *)((int)piVar8 + 0x13) = 0;
        piVar8 = piVar8 + 5;
      } while (param_1 + 0x58 != piVar8);
      *(undefined1 *)(param_1 + 0x59) = 0;
      param_1[0x5c] = 0;
      cVar3 = param_2[10];
      cVar12 = param_3[10];
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      param_1[0x5d] = 0;
      if (cVar3 != cVar12) goto LAB_ram_480c9cc0;
      if (param_2[0xc] != param_3[0xc]) goto LAB_ram_480c9a38;
      goto LAB_ram_480c9a46;
    }
    if (param_2[10] != cVar3) goto LAB_ram_480c9cc0;
    if (param_2[0xc] != param_3[0xc]) {
      iVar9 = *param_1;
      goto LAB_ram_480c9a3a;
    }
LAB_ram_480c9c60:
    if ((((*param_2 == *param_3) && (param_2[0x8f] == param_3[0x8f])) &&
        (*(int *)(param_2 + 0x90) == *(int *)(param_3 + 0x90))) &&
       ((*(uint *)(param_2 + 8) ^ *(uint *)(param_3 + 8)) < 0x10000)) goto LAB_ram_480c9a60;
  }
  else {
    cVar13 = param_3[0xb];
    cVar12 = param_2[10];
    if (cVar13 == '\0') {
      cVar11 = cVar3;
      if (cVar12 != '\0') goto LAB_ram_480c9ca8;
LAB_ram_480c99d0:
      cVar13 = cVar3;
      if (cVar1 != cVar2) goto LAB_ram_480c99d6;
LAB_ram_480c9cc0:
      iVar9 = *param_1;
      *(undefined1 *)(iVar9 + 0x1a4) = 0;
      *(undefined4 *)(iVar9 + 0x1ac) = 0;
      *(undefined2 *)(iVar9 + 0x194) = 0;
      *(undefined4 *)(iVar9 + 0x198) = 0;
      *(undefined2 *)(iVar9 + 0x19c) = 0;
      *(undefined4 *)(iVar9 + 0x1a0) = 0;
      *(undefined1 *)(iVar9 + 0x1b2) = 0;
      *(undefined2 *)(iVar9 + 0x1b0) = 0;
      *(undefined4 *)(iVar9 + 0x1b8) = 0;
    }
    else {
      if (param_3[0xe] == '\0') {
        cVar11 = cVar13;
        if (cVar12 != '\0') goto LAB_ram_480c9c4a;
        goto LAB_ram_480c99d0;
      }
      cVar11 = cVar12;
      if (cVar12 == '\0') goto LAB_ram_480c99d0;
      cVar12 = '\0';
LAB_ram_480c9c4a:
      cVar11 = cVar12;
      cVar12 = cVar11;
      if (param_2[0xb] != '\0') goto LAB_ram_480c9ca8;
      if (cVar1 != cVar2) goto LAB_ram_480c99d6;
      if (param_3[0xc] == param_2[0xc]) goto LAB_ram_480c9c60;
LAB_ram_480c9a38:
      iVar9 = *param_1;
LAB_ram_480c9a3a:
      *(undefined1 *)(iVar9 + 0x1b2) = 0;
      *(undefined2 *)(iVar9 + 0x1b0) = 0;
      *(undefined4 *)(iVar9 + 0x1b8) = 0;
    }
LAB_ram_480c9a46:
    if (cVar1 == cVar2) goto LAB_ram_480c9c60;
  }
  *(undefined1 *)((int)param_1 + 0x2ee) = 0;
  param_1[0xbc] = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined2 *)(param_1 + 0xbb) = 0xf;
LAB_ram_480c9a60:
  if (((cVar11 == '\0') && (cVar13 == '\0')) && ((param_3[0xa0] == '\0' && (param_2[0xa0] == '\0')))
     ) {
    if (cVar1 != cVar2) {
      *(undefined1 *)(param_1 + 0x65) = 0;
      *(undefined2 *)((int)param_1 + 0x196) = 0;
      param_1[0x66] = 0;
      param_1[0x69] = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6b] = 0;
      *(undefined2 *)((int)param_1 + 0x246) = 0;
      param_1[0x92] = 0;
      *(undefined2 *)((int)param_1 + 0x24e) = 0;
      param_1[0x94] = 0;
      *(undefined2 *)(param_1 + 0x95) = 0;
      *(undefined1 *)(param_1 + 0x7b) = 0;
      param_1[0x67] = -0xffffeff;
      iVar9 = param_1[0x7d] + 1;
      param_1[0x68] = 2;
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      param_1[0x7d] = iVar9;
      iVar9 = param_1[0x7e] + 1;
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      param_1[0x7e] = iVar9;
    }
    if (bVar4) {
      param_1[0x96] = 0;
      param_1[0x97] = 0;
      param_1[0x98] = 0;
      param_1[0x99] = 0;
      *(undefined2 *)(param_1 + 0x9a) = 0;
      param_1[0x9b] = 0;
      param_1[0x9c] = 0;
      *(undefined2 *)(param_1 + 0x9d) = 0;
      *(undefined1 *)((int)param_1 + 0x276) = 0;
      param_1[0x9e] = 0;
      if (*(char *)((int)param_1 + 0x189) != '\0') {
        FUN_ram_48030e8e(param_1 + 0x96,(short)param_1[99],param_1[0xa7]);
      }
      uVar5 = FUN_ram_48025ba6();
      FUN_ram_480c90ae(param_1,param_3,uVar5);
    }
  }
  else {
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    *(undefined2 *)(param_1 + 0x9d) = 0;
    *(undefined1 *)((int)param_1 + 0x276) = 0;
    param_1[0x9e] = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    param_1[0x61] = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0xa7] = 0;
    *(undefined1 *)(param_1 + 0x65) = 0;
    *(undefined2 *)((int)param_1 + 0x196) = 0;
    param_1[0x66] = 0;
    param_1[0x69] = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6b] = 0;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    *(undefined2 *)((int)param_1 + 0x24e) = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    param_1[0x67] = -0xffffeff;
    param_1[0x68] = 2;
    iVar9 = param_1[0x7d] + 1;
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    param_1[0x7d] = iVar9;
    iVar9 = param_1[0x7e] + 1;
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    param_1[0x7e] = iVar9;
    param_1[0xa8] = 0;
    FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_ram_4ff3ee10(param_1 + 4);
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    *(undefined1 *)(param_1[1] + 0x804) = 0;
    iVar9 = param_1[1];
    *(undefined1 *)(iVar9 + 0x810) = 0;
    iVar10 = param_1[1];
    *(undefined2 *)(iVar9 + 0x80e) = 0;
    *(undefined1 *)(iVar10 + 0x816) = 0;
    iVar9 = param_1[1];
    *(undefined2 *)(iVar10 + 0x812) = 0;
    *(undefined2 *)(iVar10 + 0x814) = 0;
    *(undefined1 *)(iVar9 + 0x817) = 0;
    *(undefined1 *)(param_1[1] + 0x818) = 0;
    *(undefined1 *)(param_1[1] + 0x835) = 0;
    iVar10 = param_1[1];
    iVar9 = param_1[2];
    *(undefined4 *)(iVar10 + 0x838) = 0;
    *(undefined4 *)(iVar10 + 0x83c) = 0;
    *(undefined2 *)(iVar10 + 0x81a) = 0;
    *(undefined4 *)(iVar10 + 0x81c) = 0;
    *(undefined4 *)(iVar10 + 0x820) = 0;
    *(undefined1 *)(iVar10 + 0x824) = 0;
    *(undefined2 *)(iVar10 + 0x828) = 0;
    *(undefined2 *)(iVar10 + 0x826) = 0;
    *(undefined4 *)(iVar10 + 0x82c) = 0;
    *(undefined4 *)(iVar10 + 0x830) = 0;
    *(undefined1 *)(iVar10 + 0x834) = 0;
    FUN_ram_4ff3ee10(iVar9);
  }
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  bVar7 = *(byte *)((int)param_1 + 0x296);
  *(byte *)(param_1[1] + 0x801) = bVar7;
  uVar6 = 0;
  if (param_3[0x25] != '\0') {
    bVar7 = param_3[0x26];
    if (4 < bVar7) {
      bVar7 = 2;
    }
    uVar6 = 1;
  }
  *(byte *)(param_1[1] + 0x802) = bVar7;
  *(undefined1 *)(param_1[1] + 0x803) = uVar6;
  FUN_ram_4ff3ee10(param_1[2]);
  uVar5 = FUN_ram_48025ba6();
  FUN_ram_480c6f6c(param_1,uVar5);
  FUN_ram_4809ec88(param_1,param_3);
  return;
}



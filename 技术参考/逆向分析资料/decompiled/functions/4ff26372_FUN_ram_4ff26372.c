/* Firmware entry: 0x4ff26372 */

void FUN_ram_4ff26372(int *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar9 = param_5;
  do {
    *(undefined1 *)piVar9 = 0;
    piVar9 = (int *)((int)piVar9 + 1);
  } while (piVar9 != param_5 + 0x16);
  iVar12 = param_2[0xf];
  iVar4 = param_2[0x10];
  iVar5 = param_2[0x11];
  iVar10 = param_2[0x12];
  iVar15 = param_2[0xb];
  iVar14 = param_2[0xc];
  iVar2 = param_2[0xd];
  iVar13 = param_2[0xe];
  *param_5 = param_2[10];
  param_5[1] = iVar15;
  param_5[2] = iVar14;
  param_5[3] = iVar2;
  param_5[4] = iVar13;
  param_5[5] = iVar12;
  param_5[6] = iVar4;
  param_5[7] = iVar5;
  param_5[8] = iVar10;
  iVar4 = param_2[0x23];
  iVar5 = param_2[0x20];
  iVar2 = param_2[0x21];
  param_5[0xc] = param_2[0x22];
  param_5[10] = iVar5;
  param_5[0xb] = iVar2;
  param_5[0xd] = iVar4;
  iVar2 = param_2[0x13];
  param_5[0x10] = param_4;
  *(char *)(param_5 + 0xe) = (char)param_3;
  param_5[0xf] = iVar2;
  param_5[0x11] = param_2[0x14];
  *(undefined1 *)((int)param_5 + 0x39) = 1;
  iVar2 = param_2[0x15];
  *(undefined **)((int)param_5 + 0x3a) = &sedeleg;
  param_5[0x12] = iVar2;
  *(undefined1 *)(param_5 + 0x13) = *(undefined1 *)((int)param_2 + 0xba);
  *(undefined1 *)((int)param_5 + 0x4d) = *(undefined1 *)((int)param_2 + 0xbb);
  *(char *)((int)param_5 + 0x4e) = (char)param_2[0x2f];
  if (*param_1 != 0) {
    fence();
    iVar2 = *param_1;
    param_5[0x14] = *(int *)(*param_1 + 0x18c70);
    fence();
    *(bool *)((int)param_5 + 0x4f) = *(char *)(iVar2 + 0x18c6e) != '\0';
  }
  if ((*(char *)((int)param_2 + 0xbe) != '\0') && (iVar2 = param_2[0x17], iVar2 != 0)) {
    cVar3 = '\x03' - (char)param_3;
    if (*(byte *)((int)param_1 + 0x2d5e) != 0) {
      uVar7 = (uint)*(byte *)((int)param_1 + 0x2d5d);
      uVar11 = *(byte *)((int)param_1 + 0x2d5e) + uVar7;
      while( true ) {
        uVar6 = uVar7 & 7;
        uVar7 = uVar7 + 1 & 0xff;
        if (param_1[uVar6 * 0xc + 0xafd] == iVar2) {
          uVar1 = *(undefined1 *)((int)param_2 + 0xb9);
          *(char *)((int)param_1 + uVar6 * 0x30 + 0x2c09) = cVar3;
          *(undefined1 *)((int)param_1 + uVar6 * 0x30 + 0x2c06) = uVar1;
        }
        if ((uVar11 & 0xff) == uVar7) break;
        iVar2 = param_2[0x17];
      }
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 0x2bd6);
    uVar11 = (int)((*(byte *)((int)param_1 + 0x2bd5) + 8) - uVar7) % 8 & 0xff;
    if (uVar7 != 0) {
      uVar7 = uVar7 + uVar11;
      do {
        uVar6 = uVar11 & 7;
        uVar11 = uVar11 + 1 & 0xff;
        if (param_1[uVar6 * 0x13 + 0xcb0] == param_2[0x17]) {
          uVar1 = *(undefined1 *)((int)param_2 + 0xb9);
          *(char *)((int)param_1 + uVar6 * 0x4c + 0x32cf) = cVar3;
          *(undefined1 *)((int)param_1 + uVar6 * 0x4c + 0x32cd) = uVar1;
        }
      } while ((uVar7 & 0xff) != uVar11);
    }
  }
  if (param_3 == 0) {
    if ((*(char *)((int)param_2 + 0xbf) != '\0') || (*(char *)((int)param_2 + 0xbb) != '\0')) {
      param_1[0xc0f] = param_1[0xc0f] + 1;
    }
    param_1[0xc10] = param_1[0xc10] + 1;
    param_1[0xbb3] = param_1[0xbb3] + 1;
    iVar4 = param_2[10];
    param_1[0xc2a] = iVar4;
    iVar2 = FUN_ram_4ff3c5de();
    if (*(byte *)((int)param_1 + 0x30ce) == 0) {
      cVar3 = '\x01';
      uVar7 = 0;
    }
    else {
      piVar9 = param_1 + 0xc8a;
      uVar7 = 0;
      do {
        uVar11 = uVar7;
        iVar5 = *piVar9;
        piVar9 = piVar9 + 3;
        if (iVar4 == iVar5) {
          param_1[uVar11 * 3 + 0xc8c] = iVar2;
          param_1[uVar11 * 3 + 0xc8b] = param_1[uVar11 * 3 + 0xc8b] + 1;
          goto LAB_ram_4ff26514;
        }
        uVar7 = uVar11 + 1;
      } while (uVar7 != *(byte *)((int)param_1 + 0x30ce));
      cVar3 = (char)uVar11 + '\x02';
      if (7 < uVar7) {
        param_1[0xc31] = param_1[0xc31] + 1;
        goto LAB_ram_4ff26514;
      }
    }
    param_1[uVar7 * 3 + 0xc8a] = iVar4;
    param_1[uVar7 * 3 + 0xc8c] = iVar2;
    param_1[uVar7 * 3 + 0xc8b] = 1;
    *(char *)((int)param_1 + 0x30ce) = cVar3;
  }
  else {
    param_1[0xbb0] = param_1[0xbb0] + 1;
    param_1[0xbb1] = param_1[0xbb1] + 1;
  }
LAB_ram_4ff26514:
  piVar9 = param_2;
  do {
    *(undefined1 *)piVar9 = 0;
    piVar9 = (int *)((int)piVar9 + 1);
  } while (piVar9 != param_2 + 0x32);
  *param_2 = (int)param_1;
  if (*(char *)((int)param_1 + 0x582) != '\0') {
    bVar8 = *(char *)((int)param_1 + 0x582) - 1;
    *(byte *)((int)param_1 + 0x582) = bVar8;
    if (bVar8 != 0) {
      param_1[0xc1a] = (uint)bVar8;
      return;
    }
  }
  param_1[0xbb2] = param_1[0xbb2] + 1;
  param_1[0xc1a] = 0;
  return;
}



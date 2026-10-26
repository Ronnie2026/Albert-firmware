/* Firmware entry: 0x480d8f08 */

void FUN_ram_480d8f08(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  byte bVar19;
  undefined4 uVar20;
  int iVar21;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  byte bVar26;
  char cVar27;
  undefined4 *puVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  char local_c4;
  char cStack_c3;
  undefined4 uStack_c0;
  char cStack_ba;
  char cStack_b9;
  undefined4 auStack_b8 [32];
  char cStack_35;
  char cStack_30;
  byte bStack_2f;
  byte bStack_2d;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar32 = (uint *)param_1[3];
  fence();
  uVar23 = *puVar32;
  do {
    uVar16 = uVar23 + 1;
    if ((int)uVar23 < 0) {
      return;
    }
    if ((uVar23 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar32 != uVar23;
    uVar23 = *puVar32;
  } while (bVar1);
  *puVar32 = uVar16;
  iVar10 = *param_1;
  FUN_ram_4ff3ec14(iVar10 + 0xb18,0xffffffff);
  puVar28 = (undefined4 *)(iVar10 + 0xb38);
  pcVar22 = &local_c4;
  do {
    uVar14 = puVar28[1];
    uVar17 = puVar28[2];
    uVar20 = puVar28[3];
    *(undefined4 *)pcVar22 = *puVar28;
    *(undefined4 *)(pcVar22 + 4) = uVar14;
    *(undefined4 *)(pcVar22 + 8) = uVar17;
    *(undefined4 *)(pcVar22 + 0xc) = uVar20;
    puVar28 = puVar28 + 4;
    pcVar22 = pcVar22 + 0x10;
  } while (puVar28 != (undefined4 *)(iVar10 + 0xbd8));
  *(undefined4 *)pcVar22 = *puVar28;
  FUN_ram_4ff3ee10(iVar10 + 0xb18);
  iVar10 = *param_1;
  if ((cStack_ba == '\0') || (*(char *)(iVar10 + 0x5a1) != '\0')) {
LAB_ram_480d8fae:
    *(undefined1 *)(iVar10 + 0x1a4) = 0;
    *(undefined4 *)(iVar10 + 0x1ac) = 0;
    *(undefined2 *)(iVar10 + 0x194) = 0;
    *(undefined4 *)(iVar10 + 0x198) = 0;
LAB_ram_480d8fbe:
    *(undefined2 *)(iVar10 + 0x19c) = 0;
    *(undefined4 *)(iVar10 + 0x1a0) = 0;
  }
  else {
    iVar13 = FUN_ram_4804556a(iVar10 + 0x1e08,1);
    iVar18 = FUN_ram_48025ba6();
    if (*(char *)(iVar10 + 0x82) == '\0') goto LAB_ram_480d8fae;
    if ((((*(char *)((int)param_2 + 0xd) != '\x01') || (*param_2 != 0x399)) ||
        (*(char *)((int)param_2 + 0x1b) != '\0')) || (param_2[7] != 0)) goto LAB_ram_480d8fc6;
    piVar25 = (int *)((int)param_2 + 5);
    cVar11 = -100;
    do {
      iVar21 = *piVar25;
      piVar25 = (int *)((int)piVar25 + 1);
      cVar11 = cVar11 + (char)iVar21;
    } while (param_2 + 3 != piVar25);
    if ((((char)param_2[1] != '\b') || (iVar13 == 0)) ||
       (((char)param_2[3] != cVar11 || (0x5dc < (uint)(iVar18 - param_3))))) goto LAB_ram_480d8fae;
    if (((*(char *)(iVar10 + 0x1a4) == '\0') || (iVar13 != *(int *)(iVar10 + 0x1ac))) ||
       (0x5dc < (uint)(param_3 - *(int *)(iVar10 + 0x1a8)))) {
      *(undefined2 *)(iVar10 + 0x194) = 0;
      *(undefined4 *)(iVar10 + 0x198) = 0;
      *(undefined2 *)(iVar10 + 0x19c) = 0;
      *(undefined4 *)(iVar10 + 0x1a0) = 0;
    }
    *(int *)(iVar10 + 0x1ac) = iVar13;
    *(int *)(iVar10 + 0x1a8) = param_3;
    *(undefined1 *)(iVar10 + 0x1a4) = 1;
    uVar16 = (uint)*(byte *)((int)param_2 + 5);
    uVar23 = (int)uVar16 >> 4 & 3;
    if ((uVar23 - 1 & 0xff) < 2) {
      *(undefined2 *)(iVar10 + 0x194) = 1;
      uVar16 = (uint)*(byte *)((int)param_2 + 5);
    }
    else if (uVar23 == 3) {
      *(undefined2 *)(iVar10 + 0x194) = 0;
      *(undefined4 *)(iVar10 + 0x198) = 0;
      uVar16 = (uint)*(byte *)((int)param_2 + 5);
    }
    else if (*(char *)(iVar10 + 0x194) != '\0') {
      *(int *)(iVar10 + 0x198) = param_3;
      *(undefined2 *)(iVar10 + 0x194) = 0x100;
      uVar16 = (uint)*(byte *)((int)param_2 + 5);
    }
    if (1 < ((uVar16 >> 6) - 1 & 0xff)) {
      if (uVar16 >> 6 != 3) {
        if (*(char *)(iVar10 + 0x19c) != '\0') {
          *(int *)(iVar10 + 0x1a0) = param_3;
          *(undefined2 *)(iVar10 + 0x19c) = 0x100;
        }
        goto LAB_ram_480d8fc6;
      }
      goto LAB_ram_480d8fbe;
    }
    *(undefined2 *)(iVar10 + 0x19c) = 1;
  }
LAB_ram_480d8fc6:
  if ((char)param_2[1] == '\0') {
    if (cStack_c3 != '\f') {
      if (cStack_c3 == '\x0e') {
        *(undefined1 *)(param_1 + 0x1d) = 0;
        param_1[0xab] = 0;
        param_1[0xac] = 0;
        param_1[0xad] = 0;
        FUN_ram_4809ec88(param_1,&local_c4);
      }
      else {
        *(undefined1 *)(param_1 + 0x60) = 0;
        param_1[0x61] = 0;
        *(undefined2 *)(param_1 + 0x62) = 0;
        param_1[99] = 0;
        param_1[100] = 0;
        *(undefined2 *)((int)param_1 + 0x246) = 0;
        param_1[0x92] = 0;
        *(undefined2 *)((int)param_1 + 0x24e) = 0;
        param_1[0x94] = 0;
        *(undefined2 *)(param_1 + 0x95) = 0;
        *(undefined1 *)(param_1 + 0x7b) = 0;
        iVar10 = param_1[0x7d] + 1;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        param_1[0x7d] = iVar10;
        iVar10 = param_1[0x7e] + 1;
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        param_1[0x7e] = iVar10;
        FUN_ram_4809ebc2(param_1);
        FUN_ram_4809ec88(param_1,&local_c4);
      }
    }
    fence();
    uVar23 = *puVar32;
    while( true ) {
      uVar16 = uVar23 - 1;
      if ((int)uVar23 < 0) {
        return;
      }
      if ((uVar23 & 0xffff) == 0) break;
      bVar1 = *puVar32 == uVar23;
      uVar23 = *puVar32;
      if (bVar1) {
        *puVar32 = uVar16;
        return;
      }
    }
    return;
  }
  cVar11 = '\0';
  bVar19 = 0;
  if (local_c4 != '\0') {
    cVar11 = cStack_30;
    bVar19 = bStack_2d;
  }
  if ((char)param_2[1] == '\b') {
    piVar25 = (int *)((int)param_2 + 5);
    cVar27 = -100;
    do {
      iVar10 = *piVar25;
      piVar25 = (int *)((int)piVar25 + 1);
      cVar27 = cVar27 + (char)iVar10;
    } while (piVar25 != param_2 + 3);
    if ((char)param_2[3] != cVar27) goto LAB_ram_480d8fe4;
    bVar7 = *(byte *)((int)param_2 + 9) >> 2;
    bVar26 = *(byte *)((int)param_2 + 5) & 0xf;
    bVar8 = *(byte *)((int)param_2 + 7) >> 6;
    bVar1 = true;
    bVar9 = *(byte *)((int)param_2 + 9) >> 5;
    uVar23 = (uint)bVar9;
    *(byte *)((int)param_1 + 0x85) = bVar26;
    *(byte *)(param_1 + 0x2d) = bVar26;
    *(byte *)((int)param_1 + 0x87) = bVar7 & 3;
    bVar26 = bVar26 - 3;
    *(byte *)(param_1 + 0x21) = bVar9;
    *(byte *)((int)param_1 + 0x86) = bVar8;
    param_1[0x24] = param_3;
    *(undefined1 *)((int)param_1 + 0xb3) = 1;
    if ((((bStack_2f & 1) == 0) || (1 < (uVar23 - 1 & 0xff))) &&
       (bVar1 = false, (bStack_2f & 2) != 0)) {
      bVar1 = uVar23 - 3 < 2;
    }
    bVar4 = bVar8 == 1;
    bVar6 = (bVar7 & 3) != 0;
    if (bVar19 != 0) {
      if ((bVar7 & 3) == 0) {
        bVar19 = 0;
      }
      else if (*(char *)((int)param_1 + 0xad) != '\0') {
        bVar19 = *(byte *)((int)param_1 + 0xae) ^ 1;
      }
    }
    if ((((char)param_1[0x2a] == '\0') || (*(char *)((int)param_1 + 0xa9) != cVar11)) ||
       (*(byte *)((int)param_1 + 0xaa) != bStack_2f)) {
      if (bVar26 < 4) goto LAB_ram_480d9816;
LAB_ram_480d94e8:
      *(char *)((int)param_1 + 0xa9) = cVar11;
      *(byte *)((int)param_1 + 0xaa) = bStack_2f;
      *(byte *)((int)param_1 + 0xab) = bVar9;
      *(bool *)(param_1 + 0x2b) = bVar4;
      *(bool *)((int)param_1 + 0xae) = bVar6;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      *(undefined1 *)((int)param_1 + 0xad) = 1;
      if (bVar19 != 0) goto LAB_ram_480d950a;
      goto LAB_ram_480d8fe4;
    }
    bVar5 = false;
    if (*(char *)((int)param_1 + 0xaf) != '\0') {
      bVar5 = (uint)(param_3 - param_1[0x25]) < 0x5dd;
    }
    if ((cVar11 == '\0') ||
       (((!bVar1 || (*(byte *)((int)param_1 + 0xab) == uVar23)) &&
        (((bVar8 != 1 || ((char)param_1[0x2b] != '\0')) ||
         ((bVar5 && ((char)param_1[0x22] == '\x01')))))))) {
      if (3 < bVar26) goto LAB_ram_480d94e8;
LAB_ram_480d9816:
      *(char *)((int)param_1 + 0xa9) = cVar11;
      *(byte *)((int)param_1 + 0xaa) = bStack_2f;
      *(byte *)((int)param_1 + 0xab) = bVar9;
      *(bool *)(param_1 + 0x2b) = bVar4;
      *(bool *)((int)param_1 + 0xae) = bVar6;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      *(undefined1 *)((int)param_1 + 0xad) = 1;
      goto LAB_ram_480d8fe4;
    }
    if (bVar26 < 4) goto LAB_ram_480d9816;
    *(byte *)((int)param_1 + 0xab) = bVar9;
    *(bool *)(param_1 + 0x2b) = bVar4;
    *(bool *)((int)param_1 + 0xae) = bVar6;
    *(undefined1 *)((int)param_1 + 0xa9) = 1;
    *(undefined1 *)((int)param_1 + 0xad) = 1;
LAB_ram_480d950a:
    param_1[0x2f] = param_3;
    param_1[0x2e] = param_1[0x2e] + 1;
    *(byte *)(param_1 + 0xa3) = *(byte *)((int)param_2 + 5) & 0xf;
    if ((char)param_2[1] == '\b') goto LAB_ram_480d9530;
LAB_ram_480d8ff8:
    iVar10 = *param_1;
    if (*(char *)(iVar10 + 1) == '\0') {
      *(undefined1 *)(iVar10 + 0x74) = 0;
      *(undefined1 *)(iVar10 + 0x76) = 0;
      cVar11 = '\0';
      goto LAB_ram_480d900a;
    }
    if (local_c4 != '\0') {
      if (cStack_ba == '\0') {
        *(undefined1 *)(iVar10 + 0x74) = 0;
        *(undefined1 *)(iVar10 + 0x76) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 0;
        FUN_ram_480d8c1e(iVar10 + 0x7cd0,(char)param_1[0xa3],0,param_3);
        param_1[0x20] = param_1[0x20] + 1;
        cVar11 = '\0';
        if (cStack_35 == '\0') {
          cVar11 = '\0';
          goto LAB_ram_480d9040;
        }
        goto LAB_ram_480d9038;
      }
      *(undefined1 *)(iVar10 + 0x74) = 0;
      *(undefined1 *)(iVar10 + 0x76) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      FUN_ram_480d8c1e(iVar10 + 0x7cd0,(char)param_1[0xa3],0,param_3);
      param_1[0x20] = param_1[0x20] + 1;
      if (cStack_35 == '\0') goto LAB_ram_480d974e;
      cVar27 = (char)param_1[0xa3];
      cVar11 = '\0';
      goto LAB_ram_480d9390;
    }
    *(undefined1 *)(iVar10 + 0x74) = 0;
    *(undefined1 *)(iVar10 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    FUN_ram_480d8c1e(iVar10 + 0x7cd0,(char)param_1[0xa3],0,param_3);
    param_1[0x20] = param_1[0x20] + 1;
    cVar11 = '\0';
    if (cStack_35 == '\0') {
LAB_ram_480d974e:
      cVar11 = '\0';
    }
LAB_ram_480d9040:
    *(undefined1 *)((int)param_1 + 0x2ee) = 0;
    param_1[0xbc] = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    param_1[0xbf] = 0;
    *(undefined2 *)(param_1 + 0xbb) = 0xf;
  }
  else {
LAB_ram_480d8fe4:
    *(byte *)(param_1 + 0xa3) = *(byte *)((int)param_2 + 5) & 0xf;
    if ((char)param_2[1] != '\b') goto LAB_ram_480d8ff8;
LAB_ram_480d9530:
    piVar25 = (int *)((int)param_2 + 5);
    cVar11 = -100;
    do {
      iVar10 = *piVar25;
      piVar25 = (int *)((int)piVar25 + 1);
      cVar11 = cVar11 + (char)iVar10;
    } while (piVar25 != param_2 + 3);
    if ((char)param_2[3] != cVar11) goto LAB_ram_480d8ff8;
    iVar13 = *param_1;
    if (((*(char *)(iVar13 + 1) == '\0') || (local_c4 == '\0')) || (cStack_ba == '\0')) {
      *(undefined1 *)(iVar13 + 0x74) = 0;
      *(undefined1 *)(iVar13 + 0x76) = 0;
      iVar10 = iVar13;
    }
    else {
      iVar18 = FUN_ram_48025ba6();
      iVar10 = *param_1;
      if ((((uint)(iVar18 - param_3) < 0x2ef) && (bVar19 = *(byte *)(param_1 + 0xa3), bVar19 < 10))
         && (bVar19 != 7)) {
        if (*(char *)(iVar13 + 0x74) != '\0') {
          if ((uint)(param_3 - *(int *)(iVar13 + 0x7c)) < 0x2ef) {
            if ((bool)*(char *)(iVar13 + 0x75) != (bVar19 == 6)) {
              *(char *)(iVar13 + 0x76) = (bVar19 != 6) + '\x01';
              *(int *)(iVar13 + 0x78) = param_3;
            }
          }
          else {
            *(undefined1 *)(iVar13 + 0x76) = 0;
          }
        }
        *(bool *)(iVar13 + 0x75) = bVar19 == 6;
        *(int *)(iVar13 + 0x7c) = param_3;
        *(undefined1 *)(iVar13 + 0x74) = 1;
      }
      else {
        *(undefined1 *)(iVar13 + 0x74) = 0;
        *(undefined1 *)(iVar13 + 0x76) = 0;
      }
    }
    iVar13 = param_2[1];
    iVar33 = param_2[2];
    iVar31 = param_2[3];
    iVar18 = param_2[4];
    iVar21 = param_2[5];
    iVar24 = param_2[6];
    iVar29 = param_2[7];
    iVar30 = param_2[8];
    cVar11 = '\x01';
    param_1[0x13] = *param_2;
    param_1[0x14] = iVar13;
    param_1[0x15] = iVar33;
    param_1[0x16] = iVar31;
    param_1[0x17] = iVar18;
    param_1[0x18] = iVar21;
    param_1[0x19] = iVar24;
    param_1[0x1a] = iVar29;
    param_1[0x1b] = iVar30;
    param_1[0x1c] = param_3;
LAB_ram_480d900a:
    *(char *)(param_1 + 0x1d) = cVar11;
    FUN_ram_480d8c1e(iVar10 + 0x7cd0,(char)param_1[0xa3],cVar11,param_3);
    param_1[0x20] = param_1[0x20] + 1;
    if ((cStack_35 == '\0') || (local_c4 == '\0')) goto LAB_ram_480d9040;
LAB_ram_480d9038:
    if (cStack_ba == '\0') goto LAB_ram_480d9040;
    cVar27 = (char)param_1[0xa3];
LAB_ram_480d9390:
    if (cStack_b9 == '\0') goto LAB_ram_480d9040;
    if ((*(char *)((int)param_1 + 0x2ed) == '\0') || ((uint)(param_3 - param_1[0xbc]) < 0x5dd)) {
      if (1 < (byte)(cVar27 - 1U)) goto LAB_ram_480d93c8;
      if ((byte)((char)param_1[0xbb] - 3U) < 4) {
        param_1[0xbd] = param_3;
        *(undefined1 *)((int)param_1 + 0x2ee) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xbb) = 0xf;
      *(undefined1 *)((int)param_1 + 0x2ee) = 0;
      if (1 < (byte)(cVar27 - 1U)) {
LAB_ram_480d93c8:
        *(undefined1 *)((int)param_1 + 0x2ee) = 0;
      }
    }
    *(char *)(param_1 + 0xbb) = cVar27;
    param_1[0xbc] = param_3;
    *(undefined1 *)((int)param_1 + 0x2ed) = 1;
  }
  if (cStack_c3 != '\x0e') goto LAB_ram_480d9060;
  if ((cVar11 == '\0') || (iVar10 = FUN_ram_48025ba6(), 500 < (uint)(iVar10 - param_3))) {
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    goto LAB_ram_480d9060;
  }
  iVar10 = param_2[4];
  if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar10 == 0)) {
    iVar10 = param_3 * 1000;
  }
  if (((((char)param_1[0xb0] != '\0') &&
       (iVar13 = FUN_ram_48025ba6(), (uint)(iVar13 - param_1[0xaf]) < 0x3e9)) &&
      ((char)param_1[0xb0] != '\0')) && (iVar10 - param_1[0xae] < 1)) goto LAB_ram_480d9060;
  bVar19 = (char)param_1[0xa3] - 3;
  if (((char)param_1[0xab] == '\0') || ((uint)(param_3 - param_1[0xac]) < 0x3e9)) {
    if (3 < bVar19) {
      *(undefined1 *)((int)param_1 + 0x2ae) = 0;
      if (*(char *)((int)param_1 + 0x2ad) == '\0') goto LAB_ram_480d9a0c;
      if (*(char *)((int)param_1 + 0x2af) == '\0') {
        *(undefined1 *)((int)param_1 + 0x2af) = 1;
      }
      goto LAB_ram_480d98a6;
    }
    *(undefined1 *)((int)param_1 + 0x2af) = 0;
    cVar27 = cVar11;
    if (*(char *)((int)param_1 + 0x2ad) == '\0') {
      bVar19 = *(byte *)((int)param_1 + 0x2ae);
      if ((bVar19 < 3) && (*(byte *)((int)param_1 + 0x2ae) = bVar19 + 1, bVar19 != 2))
      goto LAB_ram_480d98a6;
      param_1[0xad] = param_3;
    }
  }
  else {
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    if (bVar19 < 4) {
      *(undefined1 *)((int)param_1 + 0x2ae) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x2ae) = 0;
LAB_ram_480d9a0c:
      *(undefined1 *)((int)param_1 + 0x2af) = 0;
    }
LAB_ram_480d98a6:
    cVar27 = '\0';
  }
  *(char *)((int)param_1 + 0x2ad) = cVar27;
  param_1[0xac] = param_3;
  param_1[0xae] = iVar10;
  *(undefined1 *)(param_1 + 0xab) = 1;
  iVar10 = FUN_ram_48025ba6();
  param_1[0xaf] = iVar10;
  *(undefined1 *)(param_1 + 0xb0) = 1;
LAB_ram_480d9060:
  bVar19 = 0xf;
  if (5 < *(byte *)(param_2 + 1)) {
    bVar19 = *(byte *)((int)param_2 + 10) >> 2 & 0xf;
  }
  iVar10 = *param_1;
  cVar27 = (char)param_1[0xa3];
  *(byte *)(param_1 + 0xa5) = bVar19;
  param_1[0xa6] = param_3;
  cVar2 = *(char *)(iVar10 + 0x7d3a);
  *(char *)(iVar10 + 0x7d3a) = cVar27;
  if (cVar27 == '\x02') {
    if (cVar2 == '\x02') {
      bVar19 = *(byte *)(iVar10 + 0x7d3b);
      if (bVar19 < 10) {
        cVar27 = bVar19 + 1;
        bVar19 = bVar19 + 1;
        *(char *)(iVar10 + 0x7d3b) = cVar27;
      }
    }
    else {
      bVar19 = 1;
      *(undefined1 *)(iVar10 + 0x7d3b) = 1;
      *(int *)(iVar10 + 0x7d44) = *(int *)(iVar10 + 0x7d44) + 1;
    }
    if (((*(char *)(iVar10 + 0x7d67) != '\0') && (*(char *)(iVar10 + 0x7d68) != '\0')) &&
       (*(char *)(iVar10 + 0x7d69) != '\0')) {
      *(undefined1 *)(iVar10 + 0x7d6a) = 1;
    }
    if (((*(byte *)(iVar10 + 0x7d75) <= bVar19) &&
        (*(int *)(iVar10 + 0x7d44) == *(int *)(iVar10 + 0x7d48))) &&
       (*(char *)(iVar10 + 0x7d6d) == '\0')) {
      *(undefined1 *)(iVar10 + 0x7d6c) = 1;
      *(undefined1 *)(iVar10 + 0x7d6e) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar10 + 0x7d3b) = 0;
    *(undefined4 *)(iVar10 + 0x7d40) = *(undefined4 *)(iVar10 + 0x7d44);
    if ((byte)(cVar27 - 3U) < 4) {
      *(undefined1 *)(iVar10 + 0x7d6a) = 0;
      *(undefined1 *)(iVar10 + 0x7d3c) = 2;
    }
    else if (((*(char *)(iVar10 + 0x7d67) == '\0') || (*(char *)(iVar10 + 0x7d68) == '\0')) ||
            (cVar27 != '\x01')) {
      if (*(char *)(iVar10 + 0x7d3c) != '\x02') {
        *(undefined1 *)(iVar10 + 0x7d3c) = 3;
      }
    }
    else if (*(char *)(iVar10 + 0x7d3c) != '\x02') {
      *(undefined1 *)(iVar10 + 0x7d69) = 1;
    }
  }
  if (*(char *)(*param_1 + 0x7d6e) != '\0') {
    puVar15 = (uint *)param_1[3];
    fence();
    uVar23 = *puVar15;
    do {
      uVar16 = uVar23 + 1;
      if (((uVar23 & 0x80030000) != 0) || ((uVar23 & 0xffff) == 0xffff)) goto LAB_ram_480d90c4;
      bVar1 = *puVar15 != uVar23;
      uVar23 = *puVar15;
    } while (bVar1);
    *puVar15 = uVar16 | 0x10000;
  }
LAB_ram_480d90c4:
  if ((((*(byte *)(param_2 + 1) < 2) ||
       (uVar23 = *(byte *)((int)param_2 + 6) & 0x1f, (0x80000001U >> uVar23 & 1) != 0)) ||
      (cVar11 == '\0')) || ((char)param_1[0xa3] != '\x06')) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    param_1[0x61] = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    param_1[99] = 0;
    param_1[100] = 0;
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
    *(undefined1 *)(param_1 + 0x7b) = 0;
    iVar10 = param_1[0x7d] + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7d] = iVar10;
    iVar10 = param_1[0x7e] + 1;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    param_1[0x7e] = iVar10;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
  }
  else {
    iVar10 = uVar23 * 5;
    *(undefined **)(param_1 + 0x62) = &sedeleg;
    *(undefined1 *)(param_1 + 0x60) = 1;
    param_1[100] = param_3;
    param_1[0xa7] = param_3;
    param_1[0x61] = iVar10;
    param_1[99] = iVar10;
    cVar11 = *(char *)((int)param_1 + 0x276);
    FUN_ram_48030e8e(param_1 + 0x96,iVar10,param_3);
    if (*(char *)((int)param_1 + 0x276) == '\0') {
      param_1[0x9e] = 0;
    }
    else if (cVar11 == '\0') {
      uVar3 = *(undefined2 *)((int)param_1 + 0x25a);
      uVar14 = FUN_ram_48025ba6();
      iVar10 = FUN_ram_4809df80(param_1,uVar3,&local_c4,uVar14);
      uVar3 = *(undefined2 *)((int)param_1 + 0x25a);
      param_1[0x9e] = iVar10;
      uVar14 = FUN_ram_48025ba6();
      uVar12 = FUN_ram_480c3eaa(param_1,uVar3,uVar14);
      *(undefined1 *)(param_1 + 0x9f) = uVar12;
    }
  }
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  *(char *)(param_1[1] + 0x7cc) = (char)param_1[0xa3];
  iVar33 = param_1[0x21];
  iVar10 = param_1[0x22];
  iVar31 = param_1[0x23];
  iVar30 = param_1[0x24];
  iVar21 = param_1[0x28];
  iVar24 = param_1[0x29];
  iVar29 = param_1[1];
  iVar18 = param_1[0x27];
  iVar13 = param_1[0x25];
  *(int *)(iVar29 + 0x7e4) = param_1[0x26];
  *(int *)(iVar29 + 0x7e8) = iVar18;
  *(int *)(iVar29 + 0x7e0) = iVar13;
  *(int *)(iVar29 + 2000) = iVar33;
  *(int *)(iVar29 + 0x7d4) = iVar10;
  *(int *)(iVar29 + 0x7d8) = iVar31;
  *(int *)(iVar29 + 0x7dc) = iVar30;
  *(int *)(iVar29 + 0x7ec) = iVar21;
  *(int *)(iVar29 + 0x7f0) = iVar24;
  *(char *)(iVar29 + 0x7fc) = (char)param_1[0xa5];
  FUN_ram_4ff3ee10(param_1[2]);
  uVar14 = FUN_ram_48025ba6();
  FUN_ram_480c90ae(param_1,&local_c4,uVar14);
  FUN_ram_4809ec88(param_1,&local_c4);
  fence();
  uVar23 = *puVar32;
  while( true ) {
    uVar16 = uVar23 - 1;
    if ((int)uVar23 < 0) {
      return;
    }
    if ((uVar23 & 0xffff) == 0) break;
    bVar1 = *puVar32 == uVar23;
    uVar23 = *puVar32;
    if (bVar1) {
      *puVar32 = uVar16;
      return;
    }
  }
  return;
}



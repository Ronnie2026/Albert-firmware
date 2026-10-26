/* Firmware entry: 0x481084c2 */

void FUN_ram_481084c2(int param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint *puVar17;
  char cVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  char cVar27;
  int iVar28;
  undefined4 local_d4;
  undefined4 auStack_d0 [28];
  byte bStack_5d;
  ushort uStack_54;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = *(uint **)(param_1 + 0x6c);
  fence();
  uVar4 = *puVar3;
  do {
    uVar8 = uVar4 + 1;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((uVar4 & 0xffff) == 0xffff) {
      return;
    }
    bVar13 = *puVar3 != uVar4;
    uVar4 = *puVar3;
  } while (bVar13);
  *puVar3 = uVar8;
  iVar25 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar25 + 0xb18,0xffffffff);
  puVar19 = (undefined4 *)(iVar25 + 0xb38);
  puVar15 = &local_d4;
  do {
    uVar6 = puVar19[1];
    uVar9 = puVar19[2];
    uVar11 = puVar19[3];
    *puVar15 = *puVar19;
    puVar15[1] = uVar6;
    puVar15[2] = uVar9;
    puVar15[3] = uVar11;
    puVar19 = puVar19 + 4;
    puVar15 = puVar15 + 4;
  } while (puVar19 != (undefined4 *)(iVar25 + 0xbd8));
  *puVar15 = *puVar19;
  FUN_ram_4ff3ee10(iVar25 + 0xb18);
  iVar25 = *param_2;
  if (iVar25 == 0x118) {
    if (*(char *)((int)param_2 + 0xd) != '\x01') goto LAB_ram_481085d6;
    if (*(byte *)(param_2 + 1) < 3) goto LAB_ram_4810858a;
    FUN_ram_4ff3ec14(param_1 + 0x78,0xffffffff);
    *(byte *)(param_1 + 0xaf4) = *(byte *)((int)param_2 + 7) >> 5;
    *(int *)(param_1 + 0xaf8) = param_4;
    *(undefined1 *)(param_1 + 0xafc) = 1;
    FUN_ram_4ff3ee10(param_1 + 0x78);
    cVar18 = *(char *)(param_1 + 0xaf4);
    if ((byte)(cVar18 - 1U) < 4) {
      if (*(char *)(param_1 + 0x934) == '\0') {
        *(undefined1 *)(param_1 + 0x934) = 1;
        *(char *)(param_1 + 0x935) = cVar18;
        goto LAB_ram_48108650;
      }
      bVar13 = false;
      if (*(char *)(param_1 + 0x935) != cVar18) {
        *(char *)(param_1 + 0x935) = cVar18;
        bVar13 = true;
      }
    }
    else {
LAB_ram_48108650:
      bVar13 = false;
    }
    cVar27 = *(char *)(param_1 + 0xb64);
    if (*(char *)(param_1 + 0xaec) == '\0') {
      if (!bVar13) goto LAB_ram_481085d6;
      cVar24 = '\0';
      goto LAB_ram_4810867e;
    }
    if (*(char *)(param_1 + 0xaee) == cVar18) {
      *(undefined2 *)(param_1 + 0xaec) = 0;
      *(undefined1 *)(param_1 + 0xaee) = 0;
      *(undefined4 *)(param_1 + 0xaf0) = 0;
      if (bVar13) {
        param_4 = (uint)uStack_54 + param_4;
        if (cVar27 == '\x04') {
          if (*(int *)(param_1 + 0xb80) == 0) goto LAB_ram_4810914a;
          if ((((*(int *)(param_1 + 0xb80) != *(int *)(param_1 + 0x928)) ||
               (*(char *)(param_1 + 0x931) == '\0')) || (*(int *)(param_1 + 0x904) == 0)) ||
             ((*(int *)(param_1 + 0x904) != *(int *)(param_1 + 0x92c) ||
              (*(char *)(param_1 + 0x930) == -1)))) goto LAB_ram_48109092;
          *(char *)(param_1 + 0x930) = *(char *)(param_1 + 0x930) + '\x01';
          *(int *)(param_1 + 0xb6c) = param_4;
        }
        else {
          if (cVar27 != '\x03') {
LAB_ram_4810914a:
            if (((*(int *)(param_1 + 0xb7c) != 0) &&
                (*(int *)(param_1 + 0xb7c) == *(int *)(param_1 + 0x920))) &&
               ((*(char *)(param_1 + 0x924) != '\0' && (*(char *)(param_1 + 0x925) != -1)))) {
              *(char *)(param_1 + 0x925) = *(char *)(param_1 + 0x925) + '\x01';
              *(int *)(param_1 + 0xb6c) = param_4;
              goto LAB_ram_48109096;
            }
          }
LAB_ram_48109092:
          *(int *)(param_1 + 0xb6c) = param_4;
        }
      }
LAB_ram_48109096:
      *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
      *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
      *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
      *(undefined1 *)(param_1 + 0xae9) = 0;
      *(undefined1 *)(param_1 + 0xabd) = 0;
      *(undefined4 *)(param_1 + 0xaa4) = 0;
      *(undefined1 *)(param_1 + 0xaa8) = 0;
      *(undefined1 *)(param_1 + 0xab4) = 0;
      *(undefined4 *)(param_1 + 0xab8) = 0;
      *(int *)(param_1 + 0xb98) = *(int *)(param_1 + 0xb98) + 1;
      *(undefined2 *)(param_1 + 0xabe) = 1;
      if ((cVar27 == '\x02') && (*(char *)(param_1 + 0x98e) != '\0')) {
        *(undefined1 *)(param_1 + 0x98e) = 0;
        *(undefined1 *)(param_1 + 0x98d) = 0;
        *(undefined1 *)(param_1 + 0x943) = 0;
        *(undefined2 *)(param_1 + 0x950) = 0;
        *(undefined2 *)(param_1 + 0x98a) = 1;
        *(int *)(param_1 + 0x97c) = *(int *)(param_1 + 0x97c) + 1;
        *(undefined2 *)(param_1 + 0x938) = 7;
        FUN_ram_48049b14(param_1 + 0x938);
      }
      iVar25 = *(int *)(*(int *)(param_1 + 0x58) + 0x7cd0);
      cVar18 = *(char *)(iVar25 + 0x8fde);
      *(undefined1 *)(param_1 + 0xb64) = 0;
      *(undefined4 *)(param_1 + 0xb7c) = 0;
      *(undefined4 *)(param_1 + 0xb80) = 0;
      if ((cVar18 == '\0') && (*(char *)(iVar25 + 0x8f94) == '\0')) {
        puVar17 = *(uint **)(*(int *)(param_1 + 0x58) + 0x7cdc);
        fence();
        uVar4 = *puVar17;
        do {
          uVar8 = uVar4 & 0xfffcffff;
          if (((uVar4 >> 0x10 & 3) != 2) || ((uVar4 & 0xffff) == 0)) goto LAB_ram_481085d6;
          bVar13 = *puVar17 != uVar4;
          uVar4 = *puVar17;
        } while (bVar13);
        *puVar17 = uVar8 - 1;
      }
      goto LAB_ram_481085d6;
    }
    cVar24 = '\x03';
    if (((byte)(cVar18 - 1U) < 4) && (*(char *)(param_1 + 0xaed) != cVar18)) {
      *(undefined2 *)(param_1 + 0xaec) = 0;
      *(undefined1 *)(param_1 + 0xaee) = 0;
      *(undefined4 *)(param_1 + 0xaf0) = 0;
      if (bVar13) goto LAB_ram_4810867e;
    }
    else {
      cVar24 = '\x01';
      if (!bVar13) goto LAB_ram_481085d6;
LAB_ram_4810867e:
      cVar18 = *(char *)(param_1 + 0x924);
      if ((cVar18 != '\0') && (*(char *)(param_1 + 0x925) != -1)) {
        *(char *)(param_1 + 0x925) = *(char *)(param_1 + 0x925) + '\x01';
      }
      if ((((*(char *)(param_1 + 0x931) != '\0') && (*(int *)(param_1 + 0x904) != 0)) &&
          (*(int *)(param_1 + 0x904) == *(int *)(param_1 + 0x92c))) &&
         (*(char *)(param_1 + 0x930) != -1)) {
        *(char *)(param_1 + 0x930) = *(char *)(param_1 + 0x930) + '\x01';
      }
      if (*(char *)(param_1 + 0xabc) != '\0') {
        *(undefined1 *)(param_1 + 0xabd) = 0;
        *(undefined1 *)(param_1 + 0xabf) = 0;
        *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
        *(undefined1 *)(param_1 + 0xac0) = 1;
      }
      *(undefined4 *)(param_1 + 0xaa4) = 0;
      *(undefined1 *)(param_1 + 0xaa8) = 0;
      *(undefined1 *)(param_1 + 0xab4) = 0;
      *(undefined4 *)(param_1 + 0xab8) = 0;
      *(undefined1 *)(param_1 + 0xae9) = 0;
      iVar25 = *(int *)(param_1 + 0xb88) + 1;
      *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
      *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *(int *)(param_1 + 0xb88) = iVar25;
      iVar25 = *(int *)(param_1 + 0x920);
      bVar13 = cVar18 != '\0';
      if (iVar25 == 0) {
LAB_ram_48108714:
        *(bool *)(param_1 + 0x989) = bVar13;
      }
      else if (*(int *)(param_1 + 0x9b8) == 0) {
        *(int *)(param_1 + 0x9b8) = iVar25;
        *(int *)(param_1 + 0x9bc) = iVar25;
        *(bool *)(param_1 + 0x989) = bVar13;
      }
      else {
        if (iVar25 == *(int *)(param_1 + 0x9b8)) goto LAB_ram_48108714;
        *(int *)(param_1 + 0x9b8) = iVar25;
        *(int *)(param_1 + 0x9bc) = iVar25;
        *(bool *)(param_1 + 0x989) = bVar13;
        *(undefined4 *)(param_1 + 0x9b4) = 0;
        *(undefined4 *)(param_1 + 0x9b0) = 0;
        *(undefined1 *)(param_1 + 0x98b) = 0;
        *(undefined1 *)(param_1 + 0x98d) = 0;
        *(undefined1 *)(param_1 + 0x98e) = 0;
        *(undefined2 *)(param_1 + 0x992) = 0;
        *(undefined2 *)(param_1 + 0x9c6) = 0;
        *(undefined2 *)(param_1 + 0x9c8) = 0;
        *(undefined1 *)(param_1 + 0x994) = 0;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined4 *)(param_1 + 0x99c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9a4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined4 *)(param_1 + 0x970) = 0;
        *(undefined1 *)(param_1 + 0x93a) = 0;
        *(undefined1 *)(param_1 + 0x943) = 0;
        *(undefined2 *)(param_1 + 0x950) = 0;
        *(undefined2 *)(param_1 + 0x938) = 0x805;
        *(bool *)(param_1 + 0x988) = cVar18 == '\0';
      }
      if (cVar18 == '\0') {
        *(undefined2 *)(param_1 + 0x98a) = 0;
        *(undefined2 *)(param_1 + 0x98c) = 0;
        *(undefined1 *)(param_1 + 0x98e) = 0;
        *(undefined2 *)(param_1 + 0x992) = 0;
        *(undefined2 *)(param_1 + 0x9c6) = 0;
        *(undefined2 *)(param_1 + 0x9c8) = 0;
        *(undefined1 *)(param_1 + 0x994) = 0;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined4 *)(param_1 + 0x99c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9a4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined1 *)(param_1 + 0x93a) = 0;
        *(undefined1 *)(param_1 + 0x943) = 0;
        *(undefined2 *)(param_1 + 0x950) = 0;
        *(undefined2 *)(param_1 + 0x938) = 0x805;
        FUN_ram_48049b14(param_1 + 0x938);
      }
      else {
        *(undefined1 *)(param_1 + 0x98e) = 0;
        *(undefined2 *)(param_1 + 0x992) = 0;
        *(undefined2 *)(param_1 + 0x9c6) = 0;
        *(undefined2 *)(param_1 + 0x9c8) = 0;
        *(undefined1 *)(param_1 + 0x994) = 0;
        *(undefined4 *)(param_1 + 0x998) = 0;
        *(undefined4 *)(param_1 + 0x99c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9a4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined4 *)(param_1 + 0x9ac) = 0;
        *(undefined1 *)(param_1 + 0x943) = 0;
        *(undefined2 *)(param_1 + 0x950) = 0;
        *(undefined2 *)(param_1 + 0x98a) = 0x100;
        *(undefined2 *)(param_1 + 0x98c) = 1;
        *(undefined2 *)(param_1 + 0x938) = 0x1108;
        FUN_ram_48049b14(param_1 + 0x938);
      }
      *(uint *)(param_1 + 0xb6c) = (uint)uStack_54 + param_4;
      if (cVar24 != '\x03') goto LAB_ram_481085d6;
    }
    *(undefined1 *)(param_1 + 0xb64) = 0;
    *(undefined4 *)(param_1 + 0xb7c) = 0;
    *(undefined4 *)(param_1 + 0xb80) = 0;
    FUN_ram_480db8da(param_1,0x10);
    if ((cVar27 == '\x02') && (*(char *)(param_1 + 0x98e) != '\0')) {
      *(undefined1 *)(param_1 + 0x98e) = 0;
      *(undefined1 *)(param_1 + 0x98d) = 0;
      *(undefined2 *)(param_1 + 0x950) = 0;
      *(undefined1 *)(param_1 + 0x994) = 0;
      *(undefined4 *)(param_1 + 0x998) = 0;
      *(undefined4 *)(param_1 + 0x99c) = 0;
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      *(undefined4 *)(param_1 + 0x9a4) = 0;
      *(undefined4 *)(param_1 + 0x9a8) = 0;
      *(undefined4 *)(param_1 + 0x9ac) = 0;
      *(undefined2 *)(param_1 + 0x98a) = 0;
      *(undefined2 *)(param_1 + 0x93e) = 0;
      *(undefined1 *)(param_1 + 0x941) = 0;
      *(undefined2 *)(param_1 + 0x942) = 0;
      *(undefined2 *)(param_1 + 0x944) = 0;
      *(undefined4 *)(param_1 + 0x958) = 0;
      *(undefined4 *)(param_1 + 0x95c) = 0;
      *(undefined4 *)(param_1 + 0x960) = 0;
      *(undefined4 *)(param_1 + 0x964) = 0;
      *(undefined4 *)(param_1 + 0x968) = 0;
      *(undefined4 *)(param_1 + 0x96c) = 0;
      *(undefined2 *)(param_1 + 0x938) = 0x1503;
      *(undefined1 *)(param_1 + 0x93b) = *(undefined1 *)(param_1 + 0x988);
      *(undefined1 *)(param_1 + 0x940) = *(undefined1 *)(param_1 + 0x98c);
      *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x9b4);
      *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_1 + 0x9bc);
      *(undefined2 *)(param_1 + 0x948) = *(undefined2 *)(param_1 + 0x992);
      *(undefined2 *)(param_1 + 0x94a) = *(undefined2 *)(param_1 + 0x9c6);
      *(undefined2 *)(param_1 + 0x94c) = *(undefined2 *)(param_1 + 0x9c8);
    }
    goto LAB_ram_481085d6;
  }
  if (iVar25 == 0x129) {
    if (*(char *)((int)param_2 + 0xd) != '\x01') goto LAB_ram_481085d6;
    if ((char)param_2[1] != '\b') goto LAB_ram_4810858a;
    uVar4 = (uint)(param_3 != 1);
    iVar25 = uVar4 * 0xc + param_1;
    *(undefined4 *)(iVar25 + 0xa90) = 0x80000000;
    *(undefined2 *)((-uVar4 & 0xc) + param_1 + 0xa8c) = 1;
    *(int *)(iVar25 + 0xa94) = param_4;
    if ((char)param_2[1] == '\b') {
      bVar1 = *(byte *)((int)param_2 + 6) >> 6;
      *(uint *)(iVar25 + 0xa90) = 0x2000 - (*(ushort *)((int)param_2 + 7) & 0x3fff);
      *(bool *)(iVar25 + 0xa8d) = bVar1 == 0;
      if (bVar1 != 0) goto LAB_ram_4810889a;
    }
    else {
      *(undefined1 *)(iVar25 + 0xa8d) = 0;
LAB_ram_4810889a:
      *(undefined4 *)(uVar4 * 0xc + param_1 + 0xa90) = 0x80000000;
    }
    FUN_ram_48105438(param_1,param_4);
  }
  else {
    if (iVar25 != 0x145) {
      if (iVar25 != 599) {
        if (iVar25 != 0x678) {
LAB_ram_4810858a:
          fence();
          uVar4 = *puVar3;
          while( true ) {
            uVar8 = uVar4 - 1;
            if ((int)uVar4 < 0) {
              return;
            }
            if ((uVar4 & 0xffff) == 0) break;
            bVar13 = *puVar3 == uVar4;
            uVar4 = *puVar3;
            if (bVar13) {
              *puVar3 = uVar8;
              return;
            }
          }
          return;
        }
        if (*(char *)((int)param_2 + 0xd) == '\x02') {
          if ((char)param_2[1] != '\a') goto LAB_ram_4810858a;
          if (*(byte *)((int)param_2 + 6) < 0x10) {
            piVar16 = (int *)((int)param_2 + 6);
            cVar18 = '~';
            do {
              iVar25 = *piVar16;
              piVar16 = (int *)((int)piVar16 + 1);
              cVar18 = cVar18 + (char)iVar25;
            } while (param_2 + 3 != piVar16);
            if (*(char *)((int)param_2 + 5) == cVar18) {
              iVar28 = *param_2;
              iVar26 = param_2[1];
              iVar25 = param_2[2];
              iVar23 = param_2[3];
              iVar22 = param_2[4];
              iVar5 = param_2[5];
              iVar7 = param_2[6];
              iVar10 = param_2[7];
              *(int *)(param_1 + 0xb2c) = param_2[8];
              *(int *)(param_1 + 0xb0c) = iVar28;
              *(int *)(param_1 + 0xb10) = iVar26;
              *(int *)(param_1 + 0xb14) = iVar25;
              *(int *)(param_1 + 0xb18) = iVar23;
              *(int *)(param_1 + 0xb1c) = iVar22;
              *(int *)(param_1 + 0xb20) = iVar5;
              *(int *)(param_1 + 0xb24) = iVar7;
              *(int *)(param_1 + 0xb28) = iVar10;
              *(int *)(param_1 + 0xb30) = param_4;
              if (*(char *)(param_1 + 0xb34) != -1) {
                *(char *)(param_1 + 0xb34) = *(char *)(param_1 + 0xb34) + '\x01';
              }
              if ((local_d4._1_1_ != '\f') && (*(char *)(param_1 + 0xb36) != '\0')) {
                FUN_ram_48104736(param_1,&local_d4,param_4);
              }
              goto LAB_ram_481085d6;
            }
          }
          *(undefined1 *)(param_1 + 0xb34) = 0;
        }
        goto LAB_ram_481085d6;
      }
      if (*(char *)((int)param_2 + 0xd) != '\x01') goto LAB_ram_481085d6;
      if (*(byte *)(param_2 + 1) < 5) goto LAB_ram_4810858a;
      cVar18 = *(char *)(param_1 + 0x90f);
      if (((*(char *)(param_1 + 0x911) == '\0') || (cVar18 == '\0')) ||
         (cVar27 = cVar18, 300 < (uint)(param_4 - *(int *)(param_1 + 0x908)))) {
        cVar27 = '\0';
      }
      *(ushort *)(param_1 + 0xafe) =
           (*(byte *)((int)param_2 + 9) & 1) << 8 | (ushort)*(byte *)(param_2 + 2);
      uVar8 = 0;
      uVar4 = 0;
      do {
        uVar20 = uVar8 + 0x2b;
        uVar21 = (uVar20 & 0xff) >> 3;
        uVar12 = uVar8 & 0x1f;
        uVar8 = uVar8 + 1;
        if (*(byte *)(param_2 + 1) <= uVar21) break;
        if ((*(byte *)((int)param_2 + uVar21 + 5) >> (uVar20 & 7) & 1) != 0) {
          uVar4 = uVar4 | 1 << uVar12;
        }
      } while (uVar8 != 0xd);
      if (uVar4 == 0x1fff) {
        iVar25 = 0;
        uVar8 = 0x80000000;
      }
      else {
        uVar8 = (uVar4 - 500) * 8;
        *(int *)(param_1 + 0xb08) = *(int *)(param_1 + 0xb08) + 1;
        iVar25 = param_4;
      }
      uVar12 = (uint)bStack_5d;
      *(int *)(param_1 + 0xb04) = iVar25;
      *(uint *)(param_1 + 0xb00) = uVar8;
      if (8 < uVar12) {
        uVar12 = 8;
      }
      if (cVar18 == '\0') {
        if ((*(char *)(param_1 + 0x910) != '\0') && (*(byte *)(param_1 + 0x90e) != uVar12)) {
LAB_ram_48108b1e:
          *(undefined1 *)(param_1 + 0x90c) = 0;
          *(undefined1 *)(param_1 + 0x911) = 0;
        }
      }
      else if (((*(char *)(param_1 + 0x910) != '\0') && (*(byte *)(param_1 + 0x90e) != uVar12)) ||
              (300 < (uint)(param_4 - *(int *)(param_1 + 0x908)))) goto LAB_ram_48108b1e;
      *(char *)(param_1 + 0x90e) = (char)uVar12;
      *(int *)(param_1 + 0x908) = param_4;
      *(undefined1 *)(param_1 + 0x910) = 1;
      if (uVar4 == 0x1fff) {
        *(undefined1 *)(param_1 + 0x90f) = 0;
        *(undefined2 *)(param_1 + 0x90c) = 0;
        *(undefined1 *)(param_1 + 0x911) = 0;
LAB_ram_48108b76:
        if (cVar27 == '\0') goto LAB_ram_48108cd2;
        *(undefined4 *)(param_1 + 0x92c) = 0;
        *(undefined2 *)(param_1 + 0x930) = 0;
        *(undefined4 *)(param_1 + 0xaa4) = 0;
        *(undefined1 *)(param_1 + 0xaa8) = 0;
        *(undefined1 *)(param_1 + 0xab4) = 0;
        *(undefined4 *)(param_1 + 0xab8) = 0;
        *(undefined4 *)(param_1 + 0xad0) = 0;
        *(undefined1 *)(param_1 + 0xad4) = 0;
        *(undefined1 *)(param_1 + 0xae0) = 0;
        *(undefined4 *)(param_1 + 0xae4) = 0;
        *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
        *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
        *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
        *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
        if ((*(char *)(param_1 + 0xb36) != '\0') && (*(char *)(param_1 + 0xb62) != '\x03')) {
          FUN_ram_480db8da(param_1,4);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x90f) = 1;
        uVar4 = (int)uVar8 >> 0x1f;
        if ((int)uVar8 < 0) {
          uVar4 = -(uint)(uVar8 != 0) - uVar4;
          uVar8 = -uVar8;
        }
        if ((0 < (int)uVar4) || ((uVar4 == 0 && (0x63ff < uVar8)))) {
          *(undefined1 *)(param_1 + 0x90d) = 0xff;
LAB_ram_48108b6a:
          *(undefined1 *)(param_1 + 0x90c) = 0;
          *(undefined1 *)(param_1 + 0x911) = 0;
          goto LAB_ram_48108b76;
        }
        uVar4 = (uVar8 - ((uVar4 >> 0x1c) +
                         (uVar8 & 0xfffff) + (uVar8 >> 0x14 | (uVar4 & 0xff) << 0xc) +
                         (uVar4 >> 8 & 0xfffff)) % 0x19) * -0x3d70a3d7 >> 2;
        *(char *)(param_1 + 0x90d) = (char)uVar4;
        if (uVar12 < (uVar4 & 0xff)) goto LAB_ram_48108b6a;
        bVar1 = *(byte *)(param_1 + 0x90c);
        if (bVar1 < 2) {
          *(byte *)(param_1 + 0x90c) = bVar1 + 1;
          if (*(char *)(param_1 + 0x911) == '\0') {
            if (bVar1 != 1) goto LAB_ram_48108b76;
            goto LAB_ram_48108cb4;
          }
        }
        else if (*(char *)(param_1 + 0x911) == '\0') {
LAB_ram_48108cb4:
          iVar25 = *(int *)(param_1 + 0x904) + 1;
          if (iVar25 == 0) {
            iVar25 = 1;
          }
          *(int *)(param_1 + 0x904) = iVar25;
          *(undefined1 *)(param_1 + 0x911) = 1;
        }
LAB_ram_48108cd2:
        FUN_ram_481055bc(param_1,&local_d4,param_4);
      }
      FUN_ram_48105438(param_1,param_4);
      goto LAB_ram_481085d6;
    }
    if (*(char *)((int)param_2 + 0xd) != '\x01') goto LAB_ram_481085d6;
    if (*(byte *)(param_2 + 1) < 4) goto LAB_ram_4810858a;
    if (((*(byte *)(param_2 + 2) & 0x60) == 0x40) || ((char)*(byte *)(param_2 + 2) < '\0')) {
      iVar7 = *(int *)(param_1 + 0x58);
      iVar5 = *(int *)(iVar7 + 0x7cd0);
      iVar25 = (iVar5 + 0x7a15U & 3) << 3;
      *(int *)(param_1 + 0xba8) = param_4;
      *(undefined1 *)(param_1 + 0xb84) = 1;
      *(undefined4 *)(iVar7 + 0x7db4) = 0;
      *(undefined4 *)(iVar7 + 0x7db0) = 0x1010102;
      puVar17 = (uint *)(iVar5 + 0x7a15U & 0xfffffffc);
      uVar4 = *puVar17;
      *puVar17 = uVar4 & ~(0xff << iVar25);
      if (((int)uVar4 >> iVar25 & 0xffU) == 0) {
        FUN_ram_48105438(param_1,param_4);
        if (*(char *)(param_1 + 0x91c) != '\0') goto LAB_ram_48108fa6;
LAB_ram_48108d78:
        *(undefined1 *)(param_1 + 0x915) = 1;
        bVar13 = false;
      }
      else {
        *(int *)(iVar5 + 0x7a48) = *(int *)(iVar5 + 0x7a48) + 1;
        iVar25 = *(int *)(iVar5 + 0x79cc);
        piVar16 = (int *)(iVar25 + 0x5c4);
        do {
          iVar5 = *piVar16 + 1;
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          *piVar16 = iVar5;
          piVar16 = piVar16 + 0x2c;
        } while ((int *)(iVar25 + 0x7d4) != piVar16);
        FUN_ram_48105438(param_1,param_4);
        if (*(char *)(param_1 + 0x91c) == '\0') goto LAB_ram_48108d78;
LAB_ram_48108fa6:
        if ((*(char *)(param_1 + 0x914) != '\x01') ||
           (300 < (uint)(param_4 - *(int *)(param_1 + 0x918)))) goto LAB_ram_48108d78;
        bVar1 = *(byte *)(param_1 + 0x915);
        bVar13 = true;
        if (bVar1 < 2) {
          bVar13 = bVar1 == 1;
          *(byte *)(param_1 + 0x915) = bVar1 + 1;
        }
      }
      *(undefined1 *)(param_1 + 0x914) = 1;
      bVar2 = false;
    }
    else {
      *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
      *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
      *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
      *(undefined1 *)(param_1 + 0xb84) = 0;
      *(int *)(param_1 + 0xba8) = param_4;
      *(undefined4 *)(param_1 + 0xac8) = 0;
      *(undefined4 *)(param_1 + 0xacc) = 0;
      *(undefined1 *)(param_1 + 0xae9) = 0;
      *(undefined4 *)(param_1 + 0xaa4) = 0;
      *(undefined1 *)(param_1 + 0xaa8) = 0;
      *(undefined1 *)(param_1 + 0xab4) = 0;
      *(undefined4 *)(param_1 + 0xab8) = 0;
      *(undefined4 *)(param_1 + 0xabc) = 0;
      *(undefined2 *)(param_1 + 0xac0) = 0;
      FUN_ram_48105438(param_1,param_4);
      bVar2 = false;
      if ((*(char *)(param_1 + 0x91c) != '\0') &&
         (bVar2 = false, *(char *)(param_1 + 0x914) == '\x01')) {
        bVar2 = *(char *)(param_1 + 0x915) != '\0';
      }
      *(undefined2 *)(param_1 + 0x914) = 1;
      bVar13 = false;
    }
    *(int *)(param_1 + 0x918) = param_4;
    *(bool *)(param_1 + 0x91d) = bVar13;
    *(undefined1 *)(param_1 + 0x91c) = 1;
    if (bVar13 == false) {
      if ((bVar2) && (*(char *)(param_1 + 0x924) == '\x01')) {
LAB_ram_48108e24:
        iVar25 = *(int *)(param_1 + 0x920) + 1;
        if (iVar25 == 0) {
          iVar25 = 1;
        }
        *(int *)(param_1 + 0x920) = iVar25;
        *(undefined2 *)(param_1 + 0x924) = 0;
        if (bVar13 == false) {
          *(undefined1 *)(param_1 + 0xba4) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0xba4) = 1;
          FUN_ram_481055bc(param_1,&local_d4,param_4);
          FUN_ram_48107fd2(param_1,&local_d4,param_4);
          FUN_ram_4810834a(param_1,&local_d4,param_4);
        }
        *(undefined1 *)(param_1 + 0xae9) = 0;
        *(undefined4 *)(param_1 + 0xaa4) = 0;
        *(undefined1 *)(param_1 + 0xaa8) = 0;
        *(undefined1 *)(param_1 + 0xab4) = 0;
        *(undefined4 *)(param_1 + 0xab8) = 0;
        *(undefined4 *)(param_1 + 0xabc) = 0;
        *(undefined2 *)(param_1 + 0xac0) = 0;
        *(undefined4 *)(param_1 + 0xac8) = 0;
        *(undefined4 *)(param_1 + 0xacc) = 0;
        *(undefined4 *)(param_1 + 0xad0) = 0;
        *(undefined1 *)(param_1 + 0xad4) = 0;
        *(undefined1 *)(param_1 + 0xae0) = 0;
        *(undefined4 *)(param_1 + 0xae4) = 0;
        *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
        *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
        *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
        *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
        *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
        if (*(char *)(param_1 + 0xb36) != '\0') {
          if (*(char *)(param_1 + 0xb62) == '\x04') {
            if ((((*(int *)(param_1 + 0xb78) != 0) &&
                 (*(int *)(param_1 + 0xb78) == *(int *)(param_1 + 0x928))) &&
                (*(char *)(param_1 + 0x931) != '\0')) &&
               ((*(int *)(param_1 + 0x904) != 0 &&
                (*(int *)(param_1 + 0x92c) == *(int *)(param_1 + 0x904))))) goto LAB_ram_481085d6;
          }
          else if (*(char *)(param_1 + 0xb62) == '\x03') goto LAB_ram_481085d6;
          FUN_ram_480db8da(param_1,3);
        }
        goto LAB_ram_481085d6;
      }
    }
    else {
      if (*(char *)(param_1 + 0x924) == '\0') {
        *(undefined1 *)(param_1 + 0x924) = 1;
        bVar14 = false;
        if ((*(char *)(param_1 + 0xabc) != '\0') &&
           (bVar14 = false, *(char *)(param_1 + 0xac0) == '\0')) {
          bVar14 = *(char *)(param_1 + 0xaf4) == *(char *)(param_1 + 0xac1);
        }
        *(bool *)(param_1 + 0xabd) = bVar14;
        *(bool *)(param_1 + 0xae9) = bVar14;
        *(undefined4 *)(param_1 + 0xaa4) = 0;
        *(undefined1 *)(param_1 + 0xaa8) = 0;
        *(undefined1 *)(param_1 + 0xab4) = 0;
        *(undefined4 *)(param_1 + 0xab8) = 0;
        *(undefined4 *)(param_1 + 0xad0) = 0;
        *(undefined1 *)(param_1 + 0xad4) = 0;
        *(undefined1 *)(param_1 + 0xae0) = 0;
        *(undefined4 *)(param_1 + 0xae4) = 0;
        *(undefined4 *)(param_1 + 0xaac) = 0x80000000;
        *(undefined4 *)(param_1 + 0xab0) = 0x80000000;
        *(undefined4 *)(param_1 + 0xad8) = 0x80000000;
        *(undefined4 *)(param_1 + 0xadc) = 0x80000000;
      }
      else {
        *(undefined1 *)(param_1 + 0x924) = 1;
      }
      if (bVar2) goto LAB_ram_48108e24;
    }
    if (bVar13 == false) {
      *(undefined1 *)(param_1 + 0xba4) = 0;
      goto LAB_ram_481085d6;
    }
    *(undefined1 *)(param_1 + 0xba4) = 1;
    FUN_ram_481055bc(param_1,&local_d4,param_4);
  }
  FUN_ram_48107fd2(param_1,&local_d4,param_4);
  FUN_ram_4810834a(param_1,&local_d4,param_4);
LAB_ram_481085d6:
  fence();
  uVar4 = *puVar3;
  while( true ) {
    uVar8 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((uVar4 & 0xffff) == 0) break;
    bVar13 = *puVar3 == uVar4;
    uVar4 = *puVar3;
    if (bVar13) {
      *puVar3 = uVar8;
      return;
    }
  }
  return;
}



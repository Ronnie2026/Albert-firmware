/* Firmware entry: 0x4805cb5e */

undefined4
FUN_ram_4805cb5e(int param_1,int *param_2,undefined1 param_3,int param_4,undefined1 param_5,
                undefined1 param_6,int param_7,int param_8,uint *param_9,byte param_10,byte param_11
                ,byte param_12,undefined2 *param_13,undefined4 param_14)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uStack_124;
  uint uStack_120;
  short sStack_110;
  uint uStack_10c;
  int *piStack_108;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  short sStack_d8;
  undefined1 uStack_d6;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined1 uStack_ac;
  char cStack_ab;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  byte bStack_90;
  undefined1 uStack_8f;
  byte bStack_8e;
  undefined1 auStack_88 [4];
  uint auStack_84 [5];
  undefined1 uStack_70;
  undefined1 uStack_58;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_13 != (undefined2 *)0x0) {
    *(undefined4 *)(param_13 + 4) = 0;
    *(undefined4 *)(param_13 + 6) = 0;
    *param_13 = 0xff00;
  }
  fence();
  if (*(char *)(param_1 + 0x9789) != '\0') {
    return 0;
  }
  cVar1 = *(char *)((int)param_2 + 0xd);
  if (cVar1 == '\x01') {
    iVar4 = 0;
    iVar11 = 0;
    if (param_4 == 0xe) goto LAB_ram_4805d082;
LAB_ram_4805cbee:
    uVar2 = 0xb;
    if (param_8 == 0xb) {
      uStack_124 = FUN_ram_480409ae(param_2,10,0);
    }
    else {
      if ((param_8 != 5) && (uVar2 = 0, param_8 == 7)) {
        uVar2 = 0xc;
      }
      uStack_124 = FUN_ram_480409ae(param_2,uVar2,0);
    }
    if (8 < *(byte *)(param_2 + 1)) {
      return 0;
    }
    if (uStack_124 == 0) {
      return 0;
    }
    FUN_ram_48040862(&iStack_e0,uStack_124);
    iVar4 = iVar11;
    if (((char)sStack_d8 == '\0') && (uStack_124 != 0x15)) {
      sStack_110 = (short)uStack_124 + 1;
      uStack_10c = uStack_124;
    }
    else {
LAB_ram_4805cc7e:
      if (*(int *)((iVar4 * 0x16 + uStack_124) * 4 + param_1 + 0x7b4) == 0) {
        return 0;
      }
      sStack_110 = (short)uStack_124 + 1;
      uStack_10c = uStack_124;
    }
  }
  else {
    iVar4 = 1;
    if ((cVar1 != '\x02') && (iVar4 = 2, cVar1 != '\x04')) {
      return 0;
    }
    iVar11 = iVar4;
    if (param_4 != 0xe) goto LAB_ram_4805cbee;
LAB_ram_4805d082:
    if (8 < *(byte *)(param_2 + 1)) {
      return 0;
    }
    FUN_ram_48040862(&iStack_e0,0x11);
    if ((char)sStack_d8 != '\0') {
      uStack_124 = 0x11;
      goto LAB_ram_4805cc7e;
    }
    uStack_10c = 0x11;
    sStack_110 = 0x12;
  }
  piStack_108 = &iStack_e0;
  uVar6 = *param_9;
  uStack_120 = uVar6;
  if (uVar6 == 0) {
    uVar7 = *(int *)(param_1 + 0x93f0) + 1;
    uVar3 = uVar7 & 0xffffff;
    if ((uVar7 & 0xffffff) == 0) {
      uVar3 = 1;
    }
    uStack_120 = param_8 << 0x18 | uVar3;
    *(uint *)(param_1 + 0x93f0) = uVar3;
  }
  memset(&sStack_d8,0,0x98);
  iStack_cc = param_2[1];
  iStack_c8 = param_2[2];
  iStack_c4 = param_2[3];
  iStack_bc = param_2[5];
  iStack_b8 = param_2[6];
  iStack_c0 = param_2[4];
  iStack_b4 = param_2[7];
  iStack_b0 = param_2[8];
  iStack_d0 = *param_2;
  cVar1 = *(char *)((int)param_2 + 0xd);
  uStack_ac = (undefined1)param_4;
  auStack_88[0] = 8;
  uStack_70 = 8;
  uStack_58 = 8;
  cStack_ab = '\0';
  if (cVar1 == '\x01') {
    if ((iStack_d0 == 0x3fd) && ((char)param_2[1] != '\0')) {
      bVar5 = *(byte *)((int)param_2 + 5) & 7;
      if (bVar5 == 1) {
        if (param_8 == 1) {
          cStack_ab = (param_4 == 1) << 1;
        }
      }
      else if (bVar5 == 2) {
        if (param_8 == 4) {
          if (param_4 == 2) {
            cStack_ab = '\x03';
          }
        }
        else if ((((param_8 == 1) && (param_4 == 1)) && ((char)param_2[1] == '\b')) &&
                ((char)*(byte *)((int)param_2 + 5) < '\0')) {
          cStack_ab = '\x03';
        }
      }
    }
  }
  else if (cVar1 == '\x02') {
    if (iStack_d0 == 0x3c2) {
      if (((char)param_2[1] != '\0') && ((*(byte *)((int)param_2 + 5) & 3) == 1)) {
        cStack_ab = (param_8 == 2) << 2;
      }
    }
    else if (((iStack_d0 == 0x679) && (param_8 == 0x10)) && (param_4 == 0xf)) {
      cStack_ab = '\a';
    }
  }
  else if (cVar1 == '\x04') {
    if (iStack_d0 == 0x370) {
      if ((param_8 == 0xd) && (param_4 == 10)) {
        cStack_ab = '\x05';
      }
    }
    else if (((iStack_d0 == 0x30a) && (param_8 == 10)) && (param_4 == 0xb)) {
      cStack_ab = '\x06';
    }
  }
  bStack_90 = param_12 | param_7 != 0;
  uStack_a0 = uStack_120;
  uStack_a9 = param_5;
  uStack_a8 = param_6;
  iStack_a4 = param_7;
  FUN_ram_48040862(&uStack_f8,uStack_10c);
  if (((char)uStack_f0 == '\0') && (uStack_10c != 0x15)) {
    uStack_9c = *(uint *)((iVar4 + 0x270) * 4 + param_1 + 4);
  }
  else {
    uStack_9c = *(uint *)((iVar4 * 0x16 + uStack_10c + 0x22c) * 4 + param_1 + 0xc);
  }
  uStack_94 = param_14;
  iVar11 = (uStack_10c + iVar4 * 0x16) * 8 + param_1;
  piVar10 = (int *)((iVar4 * 0x16 + uStack_10c) * 8 + 0x5a4 + param_1);
  iVar12 = *piVar10;
  if ((uStack_120 != *(uint *)(iVar11 + 0x5a8)) && (iVar12 = iVar12 + 1, iVar12 == 0)) {
    iVar12 = 1;
  }
  uStack_d6 = (undefined1)uStack_10c;
  sStack_d8 = sStack_110;
  uStack_dc = *(undefined4 *)((iVar4 * 0x16 + uStack_10c) * 4 + param_1 + 0x7b4);
  if ((param_11 & param_10) != param_11) {
    return 0;
  }
  uStack_8f = param_11 != 0;
  puVar8 = (uint *)(param_1 + 0x9d8);
  uVar3 = 0;
  do {
    if ((param_10 >> (uVar3 & 0x1f) & 1) != 0) {
      if (*(byte *)((int)puVar8 + 0x22) == 0) {
        return 0;
      }
      if ((byte)puVar8[4] != *(byte *)((int)param_2 + 0xd)) {
        return 0;
      }
      if (*(byte *)((int)puVar8 + 0x11) != uStack_10c) {
        return 0;
      }
      if (puVar8[5] != uStack_9c) {
        return 0;
      }
      if ((param_11 >> (uVar3 & 0x1f) & 1) != 0) {
        uVar7 = (uint)bStack_8e;
        if (uVar7 == 3) {
          return 0;
        }
        uVar13 = (uint)(byte)*puVar8;
        if (7 < uVar13) {
          return 0;
        }
        if (puVar8[2] == 0 && puVar8[3] == 0) {
          return 0;
        }
        if (*(char *)(uVar13 * 0x120 + param_1 + 0x4000 + 0x30d6) == '\0') {
          return 0;
        }
        iVar4 = param_1 + uVar13 * 0x120;
        if (*(uint *)(iVar4 + 0x70c8) != puVar8[2]) {
          return 0;
        }
        if (*(uint *)(iVar4 + 0x70cc) != puVar8[3]) {
          return 0;
        }
        if (*(char *)(iVar4 + 0x70d8) != '\0') {
          return 0;
        }
        uStack_e8 = puVar8[7];
        if (uStack_e8 == 0) {
          uStack_e8 = 1;
        }
        iVar4 = uVar13 * 0x120 + 0x70b8 + param_1;
        if (((*(int *)(iVar4 + 0x30) != 0 || *(int *)(iVar4 + 0x34) != 0) &&
            (*(char *)(iVar4 + 0x29) != -1)) &&
           (uStack_e8 != *(uint *)(param_1 + uVar13 * 0x120 + 0x70d0))) {
          return 0;
        }
        iVar4 = uVar13 * 0x120 + param_1 + 0x4000;
        bStack_8e = bStack_8e + 1;
        uStack_f8 = *puVar8;
        uStack_f4 = puVar8[1];
        uStack_f0 = puVar8[2];
        *(undefined1 *)(iVar4 + 0x30d7) = 1;
        *(uint *)(iVar4 + 0x30d0) = uStack_e8;
        uStack_ec = puVar8[3];
        *(byte *)((int)puVar8 + 0x23) = 1;
        auStack_84[uVar7 * 6 + 3] = uStack_e8;
        *(uint *)(auStack_88 + uVar7 * 0x18) = uStack_f8;
        auStack_84[uVar7 * 6] = uStack_f4;
        auStack_84[uVar7 * 6 + 1] = uStack_f0;
        auStack_84[uVar7 * 6 + 2] = uStack_ec;
      }
    }
    uVar3 = uVar3 + 1;
    puVar8 = puVar8 + 10;
  } while (uVar3 != 8);
  iVar4 = param_1 + 0xb20;
  iStack_e0 = iVar12;
  uStack_98 = param_3;
  FUN_ram_4ff3ec14(iVar4,0xffffffff);
  iVar9 = uStack_10c * 0x48 + param_1;
  *(int *)(iVar9 + 0xbe4) = *(int *)(iVar9 + 0xbe4) + 1;
  uVar2 = FUN_ram_48025b94();
  *(undefined4 *)(iVar9 + 0xc10) = uVar2;
  *(int *)(iVar9 + 0xbec) = *(int *)(iVar9 + 0xbec) + 1;
  uVar2 = FUN_ram_48025b94();
  *(undefined4 *)(iVar9 + 0xc14) = uVar2;
  FUN_ram_4ff3ee10(iVar4);
  iVar9 = FUN_ram_4805c8d2(param_1,piStack_108,uStack_10c,param_10);
  if (iVar9 != 0) {
    FUN_ram_48046c88(&uStack_f8,param_1 + 0x3a40,piStack_108,param_11 != 0);
    if ((uStack_f8 & 0xff) != 0) {
      *(undefined2 *)(iVar9 + 0x18) = (undefined2)uStack_f0;
      *(uint *)(iVar9 + 0x20) = uStack_e8;
      *(undefined4 *)(iVar9 + 0x24) = uStack_e4;
      if (param_13 != (undefined2 *)0x0) {
        *param_13 = (undefined2)uStack_f0;
        *(uint *)(param_13 + 4) = uStack_e8;
        *(undefined4 *)(param_13 + 6) = uStack_e4;
      }
      *piVar10 = iVar12;
      *(uint *)(iVar11 + 0x5a8) = uStack_120;
      *param_9 = uStack_120;
      return 1;
    }
    FUN_ram_4805c7fc(param_1,iVar9);
  }
  FUN_ram_4ff3ec14(iVar4,0xffffffff);
  iVar11 = uStack_10c * 0x48 + param_1;
  *(int *)(iVar11 + 0xbf8) = *(int *)(iVar11 + 0xbf8) + 1;
  FUN_ram_4ff3ee10(iVar4);
  if (uVar6 == 0) {
    *param_9 = 0;
  }
  cVar1 = *(char *)((int)param_2 + 0xd);
  iVar11 = 1;
  if (cVar1 == '\x01') {
    FUN_ram_4ff3ec14(iVar4,0xffffffff);
    iVar11 = 0;
    iVar12 = *(int *)(param_1 + 0x1378) + 1;
  }
  else if (cVar1 == '\x02') {
    FUN_ram_4ff3ec14(iVar4,0xffffffff);
    iVar12 = *(int *)(param_1 + 0x1378) + 1;
  }
  else {
    if (cVar1 != '\x04') {
      FUN_ram_4ff3ec14(iVar4,0xffffffff);
      *(int *)(param_1 + 0x1378) = *(int *)(param_1 + 0x1378) + 1;
      goto LAB_ram_4805d06a;
    }
    FUN_ram_4ff3ec14();
    iVar12 = *(int *)(param_1 + 0x1378) + 1;
    iVar11 = 2;
  }
  iVar11 = param_1 + iVar11 * 4;
  *(int *)(param_1 + 0x1378) = iVar12;
  *(int *)(iVar11 + 0x1394) = *(int *)(iVar11 + 0x1394) + 1;
LAB_ram_4805d06a:
  FUN_ram_4ff3ee10(iVar4);
  return 0;
}



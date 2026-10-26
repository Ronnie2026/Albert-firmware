/* Firmware entry: 0x480c5c90 */

int FUN_ram_480c5c90(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte bVar12;
  undefined4 *puVar13;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  undefined1 local_130;
  undefined1 uStack_12f;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined4 uStack_124;
  int iStack_f4;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined1 uStack_ba;
  char acStack_b8 [4];
  undefined4 local_b4 [5];
  char cStack_9d;
  char cStack_5f;
  char cStack_54;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  puVar13 = (undefined4 *)(iVar1 + 0xb38);
  puVar10 = &local_c4;
  do {
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar8 = puVar13[3];
    *puVar10 = *puVar13;
    puVar10[1] = uVar5;
    puVar10[2] = uVar6;
    puVar10[3] = uVar8;
    puVar13 = puVar13 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar13 != (undefined4 *)(iVar1 + 0xbd8));
  *puVar10 = *puVar13;
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  iVar1 = FUN_ram_48025ba6();
  uVar11 = *(uint *)(param_2 + 0x40);
  uVar14 = uVar11 >> 0x18;
  if (uVar14 == 5) {
    if ((uVar11 == param_1[0x6e]) && (local_c4._1_1_ == '\f')) {
      uVar11 = FUN_ram_480c5ac8(param_1,&local_c4,iVar1,param_1 + 0x6f);
      return ((uVar11 ^ 1) & 0x3f) << 2;
    }
    return 4;
  }
  if (uVar14 != 7) {
    if (uVar14 != 2) {
      return 4;
    }
    if (uVar11 != param_1[400]) {
      return 4;
    }
    *(char *)(param_2 + 0xc) = (char)(uVar11 >> 0x18);
    if (param_1[0x19b] != param_1[0x143]) {
      return 4;
    }
    if (param_1[0x19c] != param_1[0x145]) {
      return 4;
    }
    *(undefined1 *)(param_2 + 0xc) = 0x46;
    if (0 < param_3 - param_1[0x19f]) {
      return 4;
    }
    pcVar15 = (char *)param_1[0x1c4];
    if (pcVar15 == (char *)0x0) {
      return 4;
    }
    pcVar7 = pcVar15 + 0x7400;
    while (((*pcVar15 == '\0' || (uVar11 != *(uint *)(pcVar15 + 4))) || (*(int *)(pcVar15 + 8) != 0)
           )) {
      pcVar15 = pcVar15 + 0xe8;
      if (pcVar7 == pcVar15) {
        return 4;
      }
    }
    if ((char)param_1[0x1c2] == '\0') {
      cVar9 = *(char *)((int)param_1 + 0x709);
      if (cVar9 == '\0') {
        cVar9 = (char)param_1[0x1b0];
        if (cVar9 == '\0') {
          return 0;
        }
        if (param_1[0x1c7] != param_1[0x1c0]) {
          return 4;
        }
        goto LAB_ram_480c5fb4;
      }
      if (param_1[0x1bf] != param_1[0x1c6]) {
        return 4;
      }
      if ((char)param_1[0x1b0] != '\0') goto LAB_ram_480c6096;
    }
    else {
      if (param_1[0x1be] != param_1[0x1c5]) {
        return 4;
      }
      cVar9 = *(char *)((int)param_1 + 0x709);
      if (cVar9 == '\0') {
        if (((char)param_1[0x1b0] != '\0') && (param_1[0x1c0] != param_1[0x1c7])) {
          return 4;
        }
      }
      else {
        if (param_1[0x1c6] != param_1[0x1bf]) {
          return 4;
        }
        if ((char)param_1[0x1b0] != '\0') {
LAB_ram_480c6096:
          if (param_1[0x1c0] != param_1[0x1c7]) {
            return 4;
          }
          if ((char)param_1[0x1c2] == '\0') goto LAB_ram_480c5f08;
        }
      }
      if ((char)param_1[0x79] == '\0') {
        return 4;
      }
      if ((char)param_1[0x1ae] != *(char *)((int)param_1 + 0x1e7)) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6b9) != (char)param_1[0x7a]) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6ba) != *(char *)((int)param_1 + 0x1e9)) {
        return 4;
      }
      iVar4 = FUN_ram_480c5ac8(param_1,&local_c4,iVar1,param_1 + 0x1ae);
      if (iVar4 == 0) {
        return 4;
      }
      cVar9 = *(char *)((int)param_1 + 0x709);
    }
LAB_ram_480c5f08:
    if (cVar9 != '\0') {
      if ((char)param_1[0xa1] == '\0') {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x28b) != *(char *)((int)param_1 + 0x6bb)) {
        return 4;
      }
      if ((char)param_1[0x1af] != (char)param_1[0xa3]) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6bd) != *(char *)((int)param_1 + 0x28d)) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6be) != *(char *)((int)param_1 + 0x28e)) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6bf) != *(char *)((int)param_1 + 0x28f)) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x28b) != '\x02') {
        if (cStack_9d == '\0') {
          return 4;
        }
        if (cStack_54 == '\0') {
          return 4;
        }
        if (param_1[99] != 0) {
          return 4;
        }
        if (param_1[0x6e] != 0) {
          return 4;
        }
        if ((char)param_1[0x79] != '\0') {
          return 4;
        }
        if (*(char *)((int)param_1 + 0x9e) != '\0') {
          return 4;
        }
        iVar4 = *(int *)(*param_1 + 0x7c64);
        if (iVar4 == 0) {
          return 4;
        }
        if (0x28a < (uint)(iVar1 - iVar4)) {
          return 4;
        }
        if (3 < (byte)(*(char *)(*param_1 + 0x7c58) - 3U)) {
          return 4;
        }
      }
    }
    cVar9 = (char)param_1[0x1b0];
LAB_ram_480c5fb4:
    if (cVar9 != '\0') {
      piVar2 = param_1 + 0xae;
      iVar4 = param_1[0x1c1];
      FUN_ram_4804a1e6(&local_130,piVar2,iVar1);
      if (iVar4 != iStack_f4) {
        return 4;
      }
      if ((char)param_1[0x1d9] != cVar9) {
        return 4;
      }
      if (param_1[0x1ba] != param_1[0x1e3]) {
        return 4;
      }
      if (((param_1[0x1bb] ^ param_1[0x1e4]) & 0xffffU) != 0) {
        return 4;
      }
      if (*(char *)((int)param_1 + 0x6f3) != *(char *)((int)param_1 + 0x797)) {
        return 4;
      }
      if (cVar9 == '\x02') {
        if (cStack_5f == '\0') {
          return 4;
        }
        FUN_ram_480c5b9e(&local_130,param_1,&local_c4);
        iVar4 = FUN_ram_4804a128(piVar2);
        if (iVar4 != 1) {
          return 4;
        }
        iVar4 = FUN_ram_48031012(&local_130);
        if (iVar4 == 0) {
          return 4;
        }
        if (uStack_12e._1_1_ == '\0') {
          return 4;
        }
        iVar4 = FUN_ram_4804a410(piVar2,iVar1);
        if (iVar4 == 0) {
          return 4;
        }
        if ((char)param_1[0xb9] == '\0') {
          return 4;
        }
        if (300 < (uint)(iVar1 - param_1[0xba])) {
          return 4;
        }
      }
      if ((char)param_1[0x1b0] == '\x01') {
        FUN_ram_480c5b9e(&local_130,param_1,&local_c4);
        uVar11 = FUN_ram_4804a44e(piVar2,param_1 + 0x1b1,iVar1,&local_130);
        return ((uVar11 ^ 1) & 0x3f) << 2;
      }
    }
    return 0;
  }
  if (uVar11 != param_1[0x1cf]) {
    return 4;
  }
  uStack_12f = uStack_ba;
  local_130 = 1;
  uStack_128 = 1;
  uStack_124 = 1;
  uStack_12e = &sedeleg;
  uStack_12c = 0x100;
  if ((acStack_b8[0] == '\0') || (iVar4 = FUN_ram_48045922(param_1[1],2,0), iVar4 == 0)) {
    uStack_12e = (undefined *)((ushort)uStack_12e & 0xff00);
    iVar4 = 0;
    if (local_c4._1_1_ != '\f') goto LAB_ram_480c5df4;
  }
  else {
    bVar12 = 0;
    if (local_c4._1_1_ == '\f') goto LAB_ram_480c5e14;
LAB_ram_480c5df4:
    iVar3 = FUN_ram_48045922(param_1[1],1,0);
    if (iVar3 != 0) {
      bVar12 = (byte)iVar4 ^ 1;
      uStack_12c = CONCAT31(uStack_12c._1_3_,acStack_b8[0]) ^ 1;
      goto LAB_ram_480c5e14;
    }
    uStack_12e = (undefined *)((ushort)uStack_12e & 0xff);
  }
  uStack_12c = CONCAT31(uStack_12c._1_3_,acStack_b8[0]) ^ 1;
  bVar12 = 1;
LAB_ram_480c5e14:
  piVar16 = (int *)param_1[1];
  piVar2 = piVar16 + 0x297;
  uStack_12c = CONCAT13(bVar12,(undefined3)uStack_12c);
  FUN_ram_4ff3ec14(piVar2,0xffffffff);
  piVar16 = (int *)*piVar16;
  FUN_ram_4ff3ee10(piVar2);
  uVar5 = 0;
  if (piVar16 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar16 + 0x154))(piVar16,2);
  }
  uStack_124 = uVar5;
  uVar11 = FUN_ram_4804a44e(param_1 + 0xae,param_1 + 0x1d0,iVar1,&local_130);
  return ((uVar11 ^ 1) & 0x3f) << 2;
}



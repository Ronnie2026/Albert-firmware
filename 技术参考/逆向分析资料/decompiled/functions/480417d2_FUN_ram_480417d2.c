/* Firmware entry: 0x480417d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480417d2(char *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  byte local_48;
  byte bStack_47;
  byte bStack_46;
  char cStack_45;
  char acStack_44 [2];
  undefined2 uStack_42;
  byte bStack_40;
  byte bStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  undefined1 uStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  byte abStack_2a [34];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (0x16 < param_2 - 0x28) {
    return 0;
  }
  if ((0x440411U >> (param_2 - 0x28 & 0x1f) & 1) == 0) {
    return 0;
  }
  if (*param_1 != 'A') {
    return 0;
  }
  if (param_1[1] != 'M') {
    return 0;
  }
  if (param_1[2] != 'B') {
    return 0;
  }
  if (param_2 == 0x32) {
    if (param_1[3] != '3') {
      return 0;
    }
    if (param_1[4] != '\x03') {
      return 0;
    }
LAB_ram_48041a6e:
    uVar11 = (uint)(byte)param_1[5];
    if (7 < uVar11) {
      return 0;
    }
  }
  else {
    if (param_2 < 0x33) {
      if (param_2 == 0x28) {
        if (param_1[3] != '1') {
          return 0;
        }
        if (param_1[4] != '\x01') {
          return 0;
        }
        uVar11 = (uint)(byte)param_1[5];
        if (3 < uVar11) {
          return 0;
        }
        goto LAB_ram_48041860;
      }
      if (param_2 == 0x2c) {
        if (param_1[3] != '2') {
          return 0;
        }
        if (param_1[4] != '\x02') {
          return 0;
        }
        uVar11 = (uint)(byte)param_1[5];
        if (7 < uVar11) {
          return 0;
        }
        goto LAB_ram_48041860;
      }
    }
    else if (param_2 == 0x3a) {
      if (param_1[3] != '4') {
        return 0;
      }
      if (param_1[4] != '\x04') {
        return 0;
      }
      goto LAB_ram_48041a6e;
    }
    if (param_1[3] != '5') {
      return 0;
    }
    if (param_1[4] != '\x05') {
      return 0;
    }
    uVar11 = (uint)(byte)param_1[5];
    if (7 < uVar11) {
      return 0;
    }
    if ((0xc < param_2 - 0x32) || ((0x1101U >> (param_2 - 0x32 & 0x1f) & 1) == 0))
    goto LAB_ram_48041860;
  }
  if (3 < (byte)param_1[0x28]) {
    return 0;
  }
  if ((param_2 & 0xfffffffb) == 0x3a) {
    if (1 < (byte)param_1[0x2e]) {
      return 0;
    }
    if (4 < (byte)param_1[0x2f]) {
      return 0;
    }
    if (1 < (byte)param_1[0x30]) {
      return 0;
    }
    if (0x5a < (byte)(param_1[0x31] - 10U)) {
      return 0;
    }
    if (2 < (byte)param_1[0x32]) {
      return 0;
    }
    if (0x3e < (byte)(param_1[0x33] - 1U)) {
      return 0;
    }
    if (param_2 == 0x3a) {
      if (param_1[0x34] != '\0') {
        return 0;
      }
      cVar5 = param_1[0x35];
    }
    else {
      if (param_1[0x37] != '\0') {
        return 0;
      }
      if (param_1[0x38] != '\0') {
        return 0;
      }
      cVar5 = param_1[0x39];
    }
    if (cVar5 != '\0') {
      return 0;
    }
  }
LAB_ram_48041860:
  pbVar16 = (byte *)(param_1 + (param_2 - 4));
  uVar12 = 0;
  uVar8 = 0;
  do {
    bVar1 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    uVar13 = uVar12 & 0x1f;
    uVar12 = uVar12 + 8;
    uVar8 = uVar8 | (uint)bVar1 << uVar13;
  } while (uVar12 != 0x20);
  uVar13 = 0x811c9dc5;
  uVar12 = 0;
  do {
    pbVar16 = (byte *)(param_1 + uVar12);
    uVar12 = uVar12 + 1;
    uVar13 = (*pbVar16 ^ uVar13) * 0x1000193;
  } while (uVar12 < param_2 - 4);
  if (uVar8 == uVar13) {
    pbVar16 = &local_48;
    puVar7 = &DAT_ram_48222ef0;
    do {
      puVar14 = puVar7;
      pbVar15 = pbVar16;
      uVar18 = puVar14[1];
      uVar9 = puVar14[2];
      uVar17 = puVar14[3];
      *(undefined4 *)pbVar15 = *puVar14;
      *(undefined4 *)(pbVar15 + 4) = uVar18;
      *(undefined4 *)(pbVar15 + 8) = uVar9;
      *(undefined4 *)(pbVar15 + 0xc) = uVar17;
      pbVar16 = pbVar15 + 0x10;
      puVar7 = puVar14 + 4;
    } while (puVar14 + 4 != (undefined4 *)&UNK_ram_48222f20);
    uVar6 = *(undefined2 *)(puVar14 + 5);
    *(undefined4 *)(pbVar15 + 0x10) = _UNK_ram_48222f20;
    *(undefined2 *)(pbVar15 + 0x14) = uVar6;
    bStack_47 = (byte)(uVar11 >> 1) & 1;
    local_48 = (byte)uVar11 & 1;
    if (param_2 != 0x28) {
      uStack_42 = *(undefined2 *)(param_1 + 0x26);
      cStack_45 = param_1[0x24];
      acStack_44[0] = param_1[0x25];
      bStack_46 = (byte)(uVar11 >> 2) & 1;
      if (((param_2 & 0xfffffff7) == 0x32) || (param_2 == 0x3e)) {
        cStack_3e = param_1[0x29];
        cStack_3d = param_1[0x2a];
        cStack_3c = param_1[0x2b];
        cStack_3b = param_1[0x2c];
        cStack_3a = param_1[0x2d];
        bStack_3f = (byte)param_1[0x28] >> 1 & 1;
        bStack_40 = param_1[0x28] & 1;
        if (param_2 == 0x3a) {
          cStack_38 = param_1[0x2f];
          cStack_37 = param_1[0x30];
          cStack_36 = param_1[0x31];
          cStack_35 = param_1[0x32];
          cStack_34 = param_1[0x33];
          uStack_39 = param_1[0x2e] != '\0';
        }
        else if (param_2 == 0x3e) {
          cStack_38 = param_1[0x2f];
          cStack_37 = param_1[0x30];
          cStack_36 = param_1[0x31];
          cStack_35 = param_1[0x32];
          cStack_34 = param_1[0x33];
          cStack_33 = param_1[0x34];
          cStack_32 = param_1[0x35];
          cStack_31 = param_1[0x36];
          uStack_39 = param_1[0x2e] != '\0';
        }
      }
    }
    pbVar16 = (byte *)(param_1 + 6);
    pbVar15 = &local_48;
    do {
      if (1 < *pbVar16) {
        return 0;
      }
      bVar1 = pbVar16[1];
      bVar2 = pbVar16[2];
      bVar3 = pbVar16[3];
      bVar4 = pbVar16[4];
      pbVar15[0x18] = *pbVar16 & 1;
      pbVar15[0x19] = bVar1;
      pbVar15[0x1a] = bVar2;
      pbVar15[0x1b] = bVar3;
      pbVar15[0x1c] = bVar4;
      pbVar15 = pbVar15 + 5;
      pbVar16 = pbVar16 + 5;
    } while (pbVar15 != abStack_2a);
    iVar10 = FUN_ram_4804162c(&local_48);
    if (iVar10 != 0) {
      FUN_ram_4ff45158(param_3,&local_48,0x36);
      return iVar10;
    }
  }
  return 0;
}



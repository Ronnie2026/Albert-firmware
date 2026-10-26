/* Firmware entry: 0x480334d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480334d2(void)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int local_180;
  ushort uStack_17c;
  char acStack_17a [33];
  char acStack_159 [65];
  char acStack_118 [64];
  byte local_d8 [8];
  int iStack_d0;
  byte bStack_cc;
  undefined1 auStack_c8 [33];
  undefined1 auStack_a7 [65];
  undefined1 auStack_66 [64];
  undefined2 uStack_26;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  bVar3 = DAT_ram_4ff5c653;
  bVar1 = DAT_ram_4ff5c643;
  uVar2 = _DAT_ram_4ff5c5f4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar12 = &local_180;
  if ((char)DAT_ram_4ff5c633 < '\0') {
    uVar15 = DAT_ram_4ff5c633 & 0x7f;
LAB_ram_480334f6:
    if (0x20 < uVar15) {
      return 0;
    }
  }
  else {
    uVar15 = DAT_ram_4ff5c62c;
    if (DAT_ram_4ff5c624 != (undefined4 *)0x0) goto LAB_ram_480334f6;
  }
  if ((char)DAT_ram_4ff5c643 < '\0') {
    uVar15 = DAT_ram_4ff5c643 & 0x7f;
  }
  else {
    uVar15 = DAT_ram_4ff5c63c;
    if (DAT_ram_4ff5c634 == (undefined4 *)0x0) goto LAB_ram_48033514;
  }
  if (0x40 < uVar15) {
    return 0;
  }
LAB_ram_48033514:
  if ((char)DAT_ram_4ff5c653 < '\0') {
    uVar15 = DAT_ram_4ff5c653 & 0x7f;
  }
  else {
    uVar15 = DAT_ram_4ff5c64c;
    if (DAT_ram_4ff5c644 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if ((7 < uVar15) && (uVar15 < 0x40)) {
    puVar14 = &DAT_ram_48222dd0;
    do {
      uVar4 = puVar14[1];
      uVar17 = puVar14[2];
      uVar16 = puVar14[3];
      uVar5 = puVar14[4];
      uVar10 = puVar14[5];
      *piVar12 = *puVar14;
      piVar12[1] = uVar4;
      piVar12[2] = uVar17;
      piVar12[3] = uVar16;
      piVar12[4] = uVar5;
      piVar12[5] = uVar10;
      puVar14 = puVar14 + 6;
      piVar12 = piVar12 + 6;
    } while (puVar14 != &DAT_ram_48222e78);
    iVar18 = DAT_ram_4ff5c5ec + 1;
    if (iVar18 == 0) {
      iVar18 = 1;
    }
    uStack_17c = _DAT_ram_4ff5c5f4;
    if ((char)DAT_ram_4ff5c633 < '\0') {
      puVar14 = &DAT_ram_4ff5c624;
      iVar11 = (DAT_ram_4ff5c633 & 0x7f) + 1;
    }
    else {
      iVar11 = 1;
      puVar14 = DAT_ram_4ff5c624;
      if (DAT_ram_4ff5c624 != (undefined4 *)0x0) {
        iVar11 = DAT_ram_4ff5c62c + 1;
      }
    }
    local_180 = iVar18;
    FUN_ram_4ff45158(acStack_17a,puVar14,iVar11);
    if ((char)bVar1 < '\0') {
      puVar14 = &DAT_ram_4ff5c634;
      iVar11 = (DAT_ram_4ff5c643 & 0x7f) + 1;
    }
    else {
      iVar11 = 1;
      puVar14 = DAT_ram_4ff5c634;
      if (DAT_ram_4ff5c634 != (undefined4 *)0x0) {
        iVar11 = DAT_ram_4ff5c63c + 1;
      }
    }
    FUN_ram_4ff45158(acStack_159,puVar14,iVar11);
    if ((char)bVar3 < '\0') {
      puVar14 = &DAT_ram_4ff5c644;
      iVar11 = (DAT_ram_4ff5c653 & 0x7f) + 1;
    }
    else {
      iVar11 = 1;
      puVar14 = DAT_ram_4ff5c644;
      if (DAT_ram_4ff5c644 != (undefined4 *)0x0) {
        iVar11 = DAT_ram_4ff5c64c + 1;
      }
    }
    FUN_ram_4ff45158(acStack_118,puVar14,iVar11);
    memset(local_d8,0,0xb6);
    pvVar6 = memchr(acStack_17a,0,0x21);
    if ((((pvVar6 != (void *)0x0) && (pvVar6 = memchr(acStack_159,0,0x41), pvVar6 != (void *)0x0))
        && (pvVar6 = memchr(acStack_118,0,0x40), pvVar6 != (void *)0x0)) &&
       ((sVar7 = strlen(acStack_118), 7 < sVar7 && (((uVar2 & 1) == 0 || (acStack_17a[0] != '\0'))))
       )) {
      bStack_cc = (byte)(uVar2 >> 7) & 2 | (byte)uVar2 & 1;
      local_d8[0] = 0x50;
      local_d8[1] = 0x34;
      local_d8[2] = 0x4e;
      local_d8[3] = 0x31;
      local_d8[6] = 0xb6;
      local_d8[4] = 1;
      iStack_d0 = iVar18;
      sVar8 = strlen(acStack_17a);
      FUN_ram_4ff45158(auStack_c8,acStack_17a,sVar8);
      sVar8 = strlen(acStack_159);
      FUN_ram_4ff45158(auStack_a7,acStack_159,sVar8);
      FUN_ram_4ff45158(auStack_66,acStack_118,sVar7);
      pbVar13 = local_d8;
      uVar15 = 0x811c9dc5;
      do {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        uVar15 = (uVar15 ^ bVar1) * 0x1000193;
      } while (pbVar13 != (byte *)&uStack_26);
      uStack_26 = (undefined2)uVar15;
      uStack_24 = (undefined1)(uVar15 >> 0x10);
      uStack_23 = (undefined1)(uVar15 >> 0x18);
      iVar11 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40NET",0,0);
      if (iVar11 != 0) {
        iVar9 = FUN_ram_48122518(&DAT_ram_4ff6dec8,"recordV1",local_d8,0xb6);
        FUN_ram_48122142(&DAT_ram_4ff6dec8);
        if (iVar9 == 0xb6) {
          DAT_ram_4ff5c5f0 = "stored";
          DAT_ram_4ff5c5ec = iVar18;
          return iVar11;
        }
      }
    }
  }
  return 0;
}



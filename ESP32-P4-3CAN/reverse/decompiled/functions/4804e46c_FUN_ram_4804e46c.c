/* Firmware entry: 0x4804e46c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4804e46c(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_7c [20];
  uint uStack_2c;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff5caa8 == '\0') {
    return 0;
  }
  if ((DAT_ram_4ff5cac6 != '\x02') && (1 < (byte)(DAT_ram_4ff5cac6 - 5U))) {
    return 0;
  }
  if (DAT_ram_4ff6dd78 == '\0') {
    return 0;
  }
  if (DAT_ram_4ff6dd51 == '\0') {
    return 0;
  }
  if (DAT_ram_4ff6dd4a == '\0') {
    return 0;
  }
  if (DAT_ram_4ff6dd36 == '\0') {
    return 0;
  }
  iVar3 = FUN_ram_4802feee();
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = (uint)DAT_ram_4ff47e54;
  if (uVar1 == 0) {
    return 0;
  }
  iVar3 = FUN_ram_4ff453ae(DAT_ram_4ff5c5f0,"stored");
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec0,"B40NAG",1,0);
  if ((iVar3 == 0) && (iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec0,"B40NAG",0,0), iVar3 == 0)) {
    return 0;
  }
  iVar4 = FUN_ram_48122930(&DAT_ram_4ff6dec0,"config");
  iVar3 = FUN_ram_48122736(&DAT_ram_4ff6dec0,"config");
  if (iVar3 != 0) {
    if (iVar4 != 0x54) {
      if (iVar4 == 0x5c) {
        piVar9 = local_7c;
        piVar11 = &DAT_ram_48222fa0;
        do {
          piVar10 = piVar11;
          piVar8 = piVar9;
          iVar3 = piVar10[1];
          iVar4 = piVar10[2];
          iVar7 = piVar10[3];
          *piVar8 = *piVar10;
          piVar8[1] = iVar3;
          piVar8[2] = iVar4;
          piVar8[3] = iVar7;
          piVar9 = piVar8 + 4;
          piVar11 = piVar10 + 4;
        } while (piVar10 + 4 != (int *)&UNK_ram_48222ff0);
        iVar3 = piVar10[5];
        piVar8[6] = piVar10[6];
        piVar8[4] = _UNK_ram_48222ff0;
        piVar8[5] = iVar3;
        iVar3 = FUN_ram_481229e0(&DAT_ram_4ff6dec0,"config",local_7c,0x5c);
        if (((iVar3 != 0x5c) || (local_7c[0] != 0x4e414750)) || (local_7c[1] != 0x500001))
        goto LAB_ram_4804e6c6;
        uVar5 = 0x811c9dc5;
        iVar3 = 0;
        do {
          pbVar6 = (byte *)((int)local_7c + iVar3);
          iVar3 = iVar3 + 1;
          uVar5 = (uVar5 ^ *pbVar6) * 0x1000193;
        } while (iVar3 != 0x58);
        if (uStack_24 != uVar5) goto LAB_ram_4804e6c6;
        goto LAB_ram_4804e548;
      }
      goto LAB_ram_4804e6c6;
    }
    piVar11 = &DAT_ram_48222d7c;
    piVar9 = local_7c;
    do {
      iVar3 = piVar11[1];
      iVar4 = piVar11[2];
      iVar7 = piVar11[3];
      *piVar9 = *piVar11;
      piVar9[1] = iVar3;
      piVar9[2] = iVar4;
      piVar9[3] = iVar7;
      piVar11 = piVar11 + 4;
      piVar9 = piVar9 + 4;
    } while (piVar11 != (int *)&DAT_ram_48222dcc);
    *piVar9 = _DAT_ram_48222dcc;
    iVar3 = FUN_ram_481229e0(&DAT_ram_4ff6dec0,"config",local_7c,0x54);
    if (((iVar3 != 0x54) || (local_7c[0] != 0x4e414750)) || (local_7c[1] != 0x480002))
    goto LAB_ram_4804e6c6;
    uVar5 = 0x811c9dc5;
    iVar3 = 0;
    do {
      pbVar6 = (byte *)((int)local_7c + iVar3);
      iVar3 = iVar3 + 1;
      uVar5 = (uVar5 ^ *pbVar6) * 0x1000193;
    } while (iVar3 != 0x50);
    if (uStack_2c != uVar5) goto LAB_ram_4804e6c6;
    iVar4 = FUN_ram_4804e2a8(local_7c + 2);
  }
  if (iVar4 == 0) {
LAB_ram_4804e548:
    FUN_ram_48122142(&DAT_ram_4ff6dec0);
    iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6deb8,"B40FOG",1,0);
    if ((iVar3 != 0) || (iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6deb8,"B40FOG",0,0), iVar3 != 0)) {
      FUN_ram_4812279a(&DAT_ram_4ff6deb8,"fog_brk",0);
      FUN_ram_4812279a(&DAT_ram_4ff6deb8,"fog_rev",0);
      FUN_ram_4812279a(&DAT_ram_4ff6deb8,"fog_pilot",0);
      FUN_ram_4812279a(&DAT_ram_4ff6deb8,"fog_steady",0);
      sVar2 = FUN_ram_48122772(&DAT_ram_4ff6deb8,"fog_mild",0x50);
      uVar5 = FUN_ram_48122772(&DAT_ram_4ff6deb8,"fog_hard",0xfa);
      if ((0xaa < (ushort)(sVar2 - 0x1eU)) ||
         ((400 < (uVar5 - 100 & 0xffff) || (uVar5 < (ushort)(sVar2 + 0x14))))) {
        FUN_ram_48122142(&DAT_ram_4ff6deb8);
        return 0;
      }
      FUN_ram_48122142(&DAT_ram_4ff6deb8);
    }
    iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",1,0);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0), iVar3 == 0)) {
      return 0;
    }
    uVar5 = FUN_ram_48122736(&DAT_ram_4ff6dec8,"bpre_m");
    iVar3 = FUN_ram_4812274a(&DAT_ram_4ff6dec8,"bpre_m",0x2d);
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
    if (uVar5 == 0) {
      return uVar1;
    }
    if (iVar3 != 0xf) {
      if (0x1e < (iVar3 - 0x1eU & 0xff)) {
        return 0;
      }
      uVar1 = 0x40008001U >> (iVar3 - 0x1eU & 0x1f) & 1;
      if (uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
    return uVar5;
  }
LAB_ram_4804e6c6:
  FUN_ram_48122142(&DAT_ram_4ff6dec0);
  return 0;
}



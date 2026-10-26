/* Firmware entry: 0x4807e948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4807e948(void)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  uint uStack_158;
  uint uStack_154;
  byte local_150 [4];
  undefined4 auStack_14c [15];
  byte bStack_110;
  undefined1 auStack_10f [71];
  byte local_c8 [4];
  undefined4 auStack_c4 [15];
  byte bStack_88;
  char local_87 [67];
  int iStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4ff3a286();
  iVar5 = DAT_ram_4ff6de38;
  DAT_ram_4ff47e90 = iVar4;
  DAT_ram_4ff47e94 = iVar4;
  DAT_ram_4ff47e98 = iVar4;
  memset((void *)(DAT_ram_4ff6de38 + 0x2148),0,0x49c);
  pcVar18 = &DAT_ram_4ff5c7ec;
  pbVar3 = (byte *)&DAT_ram_4ff5c6e0;
  DAT_ram_4ff5c7ec = 0;
  DAT_ram_4ff5c724 = 0;
  DAT_ram_4ff5c6e0._0_1_ = 0;
  DAT_ram_4ff5c688 = 0;
  DAT_ram_4ff47e8c = "unavailable";
  DAT_ram_4ff5c69c = 0;
  iVar6 = DAT_ram_4ff47e94;
  if (iVar4 != 0) goto LAB_ram_4807e9fa;
  DAT_ram_4ff47e94 = FUN_ram_4ff39b40(iVar5 + 0x2148);
  DAT_ram_4ff47e90 = FUN_ram_4ff39a8c(&DAT_ram_4ff5c724,200);
  iVar5 = DAT_ram_4ff6de38;
  if (DAT_ram_4ff47e90 != 0) {
    DAT_ram_4ff5c724 = 0;
  }
  iVar6 = DAT_ram_4ff47e94;
  if (DAT_ram_4ff47e94 != 0) goto LAB_ram_4807e9fa;
  if (*(int *)(DAT_ram_4ff6de38 + 0x215c) == 0) {
    iVar6 = 0x108;
    goto LAB_ram_4807e9fa;
  }
  iVar6 = 0x104;
  if (0x400 < *(uint *)(DAT_ram_4ff6de38 + 0x2560)) goto LAB_ram_4807e9fa;
  pbVar8 = local_c8;
  puVar2 = &DAT_ram_48223994;
  do {
    puVar16 = puVar2;
    pbVar10 = pbVar8;
    uVar11 = puVar16[1];
    uVar7 = puVar16[2];
    uVar9 = puVar16[3];
    *(undefined4 *)pbVar10 = *puVar16;
    *(undefined4 *)(pbVar10 + 4) = uVar11;
    *(undefined4 *)(pbVar10 + 8) = uVar7;
    *(undefined4 *)(pbVar10 + 0xc) = uVar9;
    pbVar8 = pbVar10 + 0x10;
    puVar2 = puVar16 + 4;
  } while (puVar16 + 4 != (undefined4 *)&UNK_ram_48223a14);
  uVar7 = puVar16[5];
  *(undefined4 *)(pbVar10 + 0x10) = _UNK_ram_48223a14;
  *(undefined4 *)(pbVar10 + 0x14) = uVar7;
  iVar6 = 0;
  do {
    if (*(char *)(iVar6 + 0x2568 + DAT_ram_4ff6de38) == '\0') {
      if (iVar6 != 0) {
        pcVar12 = (char *)(DAT_ram_4ff6de38 + 0x2568);
        pcVar17 = pcVar12 + iVar6;
        pcVar13 = local_87;
        goto LAB_ram_4807ed1c;
      }
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x41);
  pbVar8 = local_150;
  pbVar10 = local_c8;
  do {
    uVar11 = *(undefined4 *)(pbVar10 + 4);
    uVar7 = *(undefined4 *)(pbVar10 + 8);
    uVar9 = *(undefined4 *)(pbVar10 + 0xc);
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
    *(undefined4 *)(pbVar8 + 4) = uVar11;
    *(undefined4 *)(pbVar8 + 8) = uVar7;
    *(undefined4 *)(pbVar8 + 0xc) = uVar9;
    pbVar10 = pbVar10 + 0x10;
    pbVar8 = pbVar8 + 0x10;
  } while (pbVar10 != (byte *)(local_87 + 0x3f));
  goto LAB_ram_4807ec6e;
LAB_ram_4807ed1c:
  do {
    cVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    if ((9 < (byte)(cVar14 - 0x30U)) && (5 < (byte)(cVar14 + 0x9fU))) {
      if (5 < (byte)(cVar14 + 0xbfU)) {
        memset(local_150,0,0x88);
        goto LAB_ram_4807ec76;
      }
      cVar14 = cVar14 + ' ';
    }
    *pcVar13 = cVar14;
    pcVar13 = pcVar13 + 1;
  } while (pcVar12 != pcVar17);
  local_87[iVar6] = '\0';
  if (iVar6 == 0x40) {
    FUN_ram_4ff45158(local_c8,local_87,0x41);
  }
  pbVar8 = local_150;
  iStack_44 = iVar6;
  pbVar10 = local_c8;
  do {
    uVar11 = *(undefined4 *)(pbVar10 + 4);
    uVar7 = *(undefined4 *)(pbVar10 + 8);
    uVar9 = *(undefined4 *)(pbVar10 + 0xc);
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
    *(undefined4 *)(pbVar8 + 4) = uVar11;
    *(undefined4 *)(pbVar8 + 8) = uVar7;
    *(undefined4 *)(pbVar8 + 0xc) = uVar9;
    pbVar10 = pbVar10 + 0x10;
    pbVar8 = pbVar8 + 0x10;
  } while (pbVar10 != (byte *)(local_87 + 0x3f));
LAB_ram_4807ec6e:
  uVar7 = *(undefined4 *)(pbVar10 + 4);
  *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
  *(undefined4 *)(pbVar8 + 4) = uVar7;
LAB_ram_4807ec76:
  pbVar10 = local_150;
  pbVar8 = pbVar3;
  do {
    uVar11 = *(undefined4 *)(pbVar10 + 4);
    uVar7 = *(undefined4 *)(pbVar10 + 8);
    uVar9 = *(undefined4 *)(pbVar10 + 0xc);
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
    *(undefined4 *)(pbVar8 + 4) = uVar11;
    *(undefined4 *)(pbVar8 + 8) = uVar7;
    *(undefined4 *)(pbVar8 + 0xc) = uVar9;
    pbVar10 = pbVar10 + 0x10;
    pbVar8 = pbVar8 + 0x10;
  } while (pbVar10 != &bStack_110);
  *pbVar8 = *pbVar10;
  FUN_ram_4ff45158(&DAT_ram_4ff5c69c,auStack_10f,0x41);
  FUN_ram_4ff45158(&DAT_ram_4ff5c688,iVar5 + 0x214c,0x10);
  DAT_ram_4ff5c698 = 0;
  DAT_ram_4ff47e8c = "idf_summary";
  iVar6 = DAT_ram_4ff47e94;
LAB_ram_4807e9fa:
  DAT_ram_4ff47e94 = iVar6;
  uStack_158 = 0;
  uStack_154 = 0;
  DAT_ram_4ff47e9c = FUN_ram_4ff3a592(&uStack_158,&uStack_154);
  DAT_ram_4ff6ddf8 = uStack_158;
  DAT_ram_4ff6ddf4 = 0;
  if ((DAT_ram_4ff47e9c == 0) && (uStack_154 != 0)) {
    iVar5 = FUN_ram_4812e1d6(1,3,0);
    if (((iVar5 == 0) ||
        (((uVar15 = *(uint *)(iVar5 + 0xc), uStack_158 < uVar15 ||
          (*(uint *)(iVar5 + 0x10) < uStack_158 - uVar15)) ||
         ((uVar15 + *(uint *)(iVar5 + 0x10)) - uStack_158 < uStack_154)))) || (0x10000 < uStack_154)
       ) {
      DAT_ram_4ff47e9c = 0x104;
    }
    else {
      DAT_ram_4ff6ddfc = FUN_ram_4ff206d8(uStack_154,0x404);
      if (DAT_ram_4ff6ddfc == 0) {
        DAT_ram_4ff47e9c = 0x101;
        DAT_ram_4ff6ddfc = 0;
      }
      else {
        DAT_ram_4ff47e9c =
             FUN_ram_4812e734(iVar5,uStack_158 - *(int *)(iVar5 + 0xc),DAT_ram_4ff6ddfc,uStack_154);
        if (DAT_ram_4ff47e9c == 0) {
          pbVar8 = local_150;
          DAT_ram_4ff6ddf4 = uStack_154;
          local_150[0] = 0;
          local_150[1] = 0;
          local_150[2] = 0;
          local_150[3] = 0;
          auStack_14c[0] = 0;
          auStack_14c[1] = 0;
          auStack_14c[2] = 0;
          auStack_14c[3] = 0;
          auStack_14c[4] = 0;
          auStack_14c[5] = 0;
          auStack_14c[6] = 0;
          iVar6 = FUN_ram_4817b062(DAT_ram_4ff6ddfc,uStack_154,pbVar8,0);
          iVar5 = DAT_ram_4ff6ddfc;
          if (iVar6 == 0) {
            do {
              bVar1 = *pbVar8;
              pcVar13 = pcVar18 + 2;
              pbVar8 = pbVar8 + 1;
              cVar14 = "0123456789abcdef"[bVar1 & 0xf];
              *pcVar18 = "0123456789abcdef"[bVar1 >> 4];
              pcVar18[1] = cVar14;
              pcVar18 = pcVar13;
            } while (pcVar13 != &DAT_ram_4ff5c82c);
            DAT_ram_4ff5c82c = 0;
            FUN_ram_4807e37a(local_c8,iVar5,DAT_ram_4ff6ddf4);
            if (iStack_44 == 0) {
              return;
            }
            pbVar8 = local_c8;
            do {
              uVar7 = *(undefined4 *)(pbVar8 + 4);
              uVar9 = *(undefined4 *)(pbVar8 + 8);
              uVar11 = *(undefined4 *)(pbVar8 + 0xc);
              *(undefined4 *)pbVar3 = *(undefined4 *)pbVar8;
              *(undefined4 *)(pbVar3 + 4) = uVar7;
              *(undefined4 *)(pbVar3 + 8) = uVar9;
              *(undefined4 *)(pbVar3 + 0xc) = uVar11;
              pbVar8 = pbVar8 + 0x10;
              pbVar3 = pbVar3 + 0x10;
            } while (pbVar8 != &bStack_88);
            *pbVar3 = *pbVar8;
            FUN_ram_4ff45158(&DAT_ram_4ff5c69c,local_87,0x41);
            DAT_ram_4ff47e8c = "crc_valid_raw_elf_note";
            return;
          }
          DAT_ram_4ff6ddf4 = 0;
          DAT_ram_4ff47e9c = -1;
        }
        FUN_ram_4ff209c6(DAT_ram_4ff6ddfc);
        DAT_ram_4ff6ddfc = 0;
      }
    }
  }
  return;
}



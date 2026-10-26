/* Firmware entry: 0x4808d958 */

/* WARNING: Type propagation algorithm not settling */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_developer_4808d958(void)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  undefined1 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  undefined4 *******apppppppuStack_1a8 [2];
  uint uStack_1a0;
  byte bStack_199;
  byte local_198 [32];
  undefined1 auStack_178 [16];
  byte local_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined1 *puStack_104;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  byte local_d8 [64];
  byte abStack_98 [4];
  undefined1 auStack_94 [104];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_168[0] = 0;
  local_168[1] = 0;
  local_168[2] = 0;
  local_168[3] = 0;
  local_168[4] = 0;
  local_168[5] = 0;
  local_168[6] = 0;
  local_168[7] = 0;
  local_168[8] = 0;
  local_168[9] = 0;
  local_168[10] = 0;
  local_168[0xb] = 0;
  local_168[0xc] = 0;
  local_168[0xd] = 0;
  local_168[0xe] = 0;
  local_168[0xf] = 0;
  local_168[0x10] = 0;
  local_168[0x11] = 0;
  local_168[0x12] = 0;
  local_168[0x13] = 0;
  local_168[0x14] = 0;
  local_168[0x15] = 0;
  local_168[0x16] = 0;
  local_168[0x17] = 0;
  local_168[0x18] = 0;
  local_168[0x19] = 0;
  local_168[0x1a] = 0;
  local_168[0x1b] = 0;
  local_168[0x1c] = 0;
  local_168[0x1d] = 0;
  local_168[0x1e] = 0;
  local_168[0x1f] = 0;
  FUN_ram_48033124(local_168);
  FUN_ram_4802a8a8(local_d8,"lock");
  iVar8 = FUN_ram_4802b18e(local_d8,"plain");
  iVar22 = DAT_ram_4ff5cbe8;
  iVar9 = DAT_ram_4ff5cbdc;
  if ((iVar8 == 0) ||
     (iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar8 + 0xcc2) == '\0')) {
    iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar8 + 0x1cc4) != 0) {
      puVar19 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar21 = 0;
      do {
        iVar10 = FUN_ram_4802b18e(local_d8,*puVar19);
        if (iVar10 != 0) {
          FUN_ram_4802a8a8(auStack_94,*(undefined4 *)(iVar22 + (iVar9 * 0x3a8 + uVar21) * 8 + 0xcc8)
                          );
          goto LAB_ram_4808d9f0;
        }
        uVar21 = uVar21 + 1;
        puVar19 = puVar19 + 2;
      } while (uVar21 < *(uint *)(iVar8 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_94,&DAT_ram_481df390);
  }
  else {
    puVar12 = *(undefined1 **)(iVar8 + 0x43c);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_94,puVar12,*(undefined4 *)(iVar8 + 0x438));
  }
LAB_ram_4808d9f0:
  iVar9 = FUN_ram_4802b18e(auStack_94,"1");
  FUN_ram_4802a59e(auStack_94);
  FUN_ram_4802a59e(local_d8);
  if (iVar9 != 0) {
    iVar9 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
    piVar23 = (int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
    if (iVar9 == 0) {
      pbVar14 = (byte *)0x0;
      iVar9 = 0;
    }
    else {
      iVar22 = 0;
      piVar7 = piVar23;
      do {
        if (*piVar7 == 0xe) {
          pbVar14 = (byte *)piVar7[1];
          pcVar13 = "X-P4-Developer";
          uVar21 = 0x58;
          while( true ) {
            pcVar13 = pcVar13 + 1;
            uVar16 = (uint)*pbVar14;
            if ((uVar16 - 0x41 & 0xff) < 0x1a) {
              uVar16 = uVar16 + 0x20;
            }
            if ((uVar21 - 0x41 & 0xff) < 0x1a) {
              uVar21 = uVar21 + 0x20;
            }
            if (uVar21 != uVar16) break;
            pbVar14 = pbVar14 + 1;
            if ((byte *)pcVar13 == (byte *)0x481cb652) {
              iVar9 = piVar23[iVar22 * 4 + 2];
              pbVar14 = (byte *)piVar23[iVar22 * 4 + 3];
              goto LAB_ram_4808deb6;
            }
            uVar21 = (uint)(byte)*pcVar13;
          }
        }
        iVar22 = iVar22 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar22 != iVar9);
      pbVar14 = (byte *)0x0;
      iVar9 = 0;
    }
LAB_ram_4808deb6:
    iVar22 = FUN_ram_48025ba6();
    if ((DAT_ram_4ff5be0c != '\0') && ((uint)(iVar22 - DAT_ram_4ff5be04) < 900000)) {
      if (iVar9 != 0x20) goto LAB_ram_4808df54;
      pbVar17 = (byte *)&DAT_ram_4ff5bdc0;
      pbVar18 = local_168;
      bVar20 = 0;
      do {
        bVar3 = *pbVar14;
        bVar4 = *pbVar17;
        bVar6 = *pbVar18;
        pbVar2 = pbVar17 + 0x21;
        pbVar17 = pbVar17 + 1;
        pbVar14 = pbVar14 + 1;
        pbVar18 = pbVar18 + 1;
        bVar20 = bVar20 | bVar3 ^ bVar4 | bVar6 ^ *pbVar2;
      } while (pbVar17 != &DAT_ram_4ff5bde0);
      if (bVar20 != 0) goto LAB_ram_4808df54;
    }
    DAT_ram_4ff5be0c = '\0';
    DAT_ram_4ff5bdc0 = 0;
    DAT_ram_4ff5bdc4 = 0;
    DAT_ram_4ff5bdc8 = 0;
    DAT_ram_4ff5bdcc = 0;
    DAT_ram_4ff5bdd0 = 0;
    DAT_ram_4ff5bdd4 = 0;
    DAT_ram_4ff5bdd8 = 0;
    DAT_ram_4ff5bddc = 0;
    DAT_ram_4ff5bde0 = 0;
    memset(&DAT_ram_4ff5bde1,0,0x20);
LAB_ram_4808df54:
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json","{\"ok\":true}",0xb);
    return;
  }
  iVar9 = FUN_ram_48025ba6();
  if (4 < DAT_ram_4ff5be01) {
    if ((uint)(iVar9 - DAT_ram_4ff5be08) < 30000) {
      FUN_ram_4808cb66(0x1ad,"developer_throttled");
      return;
    }
    DAT_ram_4ff5be01 = 0;
  }
  FUN_ram_4802a8a8(auStack_94,"password");
  iVar8 = FUN_ram_4802b18e(auStack_94,"plain");
  iVar22 = DAT_ram_4ff5cbe8;
  iVar9 = DAT_ram_4ff5cbdc;
  if ((iVar8 == 0) ||
     (iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar8 + 0xcc2) == '\0')) {
    iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar8 + 0x1cc4) != 0) {
      puVar19 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
      uVar21 = 0;
      do {
        iVar10 = FUN_ram_4802b18e(auStack_94,*puVar19);
        if (iVar10 != 0) {
          FUN_ram_4802a8a8(apppppppuStack_1a8,
                           *(undefined4 *)(iVar22 + (iVar9 * 0x3a8 + uVar21) * 8 + 0xcc8));
          goto LAB_ram_4808daea;
        }
        uVar21 = uVar21 + 1;
        puVar19 = puVar19 + 2;
      } while (uVar21 < *(uint *)(iVar8 + 0x1cc4));
    }
    FUN_ram_4802a8a8(apppppppuStack_1a8,&DAT_ram_481df390);
  }
  else {
    puVar12 = *(undefined1 **)(iVar8 + 0x43c);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(apppppppuStack_1a8,puVar12,*(undefined4 *)(iVar8 + 0x438));
  }
LAB_ram_4808daea:
  FUN_ram_4802a59e(auStack_94);
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  memset(local_d8,0,0x41);
  if ((char)bStack_199 < '\0') {
    uStack_1a0 = bStack_199 & 0x7f;
    apppppppuStack_1a8[0] = apppppppuStack_1a8;
    if ((int)((uint)bStack_199 << 0x19) < 1) goto LAB_ram_4808dbe4;
  }
  else if ((apppppppuStack_1a8[0] == (undefined4 *******)0x0) || (0x3e < uStack_1a0 - 1)) {
LAB_ram_4808dbe4:
    bVar1 = false;
    goto LAB_ram_4808dbec;
  }
  puVar19 = &local_148;
  FUN_ram_4817b062(apppppppuStack_1a8[0],uStack_1a0,puVar19,0);
  pbVar14 = local_d8;
  do {
    pbVar18 = pbVar14 + 2;
    FUN_ram_4819ad74(pbVar14,3,&DAT_ram_481c3b70,*(undefined1 *)puVar19);
    puVar19 = (undefined4 *)((int)puVar19 + 1);
    pbVar14 = pbVar18;
  } while (pbVar18 != abStack_98);
  bVar1 = true;
LAB_ram_4808dbec:
  pbVar14 = &DAT_ram_481f5530;
  pbVar18 = local_d8;
  bVar20 = 0;
  do {
    bVar3 = *pbVar18;
    bVar4 = *pbVar14;
    pbVar18 = pbVar18 + 1;
    pbVar14 = pbVar14 + 1;
    bVar20 = bVar20 | bVar3 ^ bVar4;
  } while (abStack_98 != pbVar18);
  local_198[0] = 0;
  local_198[1] = 0;
  local_198[2] = 0;
  local_198[3] = 0;
  local_198[4] = 0;
  local_198[5] = 0;
  local_198[6] = 0;
  local_198[7] = 0;
  local_198[8] = 0;
  local_198[9] = 0;
  local_198[10] = 0;
  local_198[0xb] = 0;
  local_198[0xc] = 0;
  local_198[0xd] = 0;
  local_198[0xe] = 0;
  local_198[0xf] = 0;
  FUN_ram_48132f46(local_198,0x10);
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  if ((bVar1) && (bVar20 == 0)) {
    iVar9 = FUN_ram_48025ba6();
    if ((DAT_ram_4ff5be01 < 5) || (29999 < (uint)(iVar9 - DAT_ram_4ff5be08))) {
      DAT_ram_4ff5be01 = 0;
      pbVar14 = local_198;
      pcVar13 = (char *)&DAT_ram_4ff5bdc0;
      do {
        bVar20 = *pbVar14;
        pcVar15 = pcVar13 + 2;
        pbVar14 = pbVar14 + 1;
        cVar5 = "0123456789abcdef"[bVar20 & 0xf];
        *pcVar13 = "0123456789abcdef"[bVar20 >> 4];
        pcVar13[1] = cVar5;
        pcVar13 = pcVar15;
      } while (pcVar15 != &DAT_ram_4ff5bde0);
      uStack_128 = DAT_ram_4ff5bdc0;
      uStack_120 = DAT_ram_4ff5bdc8;
      uStack_11c = DAT_ram_4ff5bdcc;
      uStack_124 = DAT_ram_4ff5bdc4;
      uStack_118 = DAT_ram_4ff5bdd0;
      uStack_114 = DAT_ram_4ff5bdd4;
      uStack_110 = DAT_ram_4ff5bdd8;
      uStack_10c = DAT_ram_4ff5bddc;
      DAT_ram_4ff5bde0 = 0;
      uStack_108 = 0;
      FUN_ram_4ff45158(&DAT_ram_4ff5bde1,local_168,0x20);
      local_148 = 0;
      DAT_ram_4ff5be0c = 1;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      DAT_ram_4ff5be04 = iVar9;
      memset(local_d8,0,0x41);
      memset(auStack_94,0,100);
      auStack_94[0] = 0x7b;
      uStack_100 = 100;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 1;
      uStack_fc = 1;
      uStack_f4 = 1;
      uStack_e8 = 1;
      iStack_f8 = 1;
      puStack_104 = auStack_94;
      FUN_ram_4808c2dc(&puStack_104,&DAT_ram_481c4274,1);
      sVar11 = strlen((char *)&uStack_128);
      FUN_ram_4808c96e(&puStack_104,"developerToken",&uStack_128,sVar11);
      puVar12 = puStack_104;
      uVar21 = uStack_fc;
      if (((((char)uStack_dc != '\0') && (iStack_f8 == 1)) && ((char)uStack_e8 != '\0')) &&
         ((uStack_fc <= uStack_100 && (1 < uStack_100 - uStack_fc)))) {
        uVar21 = uStack_fc + 1;
        puStack_104[uStack_fc] = 0x7d;
        puStack_104[uVar21] = 0;
      }
      FUN_ram_4802a8a8(local_198 + 0x10,"Cache-Control");
      FUN_ram_4802a8a8(auStack_178,"no-store");
      FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,local_198 + 0x10,auStack_178);
      FUN_ram_4802a59e(auStack_178);
      FUN_ram_4802a59e(local_198 + 0x10);
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json",puVar12,uVar21);
      FUN_ram_4802a59e(apppppppuStack_1a8);
      return;
    }
  }
  else {
    iVar9 = FUN_ram_48025ba6();
    if (DAT_ram_4ff5be01 < 5) {
      bVar20 = DAT_ram_4ff5be01 + 1;
      bVar1 = DAT_ram_4ff5be01 == 4;
      DAT_ram_4ff5be01 = bVar20;
      if (bVar1) {
        DAT_ram_4ff5be08 = iVar9;
      }
    }
    else if (29999 < (uint)(iVar9 - DAT_ram_4ff5be08)) {
      DAT_ram_4ff5be01 = 1;
    }
  }
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  memset(local_d8,0,0x41);
  FUN_ram_4808cb66(0x193,"developer_password");
  FUN_ram_4802a59e(apppppppuStack_1a8);
  return;
}



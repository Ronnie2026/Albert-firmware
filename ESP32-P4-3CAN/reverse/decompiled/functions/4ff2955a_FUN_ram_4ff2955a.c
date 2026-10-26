/* Firmware entry: 0x4ff2955a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2955a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint local_168 [77];
  
  iVar4 = mhartid;
  iVar3 = cycle;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = mhartid * 0x2a0;
  pbVar22 = &DAT_ram_4ff4cbd8 + iVar5;
  memset(pbVar22,0,0x2a0);
  uVar7 = DAT_ram_4ff6b764;
  *(undefined4 *)(&DAT_ram_4ff4cbe4 + iVar5) = param_1;
  *(int *)(&DAT_ram_4ff4cbe8 + iVar5) = param_7;
  *(undefined4 *)(&DAT_ram_4ff4cbf0 + iVar5) = param_2;
  *(undefined4 *)(&DAT_ram_4ff4cbf4 + iVar5) = param_3;
  *(undefined4 *)(&DAT_ram_4ff4cc00 + iVar5) = param_4;
  *(undefined4 *)(&DAT_ram_4ff4cc04 + iVar5) = param_5;
  *(undefined4 *)(&DAT_ram_4ff4cc08 + iVar5) = param_6;
  pbVar22[0] = 0x46;
  pbVar22[1] = 0x43;
  pbVar22[2] = 0x34;
  pbVar22[3] = 0x50;
  *(undefined4 *)(&DAT_ram_4ff4cbe0 + iVar5) = uVar7;
  *(undefined4 *)(&DAT_ram_4ff4cbdc + iVar5) = 1;
  *(int *)(&DAT_ram_4ff4cc0c + iVar5) = cycle;
  fence();
  if (DAT_ram_4ff6dff0 != 0) {
    iVar15 = 0x1000;
    do {
      iVar23 = DAT_ram_4ff6dffc;
      DAT_ram_4ff6dffc = 1;
      if (iVar23 == 0) {
        iVar15 = FUN_ram_4ff2d694(DAT_ram_4ff6dff0,&DAT_ram_4ff4cbf8 + iVar5);
        if (iVar15 == 0) {
          *(undefined4 *)(&DAT_ram_4ff4cc10 + iVar4 * 0x2a0) = 1;
        }
        fence();
        DAT_ram_4ff6dffc = 0;
        break;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  uVar26 = DAT_ram_4ff6b758;
  uVar21 = DAT_ram_4ff6b754;
  uVar13 = DAT_ram_4ff6b750;
  uVar10 = DAT_ram_4ff6b74c;
  uVar20 = DAT_ram_4ff6b748;
  uVar8 = DAT_ram_4ff6b744;
  uVar7 = DAT_ram_4ff6b740;
  puVar25 = (undefined4 *)(&DAT_ram_4ff4cc14 + iVar5);
  *puVar25 = DAT_ram_4ff6b73c;
  *(undefined4 *)(&DAT_ram_4ff4cc28 + iVar5) = uVar13;
  *(undefined4 *)(&DAT_ram_4ff4cc30 + iVar5) = uVar26;
  *(undefined4 *)(&DAT_ram_4ff4cc18 + iVar5) = uVar7;
  *(undefined4 *)(&DAT_ram_4ff4cc1c + iVar5) = uVar8;
  *(undefined4 *)(&DAT_ram_4ff4cc20 + iVar5) = uVar20;
  *(undefined4 *)(&DAT_ram_4ff4cc24 + iVar5) = uVar10;
  *(undefined4 *)(&DAT_ram_4ff4cc2c + iVar5) = uVar21;
  uVar17 = 0x811c9dc5;
  pbVar14 = pbVar22;
  do {
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    uVar17 = (uVar17 ^ bVar1) * 0x1000193;
  } while (pbVar14 != &DAT_ram_4ff4cc34 + iVar5);
  puVar6 = (undefined4 *)(&DAT_ram_4ff6dfe8)[iVar4];
  (&DAT_ram_4ff6dfe8)[iVar4] = 0;
  *(uint *)(&DAT_ram_4ff4cc34 + iVar4 * 0x2a0) = uVar17;
  if (puVar6 != (undefined4 *)0x0) {
    puVar18 = (undefined4 *)(&DAT_ram_4ff4cc38 + iVar4 * 0x2a0);
    puVar24 = puVar6;
    do {
      uVar20 = puVar24[1];
      uVar7 = puVar24[2];
      uVar8 = puVar24[3];
      *puVar18 = *puVar24;
      puVar18[1] = uVar20;
      puVar18[2] = uVar7;
      puVar18[3] = uVar8;
      puVar24 = puVar24 + 4;
      puVar18 = puVar18 + 4;
    } while (puVar24 != puVar6 + 0x3c);
  }
  *(int *)(&DAT_ram_4ff4cc4c + iVar4 * 0x2a0) = iVar4;
  iVar15 = DAT_ram_4ff6e000;
  if ((param_7 != 0) || (DAT_ram_4ff6e000 = 1, iVar15 == 0)) {
    iVar15 = 0x1000;
    do {
      iVar23 = DAT_ram_4ff6e004;
      DAT_ram_4ff6e004 = 1;
      if (iVar23 == 0) {
        if ((param_7 == 0) || (fence(), DAT_ram_4ff6e000 == 0)) {
          puVar24 = &DAT_ram_50109180;
          do {
            pbVar14 = pbVar22;
            puVar18 = puVar24;
            uVar7 = *(undefined4 *)(pbVar14 + 4);
            uVar8 = *(undefined4 *)(pbVar14 + 8);
            uVar20 = *(undefined4 *)(pbVar14 + 0xc);
            *puVar18 = *(undefined4 *)pbVar14;
            puVar18[1] = uVar7;
            puVar18[2] = uVar8;
            puVar18[3] = uVar20;
            pbVar22 = pbVar14 + 0x10;
            puVar24 = puVar18 + 4;
          } while (pbVar22 != &DAT_ram_4ff4cc28 + iVar5);
          uVar7 = *(undefined4 *)(pbVar14 + 0x14);
          uVar8 = *(undefined4 *)(pbVar14 + 0x18);
          puVar18[4] = *(undefined4 *)pbVar22;
          puVar18[5] = uVar7;
          puVar18[6] = uVar8;
          iVar15 = iVar4 * 0x2a0;
          _DAT_ram_50109050 = 0;
          DAT_ram_501091dc = *(undefined4 *)(&DAT_ram_4ff4cc34 + iVar15);
          if (puVar6 != (undefined4 *)0x0) {
            memset(local_168,0,0x128);
            local_168[3] = *(undefined4 *)(&DAT_ram_4ff4cc34 + iVar15);
            local_168[2] = *(undefined4 *)(&DAT_ram_4ff4cbe0 + iVar15);
            local_168[1] = 1;
            local_168[0] = 0x50344345;
            puVar19 = (uint *)(&DAT_ram_4ff4cc38 + iVar15);
            local_168[0xb] = *(undefined4 *)(&DAT_ram_4ff4cc30 + iVar5);
            local_168[4] = *puVar25;
            local_168[5] = *(undefined4 *)(&DAT_ram_4ff4cc18 + iVar5);
            local_168[6] = *(undefined4 *)(&DAT_ram_4ff4cc1c + iVar5);
            local_168[7] = *(undefined4 *)(&DAT_ram_4ff4cc20 + iVar5);
            local_168[8] = *(undefined4 *)(&DAT_ram_4ff4cc24 + iVar5);
            local_168[9] = *(undefined4 *)(&DAT_ram_4ff4cc28 + iVar5);
            local_168[10] = *(undefined4 *)(&DAT_ram_4ff4cc2c + iVar5);
            puVar16 = local_168 + 0xc;
            do {
              uVar17 = puVar19[1];
              uVar9 = puVar19[2];
              uVar12 = puVar19[3];
              *puVar16 = *puVar19;
              puVar16[1] = uVar17;
              puVar16[2] = uVar9;
              puVar16[3] = uVar12;
              puVar19 = puVar19 + 4;
              puVar16 = puVar16 + 4;
            } while (puVar19 != (uint *)(&DAT_ram_4ff4cd28 + iVar15));
            DAT_ram_50109170 = 0x811c9dc5;
            puVar16 = local_168;
            do {
              uVar17 = *puVar16;
              puVar16 = (uint *)((int)puVar16 + 1);
              DAT_ram_50109170 = (DAT_ram_50109170 ^ (byte)uVar17) * 0x1000193;
            } while (local_168 + 0x48 != puVar16);
            local_168[0x48] = DAT_ram_50109170;
            puVar19 = local_168;
            puVar16 = (uint *)&DAT_ram_50109050;
            do {
              uVar17 = puVar19[1];
              uVar9 = puVar19[2];
              *puVar16 = *puVar19;
              uVar12 = puVar19[3];
              puVar16[1] = uVar17;
              puVar16[2] = uVar9;
              puVar16[3] = uVar12;
              puVar19 = puVar19 + 4;
              puVar16 = puVar16 + 4;
            } while (puVar19 != local_168 + 0x48);
          }
          _DAT_ram_501099b0 = 0;
          bVar2 = true;
          goto LAB_ram_4ff298a4;
        }
        fence();
        DAT_ram_4ff6e004 = 0;
        break;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  bVar2 = false;
LAB_ram_4ff298a4:
  iVar23 = iVar4 * 0x2a0;
  *(undefined4 *)(&DAT_ram_4ff4cd28 + iVar23) = 2;
  *(int *)(&DAT_ram_4ff4cd30 + iVar23) = cycle;
  iVar15 = FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,36000);
  if (iVar15 != 0) {
    puVar6 = &DAT_ram_4ff6bd68;
    puVar24 = (undefined4 *)(&DAT_ram_4ff4cd38 + iVar23);
    do {
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar20 = puVar6[3];
      *puVar24 = *puVar6;
      puVar24[1] = uVar7;
      puVar24[2] = uVar8;
      puVar24[3] = uVar20;
      puVar6 = puVar6 + 4;
      puVar24 = puVar24 + 4;
    } while (puVar6 != &DAT_ram_4ff6bdd8);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  }
  FUN_ram_4ff2b6a0(iVar5 + 0x4ff4cda8);
  iVar15 = iVar4 * 0x2a0;
  *(int *)(&DAT_ram_4ff4cd34 + iVar15) = cycle;
  *(undefined4 *)(&DAT_ram_4ff4cd2c + iVar15) = 1;
  if (bVar2) {
    iVar23 = iVar4 * 0x188;
    pbVar22 = memset((void *)(iVar23 + 0x4ff4c8c8),0,0x188);
    uVar7 = *(undefined4 *)(&DAT_ram_4ff4cbe0 + iVar15);
    uVar8 = *(undefined4 *)(&DAT_ram_4ff4cc34 + iVar15);
    pbVar22[0] = 0x52;
    pbVar22[1] = 0x43;
    pbVar22[2] = 0x34;
    pbVar22[3] = 0x50;
    *(undefined4 *)(pbVar22 + 8) = uVar7;
    *(undefined4 *)(pbVar22 + 4) = uVar8;
    uVar26 = *puVar25;
    uVar7 = *(undefined4 *)(&DAT_ram_4ff4cc18 + iVar5);
    uVar21 = *(undefined4 *)(&DAT_ram_4ff4cc1c + iVar5);
    uVar20 = *(undefined4 *)(&DAT_ram_4ff4cc24 + iVar5);
    uVar10 = *(undefined4 *)(&DAT_ram_4ff4cc28 + iVar5);
    uVar13 = *(undefined4 *)(&DAT_ram_4ff4cc2c + iVar5);
    uVar8 = *(undefined4 *)(&DAT_ram_4ff4cc20 + iVar5);
    *(undefined4 *)(&DAT_ram_4ff4c8f0 + iVar23) = *(undefined4 *)(&DAT_ram_4ff4cc30 + iVar5);
    *(undefined4 *)(&DAT_ram_4ff4c8d4 + iVar23) = uVar26;
    *(undefined4 *)(&DAT_ram_4ff4c8d8 + iVar23) = uVar7;
    *(undefined4 *)(&DAT_ram_4ff4c8dc + iVar23) = uVar21;
    *(undefined4 *)(&DAT_ram_4ff4c8e0 + iVar23) = uVar8;
    *(undefined4 *)(&DAT_ram_4ff4c8e4 + iVar23) = uVar20;
    *(undefined4 *)(&DAT_ram_4ff4c8e8 + iVar23) = uVar10;
    *(undefined4 *)(&DAT_ram_4ff4c8ec + iVar23) = uVar13;
    pbVar14 = pbVar22 + 0x30;
    puVar25 = (undefined4 *)(&DAT_ram_4ff4cd28 + iVar15);
    do {
      uVar7 = puVar25[1];
      uVar8 = puVar25[2];
      uVar20 = puVar25[3];
      *(undefined4 *)pbVar14 = *puVar25;
      *(undefined4 *)(pbVar14 + 4) = uVar7;
      *(undefined4 *)(pbVar14 + 8) = uVar8;
      *(undefined4 *)(pbVar14 + 0xc) = uVar20;
      puVar25 = puVar25 + 4;
      pbVar14 = pbVar14 + 0x10;
    } while (puVar25 != (undefined4 *)(iVar15 + 0x4ff4ce78));
    uVar17 = 0x811c9dc5;
    pbVar11 = pbVar22 + 0x180;
    pbVar14 = pbVar22;
    do {
      bVar1 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      uVar17 = (uVar17 ^ bVar1) * 0x1000193;
    } while (pbVar11 != pbVar14);
    puVar25 = (undefined4 *)&DAT_ram_501099b0;
    *(uint *)(&DAT_ram_4ff4ca48 + iVar4 * 0x188) = uVar17;
    do {
      uVar7 = *(undefined4 *)(pbVar22 + 4);
      uVar8 = *(undefined4 *)(pbVar22 + 8);
      uVar20 = *(undefined4 *)(pbVar22 + 0xc);
      *puVar25 = *(undefined4 *)pbVar22;
      puVar25[1] = uVar7;
      puVar25[2] = uVar8;
      puVar25[3] = uVar20;
      pbVar22 = pbVar22 + 0x10;
      puVar25 = puVar25 + 4;
    } while (pbVar22 != pbVar11);
    _DAT_ram_50109b30 = *(undefined4 *)(&DAT_ram_4ff4ca48 + iVar4 * 0x188);
    fence();
    DAT_ram_4ff6e004 = 0;
  }
  iVar5 = DAT_ram_4ff6e01c;
  DAT_ram_4ff6e01c = 1;
  if (iVar5 == 0) {
    puVar25 = &DAT_ram_4ff4c628;
    puVar6 = (undefined4 *)(&DAT_ram_4ff4cbd8 + iVar4 * 0x2a0);
    do {
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar20 = puVar6[3];
      *puVar25 = *puVar6;
      puVar25[1] = uVar7;
      puVar25[2] = uVar8;
      puVar25[3] = uVar20;
      puVar6 = puVar6 + 4;
      puVar25 = puVar25 + 4;
    } while (puVar6 != (undefined4 *)(iVar4 * 0x2a0 + 0x4ff4ce78));
    fence();
    DAT_ram_4ff6e018 = 1;
  }
  if (param_7 == 0) {
    FUN_ram_4ff2b3a2(param_1);
  }
  if ((uint)(&DAT_ram_4ff6e008)[iVar4] < (uint)(cycle - iVar3)) {
    (&DAT_ram_4ff6e008)[iVar4] = cycle - iVar3;
  }
  return;
}



/* Firmware entry: 0x4807e37a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4807e37a(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  uint uStack_1ec;
  undefined4 local_1d8 [16];
  undefined1 auStack_197 [63];
  undefined4 uStack_158;
  int iStack_154;
  undefined4 local_150 [16];
  undefined1 auStack_10f [63];
  undefined4 auStack_d0 [2];
  byte local_c8 [4];
  undefined4 auStack_c4 [15];
  byte abStack_87 [67];
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar7 = local_1d8;
  puVar18 = &DAT_ram_48223994;
  do {
    puVar16 = puVar18;
    puVar12 = puVar7;
    uVar3 = puVar16[1];
    uVar6 = puVar16[2];
    uVar8 = puVar16[3];
    *puVar12 = *puVar16;
    puVar12[1] = uVar3;
    puVar12[2] = uVar6;
    puVar12[3] = uVar8;
    puVar7 = puVar12 + 4;
    puVar18 = puVar16 + 4;
  } while (puVar16 + 4 != (undefined4 *)&UNK_ram_48223a14);
  uVar3 = puVar16[5];
  puVar12[4] = _UNK_ram_48223a14;
  puVar12[5] = uVar3;
  if (((param_2 == (uint *)0x0) || (0xffb0 < param_3 - 0x50)) || (param_3 != *param_2))
  goto LAB_ram_4807e404;
  puVar4 = (uint *)((param_3 - 4) + (int)param_2);
  uVar17 = 0xffffffff;
  puVar9 = param_2;
  do {
    iVar14 = 8;
    uVar17 = uVar17 ^ (byte)*puVar9;
    do {
      iVar14 = iVar14 + -1;
      uVar17 = uVar17 >> 1 ^ -(uVar17 & 1) & 0xedb88320;
    } while (iVar14 != 0);
    puVar9 = (uint *)((int)puVar9 + 1);
  } while (puVar4 != puVar9);
  if (~uVar17 != *puVar4) goto LAB_ram_4807e404;
  iVar14 = FUN_ram_4ff4511a(param_2 + 5,&DAT_ram_481c8c68,6);
  if (iVar14 == 0) {
    iVar14 = FUN_ram_4ff4511a(param_2 + 6,&DAT_ram_481c8c68,6);
    if (iVar14 == 0) goto LAB_ram_4807e4d6;
    param_3 = param_3 - 0x18;
    iVar14 = 0x14;
  }
  else {
    iVar14 = FUN_ram_4ff4511a(param_2 + 6,&DAT_ram_481c8c68,6);
    if (iVar14 != 0) goto LAB_ram_4807e404;
LAB_ram_4807e4d6:
    param_3 = param_3 - 0x1c;
    iVar14 = 0x18;
  }
  if (((((*(short *)((int)param_2 + iVar14 + 0x10) == 4) &&
        (*(short *)((int)param_2 + iVar14 + 0x12) == 0xf3)) &&
       ((*(short *)((int)param_2 + iVar14 + 0x28) == 0x34 &&
        ((*(short *)((int)param_2 + iVar14 + 0x2a) == 0x20 &&
         (uVar17 = (uint)*(ushort *)((int)param_2 + iVar14 + 0x2c), uVar17 < 0x41)))))) &&
      (uVar20 = *(uint *)((int)param_2 + iVar14 + 0x1c), uVar20 <= param_3)) &&
     (uVar17 << 5 <= param_3 - uVar20)) {
    pbVar22 = (byte *)((int)param_2 + uVar20 + iVar14);
    for (uStack_1ec = 0; uStack_1ec < uVar17; uStack_1ec = uStack_1ec + 1) {
      if (*(int *)pbVar22 == 4) {
        uVar20 = *(uint *)(pbVar22 + 4);
        if ((param_3 < uVar20) || (param_3 - uVar20 < *(uint *)(pbVar22 + 0x10))) {
LAB_ram_4807e71c:
          memset(param_1,0,0x88);
          return param_1;
        }
        uVar19 = *(uint *)(pbVar22 + 0x10) + uVar20;
LAB_ram_4807e648:
        if (uVar20 < uVar19) {
          if (0xb < uVar19 - uVar20) {
            puVar9 = (uint *)((int)param_2 + uVar20 + iVar14);
            uVar2 = *puVar9;
            uVar1 = puVar9[1];
            iVar15 = uVar20 + 0xc;
            if ((uVar2 <= uVar19 - iVar15) &&
               (uVar20 = uVar2 + 3 & 0xfffffffc, uVar20 <= uVar19 - iVar15)) {
              iVar21 = uVar20 + iVar15;
              if ((uVar1 <= uVar19 - iVar21) &&
                 (uVar20 = uVar1 + 3 & 0xfffffffc, uVar20 <= uVar19 - iVar21)) {
                if ((((puVar9[2] == 0x204a) && (uVar2 == 0x13)) &&
                    (iVar15 = FUN_ram_4ff4511a((byte *)((int)param_2 + iVar15 + iVar14),
                                               "ESP_CORE_DUMP_INFO",0x13), iVar15 == 0)) &&
                   (4 < uVar1)) {
                  iVar15 = iVar21 + 4 + iVar14;
                  pbVar5 = local_c8;
                  puVar7 = &DAT_ram_48223994;
                  do {
                    puVar18 = puVar7;
                    pbVar10 = pbVar5;
                    uVar8 = puVar18[1];
                    uVar6 = puVar18[2];
                    *(undefined4 *)pbVar10 = *puVar18;
                    uVar3 = puVar18[3];
                    *(undefined4 *)(pbVar10 + 4) = uVar8;
                    *(undefined4 *)(pbVar10 + 8) = uVar6;
                    *(undefined4 *)(pbVar10 + 0xc) = uVar3;
                    pbVar5 = pbVar10 + 0x10;
                    puVar7 = puVar18 + 4;
                  } while (puVar18 + 4 != (undefined4 *)&UNK_ram_48223a14);
                  uVar3 = puVar18[5];
                  uVar2 = 0;
                  *(undefined4 *)(pbVar10 + 0x10) = _UNK_ram_48223a14;
                  *(undefined4 *)(pbVar10 + 0x14) = uVar3;
                  do {
                    if (*(byte *)((int)param_2 + uVar2 + iVar15) == 0) {
                      if (uVar2 - 1 < 0x40) {
                        pbVar5 = local_c8;
                        uVar11 = 0;
                        if (uVar2 < uVar1 - 4) goto LAB_ram_4807e818;
                      }
                      break;
                    }
                    uVar2 = uVar2 + 1;
                  } while (uVar2 < uVar1 - 4);
                  puVar7 = local_150;
                  pbVar5 = local_c8;
                  do {
                    uVar8 = *(undefined4 *)(pbVar5 + 4);
                    uVar3 = *(undefined4 *)(pbVar5 + 8);
                    uVar6 = *(undefined4 *)(pbVar5 + 0xc);
                    *puVar7 = *(undefined4 *)pbVar5;
                    puVar7[1] = uVar8;
                    puVar7[2] = uVar3;
                    puVar7[3] = uVar6;
                    pbVar5 = pbVar5 + 0x10;
                    puVar7 = puVar7 + 4;
                  } while (pbVar5 != abStack_87 + 0x3f);
                  goto LAB_ram_4807e7ec;
                }
                goto LAB_ram_4807e6f4;
              }
            }
          }
          goto LAB_ram_4807e71c;
        }
      }
      pbVar22 = pbVar22 + 0x20;
    }
  }
LAB_ram_4807e404:
  puVar7 = param_1;
  puVar18 = local_1d8;
  do {
    puVar16 = puVar18;
    puVar12 = puVar7;
    uVar3 = puVar16[1];
    uVar6 = puVar16[2];
    uVar8 = puVar16[3];
    *puVar12 = *puVar16;
    puVar12[1] = uVar3;
    puVar12[2] = uVar6;
    puVar12[3] = uVar8;
    puVar18 = puVar16 + 4;
    puVar7 = puVar12 + 4;
  } while (puVar18 != &uStack_158);
  uVar3 = puVar16[5];
  puVar12[4] = *puVar18;
  puVar12[5] = uVar3;
  return param_1;
LAB_ram_4807e818:
  do {
    bVar13 = *(byte *)((int)param_2 + uVar11 + iVar15);
    uVar11 = uVar11 + 1;
    if ((9 < (byte)(bVar13 - 0x30)) && (5 < (byte)(bVar13 + 0x9f))) {
      if (5 < (byte)(bVar13 + 0xbf)) {
        memset(local_150,0,0x88);
        goto LAB_ram_4807e8d0;
      }
      bVar13 = bVar13 + 0x20;
    }
    pbVar5[0x41] = bVar13;
    pbVar5 = pbVar5 + 1;
  } while (uVar11 != uVar2);
  abStack_87[uVar2] = 0;
  if (uVar2 == 0x40) {
    FUN_ram_4ff45158(local_c8,abStack_87,0x41);
  }
  puVar7 = local_150;
  uStack_44 = uVar2;
  pbVar5 = local_c8;
  do {
    uVar8 = *(undefined4 *)(pbVar5 + 4);
    uVar3 = *(undefined4 *)(pbVar5 + 8);
    uVar6 = *(undefined4 *)(pbVar5 + 0xc);
    *puVar7 = *(undefined4 *)pbVar5;
    puVar7[1] = uVar8;
    puVar7[2] = uVar3;
    puVar7[3] = uVar6;
    pbVar5 = pbVar5 + 0x10;
    puVar7 = puVar7 + 4;
  } while (pbVar5 != abStack_87 + 0x3f);
LAB_ram_4807e7ec:
  uVar3 = *(undefined4 *)(pbVar5 + 4);
  *puVar7 = *(undefined4 *)pbVar5;
  puVar7[1] = uVar3;
LAB_ram_4807e8d0:
  if ((iStack_154 != 0) && (iVar15 = FUN_ram_4ff453ae(auStack_197,auStack_10f), iVar15 != 0)) {
    memset(param_1,0,0x88);
    return param_1;
  }
  puVar7 = local_1d8;
  puVar18 = local_150;
  do {
    puVar16 = puVar18;
    puVar12 = puVar7;
    uVar3 = puVar16[1];
    uVar8 = puVar16[2];
    uVar6 = puVar16[3];
    *puVar12 = *puVar16;
    puVar12[1] = uVar3;
    puVar12[2] = uVar8;
    puVar12[3] = uVar6;
    puVar18 = puVar16 + 4;
    puVar7 = puVar12 + 4;
  } while (puVar18 != auStack_d0);
  uVar3 = puVar16[5];
  puVar12[4] = *puVar18;
  puVar12[5] = uVar3;
LAB_ram_4807e6f4:
  uVar20 = iVar21 + uVar20;
  goto LAB_ram_4807e648;
}



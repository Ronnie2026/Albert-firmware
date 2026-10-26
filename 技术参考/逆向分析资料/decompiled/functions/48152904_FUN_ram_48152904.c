/* Firmware entry: 0x48152904 */

undefined4 FUN_ram_48152904(int *param_1,byte *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_7c;
  undefined4 uStack_58;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar21 = *param_1;
  uVar9 = *(uint *)(iVar21 + 0x1218);
  iStack_90 = *(int *)(iVar21 + 0x1220);
  uVar22 = *(undefined4 *)(iVar21 + 0x122c);
  uStack_98 = *(undefined4 *)(iVar21 + 0x1224);
  uVar19 = *(undefined4 *)(iVar21 + 0x1228);
  iVar20 = *(int *)(iVar21 + 0x121c);
  uVar7 = 0;
  uStack_a0 = uVar9 >> 1 & 1;
  uVar5 = *(undefined2 *)(iVar21 + 0x122c);
  uStack_88 = uVar9 >> 3 & 1;
  uStack_84 = uVar9 >> 4 & 1;
  uStack_7c = uVar9 >> 5 & 1;
  bVar4 = *(byte *)(iVar21 + 0x122e);
  uStack_9c = uVar9 >> 8 & 1;
  uStack_94 = uVar9 >> 9 & 1;
  uVar10 = uVar9 & 1;
  uVar13 = uVar19;
  uVar15 = uStack_98;
  if (((uVar9 & 3) == 2) && (param_2[1] == 10)) {
    if ((9 < param_3) && (*param_2 == 1)) {
      iVar12 = FUN_ram_48137fd6((uint)param_2[5] |
                                (((uint)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8 |
                                (uint)param_2[4]) << 8);
      param_3 = param_3 + -10;
      pbVar11 = param_2 + 7;
      puVar1 = (ushort *)(param_2 + 6);
      pbVar18 = param_2 + 9;
      pbVar2 = param_2 + 8;
      param_2 = param_2 + 10;
      iVar14 = FUN_ram_48137fd6((uint)*pbVar18 |
                                (((uint)*pbVar11 | (*puVar1 & 0xff) << 8) << 8 | (uint)*pbVar2) << 8
                               );
      uVar7 = 2;
      uVar8 = *(ushort *)(iVar21 + 0x1218);
      if (param_4 == 0) {
        if (((uVar8 & 0x40) != 0) && (iVar12 != 0)) {
          iVar20 = iVar12;
        }
        if (((uVar8 & 0x80) != 0) && (iVar14 != 0)) {
          iStack_90 = iVar14;
        }
      }
      else {
        uStack_a0 = 0;
      }
      goto LAB_ram_481529b4;
    }
    if ((*(ushort *)(iVar21 + 0x1218) & 1) != 0) goto LAB_ram_481529ce;
LAB_ram_48152a72:
    uVar8 = *(ushort *)(iVar21 + 0x1218);
LAB_ram_48152a7a:
    if (((uVar8 & 0x100) == 0) || (param_2[1] != 6)) goto LAB_ram_481529d6;
    pbVar11 = param_2;
    if (5 < param_3) {
      bVar16 = *param_2;
LAB_ram_48152a94:
      if (bVar16 == 0x81) {
        param_2 = pbVar11 + 6;
        uVar15 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                  (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) << 8
                                  | (uint)pbVar11[4]) << 8);
        uVar7 = uVar7 | 0x100;
        param_3 = param_3 + -6;
        uVar8 = *(ushort *)(iVar21 + 0x1218);
        if (param_4 != 0) {
          uStack_9c = 0;
          uVar15 = uStack_98;
        }
        goto LAB_ram_481529d6;
      }
      if ((uVar8 & 0x200) == 0) {
LAB_ram_48152da0:
        uVar17 = 6;
        goto LAB_ram_48152a0a;
      }
      if (bVar16 != 0x83) {
        uVar17 = (uint)pbVar11[1];
        goto LAB_ram_48152a0a;
      }
LAB_ram_48152dfa:
      pbVar18 = pbVar11 + 3;
      puVar1 = (ushort *)(pbVar11 + 2);
      pbVar2 = pbVar11 + 5;
      pbVar3 = pbVar11 + 4;
      pbVar11 = pbVar11 + 6;
      uVar13 = FUN_ram_48137fd6((uint)*pbVar2 |
                                (((uint)*pbVar18 | (*puVar1 & 0xff) << 8) << 8 | (uint)*pbVar3) << 8
                               );
      param_3 = param_3 + -6;
      uVar7 = uVar7 | 0x200;
      if (param_4 != 0) {
        uStack_94 = 0;
        uVar13 = uVar19;
      }
    }
LAB_ram_481529e6:
    uVar19 = uVar13;
    uVar8 = (ushort)uVar10;
    if (param_3 < 2) {
LAB_ram_48152b88:
      if ((char)param_1[4] != '\t') {
        uStack_58._0_2_ = (ushort)uVar9;
        uStack_58 = CONCAT22((short)(uVar9 >> 0x10),
                             (ushort)(uStack_a0 << 1) | uVar8 | (ushort)(uStack_88 << 3) |
                             (ushort)(uStack_84 << 4) | (ushort)(uStack_7c << 5) |
                             (ushort)(uStack_9c << 8) | (ushort)(uStack_94 << 9) |
                             (ushort)uStack_58 & 0xfcc4);
        *(undefined4 *)(iVar21 + 0x1218) = uStack_58;
        uStack_44._3_1_ = (undefined1)((uint)uVar22 >> 0x18);
        uStack_44._0_3_ = CONCAT12(bVar4,uVar5);
        *(int *)(iVar21 + 0x1220) = iStack_90;
        *(int *)(iVar21 + 0x121c) = iVar20;
        *(undefined4 *)(iVar21 + 0x1228) = uVar19;
        *(undefined4 *)(iVar21 + 0x1224) = uStack_98;
        *(undefined4 *)(iVar21 + 0x122c) = uStack_44;
      }
      return 1;
    }
  }
  else {
    uVar8 = *(ushort *)(iVar21 + 0x1218);
LAB_ram_481529b4:
    pbVar11 = param_2;
    if ((uVar8 & 8) == 0) goto LAB_ram_48152a6e;
    uVar17 = (uint)param_2[1];
    if (uVar17 != 4) {
      if (uVar17 == 6) {
        if (5 < param_3) goto LAB_ram_48152a64;
        if ((uVar8 & 1) == 0) goto LAB_ram_48152d74;
        goto LAB_ram_481529e6;
      }
      if ((uVar8 & 1) == 0) goto LAB_ram_48152a72;
LAB_ram_481529ce:
      uVar8 = *(ushort *)(iVar21 + 0x1218);
LAB_ram_481529d6:
      uStack_98 = uVar15;
      pbVar11 = param_2;
      if ((((uVar8 & 0x200) != 0) && (param_2[1] == 6)) && (5 < param_3)) {
LAB_ram_48152d92:
        bVar16 = *pbVar11;
        if (bVar16 != 0x83) goto LAB_ram_48152da0;
        goto LAB_ram_48152dfa;
      }
      goto LAB_ram_481529e6;
    }
    if (param_3 < 4) {
      if ((uVar8 & 1) != 0) goto LAB_ram_481529ce;
LAB_ram_48152d74:
      uVar8 = *(ushort *)(iVar21 + 0x1218);
      if (((uVar8 & 0x100) != 0) && (uVar17 == 6)) goto LAB_ram_481529e6;
      goto LAB_ram_481529d6;
    }
LAB_ram_48152a64:
    if (*param_2 == 2) {
      sVar6 = *(short *)(param_2 + 2);
      uVar7 = uVar7 | 8;
      param_3 = param_3 - uVar17;
      pbVar11 = param_2 + 4;
      if (param_4 == 0) {
        if (uVar17 == 6) {
          pbVar11 = param_2 + 6;
          if (sVar6 != 0x2d00) goto LAB_ram_48152ee4;
          if (param_2[4] < *(byte *)(iVar21 + 0x122e)) {
            bVar4 = param_2[4];
          }
          uStack_7c = param_2[5] != 0 & uStack_7c;
          uStack_84 = 0;
        }
        else if (sVar6 == 0x2d00) {
          uVar5 = 0x2d;
          uStack_84 = 1;
        }
        else if (sVar6 == 0x3700) {
          uVar5 = 0x37;
          uStack_84 = 1;
        }
        else {
          uStack_88 = 0;
        }
      }
      else {
LAB_ram_48152ee4:
        uStack_88 = 0;
      }
    }
LAB_ram_48152a6e:
    param_2 = pbVar11;
    if ((uVar8 & 1) == 0) goto LAB_ram_48152a72;
    if (pbVar11[1] != 6) goto LAB_ram_481529ce;
    if (param_3 < 6) goto LAB_ram_481529e6;
    bVar16 = *pbVar11;
    if (bVar16 == 3) {
      param_2 = pbVar11 + 6;
      iVar12 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) << 8 |
                                (uint)pbVar11[4]) << 8);
      uVar7 = uVar7 | 1;
      param_3 = param_3 + -6;
      uVar8 = *(ushort *)(iVar21 + 0x1218);
      if (param_4 == 0) {
        if (((uVar8 & 0x40) != 0) && (iVar12 != 0)) {
          iVar20 = iVar12;
        }
      }
      else {
        uStack_a0 = 0;
        uVar10 = 0;
      }
      goto LAB_ram_48152a7a;
    }
    uVar8 = *(ushort *)(iVar21 + 0x1218);
    if ((uVar8 & 0x100) != 0) goto LAB_ram_48152a94;
    if ((uVar8 & 0x200) != 0) goto LAB_ram_48152d92;
  }
  bVar16 = *pbVar11;
  uVar17 = (uint)pbVar11[1];
LAB_ram_48152a0a:
  do {
    uVar8 = (ushort)uVar10;
    if ((uVar17 < 2) || (param_3 = param_3 - uVar17, param_3 < 0)) {
      return 0;
    }
    pbVar18 = pbVar11 + uVar17;
    if (bVar16 == 3) {
      if (((*(ushort *)(iVar21 + 0x1218) | uVar7) & 1) != 0) {
        return 0;
      }
      if (uVar17 != 6) {
        return 0;
      }
      iVar12 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) << 8 |
                                (uint)pbVar11[4]) << 8);
      if ((iVar12 == 0) || ((*(ushort *)(iVar21 + 0x1218) & 0x40) == 0)) {
        uVar10 = uVar10 | iVar20 != 0;
      }
      else {
        uVar10 = 1;
        iVar20 = iVar12;
      }
      uStack_a0 = 0;
      uVar7 = uVar7 | 1;
LAB_ram_48152b18:
      uVar8 = (ushort)uVar10;
    }
    else {
      if (bVar16 < 4) {
        if (bVar16 == 1) {
          if ((*(uint *)(iVar21 + 0x1218) & 3) == 2) {
            return 0;
          }
          if ((uVar7 & 2) != 0) {
            return 0;
          }
          if (uVar17 != 10) {
            return 0;
          }
          iVar12 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                    (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) <<
                                     8 | (uint)pbVar11[4]) << 8);
          if ((iVar12 != 0) && ((*(ushort *)(iVar21 + 0x1218) & 0x40) != 0)) {
            iVar20 = iVar12;
          }
          iVar12 = FUN_ram_48137fd6((uint)pbVar11[9] |
                                    (((uint)pbVar11[7] | (*(ushort *)(pbVar11 + 6) & 0xff) << 8) <<
                                     8 | (uint)pbVar11[8]) << 8);
          if ((iVar12 != 0) && ((*(ushort *)(iVar21 + 0x1218) & 0x80) != 0)) {
            iStack_90 = iVar12;
          }
          uVar10 = 0;
          uVar7 = uVar7 | 2;
        }
        else if (bVar16 == 2) {
          if (((*(ushort *)(iVar21 + 0x1218) | uVar7) & 8) != 0) {
            return 0;
          }
          if ((uVar17 & 0xfd) != 4) {
            return 0;
          }
          uVar7 = uVar7 | 8;
        }
        goto LAB_ram_48152b18;
      }
      if (bVar16 == 0x81) {
        if (((*(ushort *)(iVar21 + 0x1218) | uVar7) & 0x100) != 0) {
          return 0;
        }
        if (uVar17 != 6) {
          return 0;
        }
        uStack_98 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                     (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) <<
                                      8 | (uint)pbVar11[4]) << 8);
        uStack_9c = 1;
        uVar7 = uVar7 | 0x100;
        goto LAB_ram_48152b18;
      }
      if (bVar16 != 0x83) goto LAB_ram_48152b18;
      if (((*(ushort *)(iVar21 + 0x1218) | uVar7) & 0x200) != 0) {
        return 0;
      }
      if (uVar17 != 6) {
        return 0;
      }
      uVar19 = FUN_ram_48137fd6((uint)pbVar11[5] |
                                (((uint)pbVar11[3] | (*(ushort *)(pbVar11 + 2) & 0xff) << 8) << 8 |
                                (uint)pbVar11[4]) << 8);
      uStack_94 = 1;
      uVar7 = uVar7 | 0x200;
    }
    if (param_3 < 2) goto LAB_ram_48152b88;
    bVar16 = *pbVar18;
    uVar17 = (uint)pbVar18[1];
    pbVar11 = pbVar18;
  } while( true );
}



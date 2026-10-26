/* Firmware entry: 0x480aecea */

/* WARNING: Removing unreachable block (ram,0x480af044) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_ram_480aecea(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  byte *pbStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 local_80;
  char cStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  char cStack_50;
  undefined3 uStack_4f;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48052e70();
  iVar11 = FUN_ram_48025b94();
  fence();
  fence();
  if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar11 - DAT_ram_4ff6deec))) ||
     (2000000 < (uint)(iVar11 - DAT_ram_4ff6def0))) {
    fence();
    DAT_ram_4ff6def0 = iVar11;
  }
  bVar8 = true;
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
  if ((DAT_ram_4ff5c53c == (int *)0x0) ||
     (piVar22 = DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49, piVar24 = DAT_ram_4ff5c53c,
     DAT_ram_4ff5c53c == piVar22)) {
LAB_ram_480af096:
    if (DAT_ram_4ff5c540 < 0x10000) {
      iVar21 = DAT_ram_4ff5c540 * 4;
      uStack_6c = CONCAT22((short)DAT_ram_4ff5c540,(short)DAT_ram_48223cf4);
      uStack_58._0_2_ = (undefined2)DAT_ram_48223d08;
      uStack_70 = DAT_ram_48223cf0;
      iStack_68 = DAT_ram_4ff6dd80;
      iStack_64 = DAT_ram_4ff6dd7c;
      iStack_60 = DAT_ram_4ff47e80;
      iStack_5c = DAT_ram_4ff47e7c;
      uStack_58 = CONCAT31(CONCAT12(DAT_ram_4ff47e78,(undefined2)uStack_58) >> 8,DAT_ram_4ff6dd79) ^
                  0x10000;
      iStack_8c = 0;
      iStack_88 = 0;
      iStack_84 = 0;
      FUN_ram_480aebca(&iStack_8c,iVar21 + 0x20);
      iVar12 = iStack_84;
      iVar10 = iStack_88;
      iVar17 = iStack_8c;
      FUN_ram_4ff45158(iStack_8c,&uStack_70,0x1c);
      if (DAT_ram_4ff5c53c != (int *)0x0) {
        piVar22 = DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49;
        puVar16 = (undefined1 *)(iVar17 + 0x1c);
        for (piVar24 = DAT_ram_4ff5c53c; piVar24 != piVar22; piVar24 = piVar24 + 0x49) {
          iVar15 = *piVar24;
          local_80._0_1_ = (undefined1)iVar15;
          local_80._1_1_ = (undefined1)((uint)iVar15 >> 8);
          local_80._2_1_ = (undefined1)((uint)iVar15 >> 0x10);
          local_80._3_1_ = (undefined1)((uint)iVar15 >> 0x18);
          *puVar16 = (undefined1)local_80;
          puVar16[1] = local_80._1_1_;
          puVar16[2] = local_80._2_1_;
          puVar16[3] = local_80._3_1_;
          puVar16 = puVar16 + 4;
        }
      }
      uVar23 = iVar21 + 0x1c;
      puVar19 = (undefined4 *)0x811c9dc5;
      uVar18 = 0;
      do {
        pbVar14 = (byte *)(iVar17 + uVar18);
        uVar18 = uVar18 + 1;
        puVar19 = (undefined4 *)(((uint)puVar19 ^ (uint)*pbVar14) * 0x1000193);
      } while (uVar18 < uVar23);
      local_80._1_1_ = (undefined1)((uint)puVar19 >> 8);
      local_80._2_1_ = (undefined1)((uint)puVar19 >> 0x10);
      local_80._3_1_ = (undefined1)((uint)puVar19 >> 0x18);
      puVar16 = (undefined1 *)(uVar23 + iVar17);
      puVar16[1] = local_80._1_1_;
      puVar16[2] = local_80._2_1_;
      *puVar16 = (char)puVar19;
      puVar16[3] = local_80._3_1_;
      local_80 = puVar19;
      iVar21 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
      if (iVar21 == 0) {
        thunk_FUN_ram_4ff209c6(iVar17,iVar12 - iVar17);
      }
      else {
        iVar10 = iVar10 - iVar17;
        iVar15 = FUN_ram_48122518(&DAT_ram_4ff6dec8,"dprofile",iVar17,iVar10);
        FUN_ram_48122142(&DAT_ram_4ff6dec8);
        thunk_FUN_ram_4ff209c6(iVar17,iVar12 - iVar17);
        iVar17 = DAT_ram_4ff6dd74;
        if (DAT_ram_4ff6dd74 == 0) {
          if (iVar10 == iVar15) {
LAB_ram_480af2a0:
            DAT_ram_4ff6de90 = DAT_ram_4ff6de90 | 0x20;
            DAT_ram_4ff6dd70 = 0;
            goto LAB_ram_480aefcc;
          }
        }
        else if ((iVar10 == iVar15) &&
                (iVar10 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0), iVar10 != 0)) {
          uStack_70 = 0;
          uStack_6c = 0;
          iStack_68 = 0;
          iStack_64 = 0;
          FUN_ram_4819ad74(&uStack_70,0x10,"dp%08lx",iVar17);
          FUN_ram_4802a8a8(&local_80,&uStack_70);
          puVar19 = &local_80;
          if (-1 < cStack_71) {
            puVar19 = local_80;
          }
          iVar17 = FUN_ram_48122164(&DAT_ram_4ff6dec8,puVar19);
          FUN_ram_48122142(&DAT_ram_4ff6dec8);
          FUN_ram_4802a59e(&local_80);
          if (iVar17 != 0) {
            DAT_ram_4ff6dd74 = 0;
            goto LAB_ram_480af2a0;
          }
        }
      }
    }
  }
  else {
    do {
      iVar17 = *piVar24;
      if (iVar17 == 0) {
        bVar8 = false;
      }
      else {
        uStack_70 = DAT_ram_48223cc0;
        uStack_6c = DAT_ram_48223cc4;
        uStack_4c = DAT_ram_48223ce4;
        uStack_48 = DAT_ram_48223ce8;
        uStack_44 = DAT_ram_48223cec;
        iStack_60 = piVar24[5];
        iStack_64 = piVar24[9];
        uStack_58 = piVar24[7];
        iStack_5c = piVar24[6];
        iStack_54 = piVar24[8];
        _cStack_50 = CONCAT31((int3)((uint)DAT_ram_48223ce0 >> 8),
                              *(char *)((int)piVar24 + 0x29) << 1);
        iStack_68 = iVar17;
        if (*(char *)((int)piVar24 + 0x13) < '\0') {
          uVar23 = *(byte *)((int)piVar24 + 0x13) & 0x7f;
LAB_ram_480aee24:
          pbStack_98 = (byte *)0x0;
          iStack_94 = 0;
          iStack_90 = 0;
          uStack_4c = uVar23;
          FUN_ram_480aebca(&pbStack_98,uVar23 + 0x12a);
          iVar10 = iStack_90;
          iVar17 = iStack_94;
          pbVar14 = pbStack_98;
          pbVar20 = pbStack_98 + 0x30;
          FUN_ram_4ff45158(pbStack_98,&uStack_70,0x30);
          if (uVar23 != 0) {
            piVar13 = piVar24 + 1;
            if (-1 < *(char *)((int)piVar24 + 0x13)) {
              piVar13 = (int *)piVar24[1];
            }
            FUN_ram_4ff45158(pbVar20,piVar13,uVar23);
          }
          pbVar20 = pbVar20 + uVar23;
        }
        else {
          if (piVar24[1] != 0) {
            uVar23 = piVar24[3];
            goto LAB_ram_480aee24;
          }
          pbStack_98 = (byte *)0x0;
          iStack_94 = 0;
          iStack_90 = 0;
          FUN_ram_480aebca(&pbStack_98,0x12a);
          iVar10 = iStack_90;
          iVar17 = iStack_94;
          pbVar14 = pbStack_98;
          pbVar20 = pbStack_98 + 0x30;
          FUN_ram_4ff45158(pbStack_98,&uStack_70,0x30);
        }
        FUN_ram_4ff45158(pbVar20,piVar24 + 0xb,0xa4);
        FUN_ram_4ff45158(pbVar20 + 0xa4,piVar24 + 0x34,0x48);
        iVar17 = iVar17 - (int)pbVar14;
        pbVar20[0xec] = *(byte *)(piVar24 + 0x46);
        pbVar20[0xed] = *(byte *)((int)piVar24 + 0x119);
        bVar1 = *(byte *)((int)piVar24 + 0x11b);
        bVar2 = *(byte *)(piVar24 + 0x47);
        bVar3 = *(byte *)((int)piVar24 + 0x11d);
        bVar4 = *(byte *)((int)piVar24 + 0x11e);
        bVar5 = *(byte *)((int)piVar24 + 0x11f);
        bVar6 = *(byte *)(piVar24 + 0x48);
        bVar7 = *(byte *)((int)piVar24 + 0x121);
        pbVar20[0xee] = *(byte *)((int)piVar24 + 0x11a);
        pbVar20[0xef] = bVar1;
        pbVar20[0xf0] = bVar2;
        pbVar20[0xf1] = bVar3;
        pbVar20[0xf2] = bVar4;
        pbVar20[0xf3] = bVar5;
        pbVar20[0xf4] = bVar6;
        pbVar20[0xf5] = bVar7;
        if (iVar17 + -4 == 0) {
          local_80 = (undefined4 *)0x811c9dc5;
        }
        else {
          local_80 = (undefined4 *)0x811c9dc5;
          pbVar20 = pbVar14;
          do {
            bVar1 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            local_80 = (undefined4 *)(((uint)local_80 ^ (uint)bVar1) * 0x1000193);
          } while (pbVar14 + iVar17 + -4 != pbVar20);
        }
        pbVar20 = pbVar14 + iVar17 + -4;
        pbVar20[1] = (byte)((uint)local_80 >> 8);
        pbVar20[2] = (byte)((uint)local_80 >> 0x10);
        pbVar20[3] = (byte)((uint)local_80 >> 0x18);
        *pbVar20 = (byte)local_80;
        iVar12 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
        bVar9 = false;
        if (iVar12 != 0) {
          uStack_70 = 0;
          uStack_6c = 0;
          iStack_68 = 0;
          iStack_64 = 0;
          FUN_ram_4819ad74(&uStack_70,0x10,"dp%08lx",*piVar24);
          FUN_ram_4802a8a8(&local_80,&uStack_70);
          puVar19 = &local_80;
          if (-1 < cStack_71) {
            puVar19 = local_80;
          }
          iVar12 = FUN_ram_48122518(&DAT_ram_4ff6dec8,puVar19,pbVar14,iVar17);
          FUN_ram_48122142(&DAT_ram_4ff6dec8);
          FUN_ram_4802a59e(&local_80);
          bVar9 = (bool)(iVar12 == iVar17 & bVar8);
        }
        bVar8 = bVar9;
        thunk_FUN_ram_4ff209c6(pbVar14,iVar10 - (int)pbVar14);
      }
      piVar24 = piVar24 + 0x49;
    } while (piVar22 != piVar24);
    if (bVar8) goto LAB_ram_480af096;
  }
  iVar21 = 0;
LAB_ram_480aefcc:
  DAT_ram_4ff6deec = FUN_ram_48025b94();
  fence();
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
  DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
  if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar11)) {
    DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar11;
  }
  return iVar21;
}



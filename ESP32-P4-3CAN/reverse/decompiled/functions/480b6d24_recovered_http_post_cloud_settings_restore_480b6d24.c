/* Firmware entry: 0x480b6d24 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_settings_restore_480b6d24(void)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  byte *****pppppbVar14;
  uint uVar15;
  undefined4 *****pppppuVar16;
  uint uVar17;
  uint uVar18;
  byte *****pppppbVar19;
  char cVar20;
  uint uVar21;
  undefined4 ****appppuStack_14c [3];
  char cStack_13d;
  byte ****local_13c [2];
  uint uStack_134;
  byte bStack_12d;
  undefined4 ****local_12c [2];
  int iStack_124;
  byte bStack_11d;
  undefined1 *puStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined1 auStack_f0 [196];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(&puStack_11c,"confirmation");
  iVar6 = FUN_ram_4802b18e(&puStack_11c,"plain");
  iVar10 = DAT_ram_4ff5cbe8;
  iVar7 = DAT_ram_4ff5cbdc;
  if ((iVar6 == 0) ||
     (iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar6 + 0xcc2) == '\0')) {
    iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar6 + 0x1cc4) != 0) {
      puVar5 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar21 = 0;
      do {
        iVar9 = FUN_ram_4802b18e(&puStack_11c,*puVar5);
        if (iVar9 != 0) {
          FUN_ram_4802a8a8(auStack_f0,*(undefined4 *)(iVar10 + (iVar7 * 0x3a8 + uVar21) * 8 + 0xcc8)
                          );
          goto LAB_ram_480b6d98;
        }
        uVar21 = uVar21 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar21 < *(uint *)(iVar6 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_f0,&DAT_ram_481df390);
  }
  else {
    puVar11 = *(undefined1 **)(iVar6 + 0x43c);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_f0,puVar11,*(undefined4 *)(iVar6 + 0x438));
  }
LAB_ram_480b6d98:
  iVar7 = FUN_ram_4802b18e(auStack_f0,"restore");
  FUN_ram_4802a59e(auStack_f0);
  FUN_ram_4802a59e(&puStack_11c);
  if (iVar7 == 0) {
    pcVar12 = "confirmation_required";
    uVar8 = 400;
LAB_ram_480b6e04:
    FUN_ram_4808cb66(uVar8,pcVar12);
    return;
  }
  if ((((DAT_ram_4ff6dc9c == 0) || (*(char *)(DAT_ram_4ff6dcc8 + 0x28a) == '\0')) ||
      (*(char *)(DAT_ram_4ff6dc9c + 0x87b60) == '\0')) ||
     ((DAT_ram_4ff6dc94 == 0 || (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) == '\0')))) {
    pcVar12 = "restore_unavailable";
    uVar8 = 0x1f7;
    goto LAB_ram_480b6e04;
  }
  FUN_ram_4802a8a8(&puStack_11c,"scopes");
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) != 0) {
    puVar5 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar21 = 0;
    do {
      uVar21 = uVar21 + 1;
      iVar10 = FUN_ram_4802b18e(&puStack_11c,*puVar5);
      if (iVar10 != 0) {
        FUN_ram_4802a8a8(auStack_f0,"scopes");
        FUN_ram_4806562c(appppuStack_14c,&DAT_ram_4ff5cb9c,auStack_f0);
        FUN_ram_4802a59e(auStack_f0);
        goto LAB_ram_480b6f38;
      }
      puVar5 = puVar5 + 2;
    } while (uVar21 < *(uint *)(iVar7 + 0x1cc4));
  }
  FUN_ram_4802a8a8(appppuStack_14c,"settings,records");
LAB_ram_480b6f38:
  FUN_ram_4802a59e(&puStack_11c);
  FUN_ram_4802a8a8(&puStack_11c,"backup_revision");
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) != 0) {
    puVar5 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar21 = 0;
    do {
      uVar21 = uVar21 + 1;
      iVar10 = FUN_ram_4802b18e(&puStack_11c,*puVar5);
      if (iVar10 != 0) {
        FUN_ram_4802a8a8(auStack_f0,"backup_revision");
        FUN_ram_4806562c(local_13c,&DAT_ram_4ff5cb9c,auStack_f0);
        FUN_ram_4802a59e(auStack_f0);
        goto LAB_ram_480b6fb0;
      }
      puVar5 = puVar5 + 2;
    } while (uVar21 < *(uint *)(iVar7 + 0x1cc4));
  }
  FUN_ram_4802a8a8(local_13c,"latest");
LAB_ram_480b6fb0:
  FUN_ram_4802a59e(&puStack_11c);
  FUN_ram_4802a8a8(auStack_f0,"request_id");
  FUN_ram_4806562c(local_12c,&DAT_ram_4ff5cb9c,auStack_f0);
  FUN_ram_4802a59e(auStack_f0);
  pppppuVar16 = appppuStack_14c;
  if (((cStack_13d < '\0') ||
      (pppppuVar16 = (undefined4 *****)appppuStack_14c[0],
      (undefined4 *****)appppuStack_14c[0] != (undefined4 *****)0x0)) &&
     (iVar7 = FUN_ram_4ff453ae(pppppuVar16,"settings,records"), iVar7 != 0)) {
    iVar7 = FUN_ram_4ff453ae(pppppuVar16,"settings");
    if (iVar7 == 0) {
      cVar20 = '\x01';
      goto LAB_ram_480b7098;
    }
    iVar7 = FUN_ram_4ff453ae(pppppuVar16,"records");
    cVar20 = '\x02';
    if (iVar7 == 0) goto LAB_ram_480b7098;
  }
  else {
    cVar20 = '\x03';
LAB_ram_480b7098:
    if ((char)bStack_12d < '\0') {
      pppppbVar14 = local_13c;
      if ((bStack_12d & 0x7f) < 0x18) goto LAB_ram_480b70ae;
    }
    else if (((byte *****)local_13c[0] != (byte *****)0x0) &&
            (pppppbVar14 = (byte *****)local_13c[0], uStack_134 < 0x18)) {
LAB_ram_480b70ae:
      uVar21 = (uint)*(byte *)pppppbVar14;
      if (uVar21 != 0) {
        iVar10 = FUN_ram_4ff453ae(pppppbVar14,"latest");
        ppppuVar2 = local_12c[0];
        iVar7 = DAT_ram_4ff6dc94;
        if (iVar10 != 0) {
          uVar13 = 0;
          uVar18 = 0;
          pppppbVar19 = pppppbVar14;
          do {
            uVar15 = uVar18 * 10 + uVar21;
            uVar21 = uVar21 - 0x30;
            uVar3 = ~uVar21;
            iVar10 = 0x1fffff - ((int)uVar21 >> 0x1f);
            uVar17 = uVar3 + iVar10;
            uVar17 = uVar17 + (uVar17 < uVar3);
            uVar4 = uVar15 - 0x30;
            pppppbVar19 = (byte *****)((int)pppppbVar19 + 1);
            if (9 < (uVar21 & 0xff)) goto LAB_ram_480b7024;
            uVar17 = uVar3 - (uVar17 - (((uint)((ulonglong)uVar17 * 0xcccccccd >> 0x20) & 0xfffffffc
                                        ) + uVar17 / 5));
            uVar21 = (iVar10 - (uint)(uVar3 < uVar17)) * -0x33333333 + uVar17 * -0x33333334 +
                     (int)((ulonglong)uVar17 * 0xcccccccd >> 0x20);
            uVar3 = uVar21 >> 1;
            if ((uVar3 < uVar13) ||
               ((uVar13 == uVar3 && ((uVar21 * -0x80000000 | uVar17 * -0x33333333 >> 1) < uVar18))))
            goto LAB_ram_480b7024;
            uVar21 = (uint)*(byte *)pppppbVar19;
            uVar13 = (uint)(uVar4 < uVar15) +
                     (uint)(uVar15 < uVar18 * 10) +
                     (uVar18 * 5 >> 0x1f |
                     ((uint)(uVar18 * 5 < uVar18 * 4) + (uVar13 << 2 | uVar18 >> 0x1e) + uVar13) * 2
                     ) + -1;
            uVar18 = uVar4;
          } while (uVar21 != 0);
          if (uVar4 == 0 && uVar13 == 0) goto LAB_ram_480b7024;
        }
        if ((char)bStack_11d < '\0') {
          if ((bStack_11d & 0x7f) == 0) goto LAB_ram_480b7376;
          iVar10 = FUN_ram_48075cde(local_12c);
          iVar7 = DAT_ram_4ff6dc94;
          if (iVar10 == 0) {
LAB_ram_480b73a2:
            FUN_ram_4808cb66(400,"invalid_restore_id");
            goto LAB_ram_480b7034;
          }
          iVar10 = FUN_ram_4ff453ae(local_12c,DAT_ram_4ff6dc94 + 0x126d5);
          if (iVar10 != 0) goto LAB_ram_480b71da;
LAB_ram_480b7326:
          if ((*(char *)(iVar7 + 0x1272e) != cVar20) ||
             (iVar7 = FUN_ram_4ff453ae(iVar7 + 0x12716,pppppbVar14), iVar7 != 0)) {
            FUN_ram_4808cb66(0x199,"restore_id_collision");
            goto LAB_ram_480b7034;
          }
LAB_ram_480b721e:
          memset(auStack_f0,0,0xc0);
          uStack_118 = 0xc0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_f8 = 0;
          uStack_f4 = 1;
          puStack_11c = auStack_f0;
          FUN_ram_4808c168(&puStack_11c);
          FUN_ram_4808c2dc(&puStack_11c,&DAT_ram_481c4274,1);
          FUN_ram_4808c2dc(&puStack_11c,"queued",1);
          FUN_ram_4808cb32(&puStack_11c,"persistence","pending");
          FUN_ram_4808cb32(&puStack_11c,"restore_id",DAT_ram_4ff6dc94 + 0x126d5);
          FUN_ram_4808c64a(&puStack_11c);
          FUN_ram_48066698(&DAT_ram_4ff5cb9c,0xca,"application/json",puStack_11c,uStack_114);
        }
        else {
          if ((undefined4 *****)local_12c[0] == (undefined4 *****)0x0) {
LAB_ram_480b7376:
            cVar1 = *(char *)(DAT_ram_4ff6dc94 + 0x11a40);
joined_r0x480b7382:
            if ((((cVar1 != '\0') && (*(char *)(DAT_ram_4ff6dc94 + 0x11a41) == cVar20)) &&
                (iVar10 = FUN_ram_4ff453ae(DAT_ram_4ff6dc94 + 0x11a44,pppppbVar14), iVar10 == 0)) &&
               (*(char *)(iVar7 + 0x126d5) != '\0')) goto LAB_ram_480b721e;
          }
          else {
            if (iStack_124 == 0) {
              cVar1 = *(char *)(DAT_ram_4ff6dc94 + 0x11a40);
              goto joined_r0x480b7382;
            }
            iVar10 = FUN_ram_48075cde(local_12c[0]);
            iVar7 = DAT_ram_4ff6dc94;
            if (iVar10 == 0) goto LAB_ram_480b73a2;
            iVar10 = FUN_ram_4ff453ae(ppppuVar2,DAT_ram_4ff6dc94 + 0x126d5);
            if (iVar10 == 0) goto LAB_ram_480b7326;
          }
LAB_ram_480b71da:
          iVar7 = FUN_ram_48032c1a();
          if (iVar7 == 0) {
            fence();
            fence();
            if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0') ||
               (iVar7 = FUN_ram_480a3262(), iVar7 != 0)) {
              pppppbVar14 = local_13c;
              if (-1 < (char)bStack_12d) {
                pppppbVar14 = (byte *****)local_13c[0];
              }
              pppppuVar16 = local_12c;
              if (-1 < (char)bStack_11d) {
                pppppuVar16 = (undefined4 *****)local_12c[0];
              }
              iVar7 = FUN_ram_480b6a26(cVar20,pppppbVar14,pppppuVar16);
              if (iVar7 == 0) {
                FUN_ram_4808cb66(0x199,"restore_busy_or_local_changed");
                goto LAB_ram_480b7034;
              }
              goto LAB_ram_480b721e;
            }
          }
          FUN_ram_4808cb66(0x199,"agent_busy");
        }
        goto LAB_ram_480b7034;
      }
    }
  }
LAB_ram_480b7024:
  FUN_ram_4808cb66(400,"invalid_restore_selection");
LAB_ram_480b7034:
  FUN_ram_4802a59e(local_12c);
  FUN_ram_4802a59e(local_13c);
  FUN_ram_4802a59e(appppuStack_14c);
  return;
}



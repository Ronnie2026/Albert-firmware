/* Firmware entry: 0x480fc78e */

/* WARNING: Removing unreachable block (ram,0x480fc8a4) */

void FUN_ram_480fc78e(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  longlong lVar24;
  undefined8 uVar25;
  
  iVar12 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar4 = *(char *)(DAT_ram_4ff6dc94 + 0x11a40);
  if (1 < (byte)(cVar4 - 4U)) {
    return;
  }
  if ((DAT_ram_4ff6dc98 == 0) || (*(char *)(DAT_ram_4ff6dc98 + 0x94) != '\0')) {
    pcVar8 = "firmware_locked";
    goto LAB_ram_480fc824;
  }
  bVar22 = *(byte *)(DAT_ram_4ff6dc94 + 0x11a41);
  bVar23 = *(byte *)(DAT_ram_4ff6dc94 + 0x11a42);
  if (((((bVar22 & 1) != 0) && ((bVar23 & 1) == 0)) &&
      (DAT_ram_4ff5bd40 == *(int *)(DAT_ram_4ff6dc94 + 0x11bb8))) &&
     (iVar9 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,DAT_ram_4ff6dc94 + 0x11ba8,0x10), iVar9 == 0)) {
    uVar25 = FUN_ram_480b5fea();
    if (((int)uVar25 == 0) ||
       (iVar9 = FUN_ram_48034886((int)((ulonglong)uVar25 >> 0x20),(int)uVar25,iVar12 + 0x11a9d),
       iVar9 == 0)) {
      pcVar8 = "restore_target_mismatch";
      goto LAB_ram_480fc824;
    }
    *(byte *)(iVar12 + 0x11a42) = *(byte *)(iVar12 + 0x11a42) | 1;
    iVar9 = FUN_ram_480b66f6();
    if (iVar9 == 0) {
      return;
    }
    cVar4 = *(char *)(iVar12 + 0x11a40);
    bVar22 = *(byte *)(iVar12 + 0x11a41);
    bVar23 = *(byte *)(iVar12 + 0x11a42);
  }
  if (((cVar4 == '\x05') && ((bVar22 & 2) != 0)) &&
     (((bVar23 & 2) == 0 && (*(char *)(iVar12 + 0x11a43) != '\0')))) {
    iVar11 = FUN_ram_480cea00(&DAT_ram_4ff5be28,DAT_ram_4ff6dc9c + 0x875a8);
    iVar9 = DAT_ram_4ff6dc9c;
    if (iVar11 == 0) {
LAB_ram_480fc86e:
      if (*(char *)(iVar12 + 0x11a41) == *(char *)(iVar12 + 0x11a42)) {
LAB_ram_480fc87a:
        *(undefined1 *)(iVar12 + 0x11a40) = 6;
        *(undefined1 *)(iVar12 + 0x11b1f) = 0;
        FUN_ram_480b66f6();
        uVar10 = FUN_ram_48025ba6();
        *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar10;
        return;
      }
    }
    else {
      iVar11 = DAT_ram_4ff6dc9c + 0x875a8;
      iVar7 = FUN_ram_480880f8(iVar12 + 0x12160,iVar11);
      if (iVar7 == 0) {
        iVar11 = FUN_ram_48070f54(iVar11);
        if (iVar11 == 0) goto LAB_ram_480fc86e;
        iVar11 = FUN_ram_4ff4511a(iVar12 + 0x12660,iVar9 + 0x87aa8,0xc);
        if (iVar11 == 0) {
          iVar7 = *(int *)(iVar12 + 0x12678);
          iVar11 = *(int *)(iVar12 + 0x1267c);
          if ((*(int *)(iVar9 + 0x87ac0) == iVar7) && (*(int *)(iVar9 + 0x87ac4) == iVar11)) {
            iVar5 = *(int *)(iVar9 + 0x87ac8);
            if ((((iVar5 == *(int *)(iVar12 + 0x12160)) && (iVar5 != *(int *)(iVar9 + 0x875a8))) &&
                (-1 < *(int *)(iVar9 + 0x875a8) - iVar5)) &&
               (((iVar9 = FUN_ram_4ff4511a(iVar12 + 0x12138,iVar12 + 0x12660,0xc), iVar9 != 0 ||
                 (*(int *)(iVar12 + 0x12150) != iVar7)) ||
                ((*(int *)(iVar12 + 0x12154) != iVar11 || (iVar5 != *(int *)(iVar12 + 0x12158)))))))
            goto LAB_ram_480fcc2e;
            if (*(char *)(iVar12 + 0x11a41) == *(char *)(iVar12 + 0x11a42)) goto LAB_ram_480fc87a;
          }
          else if (*(char *)(iVar12 + 0x11a41) == *(char *)(iVar12 + 0x11a42))
          goto LAB_ram_480fc87a;
        }
        else if (*(char *)(iVar12 + 0x11a41) == *(char *)(iVar12 + 0x11a42)) goto LAB_ram_480fc87a;
      }
      else {
LAB_ram_480fcc2e:
        iVar9 = FUN_ram_480d1524();
        if (iVar9 == 0) {
          return;
        }
        if (*(char *)(iVar12 + 0x11a41) == *(char *)(iVar12 + 0x11a42)) goto LAB_ram_480fc87a;
      }
    }
  }
  else if (bVar22 == bVar23) goto LAB_ram_480fc87a;
  lVar24 = FUN_ram_4819b728(0);
  iVar9 = DAT_ram_4ff6dd80;
  if (lVar24 < 0x65920080) {
    return;
  }
  uVar6 = FUN_ram_4819b728(0);
  iVar7 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  cVar2 = DAT_ram_4ff69dc4;
  iVar11 = DAT_ram_4ff69dc0;
  cVar4 = DAT_ram_4ff69dbc;
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  if (((cVar2 == '\0') || (500 < (uint)(iVar7 - iVar11))) ||
     (((cVar4 != '\x01' ||
       (((uVar6 < 0x65920080 || (*(uint *)(iVar12 + 0x11b78) <= uVar6)) ||
        ((char)DAT_ram_4ff5bd64 != '\0')))) || (DAT_ram_4ff5bd64._1_1_ != '\0')))) {
LAB_ram_480fc90c:
    pcVar8 = "restore_local_changed_or_expired";
    goto LAB_ram_480fc824;
  }
  bVar22 = *(byte *)(iVar12 + 0x11a42);
  if ((bVar22 & 1) == 0) {
    iVar11 = FUN_ram_48075bb4(&DAT_ram_4ff5bd30,iVar12 + 0x11b80);
    if ((iVar11 == 0) || (iVar9 != *(int *)(iVar12 + 0x11b7c))) goto LAB_ram_480fc90c;
  }
  else {
    iVar9 = FUN_ram_48075bb4(&DAT_ram_4ff5bd30,iVar12 + 0x11ba8);
    if (iVar9 == 0) goto LAB_ram_480fc90c;
  }
  if ((((*(byte *)(iVar12 + 0x11a41) & 2) == 0) || ((bVar22 & 2) != 0)) ||
     ((*(char *)(iVar12 + 0x11a43) != '\0' &&
      ((iVar9 = FUN_ram_4802d110(DAT_ram_4ff6dcc8 + 0xa60), iVar9 != 0 &&
       (iVar9 = FUN_ram_48088058(iVar12 + 0x11c38,DAT_ram_4ff6dcc8 + 0xa60), iVar9 != 0)))))) {
    *(undefined1 *)(iVar12 + 0x11a40) = 5;
    iVar9 = FUN_ram_480b66f6();
    if (iVar9 == 0) {
      return;
    }
    bVar22 = *(byte *)(iVar12 + 0x11a41);
    if (((bVar22 & 1) != 0) &&
       (bVar23 = *(byte *)(iVar12 + 0x11a42) & 1, (*(byte *)(iVar12 + 0x11a42) & 1) == 0)) {
      iVar9 = FUN_ram_480b5c0c(&DAT_ram_4ff5bc58,DAT_ram_4ff6dc9c + 0xf5a,0x30001);
      if ((iVar9 != 1) ||
         ((iVar9 = FUN_ram_48075bb4(&DAT_ram_4ff5bc5c,iVar12 + 0x11b94), iVar9 == 0 ||
          (iVar11 = FUN_ram_48034886(DAT_ram_4ff6dc9c + 0xf5a,DAT_ram_4ff5bc78,iVar12 + 0x11a9d),
          iVar9 = DAT_ram_4ff6dc9c, uVar6 = DAT_ram_4ff5bc78, iVar11 == 0)))) {
        pcVar8 = "restore_stage_invalid";
        goto LAB_ram_480fc824;
      }
      if ((DAT_ram_4ff6dc98 == 0) || (*(char *)(DAT_ram_4ff6dc98 + 0x94) != '\0')) {
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_firmware_locked_ram_481cc03c;
        pcVar8 = PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50;
        goto LAB_ram_480fc824;
      }
      iVar11 = FUN_ram_480b5ab0();
      puVar3 = DAT_ram_4ff6dcac;
      if ((iVar11 == 0) || (uVar6 == 0)) {
        PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_restore_unavailable_ram_481ccda4;
        DAT_ram_4ff5bd64 = &sedeleg;
        pcVar8 = PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50;
        goto LAB_ram_480fc824;
      }
      pbVar21 = (byte *)(iVar12 + 0x11ba8);
      pbVar19 = (byte *)(iVar12 + 0x11bb8);
      if (pbVar21 != pbVar19) {
        bVar22 = 0;
        pbVar15 = pbVar21;
        do {
          bVar1 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          bVar22 = bVar22 | bVar1;
        } while (pbVar19 != pbVar15);
        if ((bVar22 != 0) && (pbVar15 = pbVar21, *(int *)(iVar12 + 0x11bb8) == 1)) {
          do {
            bVar22 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            bVar23 = bVar23 | bVar22;
          } while (pbVar19 != pbVar15);
          if (bVar23 == 0) {
LAB_ram_480fcd40:
            DAT_ram_4ff5bd64 = &sedeleg;
            iVar9 = 0;
          }
          else {
            puVar16 = DAT_ram_4ff6dcac + 0x1afa;
            iVar9 = iVar9 + 0xf5a;
            iVar7 = FUN_ram_480a710e(iVar9,uVar6,puVar16,
                                     &PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50);
            if (iVar7 == 0) goto LAB_ram_480fcd40;
            for (uVar17 = 0; uVar17 < DAT_ram_4ff5bd04; uVar17 = uVar17 + 1) {
              FUN_ram_4802a59e(DAT_ram_4ff5bd00 + uVar17 * 0x124 + 4);
            }
            DAT_ram_4ff5bd04 = 0;
            iVar7 = FUN_ram_48034a9e(puVar16);
            if ((iVar7 == 0) || (iVar7 = FUN_ram_480315f4(), iVar7 == 0)) {
LAB_ram_480fcea2:
              PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 =
                   s_restore_prepare_failed_ram_481cfa30;
              goto LAB_ram_480fcd40;
            }
            fence();
            fence();
            if ((DAT_ram_4ff6df30 != '\0') ||
               ((DAT_ram_4ff5c5c0 != '\0' || (DAT_ram_4ff5c5ca != '\0')))) goto LAB_ram_480fcea2;
            iVar7 = FUN_ram_480b621c(&DAT_ram_4ff5bd98,pbVar21,iVar9,uVar6);
            if (iVar7 == 0) {
              PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 =
                   s_journal_commit_failed_ram_481cfa48;
              goto LAB_ram_480fcd40;
            }
            puVar18 = puVar3 + 0x1afa;
            puVar16 = puVar3;
            do {
              uVar10 = puVar18[1];
              uVar13 = puVar18[2];
              uVar14 = puVar18[3];
              *puVar16 = *puVar18;
              puVar16[1] = uVar10;
              puVar16[2] = uVar13;
              puVar16[3] = uVar14;
              puVar18 = puVar18 + 4;
              puVar16 = puVar16 + 4;
            } while (puVar18 != puVar3 + 0x2876);
            *puVar16 = *puVar18;
            puVar16 = DAT_ram_4ff6dcac;
            DAT_ram_4ff5bd30 = *(undefined4 *)(iVar12 + 0x11ba8);
            DAT_ram_4ff5bd38 = *(undefined4 *)(iVar12 + 0x11bb0);
            DAT_ram_4ff5bd34 = *(undefined4 *)(iVar12 + 0x11bac);
            DAT_ram_4ff5bd3c = *(undefined4 *)(iVar12 + 0x11bb4);
            DAT_ram_4ff5bd40 = *(int *)(iVar12 + 0x11bb8);
            DAT_ram_4ff5bd64 = (undefined *)0x0;
            puVar20 = DAT_ram_4ff6dcac + 0xd7d;
            puVar18 = puVar3;
            do {
              uVar14 = puVar18[1];
              uVar10 = puVar18[2];
              uVar13 = puVar18[3];
              *puVar20 = *puVar18;
              puVar20[1] = uVar14;
              puVar20[2] = uVar10;
              puVar20[3] = uVar13;
              puVar18 = puVar18 + 4;
              puVar20 = puVar20 + 4;
            } while (puVar18 != puVar3 + 0xd7c);
            *puVar20 = *puVar18;
            puVar16[0x1b675] = uVar6;
            if (uVar6 < 0x30002) {
              FUN_ram_4ff45158(puVar16 + 0x35f4,iVar9,uVar6);
            }
            iVar9 = FUN_ram_480fc0c2(puVar3);
            if (iVar9 == 0) {
              PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 =
                   s_runtime_apply_failed_ram_481cfa60;
              goto LAB_ram_480fcd40;
            }
            PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = (undefined *)0x0;
          }
          if ((DAT_ram_4ff5bd40 == *(int *)(iVar12 + 0x11bb8)) &&
             (iVar7 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,pbVar21,0x10), iVar7 == 0)) {
            if (iVar9 != 0) {
              PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = &DAT_ram_481df390;
            }
            DAT_ram_4ff6dca8 = (undefined1)iVar9;
            DAT_ram_4ff6dca9 = (char)iVar11;
          }
          pcVar8 = PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50;
          if (iVar9 == 0) goto LAB_ram_480fc824;
          *(byte *)(iVar12 + 0x11a42) = *(byte *)(iVar12 + 0x11a42) | 1;
          iVar9 = FUN_ram_480b66f6();
          if (iVar9 == 0) {
            return;
          }
          bVar22 = *(byte *)(iVar12 + 0x11a41);
          goto LAB_ram_480fca36;
        }
      }
      PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_restore_target_invalid_ram_481cfa78;
      pcVar8 = PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50;
      goto LAB_ram_480fc824;
    }
LAB_ram_480fca36:
    if (((bVar22 & 2) == 0) || ((*(byte *)(iVar12 + 0x11a42) & 2) != 0)) {
LAB_ram_480fca84:
      *(undefined1 *)(iVar12 + 0x11a40) = 6;
      *(undefined1 *)(iVar12 + 0x11b1f) = 0;
      FUN_ram_480b66f6();
      uVar10 = FUN_ram_48025ba6();
      *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar10;
      return;
    }
    if ((*(char *)(iVar12 + 0x11a43) == '\0') || (iVar9 = FUN_ram_480315f4(), iVar9 == 0)) {
      pcVar8 = "restore_records_not_ready";
      goto LAB_ram_480fc824;
    }
    uVar10 = FUN_ram_48025ba6();
    uVar6 = FUN_ram_480d5c84(&DAT_ram_4ff5be28,iVar12 + 0x11c38,iVar12 + 0x12160,1,uVar10);
    if (uVar6 < 2) {
      iVar9 = FUN_ram_480d1524();
      if (iVar9 == 0) {
        return;
      }
      goto LAB_ram_480fca84;
    }
    if (7 < uVar6) {
      if (uVar6 == 10) {
        pcVar8 = "restore_records_save_failed";
      }
      else if (uVar6 == 0xb) {
        pcVar8 = "restore_records_unauthorized";
      }
      else if ((DAT_ram_4ff5c3e8 == 0) ||
              (iVar12 = FUN_ram_4ff453ae(DAT_ram_4ff5c3e8,"recovery_begin_failed"), iVar12 != 0)) {
        pcVar8 = "restore_records_unavailable";
      }
      else {
        pcVar8 = "restore_records_begin_failed";
      }
      goto LAB_ram_480fc824;
    }
    if (uVar6 == 5) {
      pcVar8 = "restore_records_epoch_mismatch";
      goto LAB_ram_480fc824;
    }
    if (uVar6 == 4) {
      pcVar8 = "restore_records_invalid";
      goto LAB_ram_480fc824;
    }
    if ((DAT_ram_4ff5c3e8 != 0) &&
       (iVar12 = FUN_ram_4ff453ae(DAT_ram_4ff5c3e8,"recovery_ingress_retry"), iVar12 == 0)) {
      pcVar8 = "restore_records_ingress_retry";
      goto LAB_ram_480fc824;
    }
  }
  pcVar8 = "restore_records_local_changed";
LAB_ram_480fc824:
  FUN_ram_480b69b4(pcVar8);
  return;
}



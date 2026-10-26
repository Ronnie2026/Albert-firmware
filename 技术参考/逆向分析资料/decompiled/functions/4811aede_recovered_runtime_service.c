/* Firmware entry: 0x4811aede */

/* WARNING: Removing unreachable block (ram,0x4811c8c4) */
/* WARNING: Removing unreachable block (ram,0x4811c4c8) */
/* WARNING: Removing unreachable block (ram,0x4811cbf0) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_runtime_service(void)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  char *pcVar24;
  int iVar25;
  void *pvVar26;
  byte bVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  undefined1 *puVar32;
  undefined4 *puVar33;
  uint uVar34;
  undefined4 uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined8 uVar39;
  longlong lVar40;
  int iStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  int iStack_130;
  int iStack_124;
  int iStack_110;
  int iStack_104;
  int iStack_f8;
  int iStack_d4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_78;
  undefined1 uStack_64;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar25 = 2;
  while (fence(), (DAT_ram_4ff5ce9c & 1) != 0) {
    if (iVar25 == 1) {
      uStack_1b0 = 0;
      iStack_1b4 = 0;
      iStack_1b8 = 0;
      iStack_1bc = 0;
      iStack_1c8 = 0;
      iStack_1c0 = 0;
      goto LAB_ram_4811af92;
    }
    iVar25 = 1;
  }
  iStack_1c0 = DAT_ram_4ff5cea0;
  iStack_1c8 = DAT_ram_4ff5cea4;
  iStack_1bc = DAT_ram_4ff5cea8;
  iStack_1b8 = DAT_ram_4ff5ceac;
  iStack_1b4 = DAT_ram_4ff5ceb0;
  uStack_1b0 = DAT_ram_4ff5ceb4;
  fence();
LAB_ram_4811af92:
  uVar39 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar39,(int)((ulonglong)uVar39 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = 10;
  DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  FUN_ram_48065718(&DAT_ram_4ff5cba0);
  iVar25 = DAT_ram_4ff5cbe8;
  if (DAT_ram_4ff5cbe8 != 0) {
    FUN_ram_48065718(DAT_ram_4ff5cbe8 + 0xc);
    FUN_ram_48065718(iVar25 + 0x1d4c);
  }
  FUN_ram_48112c3a();
  FUN_ram_480fa426();
  FUN_ram_48033c8e();
  if ((DAT_ram_4ff5c5cc != 0) && (DAT_ram_4ff5cf30 == DAT_ram_4ff5c5cc)) {
    DAT_ram_4ff5cf30 = 0;
  }
  fence();
  if ((((DAT_ram_4ff6dea0 != '\0') || (fence(), DAT_ram_4ff6de9c != '\0')) &&
      (DAT_ram_4ff6dea8 != 0)) && (iVar25 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dea8,0), iVar25 == 1)) {
    fence();
    if (DAT_ram_4ff6dea0 != '\0') {
      if (DAT_ram_4ff6df2c != (int *)0x0) {
        (**(code **)(*DAT_ram_4ff6df2c + 0xf0))(DAT_ram_4ff6df2c,0);
        (**(code **)(*DAT_ram_4ff6df2c + 0x118))(DAT_ram_4ff6df2c,0);
      }
      DAT_ram_4ff6dea1 = 1;
      fence();
      DAT_ram_4ff6dea0 = '\0';
    }
    fence();
    if (DAT_ram_4ff6de9c != '\0') {
      fence();
      fence();
      if ((DAT_ram_4ff6df04 != '\0') || (iVar25 = FUN_ram_480fd2fc(0), iVar25 != 0)) {
        fence();
        DAT_ram_4ff6de9c = '\0';
      }
    }
    FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
  }
  iVar25 = DAT_ram_4ff6dc78;
  puVar33 = DAT_ram_4ff6dc74;
  if (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0') {
    if (*(char *)((int)DAT_ram_4ff6dc74 + 0x221) == '\0') {
LAB_ram_4811b0f4:
      if (iVar25 != 0) goto LAB_ram_4811b0fc;
LAB_ram_4811c47e:
      cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
      puVar33 = DAT_ram_4ff6dc74;
      goto LAB_ram_4811b2da;
    }
    if (*(char *)((int)DAT_ram_4ff6dc74 + 0x222) == '\0') {
      if (DAT_ram_4ff6dc70 == 0) goto LAB_ram_4811b0de;
      goto LAB_ram_4811b0f4;
    }
    if (DAT_ram_4ff6dc78 != 0) goto LAB_ram_4811b0fc;
LAB_ram_4811b466:
    if (*(char *)((int)puVar33 + 0x223) == '\0') {
LAB_ram_4811b46e:
      if (((DAT_ram_4ff6dc70 == 0) &&
          (((DAT_ram_4ff6dc78 == 0 || (fence(), *(char *)(DAT_ram_4ff6dc78 + 0x3ffa) == '\0')) &&
           (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0')))) &&
         (((DAT_ram_4ff5c5c0 == '\0' && (DAT_ram_4ff5c5ca == '\0')) &&
          (iVar25 = FUN_ram_4802ff30(), puVar33 = DAT_ram_4ff6dc74, iVar25 != 0)))) {
        iVar25 = FUN_ram_4802e468(DAT_ram_4ff6dc74 + 0xe);
        if (iVar25 == 0) {
          puVar33[0x1c4] = "failed";
          puVar33[0x1c5] = "management_target_changed";
LAB_ram_4811cd94:
          *(undefined2 *)((int)puVar33 + 0x222) = 0;
        }
        else {
          uVar9 = *(undefined1 *)((int)puVar33 + 0x223);
          if ((((*(char *)(puVar33 + 0x88) == '\0') || (DAT_ram_4ff5c5c0 != '\0')) ||
              ((DAT_ram_4ff5c5ca != '\0' ||
               (((DAT_ram_4ff5c548 == '\x02' || (DAT_ram_4ff6de6d == '\0')) ||
                (DAT_ram_4ff6de60 == 0)))))) ||
             ((DAT_ram_4ff5c5f8 != '\0' ||
              (iVar25 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118), puVar33 = DAT_ram_4ff6dc74,
              iVar25 != 3)))) {
LAB_ram_4811b52e:
            cVar10 = DAT_ram_4ff6de6d;
            puVar33[0x1c4] = "failed";
            if (cVar10 == '\0') {
              pcVar23 = "pending_boot_verification";
            }
            else {
              iVar25 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
              puVar33 = DAT_ram_4ff6dc74;
              if (iVar25 == 3) {
                pcVar23 = "ota_preflight";
              }
              else {
                pcVar23 = "wifi_not_connected";
              }
            }
            puVar33[0x1c5] = pcVar23;
            iVar25 = FUN_ram_4ff453ae(pcVar23,"resource_wait");
LAB_ram_4811b562:
            if (iVar25 != 0) goto LAB_ram_4811cd94;
          }
          else {
            fence();
            fence();
            if (DAT_ram_4ff6df34 == '\0') goto LAB_ram_4811b52e;
            fence();
            fence();
            if (((DAT_ram_4ff6df38 == '\0') || (DAT_ram_4ff6df2c == (int *)0x0)) ||
               (iVar25 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))(), puVar33 = DAT_ram_4ff6dc74,
               iVar25 == 0)) goto LAB_ram_4811b52e;
            if (DAT_ram_4ff5c5cc == -1) {
              DAT_ram_4ff6dc74[0x1c4] = "failed";
              puVar33[0x1c5] = "session_generation_exhausted";
              *(undefined2 *)((int)puVar33 + 0x222) = 0;
              goto LAB_ram_4811b2e2;
            }
            iVar25 = FUN_ram_4802c840();
            if ((iVar25 == 0) && (iVar25 = FUN_ram_4802ff30(), iVar25 != 0)) {
              FUN_ram_48065460(&uStack_174,9,10000);
              DAT_ram_4ff5c5cc = DAT_ram_4ff5c5cc + 1;
              DAT_ram_4ff6dc74[0x8a] = DAT_ram_4ff5c5cc;
              DAT_ram_4ff5c5c0 = '\x01';
              FUN_ram_4802ad46(&DAT_ram_4ff5c55c,&DAT_ram_481df390);
              FUN_ram_4802ad46(&DAT_ram_4ff5c56c,&DAT_ram_481df390);
              DAT_ram_4ff5c5a8 = "preparing";
              DAT_ram_4ff5c5ac = "";
              DAT_ram_4ff5c580 = 0;
              DAT_ram_4ff5c584 = 0;
              DAT_ram_4ff5c57c = 0;
              DAT_ram_4ff5c5b0 = FUN_ram_48025ba6();
              DAT_ram_4ff5c548 = '\0';
              DAT_ram_4ff5c5cb = 0;
              DAT_ram_4ff5c5d4 = 0;
              DAT_ram_4ff5c5e4 = '\0';
              DAT_ram_4ff5c5e8 = '\0';
              DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
              iVar25 = FUN_ram_480fe83a(3);
              pcVar23 = DAT_ram_4ff5c5a8;
              if (iVar25 == 0) {
                DAT_ram_4ff5c548 = '\x04';
                DAT_ram_4ff5c5a8 = "failed";
                DAT_ram_4ff5c5ac = pcVar23;
                FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"can_quiesce");
                pcVar23 = "can_quiesce";
LAB_ram_4811d286:
                puVar33 = DAT_ram_4ff6dc74;
                DAT_ram_4ff6dc74[0x1c5] = pcVar23;
                puVar33[0x1c4] = "failed";
              }
              else {
                iVar25 = FUN_ram_480f24fc();
                puVar33 = DAT_ram_4ff6dc74;
                if (iVar25 == 0) {
                  DAT_ram_4ff5c548 = '\x04';
                  DAT_ram_4ff5c5ac = "persistence";
                  DAT_ram_4ff5c5a8 = "failed";
                  FUN_ram_4802ad46(&DAT_ram_4ff5c55c,"persistence_flush");
                  pcVar23 = "persistence_flush";
                  goto LAB_ram_4811d286;
                }
                DAT_ram_4ff5c580 = DAT_ram_4ff6dc74[0x85];
                DAT_ram_4ff6dc74[0x1c5] = &DAT_ram_481df390;
                puVar33[0x1c4] = "downloading";
                DAT_ram_4ff5c5a8 = "downloading";
                DAT_ram_4ff5c548 = '\x02';
                iVar25 = FUN_ram_48030104();
                pcVar23 = DAT_ram_4ff5c5a8;
                if (iVar25 != 0) {
                  FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_174);
                  *(undefined2 *)((int)DAT_ram_4ff6dc74 + 0x222) = 0;
                  goto LAB_ram_4811b2e2;
                }
                DAT_ram_4ff5c5a8 = "failed";
                DAT_ram_4ff5c5ac = pcVar23;
                DAT_ram_4ff5c548 = '\x04';
                FUN_ram_4802ad46(&DAT_ram_4ff5c55c,DAT_ram_4ff6dc74[0x1c5]);
              }
              FUN_ram_480ff57e();
              FUN_ram_48064c42(&DAT_ram_4ff5ce98,&uStack_174);
              puVar33 = DAT_ram_4ff6dc74;
              if (DAT_ram_4ff6dc74[0x1c5] == 0) goto LAB_ram_4811cd94;
              iVar25 = FUN_ram_4ff453ae(DAT_ram_4ff6dc74[0x1c5],"resource_wait");
              goto LAB_ram_4811b562;
            }
            puVar33 = DAT_ram_4ff6dc74;
            DAT_ram_4ff6dc74[0x1c4] = "failed";
            puVar33[0x1c5] = "resource_wait";
          }
          *(undefined1 *)((int)puVar33 + 0x223) = uVar9;
          puVar33[0x1c4] = "preparing";
        }
      }
    }
    else {
      lVar40 = FUN_ram_4819b728(0);
      puVar33 = DAT_ram_4ff6dc74;
      uVar34 = (uint)((ulonglong)lVar40 >> 0x20);
      if ((lVar40 < 1) ||
         (((uint)DAT_ram_4ff6dc74[0x8d] <= uVar34 &&
          ((DAT_ram_4ff6dc74[0x8d] != uVar34 || ((uint)DAT_ram_4ff6dc74[0x8c] <= (uint)lVar40))))))
      {
        *(undefined2 *)((int)DAT_ram_4ff6dc74 + 0x222) = 0;
        puVar33[0x1c4] = "failed";
        puVar33[0x1c5] = "ota_action_expired";
      }
      else if (*(char *)((int)DAT_ram_4ff6dc74 + 0x222) != '\0') goto LAB_ram_4811b46e;
    }
  }
  else if (DAT_ram_4ff6dc78 == 0) {
    cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
    if (*(char *)((int)DAT_ram_4ff6dc74 + 0x221) == '\0') goto LAB_ram_4811b2da;
    if (cVar10 != '\0') goto LAB_ram_4811b466;
    if (DAT_ram_4ff6dc70 == 0) goto LAB_ram_4811c47e;
  }
  else {
    uVar34 = *(uint *)(DAT_ram_4ff6dc78 + 0x3ff4);
    fence();
    if (DAT_ram_4ff5c584 < uVar34) {
      DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
    }
    puVar33 = DAT_ram_4ff6dc74;
    DAT_ram_4ff5c57c = uVar34;
    DAT_ram_4ff5c584 = uVar34;
    if (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0') {
      if (((*(char *)((int)DAT_ram_4ff6dc74 + 0x221) != '\0') &&
          (*(char *)((int)DAT_ram_4ff6dc74 + 0x222) == '\0')) && (DAT_ram_4ff6dc70 == 0)) {
LAB_ram_4811b0de:
        if (DAT_ram_4ff6dc78 != 0) {
LAB_ram_4811b626:
          fence();
          if (*(char *)(DAT_ram_4ff6dc78 + 0x3ffa) != '\0') goto LAB_ram_4811b0f4;
        }
        if (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0') {
LAB_ram_4811b646:
          puVar33 = DAT_ram_4ff6dc74;
          if ((DAT_ram_4ff5c5c0 == '\0') && (DAT_ram_4ff5c5ca == '\0')) {
            DAT_ram_4ff6dc74[0x1c4] = "checking";
            puVar33[0x1c5] = &DAT_ram_481df390;
            iVar25 = FUN_ram_48025ba6();
            puVar33 = DAT_ram_4ff6dc74;
            if (iVar25 - DAT_ram_4ff6dc74[0x1c6] < 0) {
              iVar22 = FUN_ram_4802ff30();
              if ((iVar22 != 0) && (-1 < iVar25 - DAT_ram_4ff6dc74[0x1c7])) {
                uVar35 = DAT_ram_4ff6dc74[0x1c6];
                iVar22 = FUN_ram_48030104(1);
                puVar33 = DAT_ram_4ff6dc74;
                if ((iVar22 == 0) &&
                   ((DAT_ram_4ff6dc74[0x1c5] != 0 &&
                    (iVar22 = FUN_ram_4ff453ae(DAT_ram_4ff6dc74[0x1c5],"resource_wait"), iVar22 == 0
                    )))) {
                  puVar33[0x1c7] = iVar25 + 1000;
                  puVar33[0x1c6] = uVar35;
                  puVar33[0x1c4] = "checking";
                  puVar33[0x1c5] = &DAT_ram_481df390;
                }
                else {
                  *(undefined1 *)((int)puVar33 + 0x221) = 0;
                }
              }
            }
            else {
              *(undefined1 *)((int)DAT_ram_4ff6dc74 + 0x221) = 0;
              puVar33[0x1c4] = "failed";
              puVar33[0x1c5] = "resource_wait";
            }
            goto LAB_ram_4811b2e2;
          }
        }
        goto LAB_ram_4811b0f4;
      }
    }
    else {
      fence();
      pcVar23 = (char *)((int)DAT_ram_4ff6dc74 + 0x221);
      if (*(char *)(iVar25 + 0x3ff8) != '\0') {
        DAT_ram_4ff6dc74[0x1c4] = "verifying";
      }
      if (((*pcVar23 != '\0') && (*(char *)((int)puVar33 + 0x222) == '\0')) &&
         (DAT_ram_4ff6dc70 == 0)) {
        if (DAT_ram_4ff6dc78 != 0) goto LAB_ram_4811b626;
        if (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0') goto LAB_ram_4811b646;
      }
    }
LAB_ram_4811b0fc:
    puVar33 = DAT_ram_4ff6dc74;
    pcVar23 = (char *)(iVar25 + 0x3ffa);
    fence();
    if (*pcVar23 == '\0') {
LAB_ram_4811bd74:
      cVar10 = *(char *)(puVar33 + 0x89);
joined_r0x4811bdea:
      if (cVar10 != '\0') {
LAB_ram_4811bd7e:
        fence();
        if (*pcVar23 == '\0') {
          iVar22 = FUN_ram_48025ba6();
          if (iVar22 - DAT_ram_4ff6dc74[0x1c6] < 0) {
LAB_ram_4811b2d6:
            cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
            puVar33 = DAT_ram_4ff6dc74;
          }
          else {
            fence();
            *(undefined1 *)(iVar25 + 0x3ff9) = 1;
            puVar33 = DAT_ram_4ff6dc74;
            cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
            DAT_ram_4ff6dc74[0x1c5] = "download_timeout";
          }
        }
        else {
          cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
          puVar33 = DAT_ram_4ff6dc74;
        }
        goto LAB_ram_4811b2da;
      }
    }
    else {
      puVar8 = DAT_ram_4ff6dc74;
      puVar30 = (undefined4 *)(iVar25 + 0xe64);
      do {
        puVar29 = puVar30;
        puVar28 = puVar8;
        uVar35 = puVar29[1];
        uVar15 = puVar29[2];
        uVar16 = puVar29[3];
        *puVar28 = *puVar29;
        puVar28[1] = uVar35;
        puVar28[2] = uVar15;
        puVar28[3] = uVar16;
        puVar30 = puVar29 + 4;
        puVar8 = puVar28 + 4;
      } while (puVar30 != (undefined4 *)(iVar25 + 0xe94));
      uVar35 = puVar29[5];
      cVar10 = *(char *)(iVar25 + 0x25c);
      puVar28[4] = *puVar30;
      puVar28[5] = uVar35;
      if (cVar10 == '\x01') {
        if (*(char *)(iVar25 + 0x25d) == '\x01') {
          FUN_ram_4ff45158(puVar33 + 0xe,iVar25,0x1e5);
          *(undefined1 *)(puVar33 + 0x88) = 1;
          puVar33[0x1c4] = "available";
          pcVar24 = "";
        }
        else {
          *(undefined1 *)(puVar33 + 0x88) = 0;
          puVar33[0x1c4] = "failed";
          if (*(char *)(iVar25 + 0xe9c) == '\0') {
            pcVar24 = "manifest_network";
          }
          else {
            pcVar24 = (char *)(iVar25 + 0xe9c);
          }
        }
        puVar33[0x1c5] = pcVar24;
        fence();
        *pcVar23 = '\0';
        puVar33 = DAT_ram_4ff6dc74;
        *(undefined1 *)(iVar25 + 0x25c) = 0;
        cVar10 = *(char *)(puVar33 + 0x89);
        DAT_ram_4ff6dc70 = 0;
        goto joined_r0x4811bdea;
      }
      if (cVar10 != '\x02') goto LAB_ram_4811bd74;
      if (*(char *)(puVar33 + 0x89) != '\0') {
        bVar2 = false;
        if (puVar33[0x1c5] != 0) {
          iVar22 = FUN_ram_4ff453ae(puVar33[0x1c5],"download_timeout");
          bVar2 = iVar22 == 0;
        }
        DAT_ram_4ff5c57c = *(uint *)(iVar25 + 0x3ff4);
        fence();
        fence();
        DAT_ram_4ff5c584 = DAT_ram_4ff5c57c;
        *pcVar23 = '\0';
        puVar33 = DAT_ram_4ff6dc74;
        *(undefined1 *)(iVar25 + 0x25c) = 0;
        *(undefined1 *)(puVar33 + 0x89) = 0;
        cVar7 = DAT_ram_4ff6df30;
        cVar6 = DAT_ram_4ff6deb4;
        cVar5 = DAT_ram_4ff5c5ca;
        cVar4 = DAT_ram_4ff5c5c0;
        DAT_ram_4ff6dc70 = 0;
        fence();
        DAT_ram_4ff6dc6c = '\0';
        cVar10 = *(char *)(iVar25 + 0x3ff9);
        fence();
        fence();
        fence();
        fence();
        fence();
        iVar22 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))();
        puVar33 = DAT_ram_4ff6dc74;
        cVar11 = *(char *)(iVar25 + 0x25d);
        if ((((((cVar4 != '\0') && (cVar5 != '\0')) && (cVar6 != '\0')) &&
             ((cVar7 != '\0' && (iVar22 == 0)))) && (DAT_ram_4ff5c5cc == DAT_ram_4ff6dc74[0x8a])) &&
           (cVar10 == '\0')) {
          if (cVar11 != '\x01') {
            DAT_ram_4ff6dc74[0x1c4] = "failed";
            if (!bVar2) goto LAB_ram_4811b274;
            goto LAB_ram_4811ca4a;
          }
          iVar22 = FUN_ram_4802e658(iVar25);
          if (iVar22 == 0) {
LAB_ram_4811cc3a:
            puVar33 = DAT_ram_4ff6dc74;
            DAT_ram_4ff6dc74[0x1c4] = "failed";
            if (!bVar2) {
              if (*(char *)(iVar25 + 0x25d) == '\x01') {
                if (*(char *)(iVar25 + 0xe9c) != '\0') goto LAB_ram_4811cae2;
                pcVar24 = "set_boot_partition";
                goto LAB_ram_4811b28a;
              }
              goto LAB_ram_4811b274;
            }
            goto LAB_ram_4811ca4a;
          }
          iVar22 = FUN_ram_4802e468(iVar25);
          if (iVar22 == 0) {
            FUN_ram_4ff45158(iVar25 + 0xe9c,"management_target_changed",0x1a);
            goto LAB_ram_4811cc3a;
          }
          iVar22 = FUN_ram_4812d5fc(DAT_ram_4ff6de60);
          if (iVar22 != 0) {
            FUN_ram_4ff45158(iVar25 + 0xe9c,"set_boot_partition",0x13);
            goto LAB_ram_4811cc3a;
          }
          DAT_ram_4ff5c5a8 = "committed";
          DAT_ram_4ff5c548 = '\x03';
          DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
          puVar33 = DAT_ram_4ff6dc74;
          DAT_ram_4ff6dc74[0x1c4] = "rebooting";
          puVar33[0x1c5] = &DAT_ram_481df390;
          if (*(char *)(puVar33 + 0x89) == '\0') {
            cVar10 = *(char *)((int)puVar33 + 0x222);
            goto LAB_ram_4811b2da;
          }
          goto LAB_ram_4811bd7e;
        }
        DAT_ram_4ff6dc74[0x1c4] = "failed";
        if (bVar2) {
LAB_ram_4811ca4a:
          pcVar24 = "download_timeout";
        }
        else if (cVar11 == '\x01') {
          if (*(char *)(iVar25 + 0xe9c) == '\0') {
            if (cVar10 == '\0') {
              pcVar24 = "online_ota_state_changed";
            }
            else {
              pcVar24 = "online_ota_cancelled";
            }
          }
          else {
LAB_ram_4811cae2:
            pcVar24 = (char *)(iVar25 + 0xe9c);
          }
        }
        else {
LAB_ram_4811b274:
          if (*(char *)(iVar25 + 0xe9c) != '\0') goto LAB_ram_4811cae2;
          pcVar24 = "download_interrupted";
        }
LAB_ram_4811b28a:
        DAT_ram_4ff5c5ac = DAT_ram_4ff5c5a8;
        puVar33[0x1c5] = pcVar24;
        DAT_ram_4ff5c5a8 = "failed";
        DAT_ram_4ff5c548 = '\x04';
        FUN_ram_4802ad46(&DAT_ram_4ff5c55c);
        DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
        if ((DAT_ram_4ff5c5c0 == '\0') || (iVar22 = FUN_ram_480fed16(1), iVar22 == 0)) {
          DAT_ram_4ff6dc74[0x1c5] = "can_restore";
          FUN_ram_4802ad46(&DAT_ram_4ff5c56c,"can_restore");
          if (*(char *)(DAT_ram_4ff6dc74 + 0x89) == '\0') {
            cVar10 = *(char *)((int)DAT_ram_4ff6dc74 + 0x222);
            puVar33 = DAT_ram_4ff6dc74;
            goto LAB_ram_4811b2da;
          }
          goto LAB_ram_4811bd7e;
        }
        if (*(char *)(DAT_ram_4ff6dc74 + 0x89) != '\0') goto LAB_ram_4811bd7e;
        goto LAB_ram_4811b2d6;
      }
    }
    cVar10 = *(char *)((int)puVar33 + 0x222);
LAB_ram_4811b2da:
    if (cVar10 != '\0') goto LAB_ram_4811b466;
  }
LAB_ram_4811b2e2:
  cVar10 = DAT_ram_4ff5c5c0;
  fence();
  if ((DAT_ram_4ff6dc6c == '\0') && (DAT_ram_4ff5c5c0 != '\0')) {
    iVar25 = FUN_ram_48025ba6();
    if (DAT_ram_4ff5c548 == '\x02') {
      if ((DAT_ram_4ff5c5dc == '\0') || (-1 < iVar25 - DAT_ram_4ff5c5d8)) {
        FUN_ram_4802a8a8(&uStack_174,"transfer_deadline");
        FUN_ram_4802f888(&uStack_174);
        FUN_ram_4802a59e(&uStack_174);
        uVar35 = DAT_ram_4ff5cbdc;
        DAT_ram_4ff5cbdc = uVar35;
        if (DAT_ram_4ff5cbe8 != 0) {
          pcVar23 = (char *)(DAT_ram_4ff5cbe8 + 0xcc0);
          iVar36 = DAT_ram_4ff5cbe8 + 0x3a80;
          iVar22 = DAT_ram_4ff5cbe8;
          do {
            if (((*pcVar23 != '\0') && (pcVar23[1] == '\0')) && (*(char *)(iVar22 + 0x44c) != '\0'))
            {
              DAT_ram_4ff5cbdc = *(undefined4 *)(iVar22 + 8);
              FUN_ram_48065e9c(iVar22 + 0x1c,8);
              FUN_ram_48070652(iVar22);
            }
            iVar22 = iVar22 + 0x1d40;
            pcVar23 = pcVar23 + 0x1d40;
            DAT_ram_4ff5cbdc = uVar35;
          } while (iVar36 != iVar22);
        }
        goto LAB_ram_4811b30a;
      }
      if (DAT_ram_4ff5c5e8 != '\0') goto LAB_ram_4811c02a;
LAB_ram_4811c834:
      if (29999 < (uint)(iVar25 - DAT_ram_4ff5c5c4)) goto LAB_ram_4811b33c;
    }
    else {
      cVar10 = '\0';
LAB_ram_4811b30a:
      if (DAT_ram_4ff5c5e8 == '\0') {
        if (DAT_ram_4ff5c548 == '\x03') {
          if ((uint)(iVar25 - DAT_ram_4ff5c5c4) < 3000) goto LAB_ram_4811b392;
          goto LAB_ram_4811c03c;
        }
        if (DAT_ram_4ff5c548 == '\x02') {
          if (cVar10 == '\0') goto LAB_ram_4811c834;
LAB_ram_4811b33c:
          FUN_ram_4802a8a8(&uStack_174,"session_timeout");
          FUN_ram_4802f888(&uStack_174);
          FUN_ram_4802a59e(&uStack_174);
LAB_ram_4811b35a:
          if ((DAT_ram_4ff5c5e4 == '\0') || (-1 < iVar25 - DAT_ram_4ff5c5e0)) {
            DAT_ram_4ff5c5e0 = iVar25 + 5000;
            DAT_ram_4ff5c5e4 = '\x01';
            if ((DAT_ram_4ff5c5c0 == '\0') || (iVar25 = FUN_ram_480fed16(), iVar25 == 0)) {
              FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                               "[FATAL] OTA session timeout could not restore CAN; fail-closed");
            }
          }
        }
        else if (DAT_ram_4ff5c548 == '\x04') {
          if ((cVar10 != '\0') || (4999 < (uint)(iVar25 - DAT_ram_4ff5c5c4))) goto LAB_ram_4811b35a;
        }
        else if ((cVar10 != '\0') || (119999 < (uint)(iVar25 - DAT_ram_4ff5c5c4)))
        goto LAB_ram_4811b33c;
      }
      else {
LAB_ram_4811c02a:
        if ((DAT_ram_4ff5c5e4 == '\0') || (-1 < iVar25 - DAT_ram_4ff5c5e0)) {
LAB_ram_4811c03c:
          FUN_ram_4802959a(&DAT_ram_4ff6dc18);
        }
      }
    }
  }
LAB_ram_4811b392:
  uVar34 = DAT_ram_4ff6de50;
  if ((DAT_ram_4ff6de6d == '\0') &&
     ((uVar12 = FUN_ram_48025ba6(), uVar34 = DAT_ram_4ff6de50, DAT_ram_4ff6de58 == '\0' ||
      (-1 < (int)(uVar12 - DAT_ram_4ff6de54))))) {
    if (DAT_ram_4ff6de5c == '\0') {
      DAT_ram_4ff6de4c = uVar12;
      if (uVar12 < 30000) {
        PTR_s_startup_ram_481d1924_ram_4ff47eb8 = "startup_grace";
      }
      else if (DAT_ram_4ff6de6c == '\0') {
        iVar25 = FUN_ram_4812d062();
        uStack_174 = -1;
        if ((iVar25 == 0) || (iVar25 = FUN_ram_4812dbe2(iVar25,&uStack_174), iVar25 != 0)) {
          PTR_s_startup_ram_481d1924_ram_4ff47eb8 = s_partition_state_ram_481d0e50;
          PTR_DAT_ram_481df390_ram_4ff47eb4 = s_partition_state_ram_481d0e50;
          DAT_ram_4ff6de50 = 0;
          DAT_ram_4ff47eb0 = 0xffffffff;
          DAT_ram_4ff47eac = 0xffffffff;
          DAT_ram_4ff6de48 = FUN_ram_48025ba6();
          DAT_ram_4ff6de54 = uVar12 + 5000;
          DAT_ram_4ff6de58 = '\x01';
          uVar34 = DAT_ram_4ff6de50;
        }
        else {
          if (uStack_174 == 1) {
            DAT_ram_4ff6de6c = '\x01';
            goto LAB_ram_4811b3ec;
          }
          FUN_ram_4802e2a4();
          DAT_ram_4ff6de6d = '\x01';
          PTR_s_startup_ram_481d1924_ram_4ff47eb8 = "already_confirmed";
          uVar34 = DAT_ram_4ff6de50;
        }
      }
      else {
LAB_ram_4811b3ec:
        if (uVar12 < 120000) {
          if (DAT_ram_4ff48999 != '\0') {
            fence();
            fence();
            if (DAT_ram_4ff6df34 != '\0') {
              fence();
              fence();
              if (DAT_ram_4ff6df30 == '\0') {
                fence();
                fence();
                if (((DAT_ram_4ff6df38 != '\0') && (DAT_ram_4ff6df2c != (int *)0x0)) &&
                   (iVar36 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))(), iVar22 = DAT_ram_4ff6ddb0,
                   iVar25 = DAT_ram_4ff6ddac, iVar36 != 0)) {
                  if (((DAT_ram_4ff6ddb0 == 0) || (DAT_ram_4ff6ddac == 0)) ||
                     ((iVar36 = FUN_ram_48025b94(), 0xf4627 < (uint)(iVar36 - iVar22) ||
                      (iVar22 = FUN_ram_48025b94(), 0xf4627 < (uint)(iVar22 - iVar25))))) {
                    pcVar23 = "task_heartbeat";
                  }
                  else {
                    piVar14 = &DAT_ram_4ff5c9d8;
                    puVar32 = &DAT_ram_481f54d0;
                    puVar33 = &DAT_ram_4ff5c9d8;
                    iVar22 = 0;
                    cVar10 = '\0';
                    iVar25 = -1;
                    do {
                      uVar9 = *puVar32;
                      memset(&uStack_174,0,0x134);
                      uStack_78 = 0xffffffff;
                      uStack_64 = 1;
                      iVar37 = (**(code **)(*DAT_ram_4ff6df2c + 0x15c))
                                         (DAT_ram_4ff6df2c,uVar9,&uStack_174,
                                          *(code **)(*DAT_ram_4ff6df2c + 0x15c));
                      iVar36 = iStack_164;
                      if (((iVar37 == 0) || ((char)uStack_174 == '\0')) ||
                         ((uStack_174._1_1_ == '\0' ||
                          ((((uStack_174._2_1_ != '\0' || (uStack_174._3_1_ != '\0')) ||
                            (uStack_170._1_1_ != '\0')) ||
                           ((iStack_164 == 0 ||
                            (iVar37 = FUN_ram_48025b94(), 0x262987 < (uint)(iVar37 - iVar36)))))))))
                      {
                        FUN_ram_4802c5b4("can_not_fresh",iVar22);
                        uVar34 = DAT_ram_4ff6de50;
                        goto LAB_ram_4811b6ca;
                      }
                      if ((iStack_110 != 0 || iStack_104 != 0) || iStack_130 != 0) {
                        FUN_ram_4802c5b4("can_integrity",iVar22);
                        uVar34 = DAT_ram_4ff6de50;
                        goto LAB_ram_4811b6ca;
                      }
                      cVar11 = *(char *)(puVar33 + 0xf);
                      if ((cVar11 == '\0') ||
                         (((iVar36 = iVar22, iStack_f8 == *piVar14 && (iStack_d4 == piVar14[1])) &&
                          ((iStack_c0 == piVar14[2] &&
                           ((iStack_bc == piVar14[3] && (iStack_124 == piVar14[4])))))))) {
                        iVar36 = iVar25;
                        cVar11 = cVar10;
                      }
                      cVar10 = cVar11;
                      *piVar14 = iStack_f8;
                      piVar14[1] = iStack_d4;
                      piVar14[2] = iStack_c0;
                      piVar14[3] = iStack_bc;
                      piVar14[4] = iStack_124;
                      *(undefined1 *)(puVar33 + 0xf) = 1;
                      iVar22 = iVar22 + 1;
                      puVar32 = puVar32 + 1;
                      piVar14 = piVar14 + 5;
                      puVar33 = (undefined4 *)((int)puVar33 + 1);
                      iVar25 = iVar36;
                    } while (iVar22 != 3);
                    if (cVar10 != '\0') {
                      FUN_ram_4802c5b4("can_recent_failure",iVar36);
                      uVar34 = DAT_ram_4ff6de50;
                      goto LAB_ram_4811b6ca;
                    }
                    FUN_ram_48032c66(&uStack_174);
                    if (((char)uStack_160 == '\0') && (uStack_170 == 0 && uStack_16c == 0)) {
                      iVar25 = FUN_ram_4802feee();
                      if (iVar25 != 0) {
                        if (((DAT_ram_4ff5ca98 == '\0') || (DAT_ram_4ff5ca99 == '\0')) ||
                           (DAT_ram_4ff5caa4 != 0)) {
                          FUN_ram_4802c5b4("persistence_unhealthy",0xffffffff);
                          uVar34 = DAT_ram_4ff6de50;
                        }
                        else {
                          PTR_s_startup_ram_481d1924_ram_4ff47eb8 = s_observing_healthy_ram_481d0fec
                          ;
                          DAT_ram_4ff47eb0 = 0xffffffff;
                          uVar34 = uVar12;
                          if ((DAT_ram_4ff6de50 != 0) &&
                             (uVar34 = DAT_ram_4ff6de50, 9999 < uVar12 - DAT_ram_4ff6de50)) {
                            iVar25 = FUN_ram_480fe83a(3);
                            if (iVar25 == 0) {
                              iVar25 = FUN_ram_480fed16();
                              if (iVar25 == 0) {
                                FUN_ram_48032170(uVar12,"quiesce_restore");
                                uVar34 = DAT_ram_4ff6de50;
                              }
                              else {
                                FUN_ram_4802c5b4("quiesce_retry",0xffffffff);
                                DAT_ram_4ff6de54 = uVar12 + 1000;
                                DAT_ram_4ff6de58 = '\x01';
                                uVar34 = DAT_ram_4ff6de50;
                              }
                            }
                            else {
                              iVar25 = FUN_ram_480f24fc();
                              if (iVar25 == 0) {
                                iVar25 = FUN_ram_480fed16();
                                if (iVar25 == 0) {
                                  FUN_ram_48032170(uVar12,"flush_restore");
                                  uVar34 = DAT_ram_4ff6de50;
                                }
                                else {
LAB_ram_4811d336:
                                  FUN_ram_4802c5b4("flash_commit_retry",0xffffffff);
                                  DAT_ram_4ff6de54 = uVar12 + 5000;
                                  DAT_ram_4ff6de58 = '\x01';
                                  uVar34 = DAT_ram_4ff6de50;
                                }
                              }
                              else {
                                iVar25 = FUN_ram_480320c0();
                                if (iVar25 == 0) {
                                  FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                                                                                                      
                                                  "[FATAL] OTA validation marker unavailable; restoring CAN and retrying without marking the image valid"
                                                  );
                                  iVar25 = FUN_ram_480fed16(0);
                                  if (iVar25 != 0) goto LAB_ram_4811d336;
                                  FUN_ram_48032170(uVar12,"marker_restore");
                                  uVar34 = DAT_ram_4ff6de50;
                                }
                                else {
                                  iVar25 = FUN_ram_4812dbbc();
                                  iVar22 = FUN_ram_480fed16(0);
                                  if (iVar22 == 0) {
                                    FUN_ram_48032170(uVar12,"mark_valid_restore");
                                    uVar34 = DAT_ram_4ff6de50;
                                  }
                                  else {
                                    FUN_ram_4802e2a4();
                                    if (iVar25 == 0) {
                                      PTR_s_startup_ram_481d1924_ram_4ff47eb8 =
                                           s_validated_ram_481d10bc;
                                      DAT_ram_4ff6de6d = '\x01';
                                      FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                                                                                                              
                                                  "[P4] OTA image validated after continuous CAN/task health gate"
                                                  );
                                      uVar34 = DAT_ram_4ff6de50;
                                    }
                                    else {
                                      FUN_ram_4802c5b4("flash_commit_retry",0xffffffff);
                                      DAT_ram_4ff6de54 = uVar12 + 5000;
                                      DAT_ram_4ff6de58 = '\x01';
                                      uVar35 = FUN_ram_480018de(iVar25);
                                      FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                                                       "[P4] OTA validation retry: %s\n",uVar35);
                                      uVar34 = DAT_ram_4ff6de50;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_ram_4811b6ca;
                      }
                      pcVar23 = "p160_data_storage";
                    }
                    else {
                      pcVar23 = "p0_integrity";
                    }
                  }
                  FUN_ram_4802c5b4(pcVar23,0xffffffff);
                  uVar34 = DAT_ram_4ff6de50;
                  goto LAB_ram_4811b6ca;
                }
              }
            }
          }
          PTR_s_startup_ram_481d1924_ram_4ff47eb8 = s_runtime_not_ready_ram_481d0f68;
          PTR_DAT_ram_481df390_ram_4ff47eb4 = s_runtime_not_ready_ram_481d0f68;
          DAT_ram_4ff6de50 = 0;
          DAT_ram_4ff47eac = 0xffffffff;
          DAT_ram_4ff47eb0 = 0xffffffff;
          DAT_ram_4ff6de48 = FUN_ram_48025ba6();
          uVar34 = DAT_ram_4ff6de50;
        }
        else {
          FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                           "[FATAL] OTA validation expired: reason=%s bus=%d lastBlockMs=%lu\n",
                           PTR_DAT_ram_481df390_ram_4ff47eb4,DAT_ram_4ff47eac,DAT_ram_4ff6de48);
          PTR_s_startup_ram_481d1924_ram_4ff47eb8 = s_health_deadline_ram_481d0ea4;
          fence();
          DAT_ram_4ff6df34 = '\0';
          fence();
          fence();
          DAT_ram_4ff6df38 = '\0';
          fence();
          fence();
          DAT_ram_4ff47ec4 = 1;
          fence();
          fence();
          DAT_ram_4ff6df30 = '\x01';
          fence();
          fence();
          DAT_ram_4ff6deb4 = '\0';
          fence();
          if (DAT_ram_4ff6df2c != (int *)0x0) {
            (**(code **)(*DAT_ram_4ff6df2c + 0x134))();
          }
          iVar25 = FUN_ram_480fe83a(5);
          if ((iVar25 == 0) || (fence(), DAT_ram_4ff6deb4 == '\0')) {
            FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                             "[FATAL] OTA rollback teardown was not proven; rebooting pending image without writing otadata"
                            );
                    /* WARNING: Subroutine does not return */
            FUN_ram_480007da();
          }
          FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                           "[FATAL] OTA image missed the 120 s health deadline; rolling back");
          FUN_ram_48032170(uVar12,"health_deadline");
          uVar34 = DAT_ram_4ff6de50;
        }
      }
    }
    else {
      FUN_ram_48032170(uVar12,"restore_retry");
      uVar34 = DAT_ram_4ff6de50;
    }
  }
LAB_ram_4811b6ca:
  DAT_ram_4ff6de50 = uVar34;
  iVar25 = 2;
  while (fence(), (DAT_ram_4ff5ce9c & 1) != 0) {
    if (iVar25 == 1) {
      uVar35 = 0;
      iVar22 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar25 = 0;
      iVar38 = 0;
      goto LAB_ram_4811b738;
    }
    iVar25 = 1;
  }
  fence();
  iVar25 = DAT_ram_4ff5cea4;
  uVar35 = DAT_ram_4ff5ceb4;
  iVar22 = DAT_ram_4ff5ceb0;
  iVar36 = DAT_ram_4ff5ceac;
  iVar37 = DAT_ram_4ff5cea8;
  iVar38 = DAT_ram_4ff5cea0;
LAB_ram_4811b738:
  uVar39 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar39,(int)((ulonglong)uVar39 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = 8;
  DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  iVar13 = FUN_ram_48025ba6();
  if (4999 < (uint)(iVar13 - DAT_ram_4ff6dd54)) {
    fence();
    fence();
    if ((((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0'))
       && (((DAT_ram_4ff6dd68 == '\0' || (DAT_ram_4ff47e6c == '\0')) ||
           ((DAT_ram_4ff47e64 == '\0' || ((DAT_ram_4ff47e6d != '\0' || (DAT_ram_4ff47e65 != '\0'))))
           )))) {
      DAT_ram_4ff6dd54 = iVar13;
      FUN_ram_480af836();
    }
  }
  uVar34 = DAT_ram_4ff6de94;
  fence();
  iVar13 = FUN_ram_48025ba6();
  if ((uVar34 != 0) && ((DAT_ram_4ff6de7c == '\0' || (-1 < iVar13 - DAT_ram_4ff6de78)))) {
    fence();
    fence();
    if ((DAT_ram_4ff6df30 == '\0') && ((DAT_ram_4ff5c5c0 == '\0' && (DAT_ram_4ff5c5ca == '\0')))) {
      FUN_ram_480ee046(-uVar34 & uVar34);
    }
  }
  if ((DAT_ram_4ff5ca9c != 0) &&
     (((iVar13 = FUN_ram_48025ba6(), DAT_ram_4ff6de74 == '\0' || (-1 < iVar13 - DAT_ram_4ff6de70))
      && (fence(), DAT_ram_4ff6deb4 != '\0')))) {
    if ((DAT_ram_4ff5ca98 == '\0') || (DAT_ram_4ff5ca99 == '\0')) {
LAB_ram_4811c0f4:
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
      if (DAT_ram_4ff5ca9c != 0) {
        if ((DAT_ram_4ff5ca80 != (code *)0x0) && (iVar21 = (*DAT_ram_4ff5ca80)(), iVar21 == 0))
        goto LAB_ram_4811c0f4;
        uVar34 = 0;
        do {
          if ((DAT_ram_4ff5ca9c >> (uVar34 & 0x1f) & 1) != 0) {
            cVar10 = FUN_ram_48087dc6(&DAT_ram_4ff5ca80,uVar34 & 0xff);
            goto LAB_ram_4811c0f6;
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != 8);
        cVar10 = '\x01';
      }
    }
LAB_ram_4811c0f6:
    uStack_174 = CONCAT31(uStack_174._1_3_,cVar10);
    DAT_ram_4ff6de74 = cVar10 == '\0';
    if ((bool)DAT_ram_4ff6de74) {
      DAT_ram_4ff6de70 = iVar13 + 5000;
    }
  }
  iVar13 = FUN_ram_48025ba6();
  if ((DAT_ram_4ff6dcd5 != '\0') && (999 < (uint)(iVar13 - DAT_ram_4ff6dccc))) {
    DAT_ram_4ff6dccc = iVar13;
    FUN_ram_480612e0();
    fence();
    fence();
    if ((DAT_ram_4ff6df30 == '\0') && ((DAT_ram_4ff5c5c0 == '\0' && (DAT_ram_4ff5c5ca == '\0')))) {
      FUN_ram_480d387c(&DAT_ram_4ff5be28,iVar13);
      FUN_ram_480d20e2(&DAT_ram_4ff5be28,iVar13,0);
    }
  }
  if (iVar25 == 1) {
    uVar39 = FUN_ram_4ff21a0a();
    iVar37 = __divdi3((int)uVar39,(int)((ulonglong)uVar39 >> 0x20),1000,0);
    DAT_ram_4ff5ceb4 = 0;
    iVar38 = 1;
    iVar36 = iVar37 + 2000;
    iVar22 = iVar37;
    uVar35 = DAT_ram_4ff5ceb4;
  }
  DAT_ram_4ff5ceb4 = uVar35;
  DAT_ram_4ff5ceb0 = iVar22;
  DAT_ram_4ff5ceac = iVar36;
  DAT_ram_4ff5cea8 = iVar37;
  DAT_ram_4ff5cea0 = iVar38;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5cea4 = iVar25;
  if (DAT_ram_4ff6de90 == 0) {
LAB_ram_4811bc36:
    if ((DAT_ram_4ff6dca9 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
LAB_ram_4811bc5a:
      pbVar31 = (byte *)&DAT_ram_4ff5bd30;
      bVar27 = 0;
      do {
        bVar1 = *pbVar31;
        pbVar31 = pbVar31 + 1;
        bVar27 = bVar27 | bVar1;
      } while (pbVar31 != (byte *)&DAT_ram_4ff5bd40);
      if (((bVar27 != 0) && (DAT_ram_4ff5bd40 != 0)) &&
         (iVar25 = FUN_ram_48025ba6(), 4999 < (uint)(iVar25 - DAT_ram_4ff6dca4))) {
        DAT_ram_4ff6dca4 = iVar25;
        iVar25 = FUN_ram_48076bd0(DAT_ram_4ff6dcac + 0x6be8,0);
        if (iVar25 == 0) {
          PTR_s_owner_uninitialized_ram_481d1574_ram_4ff47e50 = s_storage_invalid_ram_481d0240;
          DAT_ram_4ff5bd64 = &sedeleg;
        }
        else {
          iVar25 = FUN_ram_481105ee(DAT_ram_4ff6dcac + 0x6be8);
          if (iVar25 == 0) {
            DAT_ram_4ff5bd64 = (undefined *)CONCAT11(DAT_ram_4ff5bd64._1_1_,1);
          }
        }
      }
    }
  }
  else if ((DAT_ram_4ff6dca9 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
    pbVar31 = (byte *)&DAT_ram_4ff5bd30;
    bVar27 = 0;
    do {
      bVar1 = *pbVar31;
      pbVar31 = pbVar31 + 1;
      bVar27 = bVar27 | bVar1;
    } while (pbVar31 != (byte *)&DAT_ram_4ff5bd40);
    if ((bVar27 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      iVar25 = FUN_ram_48025ba6();
      if (-1 < iVar25 - DAT_ram_4ff6de8c) {
        uVar34 = FUN_ram_4802cede();
        uVar34 = ~uVar34 & DAT_ram_4ff6de90;
        if (uVar34 != 0) {
          iVar25 = FUN_ram_481123e6(uVar34);
          if ((iVar25 != 0) &&
             (DAT_ram_4ff6de90 = ~uVar34 & DAT_ram_4ff6de90, DAT_ram_4ff6dc9c != 0)) {
            iVar25 = *(int *)(DAT_ram_4ff6dc9c + 0x1c) + 1;
            if (iVar25 == 0) {
              iVar25 = 1;
            }
            if ((iVar25 == *(int *)(DAT_ram_4ff6dc9c + 0x20)) && (iVar25 = iVar25 + 1, iVar25 == 0))
            {
              iVar25 = 1;
            }
            *(int *)(DAT_ram_4ff6dc9c + 0x1c) = iVar25;
            uVar35 = FUN_ram_48025ba6();
            *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar35;
          }
          iVar25 = FUN_ram_48025ba6();
          DAT_ram_4ff6de8c = iVar25 + 5000;
        }
      }
      goto LAB_ram_4811bc36;
    }
    goto LAB_ram_4811bc5a;
  }
  iVar25 = DAT_ram_4ff6dc9c;
  if (DAT_ram_4ff6dc9c == 0) goto LAB_ram_4811ba74;
  if ((DAT_ram_4ff6dcc8 != 0) && (DAT_ram_4ff6dcc4 != 0)) {
    DAT_ram_4ff6dcbc = FUN_ram_48032c1a();
    fence();
    fence();
    if (*(char *)(iVar25 + 0x87b5e) != '\0') {
      FUN_ram_4811385c();
    }
    fence();
    if (*(char *)(iVar25 + 0x87b5d) == '\0') {
      if (-1 < *(int *)(iVar25 + 0x87b4c)) {
        iVar22 = FUN_ram_4813630a();
        if ((iVar22 != 0) && (piVar14 = (int *)FUN_ram_4819bf88(), *piVar14 != 9)) {
          *(char **)(iVar25 + 0x87bc0) = "socket_retire_wait";
          goto LAB_ram_4811ba74;
        }
        *(undefined4 *)(iVar25 + 0x87b4c) = 0xffffffff;
      }
      iVar36 = FUN_ram_48032c1a();
      iVar22 = DAT_ram_4ff6dc94;
      if (iVar36 != 0) goto LAB_ram_4811ba74;
      if (DAT_ram_4ff6dc94 == 0) {
        if (DAT_ram_4ff6dc98 != 0) {
          bVar3 = 0;
          bVar1 = 0;
          bVar27 = 0;
          goto LAB_ram_4811c164;
        }
        goto LAB_ram_4811ba74;
      }
      if ((*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0') &&
         (iVar36 = FUN_ram_48032dec(), bVar1 = DAT_ram_4ff47e54, iVar36 != 0)) {
        if (DAT_ram_4ff47e54 == 0) {
          if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811ba74;
          bVar3 = 0;
          bVar27 = 0;
          goto LAB_ram_4811c164;
        }
        if (*(char *)(iVar25 + 0x8175f) != '\0') {
          *(undefined **)(iVar22 + 0x9618) = &sedeleg;
          FUN_ram_4ff454c4(iVar22 + 0x961a,iVar25 + 0x8175f);
          FUN_ram_4ff454c4(iVar22 + 0x965b,iVar25 + 0x817a0);
          FUN_ram_4ff454c4(iVar22 + 0x969c,iVar25 + 0x7975e);
          *(undefined4 *)(iVar22 + 0x116a0) = *(undefined4 *)(iVar25 + 0x87b48);
          uVar35 = *(undefined4 *)(iVar25 + 0x86960);
          uVar15 = *(undefined4 *)(iVar25 + 0x86964);
          uVar16 = *(undefined4 *)(iVar25 + 0x86968);
          uVar17 = *(undefined4 *)(iVar25 + 0x8696c);
          *(undefined4 *)(iVar22 + 0x116a4) = *(undefined4 *)(iVar25 + 0x8695c);
          *(undefined4 *)(iVar22 + 0x116a8) = uVar35;
          *(undefined4 *)(iVar22 + 0x116ac) = uVar15;
          *(undefined4 *)(iVar22 + 0x116b0) = uVar16;
          *(undefined4 *)(iVar22 + 0x116b4) = uVar17;
          iVar22 = FUN_ram_480b66f6();
          if (iVar22 == 0) {
            if (DAT_ram_4ff6dc98 != 0) {
              bVar3 = bVar1;
              bVar27 = 0;
              goto LAB_ram_4811c164;
            }
            goto LAB_ram_4811ba74;
          }
          *(undefined1 *)(iVar25 + 0x8175f) = 0;
          *(undefined1 **)(iVar25 + 0x87bc0) = &DAT_ram_481df390;
          *(undefined1 *)(iVar25 + 0x49) = 0;
          uVar35 = FUN_ram_48025ba6();
          iVar22 = DAT_ram_4ff6dc94;
          *(undefined4 *)(iVar25 + 0x87b50) = uVar35;
        }
        if (*(byte *)(iVar22 + 0x9618) != 0) {
          bVar27 = *(byte *)(iVar22 + 0x9619);
          if (bVar27 == 0) {
            if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811cbe4;
            bVar3 = 0;
            bVar1 = *(byte *)(iVar22 + 0x9618);
            bVar27 = 0;
          }
          else {
            bVar1 = *(byte *)(iVar25 + 0x49);
            if (bVar1 == 0) {
              iVar22 = FUN_ram_48025ba6();
              bVar1 = bVar27;
              if (iVar22 - *(int *)(iVar25 + 0x87b50) < 0) {
                if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811cbe4;
                bVar3 = 0;
                bVar27 = 0;
              }
              else {
                if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811c19a;
                bVar3 = 0;
              }
            }
            else {
              if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811cbe4;
              bVar3 = 0;
              bVar27 = 0;
            }
          }
          goto LAB_ram_4811c164;
        }
        if (DAT_ram_4ff6dc98 != 0) {
          bVar3 = 0;
          bVar27 = 0;
          goto LAB_ram_4811c164;
        }
LAB_ram_4811cbe4:
        bVar27 = 0;
LAB_ram_4811c19a:
        iVar22 = DAT_ram_4ff6dc94;
        if (((*(char *)(DAT_ram_4ff6dc94 + 72000) != '\0') &&
            (*(char *)(DAT_ram_4ff6dc94 + 0x11941) == '\0')) &&
           (iVar36 = FUN_ram_48025ba6(), -1 < iVar36 - *(int *)(iVar25 + 0x51c))) {
          FUN_ram_480ceb3c();
          iVar36 = FUN_ram_48025ba6();
          *(int *)(iVar25 + 0x51c) = iVar36 + 5000;
        }
        iVar36 = DAT_ram_4ff6dcc8;
        if (*(char *)(iVar25 + 0x87b6a) == '\0') {
          if (((*(char *)((int)DAT_ram_4ff6dc74 + 0x222) == '\0') &&
              (*(char *)((int)DAT_ram_4ff6dc74 + 0x221) == '\0')) || (bVar27 != 0)) {
            iVar37 = FUN_ram_4ff453ae(iVar25 + 0xb3,DAT_ram_4ff6dcc8);
            if ((iVar37 != 0) || (*(int *)(iVar25 + 0x4fc) != *(int *)(iVar36 + 0x284))) {
              FUN_ram_4ff454c4(iVar25 + 0xb3,iVar36);
              *(undefined1 *)(iVar25 + 0x87b62) = 0;
              *(undefined1 *)(iVar25 + 0x4a) = 0;
              *(undefined2 *)(iVar25 + 0x4c) = 0;
              *(undefined1 *)(iVar25 + 0x25) = 0;
              iVar38 = DAT_ram_4ff6dc88;
              iVar37 = *(int *)(iVar25 + 0x1c) + 1;
              if (iVar37 == 0) {
                iVar37 = 1;
              }
              if ((iVar37 == *(int *)(iVar25 + 0x20)) && (iVar37 = iVar37 + 1, iVar37 == 0)) {
                iVar37 = 1;
              }
              *(int *)(iVar25 + 0x1c) = iVar37;
              if (((iVar38 != 0) && (*(char *)(iVar38 + 0x6c594) != '\0')) &&
                 (iVar38 + 0xc000 != iVar38 + 0x6c390)) {
                puVar32 = (undefined1 *)(iVar38 + 0x14048);
                do {
                  *puVar32 = 0;
                  puVar32 = puVar32 + 0x804c;
                } while ((undefined1 *)(iVar38 + 0x743d8) != puVar32);
              }
              iVar37 = DAT_ram_4ff6dc9c;
              pvVar26 = (void *)(DAT_ram_4ff6dc9c + 0x5c);
              *(undefined1 **)(iVar25 + 0x87bc0) = &DAT_ram_481df390;
              pvVar26 = memset(pvVar26,0,0x57);
              uVar9 = FUN_ram_48034932(iVar36 + 0x181,iVar36 + 0x63cf,0,pvVar26);
              iVar36 = DAT_ram_4ff6dcc8;
              *(undefined1 *)(iVar37 + 0x87b60) = uVar9;
              FUN_ram_4ff45158(iVar25 + 0x278,iVar36,0x28b);
              uVar35 = FUN_ram_48025ba6();
              *(undefined4 *)(iVar25 + 0x87b50) = uVar35;
            }
            if ((byte)(*(char *)(iVar22 + 0x11a40) - 4U) < 2) {
              FUN_ram_480fc78e();
            }
            else {
              iVar36 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
              if (((iVar36 == 3) && (lVar40 = FUN_ram_4819b728(0), 0x6592007f < lVar40)) &&
                 (*(char *)(iVar25 + 0x87b60) != '\0')) {
                if (*(char *)(DAT_ram_4ff6dcc8 + 0x63cf) == '\0') goto LAB_ram_4811ba82;
                FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0xffffffff);
                if (((DAT_ram_4ff6dcc0 == 0) && (*(char *)(DAT_ram_4ff6dcc8 + 0x63fd) == '\0')) &&
                   (*(char *)(DAT_ram_4ff6dcc8 + 0x63fe) == '\0')) {
                  FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
                  if (*(char *)(DAT_ram_4ff6dcc8 + 0x6401) != '\0') {
                    iVar36 = *(int *)(iVar25 + 0x1c);
                    *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x6401) = 0;
                    iVar36 = iVar36 + 1;
                    if (iVar36 == 0) {
                      iVar36 = 1;
                    }
                    if ((iVar36 == *(int *)(iVar25 + 0x20)) && (iVar36 = iVar36 + 1, iVar36 == 0)) {
                      iVar36 = 1;
                    }
                    *(int *)(iVar25 + 0x1c) = iVar36;
                    uVar35 = FUN_ram_48025ba6();
                    *(undefined4 *)(iVar25 + 0x87b50) = uVar35;
                  }
                  iVar36 = FUN_ram_48025ba6();
                  if (-1 < iVar36 - *(int *)(iVar25 + 0x87b50)) {
                    cVar10 = *(char *)(iVar22 + 0x11a40);
                    if ((cVar10 == '\0') || (cVar10 == '\x06')) {
                      if ((*(char *)(iVar25 + 0x87b62) == '\0') ||
                         (((((*(char *)(DAT_ram_4ff6dcc8 + 0x28a) == '\0' || (cVar10 != '\0')) ||
                            (*(char *)(iVar22 + 0x9618) != '\0')) ||
                           ((*(char *)(iVar22 + 0x116b8) != '\0' ||
                            (FUN_ram_480cf4ac(), *(char *)(iVar25 + 0x4c) == '\0')))) ||
                          (*(char *)(iVar25 + 0xc58) != '\0')))) {
                        iVar36 = FUN_ram_48118d2c(0);
                        if (iVar36 == 0) goto LAB_ram_4811d046;
                        iVar36 = FUN_ram_480b8c0a(0,0);
                        if (((iVar36 != 0) && (*(char *)(iVar22 + 0x9618) != '\0')) &&
                           (*(char *)(iVar22 + 0x9619) != '\0')) {
                          *(undefined1 *)(iVar25 + 0x49) = 1;
                        }
                      }
                      else {
                        uVar39 = FUN_ram_480b5fea();
                        uVar15 = DAT_ram_4ff5bd38;
                        uVar35 = DAT_ram_4ff5bd34;
                        uVar16 = (undefined4)((ulonglong)uVar39 >> 0x20);
                        uVar34 = (uint)uVar39;
                        if (uVar34 == 0) {
                          *(char **)(iVar25 + 0x87bc0) = "settings_read_failed";
                          iVar22 = FUN_ram_48025ba6();
                          *(int *)(iVar25 + 0x87b50) = iVar22 + 5000;
                        }
                        else {
                          *(undefined4 *)(iVar25 + 0x86934) = DAT_ram_4ff5bd30;
                          iVar22 = DAT_ram_4ff5bd40;
                          uVar17 = DAT_ram_4ff5bd3c;
                          *(undefined4 *)(iVar25 + 0x86938) = uVar35;
                          *(int *)(iVar25 + 0x86944) = iVar22;
                          *(undefined4 *)(iVar25 + 0x8693c) = uVar15;
                          *(undefined4 *)(iVar25 + 0x86940) = uVar17;
                          FUN_ram_4ff454c4(iVar25 + 0x857e2,iVar25 + 0x544);
                          iVar36 = DAT_ram_4ff6dc9c;
                          *(undefined1 *)(DAT_ram_4ff6dc9c + 0x4b) = 0;
                          iVar22 = DAT_ram_4ff6dc88;
                          if (uVar34 < 0x30001) {
                            if (((*(char *)(iVar36 + 0x4a) == '\0') || (DAT_ram_4ff6dc88 == 0)) ||
                               (*(char *)(DAT_ram_4ff6dc88 + 0x6c594) == '\0')) {
LAB_ram_4811d53a:
                              FUN_ram_4ff45158(iVar36 + 0xf5a,uVar16,uVar34);
                              *(uint *)(iVar36 + 0x87b34) = uVar34;
                            }
                            else {
                              iVar38 = iVar36 + 0x30f5b;
                              iVar37 = FUN_ram_480b5c0c(&DAT_ram_4ff5bbd8,iVar38,0x30801);
                              uVar12 = DAT_ram_4ff5bbf8;
                              if (iVar37 == 3) {
                                *(char **)(iVar36 + 0x87bc0) = "settings_base_read_failed";
                                goto LAB_ram_4811d046;
                              }
                              if (iVar37 == 1) {
                                if (((*(char *)(iVar36 + 0x588) != '\0') &&
                                    (*(int *)(iVar36 + 0x59c) == DAT_ram_4ff5bbec)) &&
                                   (iVar37 = FUN_ram_4ff4511a(&DAT_ram_4ff5bbdc,iVar36 + 0x58c,0x10)
                                   , iVar37 == 0)) {
                                  iVar37 = FUN_ram_48034886(iVar38,uVar12,iVar36 + 0x5ac);
                                  if (iVar37 != 0) {
                                    uStack_174 = iVar36 + 0xf5a;
                                    *(undefined1 *)(iVar36 + 0xf5a) = 0;
                                    uStack_14c = 1;
                                    uStack_170 = 0x30001;
                                    uStack_16c = 0;
                                    uStack_168 = 0;
                                    iStack_164 = 0;
                                    uStack_160 = 0;
                                    uStack_15c = 0;
                                    uStack_158 = 0;
                                    uStack_154 = 0;
                                    uStack_150 = 0;
                                    FUN_ram_4808c168(&uStack_174);
                                    iVar22 = FUN_ram_481187ca(&uStack_174,iVar38,uVar12,uVar16,
                                                              uVar34,iVar36 + 0x5ac,iVar22,0x1800);
                                    if (((iVar22 != 0) &&
                                        (iVar22 = FUN_ram_4808c64a(&uStack_174), iVar22 != 0)) &&
                                       (uStack_16c < uVar34)) {
                                      *(uint *)(iVar36 + 0x87b34) = uStack_16c;
                                      *(undefined1 *)(iVar36 + 0x4b) = 1;
                                    }
                                  }
                                }
                                if ((((DAT_ram_4ff5bbec != *(int *)(iVar36 + 0x86944)) ||
                                     (iVar22 = FUN_ram_4ff4511a(&DAT_ram_4ff5bbdc,iVar36 + 0x86934,
                                                                0x10), iVar22 != 0)) ||
                                    (uVar34 != uVar12)) ||
                                   (iVar22 = FUN_ram_48034886(iVar38,uVar34,iVar36 + 0x857e2),
                                   iVar22 == 0)) goto LAB_ram_4811d5be;
                              }
                              else {
LAB_ram_4811d5be:
                                iVar22 = FUN_ram_480b621c(&DAT_ram_4ff5bbd8,iVar36 + 0x86934,uVar16,
                                                          uVar34);
                                if (iVar22 == 0) {
                                  *(char **)(iVar36 + 0x87bc0) = "settings_base_store_failed";
                                  goto LAB_ram_4811d046;
                                }
                              }
                              if (*(char *)(iVar36 + 0x4b) == '\0') goto LAB_ram_4811d53a;
                            }
                            iVar22 = FUN_ram_480b8c0a(1,0);
                            if (iVar22 != 0) {
                              *(undefined1 *)(iVar25 + 0x4c) = 0;
                            }
                          }
                          else {
LAB_ram_4811d046:
                            iVar22 = FUN_ram_48025ba6();
                            *(int *)(iVar25 + 0x87b50) = iVar22 + 5000;
                          }
                        }
                      }
                    }
                    else if (*(char *)(DAT_ram_4ff6dcc8 + 0x28a) == '\0') {
                      FUN_ram_480b69b4("sync_disabled");
                    }
                    else if ((cVar10 == '\x01') ||
                            (uVar34 = FUN_ram_4819b728(0), uVar34 < *(uint *)(iVar22 + 0x11b78))) {
                      cVar10 = *(char *)(iVar22 + 0x11a40);
                      *(undefined4 *)(iVar25 + 0x87b34) = 0;
                      cVar11 = '\x02';
                      if ((cVar10 != '\x01') && (cVar11 = '\x04', cVar10 == '\x02')) {
                        cVar11 = '\x04' - (*(byte *)(iVar22 + 0x11a41) & 1);
                      }
                      FUN_ram_480b8c0a(cVar11,0);
                    }
                    else {
                      FUN_ram_480b69b4("restore_lease_expired");
                    }
                  }
                }
                else {
                  FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(iVar25 + 0x87b34) = 0;
          FUN_ram_480b8c0a(5,0);
        }
        goto LAB_ram_4811ba74;
      }
      bVar27 = 0;
      if (DAT_ram_4ff6dc98 == 0) goto LAB_ram_4811ba74;
      bVar3 = 0;
      bVar1 = 0;
LAB_ram_4811c164:
      iVar22 = DAT_ram_4ff6dc98;
      iVar36 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
      if (iVar36 == 3) {
        if (*(char *)(iVar22 + 0xa0) == '\0') {
          uVar35 = FUN_ram_48025ba6();
          *(undefined4 *)(iVar22 + 0x98) = uVar35;
        }
        *(undefined1 *)(iVar22 + 0xa0) = 1;
        iVar36 = FUN_ram_48025ba6();
        uVar34 = (uint)~(iVar36 - *(int *)(iVar22 + 0x98)) >> 0x1f;
      }
      else {
        *(undefined1 *)(iVar22 + 0xa0) = 0;
        uVar34 = 0;
      }
      if (((((*(char *)(iVar25 + 0x87b6a) != '\0') || (bVar27 != 0)) ||
           (*(char *)((int)DAT_ram_4ff6dc74 + 0x222) != '\0')) ||
          ((*(char *)((int)DAT_ram_4ff6dc74 + 0x221) != '\0' || (uVar34 == 0)))) ||
         ((lVar40 = FUN_ram_4819b728(0), lVar40 < 0x65920080 ||
          (*(char *)(iVar25 + 0x87b60) == '\0')))) {
        if (bVar1 != 0) {
LAB_ram_4811c194:
          if (bVar3 == 0) goto LAB_ram_4811c19a;
        }
        goto LAB_ram_4811ba74;
      }
      if (*(char *)(DAT_ram_4ff6dcc8 + 0x63cf) != '\0') {
        iVar25 = FUN_ram_480b5530();
        if ((iVar25 == 0) || (iVar25 = FUN_ram_480b8c0a(7,0), iVar25 == 0)) {
          iVar25 = FUN_ram_48025ba6();
          *(int *)(DAT_ram_4ff6dc98 + 0x98) = iVar25 + 1000;
        }
        else {
          iVar25 = FUN_ram_48025ba6();
          *(int *)(DAT_ram_4ff6dc98 + 0x98) = iVar25 + 5000;
        }
        goto LAB_ram_4811ba74;
      }
      bVar27 = 0;
      if (bVar1 != 0) goto LAB_ram_4811c194;
    }
    else {
LAB_ram_4811ba74:
      if (DAT_ram_4ff6dcc8 == 0) goto joined_r0x4811bad6;
    }
LAB_ram_4811ba82:
    if (DAT_ram_4ff6dcc4 != 0) {
      if ((DAT_ram_4ff6dc9c == 0) || (fence(), *(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0')) {
        iVar25 = FUN_ram_48032c1a();
        uVar34 = (uint)DAT_ram_4ff47e54;
        if (iVar25 != 0) goto LAB_ram_4811bccc;
        if (uVar34 == 0) {
          uVar34 = FUN_ram_4807432c();
          DAT_ram_4ff47e54 = (byte)uVar34;
          goto LAB_ram_4811bccc;
        }
LAB_ram_4811baac:
        if (*(char *)(DAT_ram_4ff6dcc8 + 0x28a) != '\0') {
          *(undefined **)(DAT_ram_4ff6dcc8 + 0x6404) = &DAT_ram_481c3e20;
          goto joined_r0x4811bad6;
        }
        pcVar23 = "disabled";
      }
      else {
        uVar34 = (uint)DAT_ram_4ff47e54;
LAB_ram_4811bccc:
        if (uVar34 != 0) goto LAB_ram_4811baac;
        pcVar23 = "storage_wait";
      }
      *(char **)(DAT_ram_4ff6dcc8 + 0x6404) = pcVar23;
    }
  }
joined_r0x4811bad6:
  if (DAT_ram_4ff5c880 == '\x02') {
    DAT_ram_4ff5c880 = '\x03';
    fence();
    fence();
    if (DAT_ram_4ff6df30 == '\0') {
      FUN_ram_4802ad46(&DAT_ram_4ff5c55c,&DAT_ram_481df390);
      DAT_ram_4ff5c5c0 = '\x01';
      iVar25 = FUN_ram_480fe83a(4);
      if (iVar25 == 0) {
        if ((DAT_ram_4ff5c5c0 == '\0') || (iVar25 = FUN_ram_480fed16(1), iVar25 == 0)) {
          pcVar23 = "can_restore";
        }
        else {
          pcVar23 = "can_quiesce";
        }
      }
      else {
        iVar25 = FUN_ram_480f24fc();
        if (iVar25 != 0) {
          iVar25 = FUN_ram_48025ba6();
          DAT_ram_4ff6de00 = iVar25 + 0xfa;
          DAT_ram_4ff6de04 = '\x01';
          goto LAB_ram_4811bae2;
        }
        if ((DAT_ram_4ff5c5c0 == '\0') || (iVar25 = FUN_ram_480fed16(1), iVar25 == 0)) {
          pcVar23 = "can_restore";
        }
        else {
          pcVar23 = "persistence_flush";
        }
      }
    }
    else {
      pcVar23 = "ota_busy";
    }
    FUN_ram_4ff45594(&DAT_ram_4ff5c903,pcVar23,0x20);
    DAT_ram_4ff5c923 = 0;
    DAT_ram_4ff5c880 = '\x04';
  }
LAB_ram_4811bae2:
  iVar22 = FUN_ram_48025ba6();
  iVar25 = DAT_ram_4ff6de38;
  if (9999 < (uint)(iVar22 - DAT_ram_4ff6dd10)) {
    DAT_ram_4ff6dd10 = iVar22;
    uVar35 = FUN_ram_48001f84(0x804);
    uVar15 = FUN_ram_48001fda(0x804);
    uVar16 = FUN_ram_48001f84(0x80c);
    uVar17 = FUN_ram_480020c6(0x80c);
    uVar18 = FUN_ram_48001f84(0x400);
    uVar19 = FUN_ram_481208c4();
    uVar20 = FUN_ram_481208b8();
    FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                     "[MEM] ms=%lu internal=%u min=%u dma=%u largest=%u psram=%u sdioBytes=%lu sdioRetry=%lu health=%u ota=%u\n"
                     ,iVar22,uVar35,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,
                     *(undefined1 *)(iVar25 + 0x732),DAT_ram_4ff5c548);
  }
  FUN_ram_48033c8e();
  if (((DAT_ram_4ff6de04 != '\0') &&
      ((iVar25 = FUN_ram_48025ba6(), DAT_ram_4ff6de04 == '\0' || (-1 < iVar25 - DAT_ram_4ff6de00))))
     && ((DAT_ram_4ff5cbe8 == 0 ||
         (((*(char *)(DAT_ram_4ff5cbe8 + 0x44c) != '\x06' &&
           (*(char *)(DAT_ram_4ff5cbe8 + 0x218c) != '\x06')) ||
          (iVar25 = FUN_ram_48025ba6(), 0x9c3 < (uint)(iVar25 - DAT_ram_4ff6de00))))))) {
    FUN_ram_4802959a(&DAT_ram_4ff6dc18);
  }
  if (iStack_1c8 == 1) {
    uVar39 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar39,(int)((ulonglong)uVar39 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = iStack_1c8;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  }
  else {
    DAT_ram_4ff5cea0 = iStack_1c0;
    DAT_ram_4ff5cea8 = iStack_1bc;
    DAT_ram_4ff5ceac = iStack_1b8;
    DAT_ram_4ff5ceb0 = iStack_1b4;
    DAT_ram_4ff5ceb4 = uStack_1b0;
  }
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5cea4 = iStack_1c8;
  return;
}



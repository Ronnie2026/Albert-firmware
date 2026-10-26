/* Firmware entry: 0x480cfa62 */

/* WARNING: Type propagation algorithm not settling */

char FUN_ram_480cfa62(int *param_1)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  char cVar18;
  char cVar19;
  char *pcVar20;
  uint *puVar21;
  uint *puVar22;
  char *pcStack_c8;
  undefined4 uStack_bc;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char acStack_88 [36];
  uint auStack_64 [8];
  undefined1 auStack_44 [16];
  
  pcVar15 = DAT_ram_4ff6dcc8;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcc8 == (char *)0x0) {
    return '\0';
  }
  if (DAT_ram_4ff6dcc4 == 0) {
    return '\0';
  }
  if (((char)param_1[10] == '\0') || (param_1[3] != 0)) {
LAB_ram_480cfaa4:
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_ram_4808c2dc(param_1,&DAT_ram_481c4274,1);
  }
  else {
    uVar11 = param_1[2];
    if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_480cfaa4;
    *(undefined1 *)(*param_1 + uVar11) = 0x7b;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 1;
    *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[3] = 1;
    FUN_ram_4808c2dc(param_1,&DAT_ram_481c4274);
  }
  sVar2 = strlen(pcVar15 + 0x63cf);
  FUN_ram_4808c96e(param_1,"deviceId",pcVar15 + 0x63cf,sVar2);
  FUN_ram_4808c2dc(param_1,"enabled",pcVar15[0x28a]);
  bVar8 = false;
  if (*pcVar15 != '\0') {
    bVar8 = pcVar15[0x181] != '\0';
  }
  FUN_ram_4808c2dc(param_1,"configured",bVar8);
  FUN_ram_480b2068(param_1,"lastSuccessUnix",*(undefined4 *)(pcVar15 + 0x63ec));
  if (pcVar15[0x6400] == '\0') {
    iVar3 = FUN_ram_4808c696(param_1,"lastSuccessAgoSec");
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      iVar3 = FUN_ram_4808c90a(param_1,&DAT_ram_481c6654,4);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  else {
    iVar3 = FUN_ram_48025ba6();
    FUN_ram_480b2068(param_1,"lastSuccessAgoSec",(uint)(iVar3 - *(int *)(pcVar15 + 0x63e8)) / 1000);
  }
  pcVar14 = *(char **)(pcVar15 + 0x640c);
  sVar2 = 0;
  if (pcVar14 != (char *)0x0) {
    sVar2 = strlen(pcVar14);
  }
  FUN_ram_4808c96e(param_1,"testState",pcVar14,sVar2);
  pcVar15 = *(char **)(pcVar15 + 0x6410);
  sVar2 = 0;
  if (pcVar15 != (char *)0x0) {
    sVar2 = strlen(pcVar15);
  }
  FUN_ram_4808c96e(param_1,"testError",pcVar15,sVar2);
  iVar3 = FUN_ram_4808c696(param_1,"testHttpCode");
  if (iVar3 != 0) {
    auStack_64[0] = 0;
    auStack_64[1] = 0;
    auStack_64[2] = 0;
    auStack_64[3] = 0;
    auStack_64[4] = 0;
    auStack_64[5] = 0;
    auStack_64[6] = 0;
    auStack_64[7] = 0;
    uVar4 = FUN_ram_4819ad74(auStack_64,0x20,&DAT_ram_481cb8cc);
    iVar3 = FUN_ram_4808c90a(param_1,auStack_64,uVar4);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar3 = DAT_ram_4ff6dc9c;
  pcVar15 = (char *)FUN_ram_480b1d48();
  sVar2 = strlen(pcVar15);
  FUN_ram_4808c96e(param_1,"state",pcVar15,sVar2);
  if (iVar3 == 0) {
    FUN_ram_4808c96e(param_1,"error","resource_wait",0xd);
  }
  else {
    pcVar15 = *(char **)(DAT_ram_4ff6dc9c + 0x87bc0);
    if (pcVar15 == (char *)0x0) {
      FUN_ram_4808c96e(param_1,"error",0,0);
    }
    else {
      sVar2 = strlen(pcVar15);
      FUN_ram_4808c96e(param_1,"error",pcVar15,sVar2);
    }
    iVar5 = FUN_ram_480b063e();
    iVar3 = DAT_ram_4ff6dcdc;
    if (iVar5 != 0) {
      if (*(char *)(DAT_ram_4ff6dcdc + 0x41112) == '\0') {
LAB_ram_480cfc98:
        if (*(ushort *)(DAT_ram_4ff6dcdc + 0x22530) != 0) {
          iVar3 = DAT_ram_4ff6dcdc + 0xb4;
          iVar5 = (uint)*(ushort *)(DAT_ram_4ff6dcdc + 0x22530) * 0x88 + iVar3;
          do {
            iVar3 = iVar3 + 0x88;
          } while (iVar3 != iVar5);
        }
      }
      else {
        auStack_64[0] = auStack_64[0] & 0xffffff00;
        iVar5 = FUN_ram_480b1222(DAT_ram_4ff6dcdc + 0x30,DAT_ram_4ff6dcdc + 0x22540,FUN_ram_480b356e
                                 ,auStack_64);
        if (iVar5 == 0) {
          *(undefined1 *)(iVar3 + 0x41111) = 0;
          *(char **)(iVar3 + 0x41114) = "outbox_full_or_invalid";
        }
        else if (((auStack_64[0] & 0xff) == 0) || (iVar3 = FUN_ram_480b0ed4(), iVar3 != 0))
        goto LAB_ram_480cfc98;
      }
    }
  }
  iVar3 = FUN_ram_4808c696(param_1,"pendingTrips");
  if (iVar3 != 0) {
    auStack_64[0] = 0;
    auStack_64[1] = 0;
    auStack_64[2] = 0;
    auStack_64[3] = 0;
    auStack_64[4] = 0;
    auStack_64[5] = 0;
    auStack_64[6] = 0;
    auStack_64[7] = 0;
    uVar4 = FUN_ram_4819ad74(auStack_64,0x20,&DAT_ram_481c48f4);
    iVar3 = FUN_ram_4808c90a(param_1,auStack_64,uVar4);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar3 = DAT_ram_4ff6dc9c;
  if (DAT_ram_4ff6dc9c != 0) {
    fence();
    fence();
    if (((*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0') && (DAT_ram_4ff6dc94 != 0)) &&
       (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
      FUN_ram_480cf35c();
    }
  }
  pcVar14 = (char *)FUN_ram_480b1d48();
  acStack_88[0] = '\0';
  acStack_88[1] = '\0';
  acStack_88[2] = '\0';
  acStack_88[3] = '\0';
  acStack_88[4] = '\0';
  acStack_88[5] = '\0';
  acStack_88[6] = '\0';
  acStack_88[7] = '\0';
  acStack_88[8] = '\0';
  acStack_88[9] = '\0';
  acStack_88[10] = '\0';
  acStack_88[0xb] = '\0';
  acStack_88[0xc] = '\0';
  acStack_88[0xd] = '\0';
  acStack_88[0xe] = '\0';
  acStack_88[0xf] = '\0';
  acStack_88[0x10] = '\0';
  acStack_88[0x11] = '\0';
  acStack_88[0x12] = '\0';
  acStack_88[0x13] = '\0';
  acStack_88[0x14] = '\0';
  acStack_88[0x15] = '\0';
  acStack_88[0x16] = '\0';
  acStack_88[0x17] = '\0';
  acStack_88[0x18] = '\0';
  acStack_88[0x19] = '\0';
  acStack_88[0x1a] = '\0';
  acStack_88[0x1b] = '\0';
  acStack_88[0x1c] = '\0';
  acStack_88[0x1d] = '\0';
  acStack_88[0x1e] = '\0';
  acStack_88[0x1f] = '\0';
  acStack_88[0x20] = 0;
  auStack_64[0] = 0;
  auStack_64[1] = 0;
  auStack_64[2] = 0;
  auStack_64[3] = 0;
  auStack_64[4] = 0;
  auStack_64[5] = 0;
  auStack_64[6] = 0;
  auStack_64[7] = 0;
  auStack_44[0] = 0;
  pbVar17 = (byte *)&DAT_ram_4ff5bd30;
  puVar16 = &DAT_ram_4ff5bd30;
  pcVar15 = acStack_88;
  do {
    pcVar20 = pcVar15 + 2;
    FUN_ram_4819ad74(pcVar15,3,&DAT_ram_481c3b70,*(undefined1 *)puVar16);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    pcVar15 = pcVar20;
  } while (pcVar20 != acStack_88 + 0x20);
  puVar16 = &DAT_ram_4ff5bd44;
  puVar21 = auStack_64;
  do {
    puVar22 = (uint *)((int)puVar21 + 2);
    FUN_ram_4819ad74(puVar21,3,&DAT_ram_481c3b70,*(undefined1 *)puVar16);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar21 = puVar22;
  } while ((uint *)auStack_44 != puVar22);
  if (iVar3 == 0) {
    if (DAT_ram_4ff6dc94 == 0) {
      pcStack_c8 = "idle";
LAB_ram_480d096e:
      cVar19 = '\0';
      iVar5 = 0;
      uStack_bc = 0;
      uVar9 = 0;
    }
    else {
      if (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0') {
        if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) != '\x06') {
          if (*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) != '\0') {
            pcStack_c8 = "failed";
            goto LAB_ram_480d096e;
          }
          cVar19 = '\0';
          iVar5 = 0;
          uStack_bc = 0;
          goto LAB_ram_480d07e8;
        }
        cVar19 = '\0';
        iVar5 = 0;
        uStack_bc = 0;
        goto LAB_ram_480d060c;
      }
      pcStack_c8 = "idle";
      cVar19 = '\0';
      iVar5 = 0;
      uStack_bc = 0;
      uVar9 = 0;
    }
  }
  else {
    if ((DAT_ram_4ff6dc94 != 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
      FUN_ram_4802c48c();
    }
    bVar13 = 0;
    do {
      bVar1 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      bVar13 = bVar13 | bVar1;
    } while (pbVar17 != (byte *)&DAT_ram_4ff5bd40);
    if ((((bVar13 == 0) || (DAT_ram_4ff5bd40 == 0)) ||
        ((DAT_ram_4ff5bd40 != DAT_ram_4ff5bd54 ||
         (((((DAT_ram_4ff5bd30 != DAT_ram_4ff5bd44 || (DAT_ram_4ff5bd34 != DAT_ram_4ff5bd48)) ||
            (DAT_ram_4ff5bd38 != DAT_ram_4ff5bd4c)) ||
           ((DAT_ram_4ff5bd3c != DAT_ram_4ff5bd50 ||
            (DAT_ram_4ff5bd58 == 0 && DAT_ram_4ff5bd5c == 0)))) || ((char)DAT_ram_4ff5bd64 != '\0'))
         )))) || (DAT_ram_4ff5bd64._1_1_ != '\0')) {
      iVar5 = FUN_ram_480b1b8a();
LAB_ram_480d057a:
      uStack_bc = 0;
    }
    else {
      cVar19 = *(char *)(DAT_ram_4ff6dc9c + 0x87b64);
      iVar5 = FUN_ram_480b1b8a();
      if (cVar19 != '\0') goto LAB_ram_480d057a;
      uStack_bc = 1;
    }
    cVar18 = *(char *)(DAT_ram_4ff6dc9c + 0x87b64);
    if (cVar18 == '\0') {
      cVar18 = *(char *)(DAT_ram_4ff6dc9c + 0x87b65);
      if ((DAT_ram_4ff6dc94 != 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
        cVar19 = cVar18;
        if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\x06') {
LAB_ram_480d060c:
          cVar18 = *(char *)(DAT_ram_4ff6dc94 + 0x11a42);
          if (cVar18 == *(char *)(DAT_ram_4ff6dc94 + 0x11a41)) {
            if (cVar18 == '\0') goto LAB_ram_480d0ab0;
            pcStack_c8 = "applied";
          }
          else if (cVar18 == '\0') {
LAB_ram_480d0ab0:
            pcStack_c8 = "failed";
          }
          else {
            pcStack_c8 = "partial";
          }
        }
        else {
          if (*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) != '\0') {
            pcStack_c8 = "failed";
            goto LAB_ram_480cfcd8;
          }
LAB_ram_480d07e8:
          iVar6 = DAT_ram_4ff6dc94;
          iVar7 = FUN_ram_4ff453ae(pcVar14,"restoring");
          pcStack_c8 = "restoring";
          if (iVar7 != 0) {
            if (*(char *)(iVar6 + 0x12688) == '\0') {
              pcStack_c8 = "idle";
            }
            else {
              pcStack_c8 = (char *)(iVar6 + 0x12688);
            }
          }
        }
        uVar9 = 0;
        if (iVar3 != 0) goto LAB_ram_480cfcd8;
        goto LAB_ram_480cfce2;
      }
LAB_ram_480cfcce:
      pcStack_c8 = "idle";
      cVar19 = cVar18;
    }
    else {
      if ((DAT_ram_4ff6dc94 == 0) ||
         (cVar19 = *(char *)(DAT_ram_4ff6dc94 + 0x1e931), cVar19 == '\0')) goto LAB_ram_480cfcce;
      if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\x06') goto LAB_ram_480d060c;
      if (*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) == '\0') goto LAB_ram_480d07e8;
      pcStack_c8 = "failed";
    }
LAB_ram_480cfcd8:
    uVar9 = *(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b60);
  }
LAB_ram_480cfce2:
  FUN_ram_4808c2dc(param_1,"agentConfigured",uVar9);
  FUN_ram_4808c2dc(param_1,"agentEnabled",DAT_ram_4ff6dcc8[0x28a]);
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar6 = FUN_ram_4808c696(param_1,"backend"), iVar6 == 0 || ((char)param_1[10] == '\0')))) {
LAB_ram_480cfd30:
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_ram_480b407c(param_1,"protocol",2);
  }
  else {
    uVar11 = param_1[2];
    if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_480cfd30;
    *(undefined1 *)(*param_1 + uVar11) = 0x7b;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
    param_1[3] = iVar6 + 1;
    FUN_ram_480b407c(param_1,"protocol",2);
  }
  sVar2 = strlen(pcVar14);
  FUN_ram_4808c96e(param_1,"state",pcVar14,sVar2);
  iVar6 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
  FUN_ram_4808c2dc(param_1,"online",iVar6 == 3);
  FUN_ram_4808c2dc(param_1,"sync_enabled",DAT_ram_4ff6dcc8[0x28a]);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x50c);
  }
  FUN_ram_480b2068(param_1,"last_success_unix",uVar4);
  FUN_ram_480b2068(param_1,"last_backup_unix",DAT_ram_4ff5bd60);
  iVar6 = FUN_ram_4808c696(param_1,"pending_uploads");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,1);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"pending_commands");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,1);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"conflict_count");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar4 = FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,uVar4);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_4808c2dc(param_1,"settings_synced",uStack_bc);
  FUN_ram_4808c2dc(param_1,"records_synced",iVar5);
  FUN_ram_4808c2dc(param_1,"account_restore_required",cVar19);
  if (iVar3 == 0) {
    FUN_ram_4808c2dc(param_1,"account_settings_pending",0);
    FUN_ram_4808c2dc(param_1,"account_records_pending",0);
    FUN_ram_4808c96e(param_1,"account_state","unknown",7);
    FUN_ram_4808c2dc(param_1,"cloud_settings_available",0);
    FUN_ram_4808c2dc(param_1,"cloud_records_available",0);
    FUN_ram_480b2068(param_1,"cloud_backup_at",0);
  }
  else {
    FUN_ram_4808c2dc(param_1,"account_settings_pending",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b64))
    ;
    FUN_ram_4808c2dc(param_1,"account_records_pending",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b65));
    if (*(char *)(DAT_ram_4ff6dc9c + 0x87b62) == '\0') {
      pcVar15 = "unknown";
      sVar2 = 7;
LAB_ram_480cff1a:
      FUN_ram_4808c96e(param_1,"account_state",pcVar15,sVar2);
    }
    else {
      pcVar15 = *(char **)(DAT_ram_4ff6dc9c + 0x50);
      if (pcVar15 != (char *)0x0) {
        sVar2 = strlen(pcVar15);
        goto LAB_ram_480cff1a;
      }
      FUN_ram_4808c96e(param_1,"account_state",0,0);
    }
    if (*(char *)(DAT_ram_4ff6dc9c + 0x87b62) == '\0') {
      FUN_ram_4808c2dc(param_1,"cloud_settings_available",0);
    }
    else {
      FUN_ram_4808c2dc(param_1,"cloud_settings_available",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x588))
      ;
    }
    if (*(char *)(DAT_ram_4ff6dc9c + 0x87b62) == '\0') {
      FUN_ram_4808c2dc(param_1,"cloud_records_available",0);
    }
    else {
      FUN_ram_4808c2dc(param_1,"cloud_records_available",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x6e0));
    }
    if (*(char *)(DAT_ram_4ff6dc9c + 0x87b62) == '\0') {
      FUN_ram_480b2068(param_1,"cloud_backup_at",0);
    }
    else {
      uVar11 = *(uint *)(DAT_ram_4ff6dc9c + 0x5a8);
      if (*(uint *)(DAT_ram_4ff6dc9c + 0x5a8) < *(uint *)(DAT_ram_4ff6dc9c + 0x754)) {
        uVar11 = *(uint *)(DAT_ram_4ff6dc9c + 0x754);
      }
      FUN_ram_480b2068(param_1,"cloud_backup_at",uVar11);
    }
  }
  sVar2 = strlen(pcStack_c8);
  FUN_ram_4808c96e(param_1,"restore_state",pcStack_c8,sVar2);
  iVar6 = DAT_ram_4ff6dc94;
  if (DAT_ram_4ff6dc94 == 0) {
LAB_ram_480d0730:
    pcVar15 = "resource_wait";
    sVar2 = 0xd;
  }
  else if (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) == '\0') {
    pcVar15 = *(char **)(DAT_ram_4ff6dc94 + 0x1e934);
LAB_ram_480d06ca:
    sVar2 = 0;
    if (pcVar15 != (char *)0x0) {
      sVar2 = strlen(pcVar15);
    }
  }
  else if (*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) == '\0') {
    if ((*(char *)(DAT_ram_4ff6dc94 + 0x12688) == '\0') ||
       (iVar7 = FUN_ram_4ff453ae(DAT_ram_4ff6dc94 + 0x12688,"applied"), iVar7 == 0)) {
      if (iVar3 == 0) goto LAB_ram_480d0730;
      pcVar15 = *(char **)(DAT_ram_4ff6dc9c + 0x87bc0);
      goto LAB_ram_480d06ca;
    }
    pcVar15 = (char *)(iVar6 + 0x12694);
    sVar2 = strlen(pcVar15);
  }
  else {
    pcVar15 = (char *)(DAT_ram_4ff6dc94 + 0x11b1f);
    sVar2 = strlen(pcVar15);
  }
  FUN_ram_4808c96e(param_1,"error",pcVar15,sVar2);
  if ((DAT_ram_4ff6dc94 != 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
    if (iVar3 == 0) {
      uVar4 = 0;
      uVar10 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x54);
      uVar10 = *(undefined4 *)(DAT_ram_4ff6dc9c + 0x58);
    }
    FUN_ram_480b915c(param_1,DAT_ram_4ff6dc94 + 0x9398,uVar4,uVar10);
  }
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
LAB_ram_480d00a0:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar11 = param_1[2];
    if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_480d00a0;
    *(undefined1 *)(*param_1 + uVar11) = 0x7d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    param_1[3] = iVar6 + -1;
    if (((((char)param_1[10] == '\0') ||
         ((10 < iVar6 - 2U || (*(char *)((int)param_1 + iVar6 + 0x1a) == '\0')))) ||
        (iVar6 = FUN_ram_4808c696(param_1,&DAT_ram_481cd044), iVar6 == 0)) ||
       ((char)param_1[10] == '\0')) goto LAB_ram_480d00a0;
    uVar11 = param_1[2];
    if (((uint)param_1[1] < uVar11) || (param_1[1] - uVar11 < 2)) goto LAB_ram_480d00a0;
    *(undefined1 *)(*param_1 + uVar11) = 0x7b;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
    param_1[3] = iVar6 + 1;
  }
  sVar2 = strlen(acStack_88);
  FUN_ram_4808c96e(param_1,"settings_epoch",acStack_88,sVar2);
  FUN_ram_480b2068(param_1,"device_revision",DAT_ram_4ff5bd40);
  if (DAT_ram_4ff5bd64._1_1_ == '\0') {
    if ((char)DAT_ram_4ff5bd64 == '\0') {
      pcVar15 = "stored";
      uVar4 = 6;
    }
    else {
      pcVar15 = "unsaved";
      uVar4 = 7;
    }
  }
  else {
    pcVar15 = "failed";
    uVar4 = 6;
  }
  FUN_ram_4808c96e(param_1,"device_save_state",pcVar15,uVar4);
  iVar6 = FUN_ram_4808c696(param_1,"backup_revision");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar11 = FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar12 = param_1[2];
      if ((uVar12 <= (uint)param_1[1]) && (uVar11 < param_1[1] - uVar12)) {
        FUN_ram_4ff45158(*param_1 + uVar12,&uStack_a8,uVar11);
        iVar6 = param_1[2];
        param_1[2] = uVar11 + iVar6;
        *(undefined1 *)(*param_1 + uVar11 + iVar6) = 0;
        goto LAB_ram_480d0150;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480d0150:
  sVar2 = strlen((char *)auStack_64);
  FUN_ram_4808c96e(param_1,"backup_settings_epoch",auStack_64,sVar2);
  FUN_ram_480b2068(param_1,"backup_device_revision",DAT_ram_4ff5bd54);
  FUN_ram_480b2068(param_1,"last_backup_unix",DAT_ram_4ff5bd60);
  FUN_ram_480b2068(param_1,"active_driver_id",DAT_ram_4ff6dd80);
  iVar6 = FUN_ram_4808c696(param_1,"conflict_commands");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar4 = FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,uVar4);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"pending_commands");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,1);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"pending_uploads");
  if (iVar6 != 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_ram_4819ad74(&uStack_a8,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&uStack_a8,1);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  sVar2 = strlen(pcVar14);
  FUN_ram_4808c96e(param_1,"settings_state",pcVar14,sVar2);
  if (iVar3 == 0) {
    pcVar15 = "resource_wait";
    sVar2 = 0xd;
  }
  else {
    sVar2 = 0;
    pcVar15 = *(char **)(DAT_ram_4ff6dc9c + 0x87bc0);
    if (pcVar15 != (char *)0x0) {
      sVar2 = strlen(pcVar15);
    }
  }
  FUN_ram_4808c96e(param_1,"error",pcVar15,sVar2);
  if (iVar5 == 0) {
    pcVar15 = "waiting";
    uVar4 = 7;
  }
  else {
    pcVar15 = "synced";
    uVar4 = 6;
  }
  FUN_ram_4808c96e(param_1,"trip_recovery_state",pcVar15,uVar4);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar11 = param_1[2];
    if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
      *(undefined1 *)(*param_1 + uVar11) = 0x7d;
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
      iVar3 = param_1[3];
      param_1[3] = iVar3 + -1;
      if ((((char)param_1[10] != '\0') &&
          ((iVar3 - 2U < 0xb && (*(char *)((int)param_1 + iVar3 + 0x1a) != '\0')))) &&
         ((iVar3 = FUN_ram_4808c696(param_1,"management"), iVar3 != 0 && ((char)param_1[10] != '\0')
          ))) {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x7b;
          iVar3 = param_1[2];
          param_1[2] = iVar3 + 1;
          *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
          iVar3 = param_1[3];
          *(undefined1 *)((int)param_1 + iVar3 + 0x10) = 1;
          *(undefined1 *)((int)param_1 + iVar3 + 0x1c) = 1;
          param_1[3] = iVar3 + 1;
          goto LAB_ram_480d0346;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480d0346:
  FUN_ram_480b24ba(param_1);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar11 = param_1[2];
    if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
      *(undefined1 *)(*param_1 + uVar11) = 0x7d;
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
      iVar3 = param_1[3];
      param_1[3] = iVar3 + -1;
      if (((char)param_1[10] != '\0') &&
         ((iVar3 + -1 == 1 && (iVar3 = param_1[7], (char)iVar3 != '\0')))) {
        uVar11 = param_1[2];
        if ((uVar11 <= (uint)param_1[1]) && (1 < param_1[1] - uVar11)) {
          *(undefined1 *)(*param_1 + uVar11) = 0x7d;
          iVar5 = param_1[2];
          param_1[2] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + *param_1) = 0;
          param_1[3] = 0;
          return (char)iVar3;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}



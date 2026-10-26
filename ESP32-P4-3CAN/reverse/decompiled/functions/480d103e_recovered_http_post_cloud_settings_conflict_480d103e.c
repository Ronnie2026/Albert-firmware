/* Firmware entry: 0x480d103e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_settings_conflict_480d103e(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *******pppppppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined4 ******local_c8 [3];
  char cStack_b9;
  undefined4 ******local_b8 [3];
  char cStack_a9;
  undefined4 local_a8 [30];
  undefined4 auStack_30 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff6dc9c == 0) || (DAT_ram_4ff6dc94 == (undefined4 *)0x0)) ||
     (*(char *)((int)DAT_ram_4ff6dc94 + 0x1e931) == '\0')) {
    pcVar6 = "resource_wait";
    uVar3 = 0x1f7;
LAB_ram_480d1072:
    FUN_ram_4808cb66(uVar3,pcVar6);
    return;
  }
  fence();
  fence();
  if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) != '\0') && (iVar4 = FUN_ram_480a3262(), iVar4 == 0)) {
    pcVar6 = "agent_busy";
    uVar3 = 0x199;
    goto LAB_ram_480d1072;
  }
  FUN_ram_4802a8a8(local_a8,"command_id");
  FUN_ram_4806562c(local_c8,&DAT_ram_4ff5cb9c,local_a8);
  FUN_ram_4802a59e(local_a8);
  FUN_ram_4802a8a8(local_a8,"action");
  FUN_ram_4806562c(local_b8,&DAT_ram_4ff5cb9c,local_a8);
  FUN_ram_4802a59e(local_a8);
  iVar4 = FUN_ram_4802b18e(local_b8,"keep_device");
  if ((iVar4 == 0) && (iVar4 = FUN_ram_4802b18e(local_b8,"apply_cloud"), iVar4 == 0)) {
    FUN_ram_4808cb66(400,"invalid_action");
    goto LAB_ram_480d11bc;
  }
  iVar4 = FUN_ram_4802b18e(local_c8,"cloud-backup");
  bVar14 = false;
  if (iVar4 != 0) {
    iVar4 = FUN_ram_4802c48c();
    bVar14 = iVar4 != 0;
  }
  iVar4 = DAT_ram_4ff6dc9c + 0x86e00;
  iVar1 = DAT_ram_4ff6dc9c + 0x87080;
  do {
    while (*(char *)(iVar4 + 0x4c) != '\0') {
      bVar2 = FUN_ram_4802b18e(local_c8,iVar4);
      iVar4 = iVar4 + 0x50;
      bVar14 = bVar2 | bVar14;
      if (iVar1 == iVar4) goto LAB_ram_480d1158;
    }
    iVar4 = iVar4 + 0x50;
  } while (iVar1 != iVar4);
LAB_ram_480d1158:
  puVar12 = DAT_ram_4ff6dc94;
  if (bVar14 == 0) {
    pcVar6 = "conflict_not_found";
    uVar3 = 0x194;
  }
  else if ((*(char *)(DAT_ram_4ff6dc94 + 0x45ae) == '\0') &&
          (*(char *)(DAT_ram_4ff6dc94 + 0x4690) == '\0')) {
    if (((char)DAT_ram_4ff5bd64 == '\0') && (DAT_ram_4ff5bd64._1_1_ == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6dc94 + 0x45ae) = 1;
      FUN_ram_48032bca((int)puVar12 + 0x116fa);
      pppppppuVar7 = local_c8;
      if (-1 < cStack_b9) {
        pppppppuVar7 = (undefined4 *******)local_c8[0];
      }
      FUN_ram_4ff454c4((int)puVar12 + 0x116b9,pppppppuVar7);
      pppppppuVar7 = local_b8;
      if (-1 < cStack_a9) {
        pppppppuVar7 = (undefined4 *******)local_b8[0];
      }
      FUN_ram_4ff454c4((int)puVar12 + 0x1173b,pppppppuVar7);
      uVar8 = DAT_ram_4ff5bd38;
      puVar12[0x45d3] = DAT_ram_4ff5bd30;
      uVar13 = DAT_ram_4ff5bd40;
      uVar9 = DAT_ram_4ff5bd3c;
      uVar3 = DAT_ram_4ff5bd34;
      puVar12[0x45d5] = uVar8;
      iVar4 = DAT_ram_4ff6dc9c;
      puVar12[0x45d4] = uVar3;
      puVar12[0x45d6] = uVar9;
      puVar12[0x45d7] = uVar13;
      uVar3 = *(undefined4 *)(iVar4 + 0x5a4);
      puVar12[0x4648] = *(undefined4 *)(iVar4 + 0x5a0);
      puVar12[0x4649] = uVar3;
      uVar3 = *(undefined4 *)(iVar4 + 0x74c);
      puVar12[0x464a] = *(undefined4 *)(iVar4 + 0x748);
      puVar12[0x464b] = uVar3;
      FUN_ram_480b610a();
      FUN_ram_480cf35c();
      iVar4 = DAT_ram_4ff6dc9c;
      if (*(char *)(DAT_ram_4ff6dc9c + 0x87b64) == '\0') {
        if (*(char *)(DAT_ram_4ff6dc9c + 0x87b65) != '\0') {
          memset(local_a8,0,0x68);
          goto LAB_ram_480d12d4;
        }
        puVar11 = (undefined4 *)(DAT_ram_4ff6dc9c + 0x520);
        puVar10 = local_a8;
        do {
          uVar13 = puVar11[1];
          uVar3 = puVar11[2];
          uVar8 = puVar11[3];
          uVar9 = puVar11[4];
          *puVar10 = *puVar11;
          puVar10[1] = uVar13;
          puVar10[2] = uVar3;
          puVar10[3] = uVar8;
          puVar10[4] = uVar9;
          puVar11 = puVar11 + 5;
          puVar10 = puVar10 + 5;
        } while (puVar11 != (undefined4 *)(DAT_ram_4ff6dc9c + 0x584));
        *puVar10 = *puVar11;
        FUN_ram_4ff45158(puVar12 + 0x45d8,local_a8,0x65);
        bVar2 = 0;
LAB_ram_480d145a:
        bVar14 = bVar2;
        puVar11 = (undefined4 *)(iVar4 + 0x668);
        puVar10 = local_a8;
        do {
          uVar3 = puVar11[1];
          uVar8 = puVar11[2];
          uVar9 = puVar11[3];
          uVar13 = puVar11[4];
          *puVar10 = *puVar11;
          puVar10[1] = uVar3;
          puVar10[2] = uVar8;
          puVar10[3] = uVar9;
          puVar10[4] = uVar13;
          puVar11 = puVar11 + 5;
          puVar10 = puVar10 + 5;
        } while (puVar11 != (undefined4 *)(iVar4 + 0x6e0));
      }
      else {
        puVar11 = (undefined4 *)(DAT_ram_4ff6dc9c + 0x520);
        puVar10 = local_a8;
        do {
          uVar13 = puVar11[1];
          uVar3 = puVar11[2];
          uVar8 = puVar11[3];
          uVar9 = puVar11[4];
          *puVar10 = *puVar11;
          puVar10[1] = uVar13;
          puVar10[2] = uVar3;
          puVar10[3] = uVar8;
          puVar10[4] = uVar9;
          puVar11 = puVar11 + 5;
          puVar10 = puVar10 + 5;
        } while (puVar11 != (undefined4 *)(DAT_ram_4ff6dc9c + 0x584));
        *puVar10 = *puVar11;
LAB_ram_480d12d4:
        FUN_ram_4ff45158(puVar12 + 0x45d8,local_a8,0x65);
        bVar2 = *(byte *)(iVar4 + 0x87b65);
        if (*(byte *)(iVar4 + 0x87b65) != 0) goto LAB_ram_480d145a;
        memset(local_a8,0,0x78);
      }
      puVar10 = local_a8;
      puVar11 = puVar12 + 0x460c;
      do {
        uVar13 = *puVar10;
        uVar3 = puVar10[1];
        uVar8 = puVar10[2];
        uVar9 = puVar10[3];
        puVar11[4] = puVar10[4];
        *puVar11 = uVar13;
        puVar11[1] = uVar3;
        puVar11[2] = uVar8;
        puVar11[3] = uVar9;
        puVar10 = puVar10 + 5;
        puVar11 = puVar11 + 5;
      } while (puVar10 != auStack_30);
      iVar4 = FUN_ram_4802b18e(local_c8,"cloud-backup");
      if ((iVar4 == 0) || (iVar4 = FUN_ram_4802b18e(local_b8,"apply_cloud"), iVar4 == 0)) {
        iVar4 = FUN_ram_480b66f6();
        if (iVar4 != 0) goto LAB_ram_480d1390;
        pcVar6 = "resolution_store_failed";
        uVar3 = 500;
      }
      else {
        if (bVar14 == 0) {
          if (*(char *)(DAT_ram_4ff6dc9c + 0x588) == '\0') {
            if (*(char *)(DAT_ram_4ff6dc9c + 0x6e0) == '\0') goto LAB_ram_480d14bc;
            uVar5 = 2;
          }
          else {
            uVar5 = (-(uint)(*(char *)(DAT_ram_4ff6dc9c + 0x6e0) == '\0') & 0xfffffffe) + 3;
          }
LAB_ram_480d137e:
          iVar4 = FUN_ram_480b6a26(uVar5,"latest",0);
          if (iVar4 != 0) {
LAB_ram_480d1390:
            uVar3 = FUN_ram_48025ba6();
            *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar3;
            FUN_ram_48067954(&DAT_ram_4ff5cb9c,0xca,"application/json",
                             "{\"ok\":true,\"queued\":true}");
            FUN_ram_4802a59e(local_b8);
            FUN_ram_4802a59e(local_c8);
            return;
          }
        }
        else {
          if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b64) != '\0') &&
             (*(char *)(DAT_ram_4ff6dc9c + 0x588) != '\0')) {
            uVar5 = 1;
            if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b65) != '\0') &&
               (*(char *)(DAT_ram_4ff6dc9c + 0x6e0) != '\0')) goto LAB_ram_480d1404;
            goto LAB_ram_480d137e;
          }
          if ((*(char *)(DAT_ram_4ff6dc9c + 0x87b65) != '\0') &&
             (*(char *)(DAT_ram_4ff6dc9c + 0x6e0) != '\0')) {
            uVar5 = 0;
LAB_ram_480d1404:
            uVar5 = uVar5 | 2;
            goto LAB_ram_480d137e;
          }
        }
LAB_ram_480d14bc:
        puVar12 = puVar12 + 0x24e6;
        puVar11 = DAT_ram_4ff6dc94 + 0x24e5;
        puVar10 = DAT_ram_4ff6dc94;
        do {
          uVar13 = puVar10[1];
          uVar3 = puVar10[2];
          uVar8 = puVar10[3];
          uVar9 = puVar10[4];
          *puVar12 = *puVar10;
          puVar12[1] = uVar13;
          puVar12[2] = uVar3;
          puVar12[3] = uVar8;
          puVar12[4] = uVar9;
          puVar10 = puVar10 + 5;
          puVar12 = puVar12 + 5;
        } while (puVar10 != puVar11);
        pcVar6 = "restore_busy_or_local_changed";
        *puVar12 = *puVar10;
        uVar3 = 0x199;
      }
      FUN_ram_4808cb66(uVar3,pcVar6);
      goto LAB_ram_480d11bc;
    }
    pcVar6 = "device_unsaved";
    uVar3 = 0x199;
  }
  else {
    pcVar6 = "resolution_pending";
    uVar3 = 0x199;
  }
  FUN_ram_4808cb66(uVar3,pcVar6);
LAB_ram_480d11bc:
  FUN_ram_4802a59e(local_b8);
  FUN_ram_4802a59e(local_c8);
  return;
}



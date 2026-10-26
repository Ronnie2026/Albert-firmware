/* Firmware entry: 0x4806e388 */

/* WARNING: Type propagation algorithm not settling */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_torque_nag_status_4806e388(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uStack_ea4;
  undefined4 *******pppppppuStack_ea0;
  undefined4 *******local_e9c [2];
  uint uStack_e94;
  byte bStack_e8d;
  uint auStack_e8c [4];
  char local_e7c;
  char cStack_e7b;
  char cStack_e7a;
  byte bStack_e79;
  byte bStack_e78;
  byte bStack_e77;
  char cStack_e76;
  char cStack_e75;
  char cStack_e74;
  undefined1 uStack_e73;
  undefined4 uStack_e70;
  short local_e6c;
  short sStack_e6a;
  short sStack_e68;
  short sStack_e66;
  undefined4 auStack_e64 [4];
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  int local_e20;
  undefined1 *puStack_e1c;
  int aiStack_e18 [830];
  undefined4 local_120 [65];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61940,0xffffffff);
  piVar13 = &DAT_ram_4ff61a00;
  piVar10 = &local_e20;
  do {
    iVar2 = piVar13[1];
    iVar5 = piVar13[2];
    iVar8 = piVar13[3];
    *piVar10 = *piVar13;
    piVar10[1] = iVar2;
    piVar10[2] = iVar5;
    piVar10[3] = iVar8;
    piVar13 = piVar13 + 4;
    piVar10 = piVar10 + 4;
  } while (piVar13 != (int *)&DAT_ram_4ff62800);
  FUN_ram_4ff3ee10(&DAT_ram_4ff61940);
  puVar12 = local_120;
  pcVar7 = &local_e7c;
  do {
    pcVar14 = pcVar7;
    puVar11 = puVar12;
    uVar3 = puVar11[1];
    uVar6 = puVar11[2];
    uVar9 = puVar11[3];
    *(undefined4 *)pcVar14 = *puVar11;
    *(undefined4 *)(pcVar14 + 4) = uVar3;
    *(undefined4 *)(pcVar14 + 8) = uVar6;
    *(undefined4 *)(pcVar14 + 0xc) = uVar9;
    puVar12 = puVar11 + 4;
    pcVar7 = pcVar14 + 0x10;
  } while (puVar12 != local_120 + 0x14);
  uVar3 = puVar11[5];
  uVar6 = puVar11[6];
  *(undefined4 *)(pcVar14 + 0x10) = *puVar12;
  *(undefined4 *)(pcVar14 + 0x14) = uVar3;
  *(undefined4 *)(pcVar14 + 0x18) = uVar6;
  FUN_ram_4802a8a8(local_e9c,&DAT_ram_481df390);
  iVar2 = FUN_ram_4802a79a(local_e9c,0x800);
  if (iVar2 == 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"torque_status_buffer_unavailable\"}",0x37);
    FUN_ram_4802a59e(local_e9c);
    return;
  }
  FUN_ram_4802ad46(local_e9c,&DAT_ram_481c4164);
  FUN_ram_4802f022(local_e9c,"configuredEnabled");
  if (local_e7c == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  FUN_ram_4802f022(local_e9c,"effectiveEnabled");
  if (cStack_e7b == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  FUN_ram_4802f022(local_e9c,"pending");
  if (cStack_e7a == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  if (bStack_e79 == 7) {
    pcVar7 = "verify";
  }
  else if (bStack_e79 < 8) {
    if (bStack_e79 == 3) {
      pcVar7 = "maintenance";
    }
    else if (bStack_e79 < 4) {
      if (bStack_e79 == 1) {
        pcVar7 = "wait-das";
      }
      else {
        if (bStack_e79 != 2) goto LAB_ram_4806eb24;
        pcVar7 = "arming";
      }
    }
    else if (bStack_e79 == 5) {
      pcVar7 = "rest";
    }
    else {
      if (bStack_e79 != 6) goto LAB_ram_4806eb24;
      pcVar7 = "corrective";
    }
  }
  else if (bStack_e79 == 0xb) {
    pcVar7 = "pre-corrective-pause";
  }
  else if (bStack_e79 < 0xc) {
    if (bStack_e79 == 8) {
      pcVar7 = "fault-hold";
    }
    else {
      if (bStack_e79 != 9) goto LAB_ram_4806eb24;
      pcVar7 = "monitor-only";
    }
  }
  else if (bStack_e79 == 0xc) {
    pcVar7 = "stability-verify";
  }
  else {
LAB_ram_4806eb24:
    pcVar7 = "disabled";
  }
  FUN_ram_4802a8a8(&local_e20,pcVar7);
  FUN_ram_4802f236(local_e9c,"phase",&local_e20);
  FUN_ram_4802a59e(&local_e20);
  if (bStack_e78 == 6) {
    pcVar7 = "no-direction";
  }
  else if (bStack_e78 < 7) {
    if (bStack_e78 == 3) {
      pcVar7 = "das-stale";
    }
    else if (bStack_e78 < 4) {
      if (bStack_e78 == 0) {
        pcVar7 = "none";
      }
      else {
        if (bStack_e78 != 2) goto LAB_ram_4806eb7e;
        pcVar7 = "das-missing";
      }
    }
    else if (bStack_e78 == 4) {
      pcVar7 = "arming";
    }
    else {
      pcVar7 = "rest";
    }
  }
  else if (bStack_e78 == 0xb) {
    pcVar7 = "maintenance-disabled";
  }
  else if (bStack_e78 < 0xc) {
    if (bStack_e78 == 7) {
      pcVar7 = "verify";
    }
    else if (bStack_e78 == 8) {
      pcVar7 = "das-state";
    }
    else {
LAB_ram_4806eb7e:
      pcVar7 = "disabled";
    }
  }
  else if (bStack_e78 == 0xd) {
    pcVar7 = "steering-angle-limit";
  }
  else {
    if (bStack_e78 != 0xe) goto LAB_ram_4806eb7e;
    pcVar7 = "corrective-disabled";
  }
  FUN_ram_4802a8a8(&local_e20,pcVar7);
  FUN_ram_4802f236(local_e9c,"blockReason",&local_e20);
  FUN_ram_4802a59e(&local_e20);
  if (bStack_e77 == 3) {
    pcVar7 = "corrective-sweep";
    goto LAB_ram_4806e594;
  }
  if (bStack_e77 < 4) {
    if (bStack_e77 == 1) {
      pcVar7 = "angle";
      goto LAB_ram_4806e594;
    }
    if (bStack_e77 == 2) {
      pcVar7 = "hold";
      goto LAB_ram_4806e594;
    }
  }
  else {
    if (bStack_e77 == 4) {
      pcVar7 = "corrective-fixed";
      goto LAB_ram_4806e594;
    }
    if (bStack_e77 == 5) {
      pcVar7 = "corrective-transition";
      goto LAB_ram_4806e594;
    }
  }
  pcVar7 = "none";
LAB_ram_4806e594:
  FUN_ram_4802a8a8(&local_e20,pcVar7);
  FUN_ram_4802f236(local_e9c,"directionSource",&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802f022(local_e9c,"dasSeen");
  if (cStack_e76 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  FUN_ram_4802f022(local_e9c,"dasValid");
  if (cStack_e75 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  FUN_ram_4802f022(local_e9c,"dasFresh");
  if (cStack_e74 == '\0') {
    pcVar7 = "false";
  }
  else {
    pcVar7 = "true";
  }
  FUN_ram_4802af2c(local_e9c,pcVar7);
  FUN_ram_4802f07e(local_e9c,"dasHos",uStack_e73);
  FUN_ram_4802f278(local_e9c,"dasAgeMs",uStack_e70);
  FUN_ram_4802f022(local_e9c,"steeringAngleDeciDeg");
  FUN_ram_4802a970(&local_e20,(int)local_e6c,10);
  FUN_ram_4802ae48(local_e9c,&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802f022(local_e9c,"observedTorqueCentiNm");
  FUN_ram_4802a970(&local_e20,(int)sStack_e6a,10);
  FUN_ram_4802ae48(local_e9c,&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802f022(local_e9c,"targetTorqueCentiNm");
  FUN_ram_4802a970(&local_e20,(int)sStack_e68,10);
  FUN_ram_4802ae48(local_e9c,&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802f022(local_e9c,"lastTransmittedTorqueCentiNm");
  FUN_ram_4802a970(&local_e20,(int)sStack_e66,10);
  FUN_ram_4802ae48(local_e9c,&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802f278(local_e9c,"lastSourceAgeUs",auStack_e64[0]);
  FUN_ram_4802f278(local_e9c,"oemFrameCount",auStack_e64[1]);
  FUN_ram_4802f278(local_e9c,"dasFrameCount",auStack_e64[2]);
  FUN_ram_4802f278(local_e9c,"txAccepted",auStack_e64[3]);
  FUN_ram_4802f278(local_e9c,"txSuccess",uStack_e54);
  FUN_ram_4802f278(local_e9c,"txFailure",uStack_e50);
  FUN_ram_4802f278(local_e9c,"submitRejected",uStack_e4c);
  FUN_ram_4802f278(local_e9c,"terminalTimeout",uStack_e48);
  FUN_ram_4802f278(local_e9c,"dropStale",uStack_e44);
  FUN_ram_4802f278(local_e9c,"dropPending",uStack_e40);
  FUN_ram_4802f278(local_e9c,"dropOwnEcho",uStack_e3c);
  FUN_ram_4802f278(local_e9c,"checksumReject",uStack_e38);
  FUN_ram_4802f278(local_e9c,"invalidTorqueReject",uStack_e34);
  FUN_ram_4802f278(local_e9c,"counterCollisions",uStack_e30);
  FUN_ram_4802f278(local_e9c,"lastCounterCollisionGapUs",uStack_e2c);
  FUN_ram_4802f278(local_e9c,"lateReceipt",uStack_e28);
  FUN_ram_4802f278(local_e9c,"lastErrorFlags",uStack_e24);
  FUN_ram_4802af5a(local_e9c,0x7d);
  FUN_ram_4802a8a8(auStack_e8c,"Cache-Control");
  FUN_ram_4802a8a8(&local_e20,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_e8c,&local_e20);
  FUN_ram_4802a59e(&local_e20);
  FUN_ram_4802a59e(auStack_e8c);
  iVar5 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  if ((char)bStack_e8d < '\0') {
    uStack_e94 = bStack_e8d & 0x7f;
    local_e9c[0] = local_e9c;
  }
  else if (local_e9c[0] == (undefined4 *******)0x0) {
    uStack_e94 = 0;
  }
  uStack_ea4 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  pppppppuStack_ea0 = local_e9c[0];
  auStack_e8c[0] = uStack_e94;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_ea4,&pppppppuStack_ea0,auStack_e8c);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar4 = auStack_e8c[0];
    if (auStack_e8c[0] == 0) {
      uVar4 = 1;
    }
    iVar8 = FUN_ram_4ff206d8(uVar4,0x404);
    iVar15 = iVar5 + iVar2 * 0x1d40;
    *(int *)(iVar15 + 0x1cdc) = iVar8;
    if (iVar8 == 0) {
      if (*(char *)(iVar15 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar5 + iVar2 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_e8c[0] != 0) {
        FUN_ram_4ff45158(iVar8,pppppppuStack_ea0,auStack_e8c[0]);
        iVar8 = *(int *)(iVar15 + 0x1cdc);
      }
      iVar2 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar2 + 0x44c) != '\0') && (*(char *)(iVar2 + 0x44c) != '\x06')) {
        *(int *)(iVar2 + 0x1ce0) = iVar8;
        *(uint *)(iVar2 + 0x1ce4) = auStack_e8c[0];
        *(undefined4 *)(iVar2 + 0x1ce8) = 0;
        puStack_e1c = &LAB_ram_4802d3f2;
        local_e20 = iVar2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_ea4,"application/json",iVar2,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(local_e9c);
  return;
}



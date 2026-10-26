/* Firmware entry: 0x4807ef06 */

void FUN_ram_4807ef06(undefined4 param_1,char *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_90,&DAT_ram_481c4164);
  cVar7 = *param_2;
  FUN_ram_4802f022(auStack_90,"valid");
  if (cVar7 == '\0') {
    pcVar4 = "false";
  }
  else {
    pcVar4 = "true";
  }
  FUN_ram_4802af2c(auStack_90,pcVar4);
  FUN_ram_4802a8a8(auStack_50,"rtc_noinit_four_session");
  FUN_ram_4802f236(auStack_90,"retention",auStack_50);
  FUN_ram_4802a59e(auStack_50);
  cVar7 = param_2[0x20];
  FUN_ram_4802f022(auStack_90,"terminationKnown");
  if (cVar7 == '\0') {
    FUN_ram_4802af2c(auStack_90,"false");
    cVar7 = *param_2;
  }
  else {
    FUN_ram_4802af2c(auStack_90,&DAT_ram_481c3dec);
    cVar7 = *param_2;
  }
  if (cVar7 != '\0') {
    FUN_ram_4802f278(auStack_90,"bootSequence",*(undefined4 *)(param_2 + 4));
    FUN_ram_4802f278(auStack_90,"estimatedUptimeMs",*(undefined4 *)(param_2 + 0x28));
    FUN_ram_4802f278(auStack_90,"selectedProtocol",*(undefined4 *)(param_2 + 0x24));
    iVar6 = *(int *)(param_2 + 0x24);
    if (iVar6 == 0xd) {
      pcVar4 = "V13";
    }
    else if (iVar6 == 0xe) {
      pcVar4 = "V14";
    }
    else if (iVar6 == 0xc) {
      pcVar4 = "V12";
    }
    else {
      pcVar4 = "unknown";
    }
    FUN_ram_4802a8a8(auStack_50,pcVar4);
    FUN_ram_4802f236(auStack_90,"selectedProtocolName",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802a8a8(auStack_80,&DAT_ram_481c4164);
    FUN_ram_4802f278(auStack_80,"code",*(undefined4 *)(param_2 + 8));
    uVar3 = FUN_ram_4802c25c(*(undefined4 *)(param_2 + 8));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_80,"reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802f278(auStack_80,"rawCpu0",*(undefined4 *)(param_2 + 0xc));
    uVar3 = FUN_ram_4802c306(*(undefined4 *)(param_2 + 0xc));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_80,"rawCpu0Reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802f278(auStack_80,"rawCpu1",*(undefined4 *)(param_2 + 0x10));
    uVar3 = FUN_ram_4802c306(*(undefined4 *)(param_2 + 0x10));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_80,"rawCpu1Reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802af5a(auStack_80,0x7d);
    FUN_ram_4802f022(auStack_90,"startedBy");
    FUN_ram_4802ae48(auStack_90,auStack_80);
    FUN_ram_4802a8a8(auStack_70,&DAT_ram_481c4164);
    FUN_ram_4802f278(auStack_70,"code",*(undefined4 *)(param_2 + 0x14));
    uVar3 = FUN_ram_4802c25c(*(undefined4 *)(param_2 + 0x14));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_70,"reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802f278(auStack_70,"rawCpu0",*(undefined4 *)(param_2 + 0x18));
    uVar3 = FUN_ram_4802c306(*(undefined4 *)(param_2 + 0x18));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_70,"rawCpu0Reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802f278(auStack_70,"rawCpu1",*(undefined4 *)(param_2 + 0x1c));
    uVar2 = 0;
    uVar3 = FUN_ram_4802c306(*(undefined4 *)(param_2 + 0x1c));
    FUN_ram_4802a8a8(auStack_50,uVar3);
    FUN_ram_4802f236(auStack_70,"rawCpu1Reason",auStack_50);
    FUN_ram_4802a59e(auStack_50);
    FUN_ram_4802af5a(auStack_70,0x7d);
    FUN_ram_4802f022(auStack_90,"terminatedBy");
    FUN_ram_4802ae48(auStack_90,auStack_70);
    FUN_ram_4802f022(auStack_90,"breadcrumbs");
    FUN_ram_4802af5a(auStack_90,0x5b);
    pcVar4 = param_2 + 0x38;
    do {
      if (param_2[uVar2 + 0x2c] != '\0') {
        if (cVar7 == '\0') {
          FUN_ram_4802af5a(auStack_90,0x2c);
          uVar8 = *(uint *)(pcVar4 + 8);
          FUN_ram_4802a8a8(auStack_60,&DAT_ram_481c4164);
          if (uVar2 != 5) goto LAB_ram_4807f602;
LAB_ram_4807f6ae:
          pcVar5 = "health_sampler";
        }
        else {
          uVar8 = *(uint *)(pcVar4 + 8);
          FUN_ram_4802a8a8(auStack_60,&DAT_ram_481c4164);
          if (uVar2 == 5) goto LAB_ram_4807f6ae;
LAB_ram_4807f602:
          if (uVar2 < 6) {
            if (uVar2 == 3) {
              pcVar5 = "can_bg";
            }
            else if (uVar2 == 4) {
              pcVar5 = "can_bg_completed";
            }
            else if (uVar2 == 1) {
              pcVar5 = "fsd_p0";
            }
            else if (uVar2 == 2) {
              pcVar5 = "web";
            }
            else {
              pcVar5 = "can_rt";
            }
          }
          else if (uVar2 == 8) {
            pcVar5 = "das_399";
          }
          else if (uVar2 == 9) {
            pcVar5 = "protocol";
          }
          else if (uVar2 == 6) {
            pcVar5 = "fast_3fd";
          }
          else {
            pcVar5 = "fast_3fd_terminal";
          }
        }
        FUN_ram_4802a8a8(auStack_50,pcVar5);
        FUN_ram_4802f236(auStack_60,&DAT_ram_481c4938,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)pcVar4;
        FUN_ram_4802f022(auStack_60,"sequence");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 4);
        FUN_ram_4802f022(auStack_60,&DAT_ram_481c8f44);
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 8);
        FUN_ram_4802f022(auStack_60,"stage");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        if (uVar8 == 10) {
          pcVar5 = "can_bg_before_service";
        }
        else if (uVar8 < 0xb) {
          if (uVar8 == 5) {
            pcVar5 = "fsd_p0_before_read";
          }
          else if (uVar8 < 6) {
            if (uVar8 == 3) {
              pcVar5 = "can_rt_after_service";
            }
            else if (uVar8 == 4) {
              pcVar5 = "can_rt_before_wait";
            }
            else if (uVar8 == 1) {
              pcVar5 = "protocol_applied";
            }
            else {
              if (uVar8 != 2) goto LAB_ram_4807f91e;
              pcVar5 = "can_rt_before_service";
            }
          }
          else if (uVar8 == 8) {
            pcVar5 = "web_before_handle";
          }
          else if (uVar8 == 9) {
            pcVar5 = "web_after_handle";
          }
          else if (uVar8 == 6) {
            pcVar5 = "fsd_p0_after_frame";
          }
          else {
            pcVar5 = "fsd_p0_before_wait";
          }
        }
        else if (uVar8 == 0xf) {
          pcVar5 = "fast_3fd_submit_done";
        }
        else if (uVar8 < 0x10) {
          if (uVar8 == 0xd) {
            pcVar5 = "fast_3fd_source";
          }
          else if (uVar8 == 0xe) {
            pcVar5 = "fast_3fd_transformed";
          }
          else if (uVar8 == 0xb) {
            pcVar5 = "can_bg_after_service";
          }
          else {
            pcVar5 = "health_sample";
          }
        }
        else if (uVar8 == 0x11) {
          pcVar5 = "das_399_source";
        }
        else if (uVar8 == 0x12) {
          pcVar5 = "das_399_processed";
        }
        else if (uVar8 == 0x10) {
          pcVar5 = "fast_3fd_terminal_done";
        }
        else {
LAB_ram_4807f91e:
          pcVar5 = "none";
        }
        FUN_ram_4802a8a8(auStack_50,pcVar5);
        FUN_ram_4802f236(auStack_60,"stageName",auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0xc);
        FUN_ram_4802f022(auStack_60,"protocol");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        iVar6 = *(int *)(pcVar4 + 0xc);
        if (iVar6 == 0xd) {
          pcVar5 = "V13";
        }
        else if (iVar6 == 0xe) {
          pcVar5 = "V14";
        }
        else if (iVar6 == 0xc) {
          pcVar5 = "V12";
        }
        else {
          pcVar5 = "unknown";
        }
        FUN_ram_4802a8a8(auStack_50,pcVar5);
        FUN_ram_4802f236(auStack_60,"protocolName",auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0x10);
        FUN_ram_4802f022(auStack_60,"frameId");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0x14);
        FUN_ram_4802f022(auStack_60,&DAT_ram_481c4478);
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0x18);
        FUN_ram_4802f022(auStack_60,"flags");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        if (uVar2 == 5) {
          FUN_ram_4802f278(auStack_60,"rawLevel",*(undefined4 *)(param_2 + 0x114));
          uVar3 = FUN_ram_4807edc0(param_2[0x110]);
          FUN_ram_4802a8a8(auStack_50,uVar3);
          FUN_ram_4802f236(auStack_60,"rawReason",auStack_50);
          FUN_ram_4802a59e(auStack_50);
          FUN_ram_4802f278(auStack_60,"maxKnownCanAgeMs",*(undefined4 *)(param_2 + 0x11c));
          FUN_ram_4802f278(auStack_60,"canWarningMask",param_2[0x120]);
          FUN_ram_4802f278(auStack_60,"canSevereMask",param_2[0x121]);
          FUN_ram_4802f278(auStack_60,"canUnknownMask",param_2[0x122]);
          FUN_ram_4802f278(auStack_60,"maxTaskHeartbeatAgeMs",*(undefined4 *)(param_2 + 0x124));
          FUN_ram_4802f278(auStack_60,"pendingPersistenceMask",*(uint *)(param_2 + 0x118) & 0x3f);
          FUN_ram_4802f278(auStack_60,"persistenceWriteCount",*(uint *)(param_2 + 0x118) >> 6);
          FUN_ram_4802f114(auStack_60,"persistenceWriteCountSaturated",
                           *(uint *)(param_2 + 0x118) >> 6 == 0x3ffffff);
        }
        else {
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,&DAT_ram_481c8f70);
          if ((uVar8 & 1) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"cameraDisable");
          if ((uVar8 & 8) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"speedOffset");
          if ((uVar8 & 0x40) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"dndEnabled");
          if ((uVar8 & 0x800) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"changed");
          if ((uVar8 & 0x100) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"submitted");
          if ((uVar8 & 0x200) == 0) {
            pcVar5 = "false";
          }
          else {
            pcVar5 = "true";
          }
          FUN_ram_4802af2c(auStack_60,pcVar5);
          uVar1 = *(ushort *)(pcVar4 + 0x1a);
          FUN_ram_4802f022(auStack_60,"drivingProfile");
          FUN_ram_4802aa44(auStack_50,uVar1 & 7,10);
          FUN_ram_4802ae48(auStack_60,auStack_50);
          FUN_ram_4802a59e(auStack_50);
          uVar8 = *(uint *)(pcVar4 + 0x18);
          FUN_ram_4802f022(auStack_60,"speedOffsetRaw");
          FUN_ram_4802aa44(auStack_50,uVar8 >> 0x14 & 0xff,10);
          FUN_ram_4802ae48(auStack_60,auStack_50);
          FUN_ram_4802a59e(auStack_50);
        }
        uVar3 = *(undefined4 *)(pcVar4 + 0x1c);
        FUN_ram_4802f022(auStack_60,"queueDepth");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0x20);
        FUN_ram_4802f022(auStack_60,"detail0");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        uVar3 = *(undefined4 *)(pcVar4 + 0x24);
        FUN_ram_4802f022(auStack_60,"detail1");
        FUN_ram_4802aa44(auStack_50,uVar3,10);
        FUN_ram_4802ae48(auStack_60,auStack_50);
        FUN_ram_4802a59e(auStack_50);
        FUN_ram_4802af5a(auStack_60,0x7d);
        FUN_ram_4802ae48(auStack_90,auStack_60);
        FUN_ram_4802a59e(auStack_60);
        cVar7 = '\0';
      }
      uVar2 = uVar2 + 1;
      pcVar4 = pcVar4 + 0x28;
    } while (uVar2 != 10);
    FUN_ram_4802af5a(auStack_90,0x5d);
    FUN_ram_4802a59e(auStack_70);
    FUN_ram_4802a59e(auStack_80);
  }
  FUN_ram_4802af5a(auStack_90,0x7d);
  FUN_ram_4802ae48(param_1,auStack_90);
  FUN_ram_4802a59e(auStack_90);
  return;
}



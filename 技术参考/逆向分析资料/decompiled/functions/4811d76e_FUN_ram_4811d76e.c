/* Firmware entry: 0x4811d76e */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4811d76e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  int iStack_80;
  char *pcStack_78;
  undefined4 *******local_6c [3];
  char cStack_5d;
  undefined1 auStack_5c [40];
  
  DAT_ram_4ff5ce98 = FUN_ram_4ff3d9a8();
  fence();
  uVar9 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = 2;
  DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 30000;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  FUN_ram_48033c8e();
  FUN_ram_48120f00(&LAB_ram_48065452);
  pcStack_78 = "off";
  do {
    uVar9 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5cea4 = 2;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 30000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
    iVar2 = FUN_ram_48025ba6();
    if (((DAT_ram_4ff48999 == '\0') && (DAT_ram_4ff4899a == '\0')) &&
       ((DAT_ram_4ff48998 == '\0' || (-1 < iVar2 - DAT_ram_4ff48994)))) {
      DAT_ram_4ff48998 = '\x01';
      iVar3 = FUN_ram_4802e7d0(1);
      if (iVar3 == 2) {
        DAT_ram_4ff4899a = '\x01';
        FUN_ram_4802ad46(&DAT_ram_4ff5c664,"network_start_blocked");
        FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                         "[FATAL] Dashboard Wi-Fi low-level initialization failed; web and OTA health are blocked for this boot"
                        );
      }
      else if (iVar3 == 1) {
        DAT_ram_4ff48994 = DAT_ram_4ff48990 + iVar2;
        FUN_ram_4802ad46(&DAT_ram_4ff5c664,"network_start_failed");
        FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                         "[ERROR] Dashboard network initialization failed; retrying in %lu ms\n",
                         5000);
      }
      else {
        iVar3 = FUN_ram_4806593c(&DAT_ram_4ff5cb9c);
        if (iVar3 == 0) {
          DAT_ram_4ff48994 = DAT_ram_4ff48990 + iVar2;
          FUN_ram_4802ad46(&DAT_ram_4ff5c664,"web_listener_failed");
          FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                           "[ERROR] Dashboard HTTP listener failed; retrying in %lu ms\n",5000);
        }
        else {
          DAT_ram_4ff48999 = '\x01';
          DAT_ram_4ff48994 = 0;
          iVar2 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"network_start_failed");
          if ((iVar2 != 0) ||
             (iVar2 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"web_listener_failed"), iVar2 != 0)) {
            FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
          }
          if (DAT_ram_4ff5c5f4 != '\0') {
            FUN_ram_48030bc0();
          }
          FUN_ram_481238aa(auStack_5c,&DAT_ram_4ff6c14c);
          FUN_ram_48121b46(local_6c,auStack_5c,0);
          pppppppuVar6 = local_6c;
          if (-1 < cStack_5d) {
            pppppppuVar6 = local_6c[0];
          }
          FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[P4] Web startup ready: http://%s/\n",pppppppuVar6);
          FUN_ram_4802a59e(local_6c);
        }
      }
    }
    uVar9 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5cea4 = 10;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
    iVar2 = FUN_ram_48025ba6();
    if ((*(char *)(DAT_ram_4ff6de38 + 0x720) == '\0') ||
       (999 < (uint)(iVar2 - *(int *)(DAT_ram_4ff6de38 + 0x724)))) {
      FUN_ram_48082b62();
    }
    recovered_runtime_service();
    if (DAT_ram_4ff48999 != '\0') {
      uVar4 = FUN_ram_48025ba6();
      if (DAT_ram_4ff48b58 != '\0') {
        fence();
        fence();
        fence();
        DAT_ram_4ff489f4 = 8;
        DAT_ram_4ff489f8 = DAT_ram_4ff47ea0;
        DAT_ram_4ff489fc = 0;
        DAT_ram_4ff48a00 = 0xffffffff;
        DAT_ram_4ff48a04 = 0;
        DAT_ram_4ff48a08 = 0;
        DAT_ram_4ff48a0c = 0;
        DAT_ram_4ff48a10 = 0;
        DAT_ram_4ff489ec = (DAT_ram_4ff489ec + 1U & 0xfffffffe) + 2;
        fence();
        DAT_ram_4ff489f0 = uVar4;
      }
      iVar2 = FUN_ram_4ff21a0a();
      FUN_ram_480a1e02(&DAT_ram_4ff5cb9c);
      iVar3 = FUN_ram_4ff21a0a();
      DAT_ram_4ff6dd94 = iVar3 - iVar2;
      if (DAT_ram_4ff6dd90 < DAT_ram_4ff6dd94) {
        DAT_ram_4ff6dd90 = DAT_ram_4ff6dd94;
      }
      uVar4 = FUN_ram_48025ba6();
      if (DAT_ram_4ff48b58 != '\0') {
        fence();
        fence();
        fence();
        DAT_ram_4ff489f4 = 9;
        DAT_ram_4ff489f8 = DAT_ram_4ff47ea0;
        DAT_ram_4ff489fc = 0;
        DAT_ram_4ff48a00 = 0xffffffff;
        DAT_ram_4ff48a04 = 0;
        DAT_ram_4ff48a08 = 0;
        DAT_ram_4ff48a0c = 0;
        DAT_ram_4ff48a10 = 0;
        DAT_ram_4ff489ec = (DAT_ram_4ff489ec + 1U & 0xfffffffe) + 2;
        fence();
        DAT_ram_4ff489f0 = uVar4;
      }
      recovered_runtime_service();
      if ((DAT_ram_4ff5c5f6 != '\0') && (iVar2 = FUN_ram_48124896(&DAT_ram_4ff6c118), iVar2 != -1))
      {
        DAT_ram_4ff5c5f6 = '\0';
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = 0;
        }
        DAT_ram_4ff5c674 = (int)(short)iVar3;
        if (iVar2 < 0) {
          FUN_ram_4802ad46(&DAT_ram_4ff5c664,"scan_failed");
        }
      }
      fence();
      fence();
      if (DAT_ram_4ff6df30 == '\0') {
        iVar2 = FUN_ram_48025ba6();
        if (DAT_ram_4ff5c5f8 == '\0') {
LAB_ram_4811dc24:
          iVar5 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
          iVar3 = DAT_ram_4ff6dd8c;
          fence();
          if (DAT_ram_4ff6dd88 != DAT_ram_4ff5c60c) {
            DAT_ram_4ff5c60c = DAT_ram_4ff6dd88;
            FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,
                             "[WIFI] STA disconnected reason=%lu attempts=%lu AP-clients=%lu\n",
                             DAT_ram_4ff6dd84,DAT_ram_4ff5c608,DAT_ram_4ff6dd8c);
          }
          if (iVar5 == 3) {
            if ((char)DAT_ram_4ff5c610 == '\0') {
              pcVar7 = pcStack_78;
              if (DAT_ram_4ff5c5f7 != '\0') {
                pcVar7 = "on";
              }
              FUN_ram_4802bb30(&DAT_ram_4ff5bb3c,"[WIFI] STA connected; AP=%s\n",pcVar7);
            }
            DAT_ram_4ff5c5fc = 0;
            DAT_ram_4ff5c5f9 = '\0';
            DAT_ram_4ff5c604 = 0;
            DAT_ram_4ff5c610 = 1;
            iVar5 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"connect_timeout");
            if ((iVar5 != 0) ||
               (iVar5 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"connection_lost"), iVar5 != 0)) {
              FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
            }
            if (DAT_ram_4ff5c5f5 == '\0') goto joined_r0x4811df64;
            if ((DAT_ram_4ff5c5f7 != '\0') && (DAT_ram_4ff5c614 == 0)) {
              DAT_ram_4ff5c614 = iVar2 + 300000;
            }
          }
          else {
            DAT_ram_4ff5c614 = 0;
            if (DAT_ram_4ff5c5f4 == '\0') {
              if ((char)DAT_ram_4ff5c610 != '\0') goto LAB_ram_4811dfd6;
joined_r0x4811df64:
              if (DAT_ram_4ff5c5f7 != '\0') goto LAB_ram_4811dd20;
            }
            else {
              if ((DAT_ram_4ff5c5f9 != '\0') && (19999 < (uint)(iVar2 - DAT_ram_4ff5c5fc))) {
                FUN_ram_48124a1a(&DAT_ram_4ff6c118,0,0,100);
                FUN_ram_4802ad46(&DAT_ram_4ff5c664,"connect_timeout");
                DAT_ram_4ff5c5fc = 0;
                DAT_ram_4ff5c5f9 = '\0';
                DAT_ram_4ff5c604 = 0;
                FUN_ram_4802be74(&DAT_ram_4ff5bb3c,
                                 "[WIFI] STA attempt timed out; reconnecting continuously");
                if ((char)DAT_ram_4ff5c610 != '\0') goto LAB_ram_4811dfd6;
LAB_ram_4811dff6:
                if (DAT_ram_4ff5c5f4 != '\0') {
                  if ((char)DAT_ram_4ff5c633 < '\0') goto LAB_ram_4811e00c;
LAB_ram_4811dcc0:
                  uVar8 = DAT_ram_4ff5c62c;
                  if (DAT_ram_4ff5c624 != 0) goto LAB_ram_4811dcca;
                }
                goto joined_r0x4811df64;
              }
              if ((char)DAT_ram_4ff5c610 != '\0') {
LAB_ram_4811dfd6:
                DAT_ram_4ff5c610 = DAT_ram_4ff5c610 & 0xff00;
                FUN_ram_4802ad46(&DAT_ram_4ff5c664,"connection_lost");
                DAT_ram_4ff5c604 = 0;
                goto LAB_ram_4811dff6;
              }
              if (-1 < (char)DAT_ram_4ff5c633) goto LAB_ram_4811dcc0;
LAB_ram_4811e00c:
              uVar8 = DAT_ram_4ff5c633 & 0x7f;
LAB_ram_4811dcca:
              if ((uVar8 == 0) || (DAT_ram_4ff5c5f9 != '\0')) goto joined_r0x4811df64;
              if (DAT_ram_4ff5c5f7 != '\0') {
                if (DAT_ram_4ff5c5f6 != '\0') goto LAB_ram_4811dd20;
                DAT_ram_4ff5c610 = DAT_ram_4ff5c610 & 0xff;
                FUN_ram_48030bc0();
                goto joined_r0x4811df64;
              }
            }
            if ((DAT_ram_4ff5c61c == '\0') || (-1 < iVar2 - DAT_ram_4ff5c618)) {
              iVar5 = FUN_ram_4802e7d0(DAT_ram_4ff5c5f4);
              if (iVar5 == 0) {
                DAT_ram_4ff5c61c = '\0';
                iVar5 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"ap_restore_failed");
                if (iVar5 != 0) {
                  FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
                }
              }
              else {
                FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_restore_failed");
                DAT_ram_4ff5c618 = iVar2 + 5000;
                DAT_ram_4ff5c61c = '\x01';
              }
            }
          }
LAB_ram_4811dd20:
          if (iVar3 != 0) {
            if (DAT_ram_4ff5c614 == 0) goto LAB_ram_4811d85e;
            DAT_ram_4ff5c614 = iVar2 + 300000;
          }
          if ((DAT_ram_4ff5c614 != 0) && (-1 < iVar2 - DAT_ram_4ff5c614)) {
            iVar3 = FUN_ram_4802e8fc();
            if (iVar3 == 0) {
              DAT_ram_4ff5c614 = iVar2 + 5000;
            }
            else {
              DAT_ram_4ff5c614 = 0;
            }
          }
        }
        else if (-1 < iVar2 - DAT_ram_4ff5c620) {
          iVar3 = FUN_ram_4802e8fc();
          cVar1 = DAT_ram_4ff5c5f4;
          if (iVar3 == 0) {
            DAT_ram_4ff5c620 = iVar2 + 5000;
          }
          else {
            iVar3 = FUN_ram_4802e7d0(DAT_ram_4ff5c5f4);
            if (iVar3 == 0) {
              DAT_ram_4ff5c5f8 = '\0';
              DAT_ram_4ff5c620 = 0;
              FUN_ram_4802ad46(&DAT_ram_4ff5c654,&DAT_ram_481df390);
              iVar3 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"ap_config_rolled_back");
              if ((iVar3 != 0) ||
                 (iVar3 = FUN_ram_4802b18e(&DAT_ram_4ff5c664,"ap_rollback_failed"), iVar3 != 0)) {
                FUN_ram_4802ad46(&DAT_ram_4ff5c664,&DAT_ram_481df390);
              }
            }
            else {
              FUN_ram_4802ad02(&DAT_ram_4ff5c644,&DAT_ram_4ff5c654);
              if (DAT_ram_4ff6de6e == '\0') {
                iStack_80 = FUN_ram_480334d2();
              }
              else {
                DAT_ram_4ff5ca74 = DAT_ram_4ff5ca74 + 1;
                DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x20;
                DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
                iStack_80 = FUN_ram_480ee046();
              }
              iVar3 = FUN_ram_4802e7d0(cVar1);
              DAT_ram_4ff5c5f8 = '\0';
              DAT_ram_4ff5c620 = 0;
              FUN_ram_4802ad46(&DAT_ram_4ff5c654,&DAT_ram_481df390);
              if (iVar3 == 0) {
                if (iStack_80 == 0) {
                  FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_rollback_failed");
                }
                else {
                  FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_config_rolled_back");
                }
              }
              else {
                FUN_ram_4802ad46(&DAT_ram_4ff5c664,"ap_rollback_failed");
                DAT_ram_4ff5c618 = iVar2 + 5000;
                DAT_ram_4ff5c61c = '\x01';
              }
            }
          }
          if (DAT_ram_4ff5c5f8 == '\0') goto LAB_ram_4811dc24;
        }
      }
    }
LAB_ram_4811d85e:
    recovered_runtime_service();
    uVar9 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5cea4 = 1;
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
    FUN_ram_4ff3c2b6((-(DAT_ram_4ff48999 == '\0') & 0x30U) + 2);
  } while( true );
}



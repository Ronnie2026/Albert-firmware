/* Firmware entry: 0x48010824 */

void FUN_ram_48010824(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  pcVar4 = *(char **)(param_1 + 8);
  if ((pcVar4 == (char *)0x0) || (*(short *)(param_1 + 0xe) == 0)) {
    return;
  }
  if (*pcVar4 != '\"') {
    uVar7 = FUN_ram_4ff44d14();
    pcVar4 = "W (%lu) %s: Drop unknown event\n\r\n";
    uVar8 = 2;
    goto LAB_ram_4801086a;
  }
  uVar8 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Received INIT event from ESP32 peripheral\n",uVar8,
                   "transport");
  uVar5 = (uint)(byte)pcVar4[1];
  pcVar4 = pcVar4 + 2;
  if (0x40 < uVar5) {
    uVar8 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: Init event length: %u\n",uVar8,"transport",uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("transport_drv.c",699,"process_init_event","len < 64");
  }
  uStack_74 = 0;
  if (uVar5 == 0) {
    uVar5 = 0;
    uVar6 = 0;
LAB_ram_48010dea:
    uVar8 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"transport",
                     "W (%lu) %s: Version mismatch: Host [%u.%u.%u] > Co-proc [%u.%u.%u] ==> Upgrade co-proc to avoid RPC timeouts\n"
                     ,uVar8,"transport",2,9,0,uVar6,uVar5,0);
  }
  else {
    do {
      cVar1 = *pcVar4;
      bVar2 = pcVar4[1];
      if (cVar1 == '\x11') {
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: EVENT: %2x\n",uVar8,"transport",*pcVar4);
        cVar1 = pcVar4[2];
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: capabilities: 0x%x\n",uVar8,"transport",cVar1);
        bVar3 = pcVar4[2];
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Features supported are:\n",uVar8,"transport");
        if ((bVar3 & 1) != 0) {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t * WLAN\n",uVar8,"transport");
        }
        if ((bVar3 & 2) != 0) {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - HCI over UART\n",uVar8,"transport");
        }
        if ((bVar3 & 4) != 0) {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - HCI over SDIO\n",uVar8,"transport");
        }
        if ((bVar3 & 0x40) != 0) {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - HCI over SPI\n",uVar8,"transport");
        }
        if ((bVar3 & 0x18) == 0x18) {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - BT/BLE dual mode\n",uVar8,"transport");
        }
        else if ((bVar3 & 8) == 0) {
          if ((bVar3 & 0x10) != 0) {
            uVar8 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - BR EDR only\n",uVar8,"transport");
          }
        }
        else {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t   - BLE only\n",uVar8,"transport");
        }
      }
      else if (cVar1 == '\x16') {
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: EVENT: %2x\n",uVar8,"transport",*pcVar4);
        uVar8 = *(undefined4 *)(pcVar4 + 2);
        uVar7 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: extended capabilities: 0x%lx\n",uVar7,
                         "transport",uVar8);
        uVar8 = *(undefined4 *)(pcVar4 + 2);
        uVar7 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Extended Features supported:\n",uVar7,
                         "transport");
        uVar7 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: \t No extended features. capabilities[%lu]\n",
                         uVar7,"transport",uVar8);
      }
      else if (cVar1 == '\x12') {
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: EVENT: %2x\n",uVar8,"transport",*pcVar4);
        bVar3 = pcVar4[2];
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        DAT_ram_4ff47e3c = bVar3;
        FUN_ram_4800ff34(bVar3,&uStack_68);
        if (bVar3 != 0xd) {
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          FUN_ram_4800ff34(0xd,&uStack_54);
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"transport",
                           "E (%lu) %s: Identified slave [%s] != Expected [%s]\n\t\trun \'idf.py menuconfig\' at host to reselect the slave?\n\t\tAborting.. \n"
                           ,uVar8,"transport",&uStack_68,&uStack_54);
          (**(code **)(PTR_PTR_ram_4ff47e40 + 0x30))(10);
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("transport_drv.c",0x229,"verify_host_config_for_slave",&DAT_ram_481b6028)
          ;
        }
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Identified slave [%s]\n",uVar8,"transport",
                         &uStack_68);
        FUN_ram_48022f32(0xd);
      }
      else if (cVar1 == '\x13') {
        uVar8 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: EVENT: %2x\n",uVar8,"transport",*pcVar4);
        if (pcVar4[2] != '\0') {
          uVar8 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"transport",
                           "W (%lu) %s: Slave enabled Raw Throughput Testing, but not enabled on Host\n"
                           ,uVar8,"transport");
        }
      }
      else if (cVar1 == '\x17') {
        uStack_74 = *(uint *)(pcVar4 + 2);
      }
      uVar5 = (uVar5 - bVar2) - 2 & 0xff;
      pcVar4 = pcVar4 + bVar2 + 2;
    } while (uVar5 != 0);
    if ((uStack_74 & 0xffffff00) != 0x20900) {
      uVar5 = uStack_74 >> 8 & 0xff;
      uVar6 = uStack_74 >> 0x10;
      if ((uStack_74 & 0xffffff00) < 0x20900) goto LAB_ram_48010dea;
      uVar8 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"transport",
                       "W (%lu) %s: Version mismatch: Host [%u.%u.%u] < Co-proc [%u.%u.%u] ==> Upgrade host to avoid compatibility issues\n"
                       ,uVar8,"transport",2,9,0,uVar6 & 0xff,uVar5,0);
    }
  }
  uVar5 = (uint)DAT_ram_4ff47e3c;
  if ((uVar5 == 0) || ((uVar5 < 0x18 && ((0x903224U >> (uVar5 & 0x1f) & 1) != 0)))) {
    uVar8 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: ESP board type is : %d \n\r\n",uVar8,"transport",
                     DAT_ram_4ff47e3c);
    FUN_ram_4800fd0e();
    iVar9 = FUN_ram_480106b4(0,DAT_ram_4ff47e3c,0,0x3c,0x50);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff36e1a(iVar9,"./build-p164-v32/p4_overlays/transport_drv.c",0x319,
                       "process_init_event",
                       "send_slave_config(0, chip_type, raw_tp_config, H_WIFI_TX_DATA_THROTTLE_LOW_THRESHOLD, H_WIFI_TX_DATA_THROTTLE_HIGH_THRESHOLD)"
                      );
    }
    uVar8 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: transport_delayed_init\n",uVar8,"transport");
    thunk_FUN_ram_48012fe2();
    FUN_ram_4802196c();
    return;
  }
  uVar8 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: ESP board type is not mentioned, ignoring [%d]\n\r\n",
                   uVar8,"transport",DAT_ram_4ff47e3c);
  DAT_ram_4ff47e3c = 0xff;
  uVar7 = FUN_ram_4ff44d14();
  pcVar4 = "E (%lu) %s: failed to init event\n\r\n";
  uVar8 = 1;
LAB_ram_4801086a:
  FUN_ram_4ff44bf0(uVar8,"transport",pcVar4,uVar7,"transport");
  return;
}



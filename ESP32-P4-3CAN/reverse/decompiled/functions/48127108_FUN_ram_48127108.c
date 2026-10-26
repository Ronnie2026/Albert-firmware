/* Firmware entry: 0x48127108 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_ram_48127108(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******pppppppuVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined1 auStack_dc [4];
  uint uStack_d8;
  uint uStack_d4;
  undefined4 *******local_d0 [3];
  char cStack_c1;
  undefined4 *******local_c0 [3];
  char cStack_b1;
  undefined4 *******local_b0 [3];
  char cStack_a1;
  undefined4 auStack_a0 [5];
  undefined1 uStack_8c;
  int aiStack_88 [5];
  undefined1 uStack_74;
  undefined4 auStack_70 [5];
  undefined1 uStack_5c;
  undefined4 *******local_58 [3];
  char cStack_49;
  undefined1 auStack_3c [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_5c = 0;
  if ((*(int *)(param_2 + 0x14) == 0) && (uStack_e8 = *(uint *)(param_2 + 0x10), uStack_e8 != 0)) {
    uStack_e0 = 0;
    if (*(int *)(param_3 + 0x14) == 0) {
      uStack_e0 = *(uint *)(param_3 + 0x10);
    }
    uStack_e4 = 0;
    if (*(int *)(param_4 + 0x14) == 0) {
      uStack_e4 = *(uint *)(param_4 + 0x10);
    }
    auStack_a0[0] = 0;
    if (*(int *)(param_5 + 0x14) == 0) {
      auStack_a0[0] = *(undefined4 *)(param_5 + 0x10);
    }
    aiStack_88[0] = 0;
    if (*(int *)(param_6 + 0x14) == 0) {
      aiStack_88[0] = *(int *)(param_6 + 0x10);
    }
    if (*(int *)(param_7 + 0x14) != 0) goto LAB_ram_48127144;
    auStack_70[0] = *(undefined4 *)(param_7 + 0x10);
    uVar2 = FUN_ram_4815963c();
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_e4 = 0;
    auStack_a0[0] = 0;
    aiStack_88[0] = 0;
LAB_ram_48127144:
    auStack_70[0] = 0;
    uVar2 = FUN_ram_4815963c();
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  if ((uVar2 & 2) == 0) {
    iVar4 = FUN_ram_48158db8(uVar3);
    if ((iVar4 == 0) || (iVar4 == 0x5005)) {
      if (*(int *)(param_1 + 8) == 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbb;
      }
      else {
        FUN_ram_4ff3fdde(*(int *)(param_1 + 8),0x44);
      }
      iVar4 = FUN_ram_481592c6(*(undefined4 *)(param_1 + 4),&uStack_e8);
      if (iVar4 == 0) {
        FUN_ram_4815933c(*(undefined4 *)(param_1 + 4),0,auStack_a0);
        FUN_ram_4815933c(*(undefined4 *)(param_1 + 4),1,aiStack_88);
        FUN_ram_4815933c(*(undefined4 *)(param_1 + 4),2,auStack_70);
        if (uStack_e8 == 0) {
          iVar4 = FUN_ram_48158e2e(*(undefined4 *)(param_1 + 4));
          return iVar4 == 0 || iVar4 == 0x5004;
        }
        if (*(int *)(param_1 + 8) != 0) {
          FUN_ram_4ff3fe68(*(int *)(param_1 + 8),0x40);
          return true;
        }
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
        return true;
      }
      uVar15 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                              );
      uVar9 = FUN_ram_480018de(iVar4);
      uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
      pcVar6 = "[%6u][E][%s:%u] %s(): ETH IP could not be configured! Error: 0x%04x: %s\r\n";
      uVar3 = 0x210;
    }
    else {
      uVar15 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                              );
      uVar9 = FUN_ram_480018de(iVar4);
      uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
      pcVar6 = "[%6u][E][%s:%u] %s(): DHCP could not be stopped! Error: 0x%04x: %s\r\n";
      uVar3 = 0x207;
    }
    FUN_ram_48027528(pcVar6,uVar7,uVar5,uVar3,"config",iVar4,uVar9);
    return false;
  }
  if (aiStack_88[0] != 0) {
    iVar4 = FUN_ram_4815933c(uVar3,0,aiStack_88);
    if (iVar4 != 0) {
      uVar15 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                              );
      uVar9 = FUN_ram_480018de(iVar4);
      uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
      pcVar6 = "[%6u][E][%s:%u] %s(): Netif Set DNS Info Failed! 0x%04x: %s\r\n";
      uVar3 = 0x19d;
      goto LAB_ram_481275e0;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  iVar4 = FUN_ram_48158f40(uVar3);
  if ((iVar4 != 0) && (iVar4 != 0x5005)) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    uVar9 = FUN_ram_480018de(iVar4);
    uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    pcVar6 = "[%6u][E][%s:%u] %s(): DHCPS Stop Failed! 0x%04x: %s\r\n";
    uVar3 = 0x1a5;
    goto LAB_ram_481275e0;
  }
  iVar4 = FUN_ram_481592c6(*(undefined4 *)(param_1 + 4),&uStack_e8);
  if (iVar4 != 0) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    uVar9 = FUN_ram_480018de(iVar4);
    uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    pcVar6 = "[%6u][E][%s:%u] %s(): Netif Set IP Failed! 0x%04x: %s\r\n";
    uVar3 = 0x1ac;
    goto LAB_ram_481275e0;
  }
  auStack_dc[0] = 1;
  FUN_ram_481218da(auStack_3c,param_4);
  cVar1 = FUN_ram_48126cf0(param_1,auStack_3c);
  if (4 < (byte)(cVar1 - 0x18U)) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    uVar5 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Bad netmask. It must be from /24 to /28 (255.255.255. 0<->240)\r\n"
                     ,uVar5,uVar3,0x1bb,"config");
    return false;
  }
  uVar2 = uStack_e4 >> 0x18 | uStack_e4 << 0x18 | (uStack_e4 & 0xff00) << 8 |
          uStack_e4 >> 8 & 0xff00;
  uVar10 = uStack_e8 >> 0x18 | uStack_e8 << 0x18 | (uStack_e8 & 0xff00) << 8 |
           uStack_e8 >> 8 & 0xff00;
  if (*(int *)(param_5 + 0x14) == 0) {
    uVar14 = *(uint *)(param_5 + 0x10);
    uVar14 = uVar14 >> 0x18 | uVar14 << 0x18 | (uVar14 & 0xff00) << 8 | uVar14 >> 8 & 0xff00;
    if (uVar14 == 0) goto LAB_ram_481271ec;
  }
  else {
LAB_ram_481271ec:
    uVar14 = uVar10 + 1;
  }
  uStack_d4 = uVar14 + 10;
  if (((uVar14 ^ uVar10) & uVar2) != 0) {
    uStack_d8 = uVar14;
    uVar15 = FUN_ram_4ff21a0a();
    uVar3 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    FUN_ram_48121b46(local_b0,param_2,0);
    pppppppuVar11 = local_b0;
    if (-1 < cStack_a1) {
      pppppppuVar11 = local_b0[0];
    }
    FUN_ram_4812181e(auStack_3c,
                     uVar14 >> 8 & 0xff00 | uVar14 >> 0x18 | uVar14 << 0x18 | (uVar14 & 0xff00) << 8
                    );
    FUN_ram_48121b46(local_58,auStack_3c,0);
    pppppppuVar12 = local_58;
    if (-1 < cStack_49) {
      pppppppuVar12 = local_58[0];
    }
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): The AP IP address (%s) and the DHCP start address (%s) must be in the same subnet\r\n"
                     ,uVar3,uVar5,0x1ca,"config",pppppppuVar11,pppppppuVar12);
    FUN_ram_4802a59e(local_58);
    FUN_ram_4802a59e(local_b0);
    return false;
  }
  if (-uVar2 - 0xb <= (~uVar2 & uVar14)) {
    uStack_d4 = uVar14 & uVar2;
    uVar14 = uStack_d4 + 1;
    uStack_d4 = uStack_d4 + 0xb;
  }
  uStack_d8 = uVar14;
  if ((uVar10 < uVar14) || (uStack_d4 < uVar10)) {
    uVar8 = uStack_e0 >> 0x18 | uStack_e0 << 0x18 | (uStack_e0 & 0xff00) << 8 |
            uStack_e0 >> 8 & 0xff00;
    if ((((uVar10 ^ uVar8) & uVar2) != 0) || ((uVar8 < uVar14 || (uStack_d4 < uVar8)))) {
      uStack_d4 = uStack_d4 >> 8 & 0xff00 |
                  uStack_d4 >> 0x18 | uStack_d4 << 0x18 | (uStack_d4 & 0xff00) << 8;
      uStack_d8 = uVar14 >> 0x18 | uVar14 << 0x18 | (uVar14 & 0xff00) << 8 | uVar14 >> 8 & 0xff00;
      iVar4 = FUN_ram_4815966a(*(undefined4 *)(param_1 + 4),1,0x32,auStack_dc,0xc);
      if (iVar4 == 0) {
        if (aiStack_88[0] != 0) {
          auStack_3c[0] = 2;
          iVar4 = FUN_ram_4815966a(*(undefined4 *)(param_1 + 4),1,6,auStack_3c);
          if (iVar4 != 0) {
            uVar15 = FUN_ram_4ff21a0a();
            uVar5 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                                    );
            uVar9 = FUN_ram_480018de(iVar4);
            uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
            pcVar6 = "[%6u][E][%s:%u] %s(): Netif Set DHCP Option Failed! 0x%04x: %s\r\n";
            uVar3 = 0x1f8;
            goto LAB_ram_481275e0;
          }
        }
        iVar4 = FUN_ram_48158eca(*(undefined4 *)(param_1 + 4));
        if (iVar4 == 0) {
          return true;
        }
        uVar15 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                                );
        uVar9 = FUN_ram_480018de(iVar4);
        uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
        pcVar6 = "[%6u][E][%s:%u] %s(): DHCPS Start Failed! 0x%04x: %s\r\n";
        uVar3 = 0x200;
      }
      else {
        uVar15 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                                );
        uVar9 = FUN_ram_480018de(iVar4);
        uVar7 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
        pcVar6 = "[%6u][E][%s:%u] %s(): DHCPS Set Lease Failed! 0x%04x: %s\r\n";
        uVar3 = 0x1ef;
      }
LAB_ram_481275e0:
      FUN_ram_48027528(pcVar6,uVar7,uVar5,uVar3,"config",iVar4,uVar9);
      return false;
    }
    uVar15 = FUN_ram_4ff21a0a();
    uVar3 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    FUN_ram_48121b46(local_d0,param_3,0);
    pppppppuVar11 = local_d0;
    if (-1 < cStack_c1) {
      pppppppuVar11 = local_d0[0];
    }
    FUN_ram_4812181e(local_58,uStack_d8 >> 0x18 | uStack_d8 << 0x18 | (uStack_d8 & 0xff00) << 8 |
                              uStack_d8 >> 8 & 0xff00);
    FUN_ram_48121b46(local_c0,local_58,0);
    pppppppuVar12 = local_c0;
    if (-1 < cStack_b1) {
      pppppppuVar12 = local_c0[0];
    }
    FUN_ram_4812181e(auStack_3c,
                     uStack_d4 >> 0x18 | uStack_d4 << 0x18 | (uStack_d4 & 0xff00) << 8 |
                     uStack_d4 >> 8 & 0xff00);
    FUN_ram_48121b46(local_b0,auStack_3c,0);
    pppppppuVar13 = local_b0;
    if (-1 < cStack_a1) {
      pppppppuVar13 = local_b0[0];
    }
    pcVar6 = 
    "[%6u][E][%s:%u] %s(): The GatewayP address (%s) can\'t be within the DHCP range (%s -- %s)\r\n"
    ;
    uVar9 = 0x1e3;
  }
  else {
    uVar15 = FUN_ram_4ff21a0a();
    uVar3 = __udivdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    FUN_ram_48121b46(local_d0,param_2,0);
    pppppppuVar11 = local_d0;
    if (-1 < cStack_c1) {
      pppppppuVar11 = local_d0[0];
    }
    FUN_ram_4812181e(local_58,uStack_d8 >> 0x18 | uStack_d8 << 0x18 | (uStack_d8 & 0xff00) << 8 |
                              uStack_d8 >> 8 & 0xff00);
    FUN_ram_48121b46(local_c0,local_58,0);
    pppppppuVar12 = local_c0;
    if (-1 < cStack_b1) {
      pppppppuVar12 = local_c0[0];
    }
    FUN_ram_4812181e(auStack_3c,
                     uStack_d4 >> 0x18 | uStack_d4 << 0x18 | (uStack_d4 & 0xff00) << 8 |
                     uStack_d4 >> 8 & 0xff00);
    FUN_ram_48121b46(local_b0,auStack_3c,0);
    pppppppuVar13 = local_b0;
    if (-1 < cStack_a1) {
      pppppppuVar13 = local_b0[0];
    }
    pcVar6 = 
    "[%6u][E][%s:%u] %s(): The AP IP address (%s) can\'t be within the DHCP range (%s -- %s)\r\n";
    uVar9 = 0x1d9;
  }
  FUN_ram_48027528(pcVar6,uVar3,uVar5,uVar9,"config",pppppppuVar11,pppppppuVar12,pppppppuVar13);
  FUN_ram_4802a59e(local_b0);
  FUN_ram_4802a59e(local_c0);
  FUN_ram_4802a59e(local_d0);
  return false;
}



/* Firmware entry: 0x481929ba */

int FUN_ram_481929ba(char *param_1,size_t param_2,int *param_3,int param_4)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x36f,"set_client_config","cfg != NULL");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x370,"set_client_config","tls != NULL");
  }
  if ((char)param_3[0xf] == '\0') {
    pcVar1 = (char *)param_3[0xe];
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strndup(param_1,param_2);
    }
    else {
      __n = strlen(pcVar1);
      pcVar1 = strndup(pcVar1,__n);
    }
    if (pcVar1 == (char *)0x0) {
      return 0x101;
    }
    iVar2 = FUN_ram_4816a51e(param_4,pcVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: mbedtls_ssl_set_hostname returned -0x%04X\n"
                       ,uVar3,"esp-tls-mbedtls",-iVar2);
      FUN_ram_48192182(*(undefined4 *)(param_4 + 0x6e0),2,-iVar2);
      thunk_FUN_ram_4ff209c6(pcVar1);
      return 0x8012;
    }
    thunk_FUN_ram_4ff209c6(pcVar1);
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"esp-tls-mbedtls",
                     "W (%lu) %s: skip_common_name=true: hostname matching and SNI disabled. This disables ALL server-name authentication (CN/SAN/SNI), not just CN. Only intended for loopback / debug clients.\n"
                     ,uVar3,"esp-tls-mbedtls");
    FUN_ram_4816a51e(param_4,0);
  }
  iVar5 = param_4 + 0x2ec;
  iVar2 = FUN_ram_4816ad00(iVar5,0,0,0);
  if (iVar2 != 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                     "E (%lu) %s: mbedtls_ssl_config_defaults returned -0x%04X\n",uVar3,
                     "esp-tls-mbedtls",-iVar2);
    FUN_ram_48192182(*(undefined4 *)(param_4 + 0x6e0),2,-iVar2);
    return 0x8013;
  }
  FUN_ram_4816a654(iVar5,1);
  if ((*param_3 != 0) && (iVar2 = FUN_ram_4816a5e2(iVar5), iVar2 != 0)) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                     "E (%lu) %s: mbedtls_ssl_conf_alpn_protocols returned -0x%04X\n",uVar3,
                     "esp-tls-mbedtls",-iVar2);
    FUN_ram_48192182(*(undefined4 *)(param_4 + 0x6e0),2,-iVar2);
    return 0x8014;
  }
  if (param_3[0x11] == 0) {
    if ((char)param_3[0xd] == '\0') {
      if (param_3[1] == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: No server verification option set in esp_tls_cfg_t structure. Check esp_tls API reference\n"
                         ,uVar3,"esp-tls-mbedtls");
        return 0x8017;
      }
      iVar2 = FUN_ram_48192392(param_4,param_3[1],param_3[2]);
      if (iVar2 != 0) {
        return 0x8015;
      }
      FUN_ram_4816a46e(iVar5,*(undefined4 *)(param_4 + 0x514),0);
    }
    else {
      if (DAT_ram_4ff6e2c0 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: global_cacert is NULL\n",uVar3,
                         "esp-tls-mbedtls");
        return 0x103;
      }
      *(int *)(param_4 + 0x514) = DAT_ram_4ff6e2c0;
      FUN_ram_4816a446(iVar5,2);
      FUN_ram_4816a46e(iVar5,*(undefined4 *)(param_4 + 0x514),0);
    }
  }
  else {
    FUN_ram_4816a446(iVar5,2);
    (*(code *)param_3[0x11])(iVar5);
  }
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                     "E (%lu) %s: Please enable secure element support for ESP-TLS in menuconfig\n",
                     uVar3,"esp-tls-mbedtls");
    return -1;
  }
  if (param_3[0x12] == 0) {
    if ((char)param_3[9] != '\0') {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: Please enable the support for signing using ECDSA peripheral in menuconfig.\n"
                       ,uVar3,"esp-tls-mbedtls");
      return -1;
    }
    iVar2 = param_3[5];
    if (param_3[3] == 0) {
      if (iVar2 != 0) goto LAB_ram_48192cbe;
    }
    else {
      if (iVar2 == 0) {
LAB_ram_48192cbe:
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: You have to provide both clientcert_buf and clientkey_buf for mutual authentication\n"
                         ,uVar3,"esp-tls-mbedtls");
        return 0x103;
      }
      iStack_38 = param_3[4];
      iStack_30 = param_3[6];
      iStack_2c = param_3[7];
      iStack_28 = param_3[8];
      iStack_44 = param_4 + 0x518;
      iStack_40 = param_4 + 0x6b0;
      iStack_24 = 0;
      iStack_3c = param_3[3];
      iStack_34 = iVar2;
      iVar2 = FUN_ram_4819247a(param_4,&iStack_44);
      if (iVar2 != 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: Failed to set client pki context\n",uVar3,
                         "esp-tls-mbedtls");
        return iVar2;
      }
    }
  }
  else {
    if (param_3[3] == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: Client certificate is also required with the DS parameters\n",
                       uVar3,"esp-tls-mbedtls");
      return 0x103;
    }
    FUN_ram_481947c4(param_3[0xc]);
    iStack_3c = param_3[3];
    iStack_38 = param_3[4];
    iStack_24 = param_3[0x12];
    iStack_44 = param_4 + 0x518;
    iStack_40 = param_4 + 0x6b0;
    iStack_34 = 0;
    iStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    iVar2 = FUN_ram_4819247a(param_4,&iStack_44);
    if (iVar2 != 0) {
      uVar3 = FUN_ram_4ff44d14();
      uVar4 = FUN_ram_480018de(iVar2);
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: Failed to set client pki context for the DS peripheral, returned [0x%04X] (%s)\n"
                       ,uVar3,"esp-tls-mbedtls",0,uVar4);
      return iVar2;
    }
  }
  if (((int *)param_3[0x16] != (int *)0x0) && (*(int *)param_3[0x16] != 0)) {
    FUN_ram_4816a462(iVar5);
  }
  return 0;
}



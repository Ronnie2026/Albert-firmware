/* Firmware entry: 0x4819247a */

int FUN_ram_4819247a(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x236,"set_pki_context",&DAT_ram_481e1b34);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x237,"set_pki_context",&DAT_ram_481e20cc);
  }
  if (((param_2[2] == 0) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return 0x102;
  }
  FUN_ram_48189282();
  FUN_ram_48177072(param_2[1]);
  iVar1 = FUN_ram_48189d18(*param_2,param_2[2],param_2[3]);
  if (iVar1 < 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                     "E (%lu) %s: mbedtls_x509_crt_parse of public cert returned -0x%04X\n",uVar3,
                     "esp-tls-mbedtls",-iVar1);
    FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-iVar1);
    return 0x8015;
  }
  if (param_2[8] == 0) {
    if (param_2[4] == 0) {
      return 0x102;
    }
    iVar1 = FUN_ram_48178612(param_2[1],param_2[4],param_2[5],param_2[6],param_2[7],
                             &LAB_ram_48183550,param_1 + 0x2a0);
    if (iVar1 < 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: mbedtls_pk_parse_keyfile returned -0x%04X\n"
                       ,uVar3,"esp-tls-mbedtls",-iVar1);
      FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-iVar1);
      return 0x8019;
    }
LAB_ram_481924fa:
    iVar1 = 0;
    iVar2 = FUN_ram_4816a466(param_1 + 0x2ec,*param_2,param_2[1]);
    if (iVar2 < 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: mbedtls_ssl_conf_own_cert returned -0x%04X\n",uVar3,
                       "esp-tls-mbedtls",-iVar2);
      FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-iVar2);
      iVar1 = 0x8016;
    }
  }
  else {
    iVar1 = FUN_ram_4ff45080(1,0x78);
    if (iVar1 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: Failed to allocate memory for mbedtls_rsa_context\n",uVar3,
                       "esp-tls-mbedtls");
      iVar1 = 0x101;
    }
    else {
      FUN_ram_481791b0();
      iVar2 = FUN_ram_48177130(param_2[1],iVar1,0,FUN_ram_481942b0,&LAB_ram_481946b6);
      if (iVar2 == 0) {
        iVar1 = FUN_ram_481947da(param_2[8]);
        if (iVar1 == 0) goto LAB_ram_481924fa;
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: Failed to initialize DS parameters from nvs\n",uVar3,
                         "esp-tls-mbedtls");
      }
      else {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: Error in mbedtls_pk_setup_rsa_alt, returned -0x%04X\n",uVar3,
                         "esp-tls-mbedtls",-iVar2);
        FUN_ram_4817a954(iVar1);
        thunk_FUN_ram_4ff209c6(iVar1);
        iVar1 = -1;
      }
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: Failed to initialize pk context for esp_ds\n",
                     uVar3,"esp-tls-mbedtls");
  }
  return iVar1;
}



/* Firmware entry: 0x48192e58 */

int FUN_ram_48192e58(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x74,"esp_create_mbedtls_handle","cfg != NULL");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x75,"esp_create_mbedtls_handle","tls != NULL");
  }
  *(undefined4 *)(param_4 + 0x378) = *(undefined4 *)(param_4 + 0x6b8);
  iVar4 = param_4 + 0x2a0;
  FUN_ram_4816a438(param_4);
  FUN_ram_4818329e(iVar4);
  iVar5 = param_4 + 0x2ec;
  FUN_ram_4816acf2(iVar5);
  FUN_ram_48183d90(param_4 + 0xfc);
  iVar1 = FUN_ram_48183302(iVar4,&LAB_ram_48183e22,param_4 + 0xfc,0,0);
  if (iVar1 == 0) {
    FUN_ram_4816a452(iVar5,&LAB_ram_48183550,iVar4);
    if (*(int *)(param_4 + 0x6dc) == 0) {
      iVar1 = FUN_ram_481929ba(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        uVar3 = FUN_ram_480018de(iVar1);
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: Failed to set client configurations, returned [0x%04X] (%s)\n"
                         ,uVar2,"esp-tls-mbedtls",iVar1,uVar3);
        goto LAB_ram_48192f5e;
      }
      iVar1 = *(int *)(param_3 + 0x5c);
      if (iVar1 == 2) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"esp-tls-mbedtls",
                         "W (%lu) %s: TLS 1.3 is not enabled in config, continuing with default TLS protocol\n"
                         ,uVar2,"esp-tls-mbedtls");
      }
      else if (iVar1 == 1) {
        *(undefined4 *)(param_4 + 0x2f0) = 0x303;
        *(undefined4 *)(param_4 + 0x2ec) = 0x303;
      }
      else if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: Unsupported protocol version\n",uVar2,
                         "esp-tls-mbedtls");
        iVar1 = 0x102;
        goto LAB_ram_48192f5e;
      }
    }
    else if (*(int *)(param_4 + 0x6dc) == 1) {
      if (param_5 == (undefined4 *)0x0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x102;
      }
      iVar1 = (*(code *)*param_5)(param_3,param_4);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        uVar3 = FUN_ram_480018de(iVar1);
        FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                         "E (%lu) %s: Failed to set server configurations, returned [0x%04X] (%s)\n"
                         ,uVar2,"esp-tls-mbedtls",iVar1,uVar3);
        goto LAB_ram_48192f5e;
      }
    }
    iVar1 = FUN_ram_4816a9d0(param_4,iVar5);
    if (iVar1 == 0) {
      FUN_ram_4816a458(param_4,param_4 + 0x378,&LAB_ram_4819420a,&LAB_ram_4819418e,0);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: mbedtls_ssl_setup returned -0x%04X\n",uVar2,
                     "esp-tls-mbedtls",-iVar1);
    FUN_ram_48192182(*(undefined4 *)(param_4 + 0x6e0),2,-iVar1);
    iVar1 = 0x8017;
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: mbedtls_ctr_drbg_seed returned -0x%04X\n",
                     uVar2,"esp-tls-mbedtls",-iVar1);
    FUN_ram_48192182(*(undefined4 *)(param_4 + 0x6e0),2,-iVar1);
    iVar1 = 0x8011;
  }
LAB_ram_48192f5e:
  FUN_ram_481928a4(param_4);
  return iVar1;
}



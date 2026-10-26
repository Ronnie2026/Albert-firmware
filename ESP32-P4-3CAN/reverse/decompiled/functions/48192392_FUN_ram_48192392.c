/* Firmware entry: 0x48192392 */

undefined4 FUN_ram_48192392(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x514) = param_1 + 0x37c;
    FUN_ram_48189282();
    iVar1 = FUN_ram_48189d18(*(undefined4 *)(param_1 + 0x514),param_2,param_3);
    if (iVar1 < 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-tls-mbedtls",
                       "E (%lu) %s: mbedtls_x509_crt_parse of CA cert returned -0x%04X\n",uVar2,
                       "esp-tls-mbedtls",-iVar1);
      FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-iVar1);
      uVar2 = 0x8015;
    }
    else {
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"esp-tls-mbedtls",
                         "W (%lu) %s: mbedtls_x509_crt_parse was partly successful. No. of failed certificates: %d\n"
                         ,uVar2,"esp-tls-mbedtls",iVar1);
      }
      FUN_ram_4816a446(param_1 + 0x2ec,2);
      FUN_ram_4816a46e(param_1 + 0x2ec,*(undefined4 *)(param_1 + 0x514),0);
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_tls_mbedtls.c",0x220,"set_ca_cert",&DAT_ram_481e1b34);
}



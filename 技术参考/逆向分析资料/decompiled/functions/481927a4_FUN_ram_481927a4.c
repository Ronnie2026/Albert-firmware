/* Firmware entry: 0x481927a4 */

undefined4 FUN_ram_481927a4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4816a7ec();
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x6c4) = 4;
    FUN_ram_4819474a();
    return 1;
  }
  if ((uVar1 & 0xffffff7f) != 0xffff9700) {
    uVar2 = FUN_ram_4ff44d14(0);
    FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: mbedtls_ssl_handshake returned -0x%04X\n",
                     uVar2,"esp-tls-mbedtls",-uVar1);
    FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),2,-uVar1);
    FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),4,0x801a);
    if ((((*(int *)(param_2 + 0x44) != 0) || (*(int *)(param_2 + 4) != 0)) ||
        (*(char *)(param_2 + 0x34) != '\0')) && (iVar3 = FUN_ram_4816a72e(param_1), iVar3 != 0)) {
      FUN_ram_48192728(param_1);
    }
    *(undefined4 *)(param_1 + 0x6c4) = 3;
    return 0xffffffff;
  }
  return 0;
}



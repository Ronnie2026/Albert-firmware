/* Firmware entry: 0x48192728 */

void FUN_ram_48192728(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4816a65a();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp-tls-mbedtls","I (%lu) %s: Failed to verify peer certificate!\n",uVar2,
                     "esp-tls-mbedtls");
    FUN_ram_48192182(*(undefined4 *)(param_1 + 0x6e0),3,iVar1);
    return;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"esp-tls-mbedtls","I (%lu) %s: Certificate verified.\n",uVar2,"esp-tls-mbedtls"
                  );
  return;
}



/* Firmware entry: 0x4819286a */

undefined4 FUN_ram_4819286a(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    uVar1 = FUN_ram_481710dc();
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp-tls-mbedtls","E (%lu) %s: empty arg passed to esp_tls_get_bytes_avail()\n"
                   ,uVar1,"esp-tls-mbedtls");
  return 0xffffffff;
}



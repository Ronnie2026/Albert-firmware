/* Firmware entry: 0x4812c9a2 */

undefined4 FUN_ram_4812c9a2(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                   "E (%lu) %s: Cert bundle certificates exceed max allowed certificates\n",uVar1,
                   "esp-x509-crt-bundle");
  return 0;
}



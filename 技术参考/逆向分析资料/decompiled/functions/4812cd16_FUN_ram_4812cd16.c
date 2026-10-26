/* Firmware entry: 0x4812cd16 */

undefined4 FUN_ram_4812cd16(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e090 == (undefined *)0x0) {
    iVar1 = FUN_ram_4812c944(&DAT_ram_482245a4,0x10d77);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle","E (%lu) %s: Failed to attach bundle\n",uVar2,
                       "esp-x509-crt-bundle");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x102;
    }
    DAT_ram_4ff6e090 = &DAT_ram_482245a4;
  }
  if (param_1 != 0) {
    FUN_ram_4816a46e(param_1,&DAT_ram_4822440c,0);
    FUN_ram_4816a44c(param_1,&LAB_ram_4812c9d6,0);
  }
  return 0;
}



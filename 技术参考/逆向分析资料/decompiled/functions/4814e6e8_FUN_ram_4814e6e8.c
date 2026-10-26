/* Firmware entry: 0x4814e6e8 */

void FUN_ram_4814e6e8(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e244 == 0) {
    DAT_ram_4ff6e244 = FUN_ram_4ff3b144(1);
    if (DAT_ram_4ff6e244 == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"lwip_arch","E (%lu) %s: sys_init: failed to init lwip protect mutex\n",
                       uVar1,"lwip_arch");
    }
  }
  FUN_ram_48006808(&DAT_ram_4ff6e240,&LAB_ram_4814e29a);
  FUN_ram_4814eb5c();
  return;
}



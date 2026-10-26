/* Firmware entry: 0x48164d12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48164d12(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4ba18 != 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"sdmmc_periph",
                     "I (%lu) %s: %s: SDMMC host already initialized, skipping init flow\n",uVar3,
                     "sdmmc_periph","sdmmc_host_init");
    return 0;
  }
  FUN_ram_4ff3122a();
  _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x4000;
  _DAT_ram_5011104c = _DAT_ram_5011104c & 0xefffffff;
  FUN_ram_4ff31240();
  FUN_ram_4818aca6(&DAT_ram_4ff4ba24);
  FUN_ram_48163c20(10,2);
  iVar2 = FUN_ram_48164206();
  puVar1 = DAT_ram_4ff4ba24;
  if (iVar2 != 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_periph","E (%lu) %s: %s: sdmmc_host_reset returned 0x%x\n",uVar3,
                     "sdmmc_periph","sdmmc_host_init",0x107);
    return 0x107;
  }
  DAT_ram_4ff4ba24[0x11] = 0xffffffff;
  puVar1[9] = 0;
  *puVar1 = *puVar1 & 0xffffffef;
  DAT_ram_4ff4ba1c = FUN_ram_4ff3add0(0x20,8,0);
  if (DAT_ram_4ff4ba1c != 0) {
    DAT_ram_4ff4ba20 = FUN_ram_4ff3add0(1,0,3);
    if (DAT_ram_4ff4ba20 != 0) {
      iVar2 = FUN_ram_4800340c(0x17,0,&DAT_ram_48163998,DAT_ram_4ff4ba1c,&DAT_ram_4ff4ba18);
      puVar1 = DAT_ram_4ff4ba24;
      if (iVar2 != 0) {
        FUN_ram_4ff3ba8e(DAT_ram_4ff4ba1c);
        DAT_ram_4ff4ba1c = 0;
        FUN_ram_4ff3ba8e(DAT_ram_4ff4ba20);
        DAT_ram_4ff4ba20 = 0;
        return iVar2;
      }
      DAT_ram_4ff4ba24[9] = 0;
      puVar1[9] = puVar1[9] | 0xb7cf;
      *puVar1 = *puVar1 | 0x10;
      puVar1[0x40] = puVar1[0x40] & 0xfffffffd;
      *puVar1 = *puVar1 | 0x20;
      puVar1[0x20] = 0;
      puVar1[0x20] = puVar1[0x20] | 1;
      puVar1[0x24] = puVar1[0x24] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 2;
      puVar1[0x24] = puVar1[0x24] | 1;
      iVar2 = FUN_ram_481631f4();
      if (iVar2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      FUN_ram_4ff3ba8e(DAT_ram_4ff4ba1c);
      DAT_ram_4ff4ba1c = 0;
      FUN_ram_4ff3ba8e(DAT_ram_4ff4ba20);
      DAT_ram_4ff4ba20 = 0;
      FUN_ram_48003514(DAT_ram_4ff4ba18);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      DAT_ram_4ff4ba18 = 0;
      return iVar2;
    }
    FUN_ram_4ff3ba8e(DAT_ram_4ff4ba1c);
    DAT_ram_4ff4ba1c = 0;
  }
  return 0x101;
}



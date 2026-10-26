/* Firmware entry: 0x4801c150 */

int FUN_ram_4801c150(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db9c == 0) {
    DAT_ram_4ff6db9c = FUN_ram_48011624("/dev/esps0");
    if (DAT_ram_4ff6db9c == 0) {
      FUN_ram_4819ac1a("serial interface open failed, Is the driver loaded?");
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -1;
    }
    iVar1 = FUN_ram_48011aa4();
    if (iVar1 != 0) {
      FUN_ram_4819ac1a("Platform init failed");
      iVar2 = FUN_ram_48011a1c(&DAT_ram_4ff6db9c);
      if (iVar2 != 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Failed to close driver interface\n\n",uVar3,
                         "serial_if");
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar1;
      }
      DAT_ram_4ff6db9c = 0;
      return iVar1;
    }
  }
  else {
    FUN_ram_4819ac1a("Already opened returned");
  }
  return 0;
}



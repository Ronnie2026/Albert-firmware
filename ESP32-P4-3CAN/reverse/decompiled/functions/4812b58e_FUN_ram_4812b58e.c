/* Firmware entry: 0x4812b58e */

int FUN_ram_4812b58e(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4b988 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                     "gpio_install_isr_service",0x216,"GPIO isr service already installed");
    return 0x103;
  }
  if ((param_1 & 0x400) == 0) {
    iVar1 = FUN_ram_4ff2091a(0x37,8);
  }
  else {
    iVar1 = FUN_ram_4ff2091a(0x37,8,0x800);
  }
  if (iVar1 == 0) {
    iVar1 = 0x101;
  }
  else {
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
    if (DAT_ram_4ff4b988 != 0) {
      FUN_ram_4ff3ee10();
      thunk_FUN_ram_4ff209c6(iVar1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x103;
    }
    DAT_ram_4ff4b988 = iVar1;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
    iVar1 = FUN_ram_4812b472(FUN_ram_4ff2bd72,0,param_1,&DAT_ram_4ff4b98c);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_ram_4812b406();
  }
  return iVar1;
}



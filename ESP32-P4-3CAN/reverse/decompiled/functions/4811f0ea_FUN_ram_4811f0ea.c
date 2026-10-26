/* Firmware entry: 0x4811f0ea */

void FUN_ram_4811f0ea(void)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_1c = 1000000;
  uStack_24 = 0x12;
  uStack_20 = 1;
  iVar1 = FUN_ram_481a3300(&uStack_24,&uStack_28);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_481a3876(uStack_28);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4ff2d6ec(uStack_28);
      if (iVar1 == 0) {
        FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
        DAT_ram_4ff6b770 = 0;
        DAT_ram_4ff6dff0 = uStack_28;
        fence();
        DAT_ram_4ff6b774 = 1;
        goto LAB_ram_4811f12e;
      }
      FUN_ram_481a39bc(uStack_28);
    }
    FUN_ram_481a36d4(uStack_28);
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
  DAT_ram_4ff6b770 = iVar1;
LAB_ram_4811f12e:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  return;
}



/* Firmware entry: 0x48160c2a */

int FUN_ram_48160c2a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(uint *)(param_1 + 0xbc) < 0x6591) {
LAB_ram_48160c3e:
    iVar1 = 0;
  }
  else {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_48 = 0x3b90101;
    uStack_24 = 0x3d00;
    uStack_4c = 6;
    iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
    if (iVar1 == 0) {
      if ((uStack_44 & 0x80) == 0) goto LAB_ram_48160c3e;
      iVar1 = 0x108;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: mmc_switch EXT_CSD_HS_TIMING_HS error 0x%x\n",
                     uVar2,"sdmmc_mmc","sdmmc_mmc_enable_hs_mode",iVar1);
  }
  return iVar1;
}



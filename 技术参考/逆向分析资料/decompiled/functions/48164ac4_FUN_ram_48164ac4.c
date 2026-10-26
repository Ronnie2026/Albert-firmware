/* Firmware entry: 0x48164ac4 */

int FUN_ram_48164ac4(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint auStack_30 [2];
  uint uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = 0x102;
  if (param_1 < 2) {
    uVar6 = 1 << (param_1 & 0x1f) & 0xff;
    *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
         *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffffffc |
         *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 3 & ~uVar6;
    iVar3 = FUN_ram_48164a50(param_1,0);
    if (iVar3 != 0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_periph","E (%lu) %s: disabling clk failed\n",uVar4,"sdmmc_periph");
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sdmmc_periph",
                       "E (%lu) %s: %s: sdmmc_host_clock_update_command returned 0x%x\n",uVar4,
                       "sdmmc_periph","sdmmc_host_set_card_clk",iVar3);
      return iVar3;
    }
    uStack_34 = 0;
    auStack_30[0] = 0;
    FUN_ram_481642d2(param_2,&uStack_34,auStack_30,&uStack_38);
    uVar2 = auStack_30[0];
    uVar4 = uStack_34;
    FUN_ram_48163af0(uStack_38,uStack_34,auStack_30[0]);
    iVar3 = DAT_ram_4ff4ba24;
    if (param_1 == 0) {
      *(uint *)(DAT_ram_4ff4ba24 + 0xc) = *(uint *)(DAT_ram_4ff4ba24 + 0xc) & 0xfffffffc;
      uStack_28 = *(uint *)(iVar3 + 8) & 0xffffff00 | uVar2 & 0xff;
      *(uint *)(iVar3 + 8) = uStack_28;
    }
    else {
      *(uint *)(DAT_ram_4ff4ba24 + 0xc) = *(uint *)(DAT_ram_4ff4ba24 + 0xc) & 0xfffffff3 | 4;
      uStack_24 = *(uint *)(iVar3 + 8) & 0xffff00ff | (uVar2 & 0xff) << 8;
      *(uint *)(iVar3 + 8) = uStack_24;
    }
    FUN_ram_48163c20(uStack_38,uVar4);
    iVar3 = FUN_ram_48164a50(param_1,0);
    iVar1 = DAT_ram_4ff4ba24;
    if (iVar3 == 0) {
      *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
           *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffffffc |
           (uVar6 | *(uint *)(DAT_ram_4ff4ba24 + 0x10)) & 3;
      *(uint *)(iVar1 + 0x10) =
           *(uint *)(iVar1 + 0x10) & 0xfffcffff |
           ((uVar6 | *(uint *)(iVar1 + 0x10) >> 0x10) & 3) << 0x10;
      iVar3 = FUN_ram_48164a50(param_1,0);
      iVar1 = DAT_ram_4ff4ba24;
      if (iVar3 == 0) {
        uVar6 = param_2 * 100;
        if (0xffffff < uVar6) {
          uVar6 = 0xffffff;
        }
        *(uint *)(DAT_ram_4ff4ba24 + 0x14) = uVar6 << 8 | *(uint *)(DAT_ram_4ff4ba24 + 0x14) & 0xff;
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0xff;
        *(int *)(&DAT_ram_4ff4ba6c + param_1 * 0x48) = param_2;
        (&DAT_ram_4ff4ba68)[param_1 * 0x12] = uVar4;
        return 0;
      }
      uVar4 = FUN_ram_4ff44d14();
      pcVar5 = "E (%lu) %s: re-enabling clk failed\n";
    }
    else {
      uVar4 = FUN_ram_4ff44d14();
      pcVar5 = "E (%lu) %s: setting clk div failed\n";
    }
    FUN_ram_4ff44bf0(1,"sdmmc_periph",pcVar5,uVar4,"sdmmc_periph");
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_periph",
                     "E (%lu) %s: %s: sdmmc_host_clock_update_command returned 0x%x\n",uVar4,
                     "sdmmc_periph","sdmmc_host_set_card_clk",iVar3);
  }
  return iVar3;
}



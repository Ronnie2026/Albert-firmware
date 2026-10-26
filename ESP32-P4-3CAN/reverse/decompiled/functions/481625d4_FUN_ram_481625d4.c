/* Firmware entry: 0x481625d4 */

int FUN_ram_481625d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff2091a(1,0x40,8);
  if (iVar1 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar3,"sdmmc_sd",
                     "sdmmc_init_sd_ssr",0x101);
    return 0x101;
  }
  uStack_2c = FUN_ram_480020d8();
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_4c = 0xd;
  uStack_24 = 0x1c50;
  uStack_30 = 0x40;
  uStack_28 = 0x40;
  iStack_34 = iVar1;
  iVar2 = FUN_ram_48162756(param_1,&uStack_4c);
  if (iVar2 == 0) {
    FUN_ram_48162526(iVar1,param_1 + 0xac);
    thunk_FUN_ram_4ff209c6(iVar1);
    return 0;
  }
  thunk_FUN_ram_4ff209c6(iVar1);
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: sdmmc_send_cmd returned 0x%x\n",uVar3,"sdmmc_sd",
                   "sdmmc_init_sd_ssr",iVar2);
  return iVar2;
}



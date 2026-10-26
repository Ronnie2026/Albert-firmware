/* Firmware entry: 0x48162edc */

int FUN_ram_48162edc(undefined4 param_1,undefined4 param_2)

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
  iVar1 = FUN_ram_4ff206d8(8);
  if (iVar1 != 0) {
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
    uStack_4c = 0x33;
    uStack_24 = 0x1c50;
    uStack_30 = 8;
    uStack_28 = 8;
    iStack_34 = iVar1;
    iVar2 = FUN_ram_48162756(param_1,&uStack_4c);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_481624ce(iVar1,param_2);
    }
    thunk_FUN_ram_4ff209c6(iVar1);
    return iVar2;
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_cmd","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar3,"sdmmc_cmd",
                   "sdmmc_send_cmd_send_scr",0x101);
  return 0x101;
}



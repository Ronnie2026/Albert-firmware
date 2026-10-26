/* Firmware entry: 0x48161fe2 */

int FUN_ram_48161fe2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  undefined1 *puStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_48 = 0;
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
  uStack_24 = 0x1c00;
  puStack_18 = &LAB_ram_4816133e;
  uStack_4c = 0xb;
  iStack_14 = param_1;
  iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: send_cmd returned 0x%x\n",uVar2,"sdmmc_sd",
                     "sdmmc_init_sd_uhs1",iVar1);
  }
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x200;
  return iVar1;
}



/* Firmware entry: 0x48160e56 */

void FUN_ram_48160e56(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
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
  if (param_2 + 0xb0100000U < 0xc0000) {
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_24 = 0x1c50;
    uStack_4c = 8;
    iStack_34 = param_2;
    uStack_30 = param_3;
    uStack_2c = param_4;
    uStack_28 = param_3;
    FUN_ram_4816272a(param_1,&uStack_4c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_mmc.c",0xd3,"sdmmc_mmc_send_ext_csd_data","esp_ptr_dma_capable(out_data)")
  ;
}



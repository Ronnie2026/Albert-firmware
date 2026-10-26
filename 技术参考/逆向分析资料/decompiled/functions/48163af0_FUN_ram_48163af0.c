/* Firmware entry: 0x48163af0 */

uint FUN_ram_48163af0(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_14[0] = 0;
  iVar1 = FUN_ram_481a4bb6(param_1,0,auStack_14);
  if (iVar1 == 0) {
    auStack_14[0] = auStack_14[0] / param_2;
    if (param_3 != 0) {
      auStack_14[0] = auStack_14[0] / (uint)(param_3 << 1);
    }
    return auStack_14[0] / 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_host.c",0x121,"sdmmc_host_calc_freq","ret == ESP_OK");
}



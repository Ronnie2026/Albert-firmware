/* Firmware entry: 0x48164a50 */

int FUN_ram_48164a50(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4816473e(param_1,(param_1 & 0x1f | 0x20 | (param_2 & 1) << 0xc) << 0x10 | 0x2000,0
                          );
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_periph","E (%lu) %s: %s(%d): sdmmc_host_start_command returned 0x%x\n",
                   uVar2,"sdmmc_periph","sdmmc_host_clock_update_command",0xd7,iVar1);
  return iVar1;
}



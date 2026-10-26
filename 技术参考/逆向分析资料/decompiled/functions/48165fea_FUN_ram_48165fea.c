/* Firmware entry: 0x48165fea */

bool FUN_ram_48165fea(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return true;
  }
  if (param_3 == 0) {
    return true;
  }
  auStack_14[0] = 0;
  iVar1 = thunk_FUN_ram_4ff21be8(param_2);
  iVar1 = FUN_ram_4ff33c7c(iVar1 << 10,auStack_14);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_host.c",0x519,"sdmmc_host_check_buffer_alignment","ret == ESP_OK");
  }
  if (auStack_14[0] == 0) {
    auStack_14[0] = 4;
    param_2 = param_2 % 4;
  }
  else {
    param_2 = param_2 % auStack_14[0];
  }
  if (param_2 == 0) {
    return param_3 % auStack_14[0] == 0;
  }
  return false;
}



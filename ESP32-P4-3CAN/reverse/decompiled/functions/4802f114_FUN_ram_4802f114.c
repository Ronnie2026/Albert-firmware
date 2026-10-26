/* Firmware entry: 0x4802f114 */

void FUN_ram_4802f114(undefined4 param_1,undefined4 param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022();
  if (param_3 != 0) {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    return;
  }
  FUN_ram_4802af2c(param_1,"false");
  return;
}



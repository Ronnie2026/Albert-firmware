/* Firmware entry: 0x4813956e */

undefined4 FUN_ram_4813956e(uint param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x12) {
    uVar1 = FUN_ram_48139476((&PTR_DAT_ram_482367dc_ram_48236750)[param_1]);
    return uVar1;
  }
  return 0;
}



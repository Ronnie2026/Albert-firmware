/* Firmware entry: 0x4817f8a8 */

void FUN_ram_4817f8a8(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4)

{
  uint uStack_18;
  void *pvStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = param_4;
  pvStack_14 = param_3;
  memset(param_3,0,0x10);
  FUN_ram_4817f6a0(param_1,param_2,0xff,param_4 & 0xff,0,0,FUN_ram_4817f27e,&uStack_18);
  return;
}



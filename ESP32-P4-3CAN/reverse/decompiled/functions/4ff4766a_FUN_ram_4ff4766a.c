/* Firmware entry: 0x4ff4766a */

void FUN_ram_4ff4766a(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_20 = (undefined1 *)&local_30;
  uStack_2c = 0x10000;
  pcVar1 = *(code **)(*(int *)*param_1 + 4);
  local_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  uStack_18 = 0x35;
  (*pcVar1)((int *)*param_1,&uStack_2c,param_3,0x35,pcVar1);
  *param_2 = local_30;
  return;
}



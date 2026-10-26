/* Firmware entry: 0x4ff476a6 */

void FUN_ram_4ff476a6(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_24 = (undefined1 *)&local_30;
  uStack_2c = 0x100;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  uStack_18 = 0x31;
  local_30 = param_2;
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,&uStack_2c);
  return;
}



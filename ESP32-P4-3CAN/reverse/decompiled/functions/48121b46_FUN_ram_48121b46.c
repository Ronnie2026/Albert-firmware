/* Firmware entry: 0x48121b46 */

undefined4 FUN_ram_48121b46(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_40 = (undefined **)&DAT_ram_481f5090;
  uStack_38 = 1000;
  uStack_3c = 0;
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481df390);
  local_40 = &PTR_LAB_ram_48121eb2_ram_48223ec0;
  FUN_ram_48121916(param_2,&local_40,param_3);
  FUN_ram_4802a8ec(param_1,auStack_30);
  local_40 = &PTR_LAB_ram_48121eb2_ram_48223ec0;
  FUN_ram_4802a59e(auStack_30);
  return param_1;
}



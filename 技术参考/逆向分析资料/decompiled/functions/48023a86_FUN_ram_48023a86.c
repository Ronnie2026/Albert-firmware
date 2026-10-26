/* Firmware entry: 0x48023a86 */

undefined4 FUN_ram_48023a86(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if ((int)(param_2 - 0x20) < 0) {
    local_30 = 1 << (param_2 & 0x1f);
    iStack_2c = 0;
  }
  else {
    iStack_2c = 1 << (param_2 - 0x20 & 0x1f);
    local_30 = 0;
  }
  uStack_28 = param_3;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"os_wrapper_esp","I (%lu) %s: GPIO [%d] configured\n",uVar1,"os_wrapper_esp",
                   param_2);
  FUN_ram_4812ad88(&local_30);
  return 0;
}



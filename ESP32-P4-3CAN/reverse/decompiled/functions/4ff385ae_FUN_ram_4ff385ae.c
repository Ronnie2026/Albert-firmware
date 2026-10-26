/* Firmware entry: 0x4ff385ae */

void FUN_ram_4ff385ae(undefined4 param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44cee();
  ets_printf(s_I___lu___s__Restoring_stack___0x_ram_4ff559fc,uVar1,
             s_Pesp_core_dump_common_ram_4ff5831b + 1,param_1);
  return;
}



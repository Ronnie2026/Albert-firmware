/* Firmware entry: 0x4ff3857e */

void FUN_ram_4ff3857e(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44cee();
  ets_printf(s_I___lu___s__Backing_up_stack___0_ram_4ff559b8,uVar1,
             s_Pesp_core_dump_common_ram_4ff5831b + 1,param_1,auStack_10);
  return;
}



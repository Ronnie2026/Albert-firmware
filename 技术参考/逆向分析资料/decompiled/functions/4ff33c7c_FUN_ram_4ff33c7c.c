/* Firmware entry: 0x4ff33c7c */

undefined4 FUN_ram_4ff33c7c(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_ram_4ff40f0c(((param_1 & 0x400) != 0) + '\x01',0);
    *param_2 = uVar1;
    return 0;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_cache_ram_4ff56c90,s_E___lu___s___s__d___null_pointer_ram_4ff56c98,uVar1,
                   s_cache_ram_4ff56c90,s_esp_cache_get_alignment_ram_4ff53dd4,0x119);
  return 0x102;
}



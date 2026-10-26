/* Firmware entry: 0x48030de0 */

undefined8 FUN_ram_48030de0(uint param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 <= param_1) {
    uVar1 = param_1 - param_3;
    if (param_4 < param_1 - param_3) {
      uVar1 = param_4;
    }
    return CONCAT44(param_2 + param_3,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)","basic_string_view::substr",
                   param_3,param_1);
}



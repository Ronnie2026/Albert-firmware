/* Firmware entry: 0x4ff36d54 */

void FUN_ram_4ff36d54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ets_printf(s__s_failed__esp_err_t_0x_x_ram_4ff540a0,param_1,param_2);
  uVar1 = FUN_ram_480018de(param_2);
  ets_printf(s___s__ram_4ff540bc,uVar1);
  ets_printf(s_at_0x_08x_ram_4ff540c4,param_7 + -4);
  iVar2 = FUN_ram_4ff2c6b0();
  if (iVar2 == 0) {
    return;
  }
  ets_printf(s_file____s__line__d_func___s_expr_ram_4ff540d0,param_3,param_4,param_5,param_6);
  return;
}



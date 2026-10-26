/* Firmware entry: 0x4ff32230 */

/* WARNING: Removing unreachable block (ram,0x4ff3246a) */
/* WARNING: Removing unreachable block (ram,0x4ff32492) */
/* WARNING: Removing unreachable block (ram,0x4ff32422) */
/* WARNING: Removing unreachable block (ram,0x4ff32442) */
/* WARNING: Removing unreachable block (ram,0x4ff322c8) */
/* WARNING: Removing unreachable block (ram,0x4ff322e8) */
/* WARNING: Removing unreachable block (ram,0x4ff322f0) */
/* WARNING: Removing unreachable block (ram,0x4ff322f8) */
/* WARNING: Removing unreachable block (ram,0x4ff32300) */
/* WARNING: Removing unreachable block (ram,0x4ff32304) */
/* WARNING: Removing unreachable block (ram,0x4ff32362) */
/* WARNING: Removing unreachable block (ram,0x4ff322a8) */
/* WARNING: Removing unreachable block (ram,0x4ff322c0) */
/* WARNING: Removing unreachable block (ram,0x4ff3244a) */
/* WARNING: Removing unreachable block (ram,0x4ff32462) */
/* WARNING: Removing unreachable block (ram,0x4ff3249a) */
/* WARNING: Removing unreachable block (ram,0x4ff3236a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32230(uint param_1,int *param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 200) && (param_1 != 400)) && (param_1 != 100)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  uVar1 = ets_get_cpu_frequency();
  if (uVar1 <= param_1) {
    do {
    } while( true );
  }
  if (*param_2 - 1U < 0xff) {
    if (0xff < (uint)param_2[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff54eac,0x247,
                       s_clk_ll_cpu_set_divider_ram_4ff53dbc,
                       s_numerator_<__HP_SYS_CLKRST_REG_C_ram_4ff54f28);
    }
    if (0xff < (uint)param_2[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff54eac,0x248,
                       s_clk_ll_cpu_set_divider_ram_4ff53dbc,
                       s_denominator_<__HP_SYS_CLKRST_REG_ram_4ff54f60);
    }
    do {
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff54eac,0x246,
                   s_clk_ll_cpu_set_divider_ram_4ff53dbc,
                   s_integer_>__1____integer_<__HP_SY_ram_4ff54e6c);
}



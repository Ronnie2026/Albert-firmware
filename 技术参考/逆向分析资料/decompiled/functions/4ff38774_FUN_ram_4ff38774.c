/* Firmware entry: 0x4ff38774 */

void FUN_ram_4ff38774(int param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 != 0) {
      ets_printf(&DAT_ram_4ff56a10,param_1);
    }
    ets_printf(s___08lx__ram_4ff56a14,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff569dc + 0x21,0x19,
                   s_core_dump_crc_print_ram_4ff58334,s_checksum______void___0__ram_4ff569c4);
}



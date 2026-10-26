/* Firmware entry: 0x4ff3869c */

int FUN_ram_4ff3869c(uint param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff55a3c + 0x21,0x12d,
                     s_esp_core_dump_get_user_ram_info_ram_4ff582d4,
                     s_start______void___0__ram_4ff55a24);
  }
  if (param_1 < 5) {
    puVar2 = (&PTR_PTR_ram_4ff582f4)[param_1 * 2];
    puVar1 = (&PTR_PTR_ram_4ff582f8)[param_1 * 2];
    *param_2 = puVar2;
    return (int)puVar1 - (int)puVar2;
  }
  return -1;
}



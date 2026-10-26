/* Firmware entry: 0x4ff3a6ea */

int FUN_ram_4ff3a6ea(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = *(undefined **)(param_1 + 4);
  puVar4 = *(undefined **)(param_1 + 8);
  puVar3 = puVar2;
  if (puVar4 <= puVar2) {
    puVar3 = puVar4;
  }
  if (puVar4 < puVar2) {
    puVar4 = puVar2;
  }
  iVar1 = (int)puVar4 - (int)puVar3;
  if ((param_3 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = puVar3;
    if (puVar3 + -0x20000000 < (undefined *)0x10000000) {
      puVar3 = &DAT_ram_4ff48460;
    }
    *param_3 = puVar3;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_espcoredump_src_ram_4ff56a90 + 0x2c,0x107,
                   s_esp_core_dump_get_stack_ram_4ff58558,
                   s_stk_paddr______void___0_____stk__ram_4ff56a58);
}



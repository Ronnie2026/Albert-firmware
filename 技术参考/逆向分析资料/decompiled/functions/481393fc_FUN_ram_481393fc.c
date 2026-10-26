/* Firmware entry: 0x481393fc */

void FUN_ram_481393fc(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/mem.c",0xe6,"mem_free","rmem != NULL");
  }
  if (param_1 == (param_1 + 3 & 0xfffffffc)) {
    thunk_FUN_ram_4ff209c6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/mem.c",0xe7,"mem_free",
                   "rmem == MEM_ALIGN(rmem)");
}



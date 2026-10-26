/* Firmware entry: 0x4ff2c2a4 */

void FUN_ram_4ff2c2a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  thunk_FUN_ram_4ff2c4d6();
  if (param_1 + 0xc0000000U < 0x4000000) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
    if (0x3ffffff < param_1 + 0xb8000000U) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/mmu_ll.h",0x52,
                       "mmu_ll_vaddr_to_target","false");
    }
  }
  uVar1 = FUN_ram_4ff41722(uVar1);
  FUN_ram_4ff41406(uVar1,param_1,param_2);
  thunk_FUN_ram_4ff2c5d2();
  return;
}



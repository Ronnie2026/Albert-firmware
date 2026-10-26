/* Firmware entry: 0x4819ddc8 */

void FUN_ram_4819ddc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4819da72(param_1,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                     ,0x145,0,"Balloc succeeded");
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}



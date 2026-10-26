/* Firmware entry: 0x4819db24 */

void FUN_ram_4819db24(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4ff2070c(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                       ,0x8f,0,"REENT malloc succeeded");
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + param_2[1] * 4);
    *param_2 = *piVar2;
    *piVar2 = (int)param_2;
  }
  return;
}



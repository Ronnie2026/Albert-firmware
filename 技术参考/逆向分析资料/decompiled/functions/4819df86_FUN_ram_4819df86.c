/* Firmware entry: 0x4819df86 */

undefined4 FUN_ram_4819df86(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 & 3) != 0) {
    param_2 = FUN_ram_4819db8c(param_1,param_2,
                               *(undefined4 *)(&DAT_ram_4823b678 + ((param_3 & 3) - 1) * 4),0);
  }
  param_3 = (int)param_3 >> 2;
  if (param_3 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x24);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)thunk_FUN_ram_4ff2070c(0x10);
      *(undefined4 **)(param_1 + 0x24) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                         ,0x1b3,0,"REENT malloc succeeded");
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
    }
    puVar1 = (undefined4 *)puVar4[2];
    if ((undefined4 *)puVar4[2] == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_ram_4819ddc8(param_1,0x271);
      puVar4[2] = puVar1;
      *puVar1 = 0;
    }
    do {
      puVar4 = puVar1;
      uVar3 = param_3 & 1;
      param_3 = (int)param_3 >> 1;
      uVar2 = param_2;
      if (uVar3 != 0) {
        uVar2 = FUN_ram_4819de04(param_1,param_2,puVar4);
        FUN_ram_4819db24(param_1,param_2);
        if (param_3 == 0) {
          return uVar2;
        }
      }
      param_2 = uVar2;
      puVar1 = (undefined4 *)*puVar4;
      if ((undefined4 *)*puVar4 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_ram_4819de04(param_1,puVar4,puVar4);
        *puVar4 = puVar1;
        *puVar1 = 0;
      }
    } while( true );
  }
  return param_2;
}



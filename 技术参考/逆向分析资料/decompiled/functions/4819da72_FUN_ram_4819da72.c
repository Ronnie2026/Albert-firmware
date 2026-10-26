/* Firmware entry: 0x4819da72 */

int * FUN_ram_4819da72(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4ff2070c(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                       ,0x6b,0,"REENT malloc succeeded");
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  iVar4 = puVar1[3];
  if (iVar4 == 0) {
    uVar2 = FUN_ram_4ff450d6(param_1,4,0x21);
    iVar4 = *(int *)(param_1 + 0x24);
    puVar1[3] = uVar2;
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 != 0) goto LAB_ram_4819daec;
LAB_ram_4819dade:
    piVar3 = (int *)0x0;
  }
  else {
LAB_ram_4819daec:
    piVar5 = (int *)(iVar4 + param_2 * 4);
    piVar3 = (int *)*piVar5;
    if (piVar3 == (int *)0x0) {
      iVar4 = 1 << (param_2 & 0x1f);
      piVar3 = (int *)FUN_ram_4ff450d6(param_1,1,(iVar4 + 5) * 4);
      if (piVar3 == (int *)0x0) goto LAB_ram_4819dade;
      *(uint *)((int)piVar3 + 4) = param_2;
      *(int *)((int)piVar3 + 8) = iVar4;
    }
    else {
      *piVar5 = *piVar3;
    }
    *(undefined4 *)((int)piVar3 + 0x10) = 0;
    *(undefined4 *)((int)piVar3 + 0xc) = 0;
  }
  return piVar3;
}



/* Firmware entry: 0x4819db8c */

int FUN_ram_4819db8c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *(int *)(param_2 + 0x10);
  puVar2 = (uint *)(param_2 + 0x14);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*puVar2 & 0xffff) * param_3 + param_4;
    uVar4 = (*puVar2 >> 0x10) * param_3 + (uVar3 >> 0x10);
    param_4 = uVar4 >> 0x10;
    *puVar2 = uVar4 * 0x10000 + (uVar3 & 0xffff);
    puVar2 = puVar2 + 1;
  } while (iVar1 < iVar5);
  iVar1 = param_2;
  if (param_4 != 0) {
    if (*(int *)(param_2 + 8) <= iVar5) {
      iVar1 = FUN_ram_4819da72(param_1,*(int *)(param_2 + 4) + 1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                         ,0xba,0,"Balloc succeeded");
      }
      FUN_ram_4ff45158(iVar1 + 0xc,param_2 + 0xc,(*(int *)(param_2 + 0x10) + 2) * 4);
      FUN_ram_4819db24(param_1,param_2);
    }
    *(uint *)((iVar5 + 4) * 4 + iVar1 + 4) = param_4;
    *(int *)(iVar1 + 0x10) = iVar5 + 1;
  }
  return iVar1;
}



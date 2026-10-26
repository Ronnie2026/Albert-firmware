/* Firmware entry: 0x4819e432 */

int FUN_ram_4819e432(undefined4 param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_28;
  uint auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4819da72(param_1,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                     ,0x30f,0,"Balloc succeeded");
  }
  auStack_24[0] = param_3 & 0xfffff;
  uVar3 = param_3 >> 0x14 & 0x7ff;
  if (uVar3 != 0) {
    auStack_24[0] = auStack_24[0] | 0x100000;
  }
  if (param_2 == 0) {
    iVar1 = FUN_ram_4819dd5e(auStack_24);
    uVar5 = iVar1 + 0x20;
    iVar1 = 1;
    *(uint *)(iVar4 + 0x14) = auStack_24[0];
  }
  else {
    uStack_28 = param_2;
    uVar5 = FUN_ram_4819dd5e(&uStack_28);
    if (uVar5 == 0) {
      *(uint *)(iVar4 + 0x14) = uStack_28;
    }
    else {
      uVar6 = auStack_24[0] << (0x20 - uVar5 & 0x1f);
      auStack_24[0] = auStack_24[0] >> (uVar5 & 0x1f);
      *(uint *)(iVar4 + 0x14) = uVar6 | uStack_28;
    }
    *(uint *)(iVar4 + 0x18) = auStack_24[0];
    iVar1 = (auStack_24[0] != 0) + 1;
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  if (uVar3 == 0) {
    *param_4 = uVar5 - 0x432;
    iVar2 = iVar1 << 5;
    uVar5 = FUN_ram_4819dd18(*(undefined4 *)(iVar1 * 4 + iVar4 + 0x10));
  }
  else {
    *param_4 = (uVar3 - 0x433) + uVar5;
    iVar2 = 0x35;
  }
  *param_5 = iVar2 - uVar5;
  return iVar4;
}



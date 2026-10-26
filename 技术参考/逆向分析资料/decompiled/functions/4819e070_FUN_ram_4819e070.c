/* Firmware entry: 0x4819e070 */

int FUN_ram_4819e070(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_2 + 4);
  uVar1 = (int)param_3 >> 5;
  iVar10 = *(int *)(param_2 + 0x10) + uVar1;
  iVar11 = iVar10 + 1;
  for (iVar7 = *(int *)(param_2 + 8); iVar7 < iVar11; iVar7 = iVar7 << 1) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = FUN_ram_4819da72(param_1,iVar2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                     ,0x1de,0,"Balloc succeeded");
  }
  puVar4 = (undefined4 *)(iVar2 + 0x14);
  for (iVar7 = 0; iVar7 < (int)uVar1; iVar7 = iVar7 + 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar9 = (undefined4 *)(iVar2 + 0x14) + ((int)~uVar1 >> 0x1f & uVar1);
  puVar5 = (uint *)(param_2 + 0x14);
  param_3 = param_3 & 0x1f;
  puVar3 = puVar5 + *(int *)(param_2 + 0x10);
  if (param_3 == 0) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar9 = uVar1;
      puVar9 = puVar9 + 1;
    } while (puVar5 < puVar3);
  }
  else {
    uVar1 = 0;
    puVar8 = puVar9;
    do {
      *puVar8 = uVar1 | *puVar5 << param_3;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar1 = uVar1 >> (0x20 - param_3 & 0x1f);
      puVar8 = puVar8 + 1;
    } while (puVar5 < puVar3);
    uVar6 = 0;
    if ((uint *)(param_2 + 0x15) <= puVar3) {
      uVar6 = (int)puVar3 + (-0x15 - param_2) & 0xfffffffc;
    }
    *(uint *)((int)puVar9 + uVar6 + 4) = uVar1;
    if (uVar1 != 0) goto LAB_ram_4819e13e;
  }
  iVar11 = iVar10;
LAB_ram_4819e13e:
  *(int *)(iVar2 + 0x10) = iVar11;
  FUN_ram_4819db24(param_1,param_2);
  return iVar2;
}



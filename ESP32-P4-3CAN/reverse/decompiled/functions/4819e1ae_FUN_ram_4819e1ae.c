/* Firmware entry: 0x4819e1ae */

void FUN_ram_4819e1ae(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4819e178(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4819da72(param_1,0);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      return;
    }
    uVar3 = 0x237;
  }
  else {
    iVar10 = param_3;
    if (iVar1 < 0) {
      iVar10 = param_2;
      param_2 = param_3;
    }
    iVar2 = FUN_ram_4819da72(param_1,*(undefined4 *)(param_2 + 4));
    if (iVar2 != 0) {
      iVar11 = *(int *)(param_2 + 0x10);
      iVar5 = *(int *)(iVar10 + 0x10);
      iVar14 = param_2 + 0x14;
      puVar12 = (uint *)(iVar14 + iVar11 * 4);
      *(uint *)(iVar2 + 0xc) = (uint)(iVar1 < 0);
      uVar8 = iVar10 + 0x14 + iVar5 * 4;
      iVar5 = 0x14;
      iVar1 = 0;
      do {
        uVar4 = ((*(uint *)(param_2 + iVar5) & 0xffff) - (*(uint *)(iVar10 + iVar5) & 0xffff)) +
                iVar1;
        iVar6 = ((*(uint *)(param_2 + iVar5) >> 0x10) - (*(uint *)(iVar10 + iVar5) >> 0x10)) +
                ((int)uVar4 >> 0x10);
        iVar1 = iVar6 >> 0x10;
        puVar13 = (uint *)(iVar2 + iVar5);
        iVar5 = iVar5 + 4;
        *puVar13 = uVar4 & 0xffff | iVar6 * 0x10000;
      } while ((uint)(iVar10 + iVar5) < uVar8);
      uVar4 = 0;
      if (iVar10 + 0x15U <= uVar8) {
        uVar4 = (uVar8 - iVar10) - 0x15 & 0xfffffffc;
      }
      puVar15 = (uint *)(iVar14 + uVar4 + 4);
      for (puVar13 = puVar15; puVar13 < puVar12; puVar13 = puVar13 + 1) {
        uVar8 = *puVar13;
        uVar7 = uVar8 + iVar1;
        iVar10 = ((int)((uVar8 & 0xffff) + iVar1) >> 0x10) + (uVar8 >> 0x10);
        iVar1 = iVar10 >> 0x10;
        *(uint *)((int)puVar13 + ((iVar2 + 0x14) - iVar14)) = uVar7 & 0xffff | iVar10 * 0x10000;
      }
      uVar8 = 0;
      if ((uint *)(iVar14 + uVar4 + 1) <= puVar12) {
        uVar8 = (int)puVar12 + (3 - (int)puVar15) & 0xfffffffc;
      }
      piVar9 = (int *)(uVar8 + iVar2 + 0x14 + uVar4 + 4);
      while (piVar9 = piVar9 + -1, *piVar9 == 0) {
        iVar11 = iVar11 + -1;
      }
      *(int *)(iVar2 + 0x10) = iVar11;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    uVar3 = 0x245;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                   ,uVar3,0,"Balloc succeeded");
}



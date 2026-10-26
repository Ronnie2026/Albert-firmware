/* Firmware entry: 0x481288f0 */

/* WARNING: Removing unreachable block (ram,0x48128ad0) */

int FUN_ram_481288f0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iStack_54;
  int iStack_50;
  code *pcStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  code *pcStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  piVar4 = (int *)param_1[5];
  iStack_40 = *param_1 + 1;
  *param_1 = iStack_40;
  piVar15 = (int *)param_1[4];
  if (piVar4 == (int *)param_1[6]) {
    uVar13 = (int)piVar4 - (int)piVar15 >> 5;
    if (uVar13 == 0x3ffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_481950f0("vector::_M_realloc_insert");
    }
    uVar17 = 1;
    if ((uVar13 == 0) || (uVar17 = uVar13 << 1, uVar13 <= uVar17)) {
      if (0x3ffffff < uVar17) {
        uVar17 = 0x3ffffff;
      }
      iVar11 = uVar17 << 5;
    }
    else {
      iVar11 = 0x7fffffe0;
    }
    piVar16 = (int *)FUN_ram_48194e68(iVar11);
    iVar6 = *param_1;
    piVar16[6] = param_2;
    piVar16[1] = 0;
    piVar16[2] = 0;
    piVar16[3] = 0;
    piVar16[4] = 0;
    piVar16[5] = 0;
    piVar16[7] = param_3;
    *piVar16 = iVar6;
    piVar3 = piVar16;
    for (piVar14 = piVar15; piVar3 = piVar3 + 8, piVar14 != piVar4; piVar14 = piVar14 + 8) {
      while( true ) {
        iVar6 = *piVar14;
        iVar7 = piVar14[1];
        iVar8 = piVar14[5];
        iVar10 = piVar14[4];
        piVar3[2] = 0;
        *piVar3 = iVar6;
        piVar3[1] = iVar7;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = iVar8;
        if (iVar10 != 0) break;
        piVar1 = piVar14 + 6;
        iVar6 = piVar14[7];
        piVar14 = piVar14 + 8;
        piVar3[6] = *piVar1;
        piVar3[7] = iVar6;
        piVar3 = piVar3 + 8;
        if (piVar4 == piVar14) goto LAB_ram_48128b96;
      }
      iVar6 = piVar14[3];
      piVar14[4] = 0;
      piVar3[2] = piVar14[2];
      piVar3[3] = iVar6;
      iVar6 = piVar14[6];
      iVar7 = piVar14[7];
      piVar14[5] = 0;
      piVar3[4] = iVar10;
      piVar3[6] = iVar6;
      piVar3[7] = iVar7;
    }
LAB_ram_48128b96:
    if (piVar15 != (int *)0x0) {
      thunk_FUN_ram_4ff209c6(piVar15,param_1[6] - (int)piVar15);
    }
    param_1[6] = iVar11 + (int)piVar16;
    param_1[4] = (int)piVar16;
    param_1[5] = (int)piVar3;
  }
  else if (piVar15 == piVar4) {
    piVar15[2] = 0;
    piVar15[3] = 0;
    piVar15[4] = 0;
    *piVar15 = iStack_40;
    piVar15[1] = 0;
    piVar15[5] = 0;
    piVar15[6] = param_2;
    piVar15[7] = param_3;
    piVar16 = (int *)param_1[4];
    param_1[5] = param_1[5] + 0x20;
  }
  else {
    iStack_38 = 0;
    iStack_34 = 0;
    pcStack_30 = (code *)0x0;
    iStack_3c = 0;
    iStack_2c = 0;
    piStack_44 = param_1 + 4;
    *piVar4 = piVar4[-8];
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[1] = piVar4[-7];
    piVar4[5] = piVar4[-3];
    if (piVar4[-4] != 0) {
      piVar4[4] = piVar4[-4];
      piVar4[-4] = 0;
      piVar4[-3] = 0;
      piVar4[2] = piVar4[-6];
      piVar4[3] = piVar4[-5];
    }
    iVar11 = param_1[5];
    puVar2 = (undefined4 *)(iVar11 + -0x20);
    piVar4[6] = piVar4[-2];
    piVar4[7] = piVar4[-1];
    param_1[5] = iVar11 + 0x20;
    iVar11 = (int)puVar2 - (int)piVar15 >> 5;
    iStack_28 = param_2;
    iStack_24 = param_3;
    if (0 < (int)puVar2 - (int)piVar15) {
      while( true ) {
        uVar9 = puVar2[-3];
        iVar6 = puVar2[-4];
        *puVar2 = puVar2[-8];
        puVar2[1] = puVar2[-7];
        iStack_54 = 0;
        iStack_50 = 0;
        pcStack_4c = (code *)0x0;
        if (iVar6 != 0) {
          iStack_54 = puVar2[-6];
          iStack_50 = puVar2[-5];
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          pcStack_4c = (code *)iVar6;
        }
        iVar6 = puVar2[2];
        uVar5 = puVar2[3];
        puVar2[3] = iStack_50;
        puVar2[2] = iStack_54;
        pcVar12 = (code *)puVar2[4];
        iStack_48 = puVar2[5];
        puVar2[4] = pcStack_4c;
        puVar2[5] = uVar9;
        if (pcVar12 != (code *)0x0) {
          iStack_54 = iVar6;
          iStack_50 = uVar5;
          pcStack_4c = pcVar12;
          (*pcVar12)(&iStack_54,&iStack_54,3);
        }
        iVar11 = iVar11 + -1;
        puVar2[6] = puVar2[-2];
        puVar2[7] = puVar2[-1];
        if (iVar11 == 0) break;
        puVar2 = puVar2 + -8;
      }
    }
    iVar11 = iStack_2c;
    *piVar15 = iStack_40;
    piVar15[1] = iStack_3c;
    iStack_54 = 0;
    iStack_50 = 0;
    pcStack_4c = (code *)0x0;
    if (pcStack_30 != (code *)0x0) {
      pcStack_4c = pcStack_30;
      pcStack_30 = (code *)0x0;
      iStack_2c = 0;
      iStack_54 = iStack_38;
      iStack_50 = iStack_34;
    }
    iVar6 = piVar15[2];
    iVar7 = piVar15[3];
    piVar15[3] = iStack_50;
    piVar15[2] = iStack_54;
    pcVar12 = (code *)piVar15[4];
    iStack_48 = piVar15[5];
    piVar15[4] = (int)pcStack_4c;
    piVar15[5] = iVar11;
    iStack_54 = iVar6;
    iStack_50 = iVar7;
    pcStack_4c = pcVar12;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(&iStack_54,&iStack_54,3);
    }
    piVar15[6] = iStack_28;
    piVar15[7] = iStack_24;
    if (pcStack_30 != (code *)0x0) {
      (*pcStack_30)(&iStack_38,&iStack_38,3);
    }
    piVar16 = (int *)param_1[4];
  }
  return *piVar16;
}



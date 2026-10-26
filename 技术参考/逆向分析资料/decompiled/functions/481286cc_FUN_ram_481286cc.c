/* Firmware entry: 0x481286cc */

int FUN_ram_481286cc(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 local_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar8 = *(code **)(param_2 + 8);
  if (pcVar8 == (code *)0x0) {
    return 0;
  }
  iVar10 = *param_1;
  piVar1 = (int *)param_1[5];
  *param_1 = iVar10 + 1;
  if (piVar1 == (int *)param_1[6]) {
    piVar12 = (int *)param_1[4];
    uVar9 = (int)piVar1 - (int)piVar12 >> 5;
    if (uVar9 == 0x3ffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_481950f0("vector::_M_realloc_append");
    }
    uVar11 = 1;
    if ((uVar9 == 0) || (uVar11 = uVar9 << 1, uVar9 <= uVar11)) {
      if (0x3ffffff < uVar11) {
        uVar11 = 0x3ffffff;
      }
      iVar10 = uVar11 << 5;
    }
    else {
      iVar10 = 0x7fffffe0;
    }
    piVar3 = (int *)FUN_ram_48194e68(iVar10);
    local_40 = 0;
    uStack_3c = 0;
    pcStack_38 = (code *)0x0;
    iStack_34 = 0;
    iVar14 = *param_1;
    piVar13 = (int *)(((int)piVar1 - (int)piVar12) + (int)piVar3);
    piVar7 = piVar12;
    piVar2 = piVar3;
    if (*(code **)(param_2 + 8) == (code *)0x0) {
      *piVar13 = iVar14;
      piVar13[1] = 0;
      piVar13[2] = 0;
      piVar13[3] = 0;
      piVar13[4] = 0;
      piVar13[5] = 0;
      piVar13[6] = 0;
      piVar13[7] = param_3;
    }
    else {
      (**(code **)(param_2 + 8))(&local_40,param_2,2);
      iStack_34 = *(int *)(param_2 + 0xc);
      pcStack_38 = *(code **)(param_2 + 8);
      *piVar13 = iVar14;
      piVar13[1] = 0;
      piVar13[2] = 0;
      piVar13[3] = 0;
      piVar13[4] = 0;
      piVar13[5] = 0;
      if (pcStack_38 == (code *)0x0) {
        piVar13[6] = 0;
        piVar13[7] = param_3;
      }
      else {
        (*pcStack_38)(piVar13 + 2,&local_40,2);
        piVar13[6] = 0;
        piVar13[7] = param_3;
        piVar13[5] = iStack_34;
        piVar13[4] = (int)pcStack_38;
        if (pcStack_38 != (code *)0x0) {
          (*pcStack_38)(&local_40,&local_40,3);
        }
      }
    }
    for (; piVar1 != piVar7; piVar7 = piVar7 + 8) {
      while( true ) {
        iVar14 = *piVar7;
        iVar4 = piVar7[1];
        iVar5 = piVar7[5];
        iVar6 = piVar7[4];
        piVar2[2] = 0;
        *piVar2 = iVar14;
        piVar2[1] = iVar4;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[5] = iVar5;
        if (iVar6 != 0) break;
        piVar13 = piVar7 + 6;
        iVar14 = piVar7[7];
        piVar7 = piVar7 + 8;
        piVar2[6] = *piVar13;
        piVar2[7] = iVar14;
        piVar2 = piVar2 + 8;
        if (piVar1 == piVar7) goto LAB_ram_48128874;
      }
      iVar14 = piVar7[3];
      piVar7[4] = 0;
      piVar2[2] = piVar7[2];
      piVar2[3] = iVar14;
      iVar14 = piVar7[6];
      iVar4 = piVar7[7];
      piVar7[5] = 0;
      piVar2[4] = iVar6;
      piVar2[6] = iVar14;
      piVar2[7] = iVar4;
      piVar2 = piVar2 + 8;
    }
LAB_ram_48128874:
    piVar2 = piVar2 + 8;
    if (piVar12 != (int *)0x0) {
      thunk_FUN_ram_4ff209c6(piVar12,param_1[6] - (int)piVar12);
    }
    param_1[4] = (int)piVar3;
    param_1[6] = iVar10 + (int)piVar3;
    param_1[5] = (int)piVar2;
  }
  else {
    local_40 = 0;
    uStack_3c = 0;
    pcStack_38 = (code *)0x0;
    iStack_34 = 0;
    (*pcVar8)(&local_40,param_2,2);
    iStack_34 = *(int *)(param_2 + 0xc);
    pcStack_38 = *(code **)(param_2 + 8);
    *piVar1 = iVar10 + 1;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    if (pcStack_38 != (code *)0x0) {
      (*pcStack_38)(piVar1 + 2,&local_40,2);
      piVar1[5] = iStack_34;
      piVar1[4] = (int)pcStack_38;
    }
    piVar1[6] = 0;
    piVar1[7] = param_3;
    if (pcStack_38 != (code *)0x0) {
      (*pcStack_38)(&local_40,&local_40,3);
    }
    piVar2 = (int *)(param_1[5] + 0x20);
    param_1[5] = (int)piVar2;
  }
  return piVar2[-8];
}



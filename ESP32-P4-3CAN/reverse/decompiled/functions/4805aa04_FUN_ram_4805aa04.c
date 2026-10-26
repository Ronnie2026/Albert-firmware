/* Firmware entry: 0x4805aa04 */

void FUN_ram_4805aa04(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_c0 [20];
  int local_70 [18];
  int aiStack_28 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar5 = local_c0;
  piVar9 = param_2 + 0x12;
  piVar6 = param_2;
  do {
    iVar7 = piVar6[1];
    iVar1 = piVar6[2];
    iVar2 = piVar6[3];
    iVar3 = piVar6[4];
    iVar4 = piVar6[5];
    *piVar5 = *piVar6;
    piVar5[1] = iVar7;
    piVar5[2] = iVar1;
    piVar5[3] = iVar2;
    piVar5[4] = iVar3;
    piVar5[5] = iVar4;
    piVar6 = piVar6 + 6;
    piVar5 = piVar5 + 6;
  } while (piVar6 != piVar9);
  FUN_ram_4804c54e(local_70,local_c0);
  piVar5 = local_70;
  piVar6 = param_2;
  do {
    iVar7 = piVar5[1];
    iVar4 = piVar5[2];
    iVar1 = piVar5[3];
    iVar2 = piVar5[4];
    iVar3 = piVar5[5];
    *piVar6 = *piVar5;
    piVar6[1] = iVar7;
    piVar6[2] = iVar4;
    piVar6[3] = iVar1;
    piVar6[4] = iVar2;
    piVar6[5] = iVar3;
    piVar5 = piVar5 + 6;
    piVar6 = piVar6 + 6;
  } while (piVar5 != aiStack_28);
  iVar1 = param_1 + 0x8518;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  if (((((((*(int *)(param_1 + 0x852c) == *param_2) && (*(int *)(param_1 + 0x8530) == param_2[1]))
         && (*(int *)(param_1 + 0x8534) == param_2[2])) &&
        ((*(int *)(param_1 + 0x8538) == param_2[3] && (*(int *)(param_1 + 0x853c) == param_2[4]))))
       && ((*(short *)(param_1 + 0x8540) == (short)param_2[5] &&
           ((*(int *)(param_1 + 0x8544) == param_2[6] && (*(int *)(param_1 + 0x8548) == param_2[7]))
           )))) && (*(int *)(param_1 + 0x854c) == param_2[8])) &&
     ((((*(int *)(param_1 + 0x8550) == param_2[9] && (*(int *)(param_1 + 0x8554) == param_2[10])) &&
       (*(int *)(param_1 + 0x8558) == param_2[0xb])) &&
      (((*(int *)(param_1 + 0x855c) == param_2[0xc] && (*(int *)(param_1 + 0x8560) == param_2[0xd]))
       && ((*(int *)(param_1 + 0x8564) == param_2[0xe] &&
           ((*(int *)(param_1 + 0x8568) == param_2[0xf] &&
            (*(int *)(param_1 + 0x856c) == param_2[0x10])))))))))) {
    if (*(int *)(param_1 + 0x8570) == param_2[0x11]) {
      FUN_ram_4ff3ee10(iVar1);
      goto LAB_ram_4805ab10;
    }
  }
  piVar6 = (int *)(param_1 + 0x852c);
  do {
    iVar8 = param_2[1];
    iVar7 = param_2[2];
    iVar2 = param_2[3];
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    *piVar6 = *param_2;
    piVar6[1] = iVar8;
    piVar6[2] = iVar7;
    piVar6[3] = iVar2;
    piVar6[4] = iVar3;
    piVar6[5] = iVar4;
    param_2 = param_2 + 6;
    piVar6 = piVar6 + 6;
  } while (param_2 != piVar9);
  piVar6 = (int *)(param_1 + 0x8574);
  iVar2 = *piVar6;
  *piVar6 = iVar2 + 1;
  if (iVar2 == -1) {
    fence();
    *piVar6 = 1;
    FUN_ram_4ff3ee10(iVar1);
  }
  else {
    FUN_ram_4ff3ee10(iVar1);
  }
  piVar6 = (int *)(param_1 + 0x5dc);
  do {
    iVar1 = *piVar6 + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *piVar6 = iVar1;
    piVar6 = piVar6 + 0x2c;
  } while (piVar6 != (int *)(param_1 + 0x7ec));
LAB_ram_4805ab10:
  FUN_ram_480599fe(param_1,0);
  return;
}



/* Firmware entry: 0x4815d360 */

int FUN_ram_4815d360(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  iVar3 = FUN_ram_4815d31e(param_1,uVar2);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_ram_4ff20824(0x68,2,0x1400,0x1800);
    if (piVar4 == (int *)0x0) {
      iVar3 = 0x101;
    }
    else {
      piVar4[2] = (int)param_2;
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar4[8] = 0;
      piVar4[9] = 0;
      piVar4[10] = 0;
      piVar4[0xe] = 0;
      piVar4[0xf] = 0;
      piVar4[0x10] = 0;
      piVar4[0x19] = 0;
      iVar3 = FUN_ram_4815c136(piVar4,param_3,param_4);
      if (iVar3 == 0) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 != 0) {
          *(int **)(iVar5 + 4) = piVar4;
        }
        iVar7 = *(int *)(param_1 + 0x10);
        *piVar4 = iVar5;
        piVar4[1] = 0;
        *(int **)(param_1 + 0x14) = piVar4;
        if (iVar7 == 0) {
          *(int **)(param_1 + 0x10) = piVar4;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        FUN_ram_4815bd18(piVar4);
        FUN_ram_4ff209c6(piVar4);
      }
    }
    return iVar3;
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  do {
    if (piVar4 == (int *)0x0) goto LAB_ram_4815d3b4;
    piVar8 = (int *)piVar4[2];
    bVar1 = piVar4 != param_2;
    piVar4 = piVar8;
  } while (bVar1);
  iVar5 = param_2[1];
  if (iVar5 == 0) {
    *(int **)(param_1 + 0x1c) = piVar8;
  }
  else {
    *(int **)(iVar5 + 8) = piVar8;
  }
  if (piVar8 == (int *)0x0) {
    *(int *)(param_1 + 0x20) = iVar5;
  }
  else {
    piVar8[1] = iVar5;
  }
  pcVar6 = *(code **)(*param_2 + 4);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  (*pcVar6)(param_2);
LAB_ram_4815d3b4:
  iVar3 = FUN_ram_4815c136(iVar3,param_3,param_4);
  return iVar3;
}



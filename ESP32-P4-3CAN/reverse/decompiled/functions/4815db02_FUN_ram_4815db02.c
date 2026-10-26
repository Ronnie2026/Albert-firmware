/* Firmware entry: 0x4815db02 */

int FUN_ram_4815db02(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[5] == 0) {
    return 0x110b;
  }
  if (param_1[5] != 1) {
    iVar2 = FUN_ram_4815da84();
    return iVar2;
  }
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
    iVar2 = 0x1105;
  }
  else {
    uVar3 = 0;
    piVar1 = (int *)0x0;
    do {
      if (uVar3 < 0x7e - *(ushort *)(piVar4 + 0x10)) {
        piVar1 = piVar4;
        uVar3 = 0x7e - *(ushort *)(piVar4 + 0x10);
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    if (uVar3 == 0) {
      return 0x1105;
    }
    iVar5 = piVar1[0x10];
    iVar2 = FUN_ram_4815ba68(piVar1);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_4815da84(param_1), iVar2 == 0)) {
      iVar6 = param_1[1];
      iVar2 = FUN_ram_4815a798(piVar1,iVar6);
      if (((iVar2 == 0) || (iVar2 == 0x1102)) && (iVar2 = FUN_ram_4815ba1e(piVar1), iVar2 == 0)) {
        if (*(short *)(iVar6 + 0x40) == (short)iVar5) {
          iVar5 = *piVar1;
          piVar4 = (int *)piVar1[1];
          if (iVar5 == 0) {
            *param_1 = (int)piVar4;
          }
          else {
            *(int **)(iVar5 + 4) = piVar4;
          }
          if (piVar4 == (int *)0x0) {
            param_1[1] = iVar5;
          }
          else {
            *piVar4 = iVar5;
          }
          iVar5 = param_1[4];
          param_1[2] = param_1[2] + -1;
          if (iVar5 != 0) {
            *(int **)(iVar5 + 4) = piVar1;
          }
          iVar6 = param_1[3];
          *piVar1 = iVar5;
          piVar1[1] = 0;
          param_1[4] = (int)piVar1;
          if (iVar6 == 0) {
            param_1[3] = (int)piVar1;
          }
          param_1[5] = param_1[5] + 1;
        }
        else {
          iVar2 = -1;
        }
      }
    }
  }
  return iVar2;
}



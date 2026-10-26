/* Firmware entry: 0x4813c9e0 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4813c9e0(int *param_1,int *param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x10;
  }
  if (param_2 == (int *)0x0) {
    return -0x10;
  }
  if (param_1[0xf] != 0) {
    return -10;
  }
  iVar4 = param_2[5];
  *(char *)(param_1 + 0xb) = (char)iVar4;
  cVar1 = (char)param_1[0xc];
  if ((char)iVar4 == '\x06') {
    iVar8 = param_2[1];
    iVar10 = param_2[3];
    iVar9 = param_2[2];
    iVar4 = param_2[4];
    param_1[6] = *param_2;
    param_1[7] = iVar8;
    param_1[8] = iVar9;
    param_1[9] = iVar10;
    *(char *)(param_1 + 10) = (char)iVar4;
    *(short *)(param_1 + 0x11) = (short)param_3;
    if (cVar1 != '\0') goto LAB_ram_4813cb0e;
    iVar4 = FUN_ram_48148070(param_1,param_1 + 6);
  }
  else {
    param_1[6] = *param_2;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(short *)(param_1 + 0x11) = (short)param_3;
    if (cVar1 == '\0') {
      iVar4 = FUN_ram_481470f4(param_1,param_1 + 6);
    }
    else {
LAB_ram_4813cb0e:
      iVar4 = FUN_ram_4813a81c(cVar1);
    }
  }
  if (iVar4 == 0) {
    return -4;
  }
  iVar9 = *param_1;
  if ((char)param_1[5] == '\x06') {
    if (((iVar9 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) {
      iVar9 = param_1[3];
      goto joined_r0x4813cc76;
    }
  }
  else {
joined_r0x4813cc76:
    if (iVar9 == 0) {
      piVar5 = (int *)(iVar4 + 4);
      if (((char)param_2[5] == '\x06') &&
         (piVar5 = (int *)FUN_ram_481482f0(iVar4,param_2), piVar5 == (int *)0x0)) {
        return -4;
      }
      iVar9 = piVar5[5];
      *(char *)(param_1 + 5) = (char)iVar9;
      if ((char)iVar9 == '\x06') {
        iVar10 = piVar5[1];
        iVar8 = piVar5[2];
        iVar11 = piVar5[3];
        iVar9 = piVar5[4];
        *param_1 = *piVar5;
        param_1[1] = iVar10;
        param_1[2] = iVar8;
        param_1[3] = iVar11;
        *(char *)(param_1 + 4) = (char)iVar9;
      }
      else {
        *param_1 = *piVar5;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 4) = 0;
      }
      cVar1 = (char)param_1[0xb];
      goto joined_r0x4813cbac;
    }
  }
  cVar1 = (char)param_1[0xb];
joined_r0x4813cbac:
  if (((cVar1 == '\x06') && ((char)param_1[10] == '\0')) && ((param_1[6] & 0xc0ffU) == 0x80fe)) {
    *(char *)(param_1 + 10) = *(char *)(iVar4 + 0xea) + '\x01';
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x42);
  if (uVar2 == 0) {
    uVar6 = FUN_ram_4813bf22();
    *(short *)((int)param_1 + 0x42) = (short)uVar6;
    if (uVar6 == 0) {
      return -2;
    }
  }
  else {
    uVar6 = uVar2;
    if ((*(byte *)((int)param_1 + 0x31) & 4) != 0) {
      ppuVar7 = &PTR_DAT_ram_4ff6e1c8_ram_48236b38;
      do {
        for (piVar5 = *(int **)ppuVar7[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xd]) {
          if (((*(ushort *)((int)piVar5 + 0x42) == uVar2) && (*(ushort *)(piVar5 + 0x11) == param_3)
              ) && ((char)param_1[5] == (char)piVar5[5])) {
            if ((char)param_1[5] == '\x06') {
              if (((*piVar5 == *param_1) && (piVar5[1] == param_1[1])) &&
                 ((piVar5[2] == param_1[2] &&
                  ((piVar5[3] == param_1[3] && ((char)piVar5[4] == (char)param_1[4]))))))
              goto LAB_ram_4813cadc;
            }
            else if (*piVar5 == *param_1) {
LAB_ram_4813cadc:
              if ((char)param_2[5] == (char)piVar5[0xb]) {
                if ((char)param_2[5] == '\x06') {
                  if ((((piVar5[6] == *param_2) && (piVar5[7] == param_2[1])) &&
                      (piVar5[8] == param_2[2])) &&
                     ((piVar5[9] == param_2[3] && ((char)piVar5[10] == (char)param_2[4])))) {
                    return -8;
                  }
                }
                else if (piVar5[6] == *param_2) {
                  return -8;
                }
              }
            }
          }
        }
        ppuVar7 = ppuVar7 + 1;
      } while (ppuVar7 != &PTR_DAT_ram_4ff6e1c4_ram_48236b40);
    }
  }
  iVar9 = FUN_ram_4814de5a(param_1,uVar6,param_1 + 6,(short)param_1[0x11]);
  iVar10 = iVar9 + -1;
  param_1[0x27] = iVar9;
  param_1[0x24] = iVar10;
  param_1[0x29] = iVar10;
  param_1[0x2a] = iVar10;
  param_1[0x15] = -0x10002;
  *(undefined2 *)(param_1 + 0x2b) = 0xfffe;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0x218;
  uVar3 = FUN_ram_4813c942(0x218,iVar4,param_1 + 6);
  *(undefined2 *)((int)param_1 + 0x7e) = uVar3;
  param_1[0x35] = param_4;
  *(undefined2 *)(param_1 + 0x25) = 1;
  iVar4 = FUN_ram_4814137a(param_1,2);
  if (iVar4 == 0) {
    param_1[0xf] = 2;
    if (uVar2 != 0) {
      piVar5 = DAT_ram_4ff6e1cc;
      if (DAT_ram_4ff6e1cc == param_1) {
        DAT_ram_4ff6e1cc = (int *)param_1[0xd];
      }
      else {
        do {
          piVar12 = piVar5;
          if (piVar12 == (int *)0x0) goto LAB_ram_4813cbdc;
          piVar5 = (int *)piVar12[0xd];
        } while ((int *)piVar12[0xd] != param_1);
        piVar12[0xd] = param_1[0xd];
      }
    }
LAB_ram_4813cbdc:
    piVar5 = param_1;
    param_1[0xd] = (int)DAT_ram_4ff6e1c4;
    DAT_ram_4ff6e1c4 = piVar5;
    FUN_ram_4814257c();
    DAT_ram_4ff6e1be = 1;
    FUN_ram_48141ae6(param_1);
  }
  return iVar4;
}



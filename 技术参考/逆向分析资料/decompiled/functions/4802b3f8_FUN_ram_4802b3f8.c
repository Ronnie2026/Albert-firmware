/* Firmware entry: 0x4802b3f8 */

void FUN_ram_4802b3f8(int *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  char cVar12;
  int *piVar13;
  uint uVar14;
  char *pcVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)((int)param_1 + 0xf);
  if (cVar1 < '\0') {
    uVar11 = *(byte *)((int)param_1 + 0xf) & 0x7f;
  }
  else {
    uVar11 = param_1[2];
  }
  if (uVar11 == 0) {
    return;
  }
  cVar10 = param_2[0xf];
  if (cVar10 < '\0') {
    uVar14 = (byte)param_2[0xf] & 0x7f;
    if ((param_2[0xf] & 0x7fU) == 0) {
      return;
    }
  }
  else {
    uVar14 = *(uint *)(param_2 + 8);
    if (uVar14 == 0) {
      return;
    }
  }
  cVar12 = *(char *)((int)param_3 + 0xf);
  if (cVar12 < '\0') {
    uVar8 = *(byte *)((int)param_3 + 0xf) & 0x7f;
  }
  else {
    uVar8 = param_3[2];
  }
  iVar9 = uVar8 - uVar14;
  piVar2 = param_1;
  if (-1 < cVar1) {
    piVar2 = (int *)*param_1;
  }
  if (iVar9 == 0) {
    do {
      pcVar4 = param_2;
      if (-1 < cVar10) {
        pcVar4 = *(char **)param_2;
      }
      pcVar4 = strstr((char *)piVar2,pcVar4);
      if (pcVar4 == (char *)0x0) {
        return;
      }
      if (cVar12 < '\0') {
        FUN_ram_4ff4522c(pcVar4,param_3,*(byte *)((int)param_3 + 0xf) & 0x7f);
        cVar12 = *(char *)((int)param_3 + 0xf);
        if (cVar12 < '\0') goto LAB_ram_4802b5c6;
LAB_ram_4802b586:
        uVar11 = param_3[2];
      }
      else {
        FUN_ram_4ff4522c(pcVar4,*param_3,param_3[2]);
        cVar12 = *(char *)((int)param_3 + 0xf);
        if (-1 < cVar12) goto LAB_ram_4802b586;
LAB_ram_4802b5c6:
        uVar11 = *(byte *)((int)param_3 + 0xf) & 0x7f;
      }
      cVar10 = param_2[0xf];
      piVar2 = (int *)(pcVar4 + uVar11);
    } while( true );
  }
  uVar8 = uVar11;
  if (iVar9 < 0) {
    pcVar4 = param_2;
    piVar13 = piVar2;
    if (-1 < cVar10) {
      pcVar4 = *(char **)param_2;
    }
    do {
      pcVar4 = strstr((char *)piVar2,pcVar4);
      if (pcVar4 == (char *)0x0) {
        sVar5 = strlen((char *)piVar2);
        FUN_ram_4ff4522c(piVar13,piVar2,sVar5 + 1);
        if (*(char *)((int)param_1 + 0xf) < '\0') {
          *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar11 & 0x7f
          ;
          *(char *)(uVar11 + (int)param_1) = '\0';
          return;
        }
        param_1[2] = uVar11;
        if (*param_1 == 0) {
          return;
        }
        *(undefined1 *)(*param_1 + uVar11) = 0;
        return;
      }
      FUN_ram_4ff4522c(piVar13,piVar2,(int)pcVar4 - (int)piVar2);
      pcVar15 = (char *)(((int)pcVar4 - (int)piVar2) + (int)piVar13);
      if (*(char *)((int)param_3 + 0xf) < '\0') {
        FUN_ram_4ff4522c(pcVar15,param_3,*(byte *)((int)param_3 + 0xf) & 0x7f);
        if (*(char *)((int)param_3 + 0xf) < '\0') goto LAB_ram_4802b6b2;
LAB_ram_4802b628:
        uVar14 = param_3[2];
      }
      else {
        FUN_ram_4ff4522c(pcVar15,*param_3,param_3[2]);
        if (-1 < *(char *)((int)param_3 + 0xf)) goto LAB_ram_4802b628;
LAB_ram_4802b6b2:
        uVar14 = *(byte *)((int)param_3 + 0xf) & 0x7f;
      }
      piVar13 = (int *)(pcVar15 + uVar14);
      if (param_2[0xf] < '\0') {
        uVar11 = uVar11 + iVar9;
        piVar2 = (int *)(pcVar4 + ((byte)param_2[0xf] & 0x7f));
        pcVar4 = param_2;
      }
      else {
        uVar11 = uVar11 + iVar9;
        piVar2 = (int *)(pcVar4 + *(int *)(param_2 + 8));
        pcVar4 = *(char **)param_2;
      }
    } while( true );
  }
  while( true ) {
    pcVar4 = param_2;
    if (-1 < cVar10) {
      pcVar4 = *(char **)param_2;
    }
    pcVar4 = strstr((char *)piVar2,pcVar4);
    if (pcVar4 == (char *)0x0) break;
    piVar2 = (int *)(pcVar4 + uVar14);
    uVar8 = uVar8 + iVar9;
  }
  if (uVar8 == uVar11) {
    return;
  }
  if (cVar1 < '\0') {
    if (0xe < uVar8) goto LAB_ram_4802b728;
LAB_ram_4802b73c:
    uVar11 = *(byte *)((int)param_1 + 0xf) & 0x7f;
  }
  else {
    if ((uint)param_1[1] < uVar8) {
LAB_ram_4802b728:
      iVar3 = FUN_ram_4802a5f0(param_1,uVar8);
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)((int)param_1 + 0xf) < '\0') goto LAB_ram_4802b73c;
    }
    uVar11 = param_1[2];
  }
  if (-1 < (int)(uVar11 - 1)) {
    do {
      iVar3 = FUN_ram_4802b29e(param_1,param_2);
      if (iVar3 < 0) {
        return;
      }
      if (*(char *)((int)param_1 + 0xf) < '\0') {
        if (param_2[0xf] < '\0') {
          uVar11 = (byte)param_2[0xf] & 0x7f;
        }
        else {
          uVar11 = *(uint *)(param_2 + 8);
        }
        iVar7 = uVar11 + iVar3;
        pcVar4 = (char *)((int)param_1 + iVar7);
        uVar11 = *(byte *)((int)param_1 + 0xf) & 0x7f;
      }
      else {
        if (param_2[0xf] < '\0') {
          uVar11 = (byte)param_2[0xf] & 0x7f;
        }
        else {
          uVar11 = *(uint *)(param_2 + 8);
        }
        iVar7 = uVar11 + iVar3;
        pcVar4 = (char *)(*param_1 + iVar7);
        uVar11 = param_1[2];
      }
      FUN_ram_4ff4522c(pcVar4 + iVar9,pcVar4,uVar11 - iVar7);
      if (*(char *)((int)param_1 + 0xf) < '\0') {
        uVar11 = *(byte *)((int)param_1 + 0xf) & 0x7f;
        piVar2 = param_1;
      }
      else {
        uVar11 = param_1[2];
        piVar2 = (int *)*param_1;
      }
      iVar7 = uVar11 + iVar9;
      if (*(char *)((int)param_3 + 0xf) < '\0') {
        uVar11 = *(byte *)((int)param_3 + 0xf) & 0x7f;
        puVar6 = param_3;
      }
      else {
        uVar11 = param_3[2];
        puVar6 = (undefined4 *)*param_3;
      }
      FUN_ram_4ff4522c((char *)((int)piVar2 + iVar3),puVar6,uVar11);
      if (*(char *)((int)param_1 + 0xf) < '\0') {
        *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)iVar7 & 0x7f;
        *(char *)((int)param_1 + iVar7) = '\0';
LAB_ram_4802b51a:
        piVar2 = param_1;
        if (-1 < *(char *)((int)param_1 + 0xf)) {
          piVar2 = (int *)*param_1;
        }
      }
      else {
        param_1[2] = iVar7;
        piVar2 = (int *)0x0;
        if (*param_1 != 0) {
          *(undefined1 *)(*param_1 + iVar7) = 0;
          goto LAB_ram_4802b51a;
        }
      }
      *(char *)((int)piVar2 + iVar7) = '\0';
    } while (iVar3 != 0);
  }
  return;
}



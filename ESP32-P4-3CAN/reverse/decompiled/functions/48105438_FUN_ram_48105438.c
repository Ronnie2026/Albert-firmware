/* Firmware entry: 0x48105438 */

void FUN_ram_48105438(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 0xa8c);
  cVar7 = *(char *)(param_1 + 0xa98);
  if (((cVar1 == '\0') || (iVar9 = *(int *)(param_1 + 0xa94), iVar9 == 0)) ||
     (300 < (uint)(param_2 - iVar9))) {
    if (cVar7 == '\0') goto LAB_ram_48105480;
    if ((*(int *)(param_1 + 0xaa0) == 0) || (300 < (uint)(param_2 - *(int *)(param_1 + 0xaa0)))) {
LAB_ram_4810553e:
      iVar5 = -0x80000000;
      cVar7 = '\0';
    }
    else {
      cVar7 = *(char *)(param_1 + 0xa99);
      if (cVar7 == '\0') goto LAB_ram_48105480;
      iVar5 = *(int *)(param_1 + 0xa9c);
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0xa8d);
    if (cVar7 == '\0') {
      if (cVar2 != '\0') {
LAB_ram_48105464:
        iVar5 = *(int *)(param_1 + 0xa90);
        cVar3 = *(char *)(param_1 + 0xb84);
        cVar2 = *(char *)(param_1 + 0x911);
        goto joined_r0x48105490;
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 0xaa0);
      if ((iVar10 == 0) || (300 < (uint)(param_2 - iVar10))) {
        if (cVar2 != '\0') goto LAB_ram_48105464;
      }
      else if (cVar2 != '\0') {
        cVar7 = *(char *)(param_1 + 0xa99);
        if (cVar7 != '\0') {
          uVar8 = *(int *)(param_1 + 0xa90) - *(int *)(param_1 + 0xa9c);
          uVar6 = (int)uVar8 >> 0x1f;
          if ((int)((uVar8 ^ uVar6) - uVar6) < 0x65) {
            iVar5 = *(int *)(param_1 + 0xa9c);
            if (-1 < iVar9 - iVar10) {
              iVar5 = *(int *)(param_1 + 0xa90);
            }
            goto LAB_ram_48105484;
          }
          goto LAB_ram_4810553e;
        }
        goto LAB_ram_48105480;
      }
      cVar7 = '\0';
    }
LAB_ram_48105480:
    iVar5 = -0x80000000;
  }
LAB_ram_48105484:
  cVar3 = *(char *)(param_1 + 0xb84);
  cVar2 = *(char *)(param_1 + 0x911);
  cVar1 = cVar7;
joined_r0x48105490:
  if (((cVar3 != '\0') && (*(int *)(param_1 + 0xba8) != 0)) &&
     ((uint)(param_2 - *(int *)(param_1 + 0xba8)) < 0x12d)) {
    iVar9 = *(int *)(param_1 + 0x904);
    bVar4 = false;
    if ((cVar2 != '\0') && (bVar4 = false, *(char *)(param_1 + 0x90f) != '\0')) {
      bVar4 = (uint)(param_2 - *(int *)(param_1 + 0x908)) < 0x12d;
    }
    if (*(char *)(param_1 + 0xac0) == '\0') {
      if (*(char *)(param_1 + 0xabc) == '\0') {
        *(char *)(param_1 + 0xac1) = *(char *)(param_1 + 0xaf4);
        *(undefined4 *)(param_1 + 0xacc) = 0;
        *(undefined2 *)(param_1 + 0xabc) = 1;
      }
      else if (*(char *)(param_1 + 0xac1) != *(char *)(param_1 + 0xaf4)) {
        return;
      }
      if (*(char *)(param_1 + 0xabe) == '\0') {
        if ((!bVar4) || (iVar9 == 0)) {
          *(undefined1 *)(param_1 + 0xabf) = 0;
          *(undefined4 *)(param_1 + 0xac8) = 0;
          *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
          return;
        }
        if (*(char *)(param_1 + 0xabf) != '\0') {
          if (iVar9 == *(int *)(param_1 + 0xac8)) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return;
          }
          *(undefined1 *)(param_1 + 0xabf) = 0;
          *(undefined4 *)(param_1 + 0xac4) = 0x80000000;
        }
        *(int *)(param_1 + 0xac8) = iVar9;
        if (cVar1 != '\0') {
          *(int *)(param_1 + 0xac4) = iVar5;
          *(int *)(param_1 + 0xacc) = param_2;
          *(undefined1 *)(param_1 + 0xabf) = 1;
          return;
        }
      }
    }
  }
  return;
}



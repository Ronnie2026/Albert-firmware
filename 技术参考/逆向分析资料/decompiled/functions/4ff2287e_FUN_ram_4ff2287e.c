/* Firmware entry: 0x4ff2287e */

void FUN_ram_4ff2287e(undefined4 *param_1,int *param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = param_3[7];
  iVar15 = *param_3;
  iVar14 = param_3[1];
  iVar13 = param_3[2];
  iVar12 = param_3[3];
  iVar2 = param_3[4];
  iVar11 = param_3[5];
  iVar8 = param_3[6];
  param_2[8] = param_3[8];
  *param_2 = iVar15;
  param_2[1] = iVar14;
  param_2[2] = iVar13;
  param_2[3] = iVar12;
  param_2[4] = iVar2;
  param_2[5] = iVar11;
  param_2[6] = iVar8;
  param_2[7] = iVar6;
  iVar2 = *param_3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((iVar2 != 0x3fd) || (*(char *)((int)param_3 + 0xd) != '\x01')) || ((char)param_3[1] != '\b'))
  {
    return;
  }
  bVar4 = *(byte *)((int)param_3 + 5);
  *(undefined1 *)((int)param_1 + 6) = 1;
  *(byte *)(param_1 + 1) = bVar4 & 7;
  if ((bVar4 & 7) != 0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  if (param_4[0x16] == '\0') {
    return;
  }
  bVar4 = *(byte *)((int)param_2 + 10);
  bVar3 = bVar4 | 0x40;
  *(byte *)((int)param_2 + 10) = bVar3;
  cVar10 = param_4[7];
  cVar5 = bVar4 != bVar3;
  *(char *)((int)param_1 + 7) = cVar5;
  uVar7 = 1;
  if (cVar10 == '\0') {
    if (param_4[0xb] == '\0') goto LAB_ram_4ff22a02;
    bVar4 = param_4[0x17];
    bVar3 = *(byte *)((int)param_2 + 0xb);
    if (2 < bVar4) {
      bVar4 = 2;
    }
    bVar9 = bVar3 & 0xf9;
    *(byte *)((int)param_2 + 0xb) = bVar4 << 1 | bVar9;
    cVar10 = param_4[0xd];
    cVar1 = param_4[7];
    if (bVar3 == (byte)(bVar4 << 1 | bVar9)) {
      if (cVar1 != '\0') goto LAB_ram_4ff229e4;
      goto joined_r0x4ff22a16;
    }
    *(undefined1 *)((int)param_1 + 7) = 1;
    if (((cVar1 != '\0') && (*param_2 == 0x3fd)) &&
       (((char)param_2[1] == '\b' && ((*(byte *)((int)param_2 + 5) & 7) == 0)))) {
      if (*(char *)((int)param_2 + 0xd) == '\x02') {
        cVar5 = param_4[2];
      }
      else {
        cVar5 = *param_4;
      }
      if (cVar5 != '\0') goto LAB_ram_4ff229b0;
    }
  }
  else {
    cVar10 = param_4[0xd];
LAB_ram_4ff229e4:
    if (((*param_2 == 0x3fd) && ((char)param_2[1] == '\b')) &&
       ((*(byte *)((int)param_2 + 5) & 7) == 0)) {
      if (*(char *)((int)param_2 + 0xd) == '\x02') {
        cVar1 = param_4[2];
      }
      else {
        cVar1 = *param_4;
      }
      if (cVar1 == '\0') {
joined_r0x4ff22a16:
        if (!(bool)cVar5) goto LAB_ram_4ff229d4;
        goto LAB_ram_4ff229d2;
      }
LAB_ram_4ff229b0:
      bVar4 = *(byte *)(param_2 + 3);
      if ((cVar10 != '\0') || (bVar3 = bVar4 | 0x10, param_4[0x15] != '\0')) {
        bVar3 = bVar4 & 0xef;
      }
      *(byte *)(param_2 + 3) = bVar3;
      if (bVar3 != bVar4) {
        *(undefined1 *)((int)param_1 + 7) = 1;
        goto LAB_ram_4ff229d2;
      }
    }
LAB_ram_4ff22a02:
    if (cVar5 == '\0') goto LAB_ram_4ff229d4;
  }
LAB_ram_4ff229d2:
  uVar7 = 3;
LAB_ram_4ff229d4:
  *(undefined1 *)((int)param_1 + 5) = uVar7;
  return;
}



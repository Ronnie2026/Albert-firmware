/* Firmware entry: 0x48093896 */

uint FUN_ram_48093896(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = (uint)*(byte *)((int)param_1 + 0x845);
  if (((char)param_1[5] == '\x02') && (*param_1 != 0)) {
    fence();
    if ((((char)param_1[0x167] != '\0') &&
        ((((param_1[0x168] != 0 && (*(char *)(*param_1 + 0x18d89) != '\0')) &&
          (param_2 - param_1[0x169] < 1)) &&
         (((uint)(param_2 - *(int *)(*param_1 + 0x18d8c)) < 0x7a121 &&
          (fence(), *(char *)(*param_1 + 0x18d88) != '\0')))))) &&
       ((iVar9 = param_1[0x3d], iVar9 != 0 &&
        ((*(char *)(iVar9 + 0x602) != '\0' &&
         (iVar9 = iVar9 + (uint)*(byte *)(iVar9 + 0x600) * 0x30,
         (uint)(param_2 - *(int *)(iVar9 + 0x24)) < 0x1389)))))) {
      uVar8 = uVar8 + (param_1[0xb9f] == *(int *)(iVar9 + 0x2c));
    }
  }
  if (*(char *)((int)param_1 + 0x846) == '\0') {
    if ((char)param_1[0x16d] != '\0') {
      uVar8 = uVar8 + ((uint)(param_2 - param_1[0x16a]) < 0x7d1);
    }
    iVar9 = param_1[0xb9f];
    fence();
    if (((char)param_1[5] == '\x01') && (DAT_ram_4ff4b8d1 < 0xc)) {
      iVar7 = DAT_ram_4ff4b8d1 + 3;
      if (((*(char *)((int)param_1 + iVar7 * 0x24 + 0x5d6) != '\0') &&
          ((*(char *)((int)param_1 + iVar7 * 0x24 + 0x5d7) == '\0' &&
           (*(char *)((int)param_1 + iVar7 * 0x24 + 0x5da) == '\x04')))) &&
         (cVar5 = '\x04', param_1[iVar7 * 9 + 0x173] == iVar9)) goto LAB_ram_48093ab0;
    }
  }
  else {
    iVar9 = param_1[0xb9f];
    fence();
    if (((char)param_1[5] != '\x01') || (0xb < DAT_ram_4ff4b8d1)) goto LAB_ram_4809390a;
    iVar7 = DAT_ram_4ff4b8d1 + 3;
    if ((*(char *)((int)param_1 + iVar7 * 0x24 + 0x5d6) == '\0') ||
       (((*(char *)((int)param_1 + iVar7 * 0x24 + 0x5d7) != '\0' ||
         (*(char *)((int)param_1 + iVar7 * 0x24 + 0x5da) != '\x04')) ||
        (iVar9 != param_1[iVar7 * 9 + 0x173])))) goto LAB_ram_4809390a;
    cVar5 = '\x03';
LAB_ram_48093ab0:
    if (((((char)param_1[iVar7 * 9 + 0x175] == '\0') || (param_2 - param_1[iVar7 * 9 + 0x174] < 1))
        && (param_1[iVar7 * 9 + 0x170] == param_1[0x163])) &&
       (param_1[iVar7 * 9 + 0x171] == param_1[0x210])) {
      uVar8 = uVar8 + *(byte *)(param_1 + 0x211);
    }
    if (cVar5 != '\x04') goto LAB_ram_4809390a;
  }
  if ((((*(char *)((int)param_1 + 0x5d6) != '\0') && (*(char *)((int)param_1 + 0x5d7) == '\0')) &&
      (((param_1[0x16e] & 0xffffffU) >> 8 == 0 && (param_1[0x173] == iVar9)))) &&
     ((((char)param_1[0x175] == '\0' || (param_2 - param_1[0x174] < 1)) &&
      ((param_1[0x170] == param_1[0x163] && (param_1[0x171] == param_1[0x210])))))) {
    uVar8 = uVar8 + *(byte *)(param_1 + 0x211);
  }
LAB_ram_4809390a:
  bVar6 = *(byte *)(param_1 + 0x15f);
  iVar7 = 0;
  bVar1 = 0;
  if (bVar6 != 0) {
    do {
      iVar2 = param_1[0x15e] + iVar7;
      if ((((*(char *)(iVar2 + 0xc1) != '\0') && (*(char *)(iVar2 + 0xbf) != '\0')) &&
          (*(char *)(iVar2 + 0xc0) == '\0')) && (*(char *)(iVar2 + 0x42) == '\x04')) {
        uVar10 = FUN_ram_4ff21a0a();
        uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
        if ((((*(uint *)(iVar2 + 0x6c) < uVar4) ||
             ((*(uint *)(iVar2 + 0x6c) == uVar4 && (*(uint *)(iVar2 + 0x68) < (uint)uVar10)))) ||
            ((iVar3 = FUN_ram_48092f5a(param_1,iVar2 + 0x28,iVar2 + 0x70), iVar3 == 0 ||
             ((((*(int *)(iVar2 + 0x70) != 0 && (*(int *)(iVar2 + 0x70) != iVar9)) ||
               ((*(char *)(iVar2 + 0x78) != '\0' && (0 < param_2 - *(int *)(iVar2 + 0x74))))) ||
              ((*(char *)(iVar2 + 0xb8) == '\0' || (2000 < (uint)(param_2 - *(int *)(iVar2 + 100))))
              )))))) ||
           (((char)param_1[0x230] != '\0' && (0 < param_1[0x22f] - *(int *)(iVar2 + 100))))) {
          bVar6 = *(byte *)(param_1 + 0x15f);
        }
        else {
          bVar6 = *(byte *)(param_1 + 0x15f);
          uVar8 = uVar8 + 1;
        }
      }
      bVar1 = bVar1 + 1;
      iVar7 = iVar7 + 200;
    } while (bVar1 < bVar6);
  }
  return uVar8;
}



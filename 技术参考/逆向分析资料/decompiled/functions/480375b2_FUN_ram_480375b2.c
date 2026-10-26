/* Firmware entry: 0x480375b2 */

void FUN_ram_480375b2(int param_1,int *param_2,uint param_3,int param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2[0x11] << 0xc < 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if ((char)param_2[0x10] == '\x03') {
    *(short *)(param_1 + 0x3bf8) = *(short *)(param_1 + 0x3bf8) + -1;
  }
  *(short *)(param_1 + 0x3bfa) = *(short *)(param_1 + 0x3bfa) + 1;
  *(char *)(param_2 + 0x11) = (char)param_3;
  param_2[0xc] = param_4;
  *(byte *)((int)param_2 + 0x45) = *(byte *)((int)param_2 + 0x45) & 0xfb | param_5 << 2;
  *(byte *)((int)param_2 + 0x46) = *(byte *)((int)param_2 + 0x46) | 8;
  if (param_3 < 0xb) {
    if (param_3 < 9) {
      if (param_3 == 1) {
        param_3 = 5;
      }
      else if (param_3 != 6) {
        param_3 = 7;
      }
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 < 0xe) {
    param_3 = 4;
  }
  else {
    param_3 = (param_3 == 0xe) + 7;
  }
  uVar4 = (uint)*(byte *)((int)param_2 + 0x25);
  *(char *)(param_2 + 0x10) = (char)param_3;
  if (2 < uVar4) goto LAB_ram_48037732;
  if (*(char *)((int)param_2 + 0x26) == '\x02') {
    uVar4 = uVar4 + 3 & 0xff;
  }
  iVar7 = *param_2;
  iVar8 = param_2[1];
  if (iVar7 == 0 && iVar8 == 0) {
    iVar5 = uVar4 * 4;
    iVar3 = uVar4 * 0x50 + param_1;
    uVar9 = 0;
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x3a00) == iVar7) goto LAB_ram_480377b2;
  }
  else {
    uVar9 = (uint)*(ushort *)(param_2 + 0xf);
    if (uVar9 < 0x1ff) {
      uVar2 = iVar7 << 9 | uVar9 + 1;
    }
    else {
      uVar9 = 0;
      uVar2 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    iVar5 = uVar4 * 4;
    iVar3 = uVar4 * 0x50 + param_1;
    if (*(int *)(iVar3 + 0x3a00) == iVar7) {
LAB_ram_480377b2:
      iVar5 = uVar4 << 2;
      if (((*(int *)(iVar3 + 0x3a04) == iVar8) && (*(uint *)(iVar3 + 0x3a08) == uVar2)) &&
         (*(ushort *)(iVar3 + 0x3a0c) == uVar9)) {
        *(undefined4 *)(iVar3 + 0x3a00) = 0;
        *(undefined4 *)(iVar3 + 0x3a04) = 0;
        *(undefined4 *)(iVar3 + 0x3a08) = 0;
        *(undefined4 *)(iVar3 + 0x3a0c) = 0;
      }
    }
  }
  piVar6 = (int *)((iVar5 + uVar4) * 0x10 + 0x3a00 + param_1);
  bVar1 = (byte)(1 << (uVar4 & 0x1f));
  if (((*piVar6 != 0 || piVar6[1] != 0) && (piVar6[2] != 0)) &&
     ((uVar4 = (uint)*(ushort *)(piVar6 + 3), uVar4 < 0xce &&
      (iVar7 = uVar4 * 0x48 + param_1, (*(ushort *)(iVar7 + 0x56) & 1) != 0)))) {
    iVar8 = *(int *)(iVar7 + 0x10);
    if (((iVar8 != 0 || *(int *)(iVar7 + 0x14) != 0) &&
        (uVar9 = (uint)*(ushort *)(iVar7 + 0x4c), uVar9 < 0x1ff)) &&
       ((*piVar6 == iVar8 &&
        ((((piVar6[1] == *(int *)(iVar7 + 0x14) && (piVar6[2] == (iVar8 << 9 | uVar9 + 1))) &&
          (uVar4 == uVar9)) &&
         ((iVar7 = uVar4 * 0x48 + param_1, -1 < *(int *)(iVar7 + 0x54) << 0xc &&
          (*(byte *)(iVar7 + 0x50) < 2)))))))) {
      *(byte *)(param_1 + 0x3bee) = *(byte *)(param_1 + 0x3bee) | bVar1;
      goto LAB_ram_48037732;
    }
  }
  *(byte *)(param_1 + 0x3bee) = *(byte *)(param_1 + 0x3bee) & ~bVar1;
LAB_ram_48037732:
  *(undefined2 *)((int)param_2 + 0x3e) = 0xffff;
  if (*(ushort *)(param_1 + 0x3bec) == 0xffff) {
    *(short *)(param_1 + 0x3bea) = (short)param_2[0xf];
  }
  else {
    *(short *)((uint)*(ushort *)(param_1 + 0x3bec) * 0x48 + param_1 + 0x4e) = (short)param_2[0xf];
  }
  *(short *)(param_1 + 0x3bec) = (short)param_2[0xf];
  return;
}



/* Firmware entry: 0x48044d4c */

void FUN_ram_48044d4c(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)*(byte *)((int)param_2 + 0x25);
  if (2 < uVar5) {
    return;
  }
  if (*(char *)((int)param_2 + 0x26) == '\x02') {
    iVar8 = *param_2;
    iVar9 = param_2[1];
    uVar5 = uVar5 + 3 & 0xff;
    if (iVar8 != 0 || iVar9 != 0) goto LAB_ram_48044e4c;
LAB_ram_48044d6c:
    uVar2 = 0;
    uVar3 = 0;
LAB_ram_48044d70:
    iVar6 = uVar5 * 4;
    iVar4 = uVar5 * 0x50 + param_1;
    if (*(int *)(iVar4 + 0x3a00) != iVar8) goto LAB_ram_48044d88;
  }
  else {
    iVar8 = *param_2;
    iVar9 = param_2[1];
    if (iVar8 == 0 && iVar9 == 0) goto LAB_ram_48044d6c;
LAB_ram_48044e4c:
    uVar2 = (uint)*(ushort *)(param_2 + 0xf);
    if (uVar2 < 0x1ff) {
      uVar3 = iVar8 << 9 | uVar2 + 1;
      goto LAB_ram_48044d70;
    }
    iVar6 = uVar5 * 4;
    iVar4 = uVar5 * 0x50 + param_1;
    uVar2 = 0;
    uVar3 = 0;
    iVar9 = 0;
    if (*(int *)(iVar4 + 0x3a00) != 0) goto LAB_ram_48044d88;
  }
  if (((*(int *)(iVar4 + 0x3a04) == iVar9) && (*(uint *)(iVar4 + 0x3a08) == uVar3)) &&
     (*(ushort *)(iVar4 + 0x3a0c) == uVar2)) {
    *(undefined4 *)(iVar4 + 0x3a00) = 0;
    *(undefined4 *)(iVar4 + 0x3a04) = 0;
    *(undefined4 *)(iVar4 + 0x3a08) = 0;
    *(undefined4 *)(iVar4 + 0x3a0c) = 0;
  }
LAB_ram_48044d88:
  piVar7 = (int *)((iVar6 + uVar5) * 0x10 + 0x3a00 + param_1);
  bVar1 = (byte)(1 << (uVar5 & 0x1f));
  if (((*piVar7 != 0 || piVar7[1] != 0) && (piVar7[2] != 0)) &&
     ((uVar5 = (uint)*(ushort *)(piVar7 + 3), uVar5 < 0xce &&
      (iVar8 = uVar5 * 0x48 + param_1, (*(ushort *)(iVar8 + 0x56) & 1) != 0)))) {
    iVar9 = *(int *)(iVar8 + 0x10);
    if (((iVar9 != 0 || *(int *)(iVar8 + 0x14) != 0) &&
        (uVar2 = (uint)*(ushort *)(iVar8 + 0x4c), uVar2 < 0x1ff)) &&
       ((*piVar7 == iVar9 &&
        ((((piVar7[1] == *(int *)(iVar8 + 0x14) && (piVar7[2] == (iVar9 << 9 | uVar2 + 1))) &&
          (uVar5 == uVar2)) &&
         ((iVar8 = uVar5 * 0x48 + param_1, -1 < *(int *)(iVar8 + 0x54) << 0xc &&
          (*(byte *)(iVar8 + 0x50) < 2)))))))) {
      *(byte *)(param_1 + 0x3bee) = bVar1 | *(byte *)(param_1 + 0x3bee);
      return;
    }
  }
  *(byte *)(param_1 + 0x3bee) = *(byte *)(param_1 + 0x3bee) & ~bVar1;
  return;
}



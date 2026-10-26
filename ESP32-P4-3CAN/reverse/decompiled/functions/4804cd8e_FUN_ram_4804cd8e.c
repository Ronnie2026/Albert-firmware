/* Firmware entry: 0x4804cd8e */

void FUN_ram_4804cd8e(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x66) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x66) < '\0') {
    sVar1 = *(short *)(param_1 + 0x62);
    sVar2 = *(short *)(param_1 + 2);
    sVar3 = *(short *)(param_1 + 4);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x62);
    sVar2 = *(short *)(param_1 + 6);
    sVar3 = *(short *)(param_1 + 8);
  }
  iVar9 = (int)sVar1;
  iVar5 = (int)sVar3;
  iVar4 = (int)sVar2;
  if (iVar9 != 0) {
    if (iVar9 < iVar4) {
      *(short *)(param_1 + 0x62) = sVar2;
      goto LAB_ram_4804cef2;
    }
    if (iVar5 < iVar9) {
      *(short *)(param_1 + 0x62) = sVar3;
      if (iVar5 <= iVar4) goto LAB_ram_4804cef2;
    }
    else {
      if (iVar9 <= iVar4) goto LAB_ram_4804cef2;
      if (iVar9 < iVar5) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    }
    goto LAB_ram_4804cee0;
  }
  uVar6 = *(uint *)(param_1 + 0x78);
  if (uVar6 == 0) {
    if (param_2 == 0x9e3779b9) {
      uVar7 = 0x80e2;
      uVar12 = 0x45df792a;
      uVar6 = 0x3c3e8d40;
      uVar11 = 0x79e1f46a;
    }
    else {
      uVar6 = (param_2 ^ 0x9e3779b9) << 0xd ^ param_2 ^ 0x9e3779b9;
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar7 = uVar6 << 5 ^ uVar6;
      uVar13 = uVar7 & 0xffff;
      if (uVar6 << 5 != uVar6) goto LAB_ram_4804cee8;
LAB_ram_4804cdf8:
      uVar6 = param_2 ^ 0x9e3779b9;
      uVar7 = uVar6 << 0xd;
LAB_ram_4804ce06:
      uVar11 = (uVar6 ^ uVar7) >> 0x11 ^ uVar6 ^ uVar7;
      uVar6 = uVar11 << 5;
      uVar12 = uVar11 ^ uVar6;
      uVar7 = (uVar12 & 0xffff) + uVar13 >> 1;
    }
  }
  else {
    uVar6 = uVar6 << 0xd ^ uVar6;
    uVar6 = uVar6 ^ uVar6 >> 0x11;
    uVar7 = uVar6 ^ uVar6 << 5;
    uVar13 = uVar7 & 0xffff;
    if (uVar6 != uVar6 << 5) {
LAB_ram_4804cee8:
      uVar6 = uVar7 << 0xd;
      goto LAB_ram_4804ce06;
    }
    if (param_2 != 0x9e3779b9) goto LAB_ram_4804cdf8;
    uVar7 = (uVar13 >> 1) + 0x444d;
    uVar12 = 0x28f2889a;
    uVar6 = 0xad9e7b40;
    uVar11 = 0x856cf3da;
  }
  *(uint *)(param_1 + 0x78) = uVar12;
  iVar9 = (((iVar5 - iVar4) * uVar7) / 0xffff + iVar4) * 0x10000;
  iVar10 = iVar9 >> 0x10;
  *(short *)(param_1 + 0x62) = (short)((uint)iVar9 >> 0x10);
  if (iVar10 <= iVar4) {
LAB_ram_4804cef2:
    *(undefined1 *)(param_1 + 100) = 1;
    return;
  }
  if (iVar5 <= iVar10) {
LAB_ram_4804cee0:
    *(undefined1 *)(param_1 + 100) = 0xff;
    return;
  }
  if (uVar11 == uVar6) {
    if (param_2 == 0x9e3779b9) {
      uVar12 = 0x28f2889a;
      bVar8 = 0xff;
      goto LAB_ram_4804ce7e;
    }
    uVar12 = param_2 ^ 0x9e3779b9;
  }
  uVar12 = uVar12 << 0xd ^ uVar12;
  uVar12 = uVar12 ^ uVar12 >> 0x11;
  bVar8 = ((byte)uVar12 & 1) - 1 | 1;
  uVar12 = uVar12 ^ uVar12 << 5;
LAB_ram_4804ce7e:
  *(uint *)(param_1 + 0x78) = uVar12;
  *(byte *)(param_1 + 100) = bVar8;
  return;
}



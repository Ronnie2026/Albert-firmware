/* Firmware entry: 0x4804c858 */

void FUN_ram_4804c858(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined1 *)(param_1 + 0x7d) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb2) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0xb09;
    *(undefined2 *)(param_1 + 100) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined2 *)(param_1 + 0x56) = 3;
  if ((*(int *)(param_1 + 0x20) != 0) || (iVar1 = 0, *(int *)(param_1 + 0x24) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x78);
    if (uVar5 == 0) {
      if (param_3 == 0x9e3779b9) {
        uVar2 = 0x80e2;
        uVar5 = 0x45df792a;
      }
      else {
        uVar5 = (param_3 ^ 0x9e3779b9) << 0xd ^ param_3 ^ 0x9e3779b9;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar9 = uVar5 << 5 ^ uVar5;
        uVar2 = uVar9 & 0xffff;
        if (uVar5 << 5 != uVar5) goto LAB_ram_4804cb00;
LAB_ram_4804c976:
        uVar5 = param_3 ^ 0x9e3779b9;
        uVar9 = uVar5 << 0xd;
LAB_ram_4804c984:
        uVar5 = (uVar9 ^ uVar5) >> 0x11 ^ uVar9 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        uVar2 = (uVar5 & 0xffff) + uVar2 >> 1;
      }
    }
    else {
      uVar5 = uVar5 << 0xd ^ uVar5;
      uVar5 = uVar5 ^ uVar5 >> 0x11;
      uVar9 = uVar5 ^ uVar5 << 5;
      uVar2 = uVar9 & 0xffff;
      if (uVar5 != uVar5 << 5) {
LAB_ram_4804cb00:
        uVar5 = uVar9 << 0xd;
        goto LAB_ram_4804c984;
      }
      if (param_3 != 0x9e3779b9) goto LAB_ram_4804c976;
      uVar2 = (uVar2 >> 1) + 0x444d;
      uVar5 = 0x28f2889a;
    }
    uVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    uVar9 = uVar8 * uVar2;
    *(uint *)(param_1 + 0x78) = uVar5;
    uVar5 = (int)((ulonglong)uVar8 * (ulonglong)uVar2 >> 0x20) + uVar9;
    iVar1 = *(int *)(param_1 + 0x18) + (uVar9 - (uVar5 + (uVar5 < uVar9)) % 0xffff) * -0x10001;
  }
  *(int *)(param_1 + 0x74) = iVar1;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  if (*(char *)(param_1 + 0x66) == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(char *)(param_1 + 0x66) < '\0') {
    uVar5 = *(uint *)(param_1 + 0x78);
    iVar4 = (int)*(short *)(param_1 + 2);
    iVar1 = (int)*(short *)(param_1 + 4);
    if (uVar5 == 0) goto LAB_ram_4804c8b6;
LAB_ram_4804ca68:
    uVar5 = uVar5 ^ uVar5 << 0xd;
    uVar5 = uVar5 ^ uVar5 >> 0x11;
    uVar2 = uVar5 ^ uVar5 << 5;
    uVar10 = uVar2 & 0xffff;
    if (uVar5 != uVar5 << 5) goto LAB_ram_4804cb16;
    if (param_3 != 0x9e3779b9) {
LAB_ram_4804c8e4:
      uVar5 = param_3 ^ 0x9e3779b9;
      uVar2 = uVar5 << 0xd;
      goto LAB_ram_4804c8f2;
    }
    uVar2 = (uVar10 >> 1) + 0x444d;
    uVar9 = 0x28f2889a;
    uVar5 = 0xad9e7b40;
    uVar8 = 0x856cf3da;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x78);
    iVar4 = (int)*(short *)(param_1 + 6);
    iVar1 = (int)*(short *)(param_1 + 8);
    if (uVar5 != 0) goto LAB_ram_4804ca68;
LAB_ram_4804c8b6:
    if (param_3 == 0x9e3779b9) {
      uVar2 = 0x80e2;
      uVar9 = 0x45df792a;
      uVar5 = 0x3c3e8d40;
      uVar8 = 0x79e1f46a;
      goto LAB_ram_4804c90e;
    }
    uVar5 = (param_3 ^ 0x9e3779b9) << 0xd ^ param_3 ^ 0x9e3779b9;
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar2 = uVar5 << 5 ^ uVar5;
    uVar10 = uVar2 & 0xffff;
    if (uVar5 << 5 == uVar5) goto LAB_ram_4804c8e4;
LAB_ram_4804cb16:
    uVar5 = uVar2 << 0xd;
LAB_ram_4804c8f2:
    uVar8 = (uVar5 ^ uVar2) >> 0x11 ^ uVar5 ^ uVar2;
    uVar5 = uVar8 << 5;
    uVar9 = uVar8 ^ uVar5;
    uVar2 = (uVar9 & 0xffff) + uVar10 >> 1;
  }
LAB_ram_4804c90e:
  *(uint *)(param_1 + 0x78) = uVar9;
  iVar6 = (((iVar1 - iVar4) * uVar2) / 0xffff + iVar4) * 0x10000;
  iVar7 = iVar6 >> 0x10;
  *(short *)(param_1 + 0x62) = (short)((uint)iVar6 >> 0x10);
  if (iVar7 <= iVar4) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (iVar1 <= iVar7) {
    *(undefined1 *)(param_1 + 100) = 0xff;
    return;
  }
  if (uVar8 == uVar5) {
    if (param_3 == 0x9e3779b9) {
      uVar9 = 0x28f2889a;
      bVar3 = 0xff;
      goto LAB_ram_4804ca52;
    }
    uVar9 = param_3 ^ 0x9e3779b9;
  }
  uVar9 = uVar9 << 0xd ^ uVar9;
  uVar9 = uVar9 ^ uVar9 >> 0x11;
  bVar3 = ((byte)uVar9 & 1) - 1 | 1;
  uVar9 = uVar9 ^ uVar9 << 5;
LAB_ram_4804ca52:
  *(uint *)(param_1 + 0x78) = uVar9;
  *(byte *)(param_1 + 100) = bVar3;
  return;
}



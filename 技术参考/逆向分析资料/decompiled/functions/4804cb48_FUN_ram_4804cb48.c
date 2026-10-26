/* Firmware entry: 0x4804cb48 */

void FUN_ram_4804cb48(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined2 *)(param_1 + 0x56) = 6;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  if (uVar5 == 0) {
    uVar5 = 0x4dab;
    uVar3 = 0xe02e553e;
  }
  else {
    uVar3 = uVar5 << 0xd ^ uVar5;
    uVar3 = uVar3 ^ uVar3 >> 0x11;
    uVar9 = uVar3 ^ uVar3 << 5;
    if (uVar3 == uVar3 << 5) {
      if (uVar5 == 0x9e3779b9) {
        uVar5 = ((uVar9 & 0xffff) >> 1) + 0x444d;
        uVar3 = 0x28f2889a;
        goto LAB_ram_4804cbba;
      }
      uVar3 = (uVar5 ^ 0x9e3779b9) << 0xd ^ uVar5 ^ 0x9e3779b9;
    }
    else {
      uVar3 = uVar9 << 0xd ^ uVar9;
    }
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    uVar3 = uVar3 << 5 ^ uVar3;
    uVar5 = (uVar3 & 0xffff) + (uVar9 & 0xffff) >> 1;
  }
LAB_ram_4804cbba:
  uVar7 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  uVar9 = uVar7 * uVar5;
  *(uint *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar5 = (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20) + uVar9;
  *(uint *)(param_1 + 0x74) =
       *(int *)(param_1 + 0x30) + (uVar9 - (uVar5 + (uVar5 < uVar9)) % 0xffff) * -0x10001;
  if (*(char *)(param_1 + 0x7d) != -1) {
    *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + '\x01';
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_ram_4804cc56;
    *(undefined1 *)(param_1 + 0x58) = 5;
    goto LAB_ram_4804cc20;
  }
  cVar6 = *(char *)(param_1 + 0x66);
  iVar8 = (int)cVar6;
  sVar1 = *(short *)(param_1 + 0x12);
  sVar2 = *(short *)(param_1 + 0x14);
  if (iVar8 == 0) {
    if (sVar2 == 0) {
      if (sVar1 == 0) goto LAB_ram_4804cc90;
      cVar6 = '\x01';
      goto LAB_ram_4804ccec;
    }
    if (sVar1 != 0) {
LAB_ram_4804cc90:
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      *(undefined2 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x65) = 0;
      return;
    }
    cVar6 = -1;
LAB_ram_4804ccca:
    *(char *)(param_1 + 0x88) = cVar6;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(short *)(param_1 + 0x8c) = sVar2;
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    if (sVar1 == 0) goto LAB_ram_4804cc4a;
    uVar4 = 3;
  }
  else {
    if (iVar8 < 0) {
      if (sVar2 != 0) goto LAB_ram_4804ccca;
      iVar8 = iVar8 * -0x1000000 >> 0x18;
      if (iVar8 < 0) {
        iVar8 = 1;
      }
      cVar6 = (char)iVar8;
      if (sVar1 == 0) goto LAB_ram_4804cc90;
LAB_ram_4804ccec:
      *(char *)(param_1 + 0x88) = cVar6;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(short *)(param_1 + 0x8c) = sVar1;
      *(undefined2 *)(param_1 + 0x8e) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      if (sVar2 != 0) {
        uVar4 = 3;
        goto LAB_ram_4804cc4c;
      }
    }
    else {
      if (sVar1 != 0) goto LAB_ram_4804ccec;
      if (sVar2 == 0) goto LAB_ram_4804cc90;
      *(char *)(param_1 + 0x88) = -cVar6;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(short *)(param_1 + 0x8c) = sVar2;
      *(undefined2 *)(param_1 + 0x8e) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
    }
LAB_ram_4804cc4a:
    uVar4 = 4;
  }
LAB_ram_4804cc4c:
  *(undefined1 *)(param_1 + 0x58) = uVar4;
  if (*(char *)(param_1 + 0x88) != '\0') {
LAB_ram_4804cc56:
    cVar6 = '\x04';
    if (*(short *)(param_1 + 0x14) != 0) {
      cVar6 = (*(short *)(param_1 + 0x12) == 0) + '\x03';
    }
    *(char *)(param_1 + 0x58) = cVar6;
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x65) = 0;
    return;
  }
LAB_ram_4804cc20:
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}



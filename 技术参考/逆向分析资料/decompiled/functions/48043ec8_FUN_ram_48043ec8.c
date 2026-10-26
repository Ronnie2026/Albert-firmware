/* Firmware entry: 0x48043ec8 */

void FUN_ram_48043ec8(int param_1,int param_2,int param_3,int param_4,uint param_5,byte param_6,
                     uint param_7,uint param_8,byte param_9,byte param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  byte bStack_27;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bStack_27 = (byte)(param_5 >> 8);
  if (param_3 == 0) {
    if (param_4 != 0) {
      uVar6 = (uint)bStack_27;
      uVar11 = (uint)*(byte *)(param_2 + 6);
      uVar10 = (uint)*(byte *)(param_2 + 7);
      uVar9 = (uint)*(byte *)(param_2 + 8);
      bVar5 = *(byte *)(param_2 + 9);
      if (100 < uVar6) {
        uVar6 = 100;
      }
      iVar8 = 100 - uVar6;
      bVar13 = *(byte *)(param_2 + 5) & 1;
      iVar12 = 0;
      bVar4 = false;
      if ((*(byte *)(param_2 + 5) & 6) != 0) {
        uVar7 = bVar5 & 0x7f;
        goto LAB_ram_48043f44;
      }
      goto LAB_ram_48043f9e;
    }
  }
  else {
    iVar8 = param_7 * 5 + param_1;
    bVar1 = *(byte *)(iVar8 + 0x1a);
    uVar11 = (uint)bVar1;
    bVar2 = *(byte *)(iVar8 + 0x1b);
    uVar10 = (uint)bVar2;
    bVar3 = *(byte *)(iVar8 + 0x1c);
    uVar9 = (uint)bVar3;
    uVar7 = (uint)*(byte *)(iVar8 + 0x19);
    bVar5 = *(byte *)(param_2 + 9);
    bVar13 = *(byte *)(param_2 + 5) & 1;
    if (*(char *)(iVar8 + 0x18) == '\0') {
      *(byte *)(param_2 + 6) = bVar1;
      *(byte *)(param_2 + 7) = bVar2;
      *(byte *)(param_2 + 8) = bVar3;
      *(byte *)(param_2 + 9) = bVar5 & 0x80;
      *(byte *)(param_2 + 5) = bVar13;
      return;
    }
    if (param_4 == 0) {
      *(byte *)(param_2 + 9) = *(byte *)(iVar8 + 0x19) & 0x7f | bVar5 & 0x80;
      *(byte *)(param_2 + 5) = bVar13 | 2;
      *(byte *)(param_2 + 6) = bVar1;
      *(byte *)(param_2 + 7) = bVar2;
      *(byte *)(param_2 + 8) = bVar3;
    }
    else {
      uVar6 = (uint)bStack_27;
      if (100 < uVar6) {
        uVar6 = 100;
      }
      iVar8 = 100 - uVar6;
LAB_ram_48043f44:
      iVar12 = uVar7 * iVar8;
      bVar4 = true;
LAB_ram_48043f9e:
      if ((bVar4) || (bStack_27 != 0)) {
        bVar13 = bVar13 | 2;
      }
      *(byte *)(param_2 + 9) =
           (byte)(((param_5 & 0xff) * uVar6 + 0x32 + iVar12) / 100) & 0x7f | bVar5 & 0x80;
      *(byte *)(param_2 + 5) = bVar13;
      *(char *)(param_2 + 6) =
           (char)(((param_5 >> 0x10 & 0xff) * uVar6 + 0x32 + uVar11 * iVar8) / 100);
      *(char *)(param_2 + 7) = (char)(((param_5 >> 0x18) * uVar6 + 0x32 + uVar10 * iVar8) / 100);
      *(char *)(param_2 + 8) = (char)((param_6 * uVar6 + 0x32 + uVar9 * iVar8) / 100);
      if (param_4 != 0) goto LAB_ram_48044038;
    }
  }
  if ((*(char *)(param_1 + 0xb4) != '\0') &&
     ((*(byte *)(param_1 + 0x4c) >> (param_7 & 0x1f) & 1) != 0)) {
    bVar5 = *(byte *)(param_2 + 5);
    iVar8 = param_7 * 5 + param_1;
    uVar6 = (uint)*(byte *)(iVar8 + 0xe9);
    bVar13 = *(byte *)(iVar8 + 0xe8);
    bVar1 = *(byte *)(iVar8 + 0xea);
    bVar2 = *(byte *)(iVar8 + 0xeb);
    bVar3 = *(byte *)(iVar8 + 0xec);
    *(byte *)(param_2 + 5) = bVar5 & 1 | 2;
    if (100 < uVar6) {
      uVar6 = 100;
    }
    iVar12 = 100 - uVar6;
    *(char *)(param_2 + 6) =
         (char)(((uint)*(byte *)(param_2 + 6) * iVar12 + bVar1 * uVar6 + 0x32) / 100);
    bVar1 = *(byte *)(param_2 + 9) & 0x80;
    *(char *)(param_2 + 7) =
         (char)(((uint)*(byte *)(param_2 + 7) * iVar12 + bVar2 * uVar6 + 0x32) / 100);
    iVar8 = 0;
    *(char *)(param_2 + 8) =
         (char)(((uint)*(byte *)(param_2 + 8) * iVar12 + bVar3 * uVar6 + 0x32) / 100);
    if ((bVar5 & 6) != 0) {
      iVar8 = (*(byte *)(param_2 + 9) & 0x7f) * iVar12;
    }
    bVar5 = (byte)((bVar13 * uVar6 + 0x32 + iVar8) / 100);
    *(byte *)(param_2 + 9) = bVar1 | bVar5;
    if (*(char *)(param_7 * 5 + param_1 + 0x18) == '\0') {
      *(byte *)(param_2 + 9) = bVar1 | bVar5 & 0x80;
    }
  }
LAB_ram_48044038:
  uVar6 = 1 << (param_7 & 0x1f);
  uVar9 = uVar6 & 0xff;
  if (((param_9 & uVar6) != 0) && ((3 < param_7 || ((uVar9 & param_8) == 0)))) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 1 | 2;
    bVar5 = *(byte *)(param_2 + 9) & 0x80;
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 0xe);
    if ((uVar9 & param_10) != 0) {
      bVar5 = bVar5 | *(byte *)(param_1 + 10);
    }
    *(byte *)(param_2 + 9) = bVar5;
    return;
  }
  if ((param_8 >> (param_7 & 0x1f) & 1) != 0) {
    *(undefined1 *)(param_2 + 8) = 0;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 1 | 2;
    *(undefined2 *)(param_2 + 6) = 0xff;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0x80 | *(byte *)(param_1 + 3);
  }
  return;
}



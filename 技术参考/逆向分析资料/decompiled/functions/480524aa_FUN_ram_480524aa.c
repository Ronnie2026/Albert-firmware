/* Firmware entry: 0x480524aa */

void FUN_ram_480524aa(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_2 + 0xd) != '\x02') {
    return;
  }
  if (*(byte *)(param_2 + 1) < 8) {
    return;
  }
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  iVar10 = *param_2;
  if (iVar10 == 0x132) {
    pbVar2 = (byte *)((int)param_2 + 5);
    uVar9 = 0;
    uVar5 = 0;
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      iVar10 = uVar9 - 0x20;
      uVar8 = uVar9 & 0x1f;
      uVar9 = uVar9 + 8;
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 | (uint)bVar1 << uVar8 & iVar10 >> 0x1f;
    } while (uVar9 != 0x40);
    uVar9 = uVar5 & 0xffff;
    uVar11 = 0;
    uVar8 = 0;
    do {
      if ((int)(uVar11 - 0x20) < 0) {
        uVar6 = (uint)*pbVar2 << (uVar11 & 0x1f);
      }
      else {
        uVar6 = 0;
      }
      uVar11 = uVar11 + 8;
      uVar8 = uVar8 | uVar6;
      pbVar2 = pbVar2 + 1;
    } while (uVar11 != 0x40);
    iVar10 = (int)uVar8 >> 0x10;
    if (iVar10 == -0x8000) {
      uVar11 = 0x7fff;
      iVar7 = 0;
      uVar8 = uVar11;
    }
    else {
      uVar11 = iVar10 * -0x10000 >> 0x10;
      iVar7 = -iVar10 >> 0x1f;
      uVar8 = -iVar10;
    }
    *(short *)(param_1 + 0x7e) = (short)uVar5;
    *(short *)(param_1 + 0x80) = (short)uVar11;
    uVar3 = __divdi3(uVar9 * uVar8,
                     (int)((ulonglong)uVar9 * (ulonglong)uVar8 >> 0x20) + iVar7 * uVar9,1000,0);
    *(undefined4 *)(param_1 + 0x60) = param_3;
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  else if (iVar10 == 0x292) {
    pbVar4 = (byte *)((int)param_2 + 5);
    uVar9 = 0;
    uVar5 = 0;
    do {
      if ((int)(uVar9 - 0x20) < 0) {
        uVar8 = (uint)*pbVar4 << (uVar9 & 0x1f);
      }
      else {
        uVar8 = 0;
      }
      uVar9 = uVar9 + 8;
      uVar5 = uVar5 | uVar8;
      pbVar4 = pbVar4 + 1;
    } while (uVar9 != 0x40);
    *(ushort *)(param_1 + 0x7c) = (ushort)(uVar5 >> 10) & 0x3ff;
    *(undefined4 *)(param_1 + 0x5c) = param_3;
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  else if (iVar10 == 0x2e1) {
    pbVar2 = (byte *)((int)param_2 + 5);
    uVar9 = 0;
    uVar5 = 0;
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      iVar10 = uVar9 - 0x20;
      uVar8 = uVar9 & 0x1f;
      uVar9 = uVar9 + 8;
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 | (uint)bVar1 << uVar8 & iVar10 >> 0x1f;
    } while (uVar9 != 0x40);
    if ((uVar5 & 7) == 0) {
      uVar5 = 0;
      iVar10 = 0;
      do {
        if ((int)(iVar10 - 0x20U) < 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*pbVar2 << (iVar10 - 0x20U & 0x1f);
        }
        iVar10 = iVar10 + 8;
        uVar5 = uVar5 | uVar9;
        pbVar2 = pbVar2 + 1;
      } while (iVar10 != 0x40);
      *(byte *)(param_1 + 0x2c) = (byte)(uVar5 >> 0x1f);
      *(undefined4 *)(param_1 + 0x54) = param_3;
      *(undefined4 *)(param_1 + 0x50) = param_3;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      if (*(char *)(param_1 + 0x25) != '\0') {
        *(undefined1 *)(param_1 + 0x2b) = 1;
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
    }
  }
  else if (iVar10 == 0x312) {
    pbVar2 = (byte *)((int)param_2 + 5);
    iVar10 = 0;
    uVar5 = 0;
    pbVar4 = pbVar2;
    do {
      if ((int)(iVar10 - 0x20U) < 0) {
        uVar9 = (uint)(byte)((*pbVar4 >> 1) >> (0x1fU - iVar10 & 0x1f));
      }
      else {
        uVar9 = (uint)*pbVar4 << (iVar10 - 0x20U & 0x1f);
      }
      iVar10 = iVar10 + 8;
      uVar5 = uVar5 | uVar9;
      pbVar4 = pbVar4 + 1;
    } while (iVar10 != 0x40);
    *(ushort *)(param_1 + 0x76) = ((ushort)(uVar5 >> 3) & 0x1ff) * 0x19 + -0x9c4;
    iVar10 = 0;
    uVar5 = 0;
    pbVar4 = pbVar2;
    do {
      if ((int)(iVar10 - 0x20U) < 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)*pbVar4 << (iVar10 - 0x20U & 0x1f);
      }
      iVar10 = iVar10 + 8;
      uVar5 = uVar5 | uVar9;
      pbVar4 = pbVar4 + 1;
    } while (iVar10 != 0x40);
    *(ushort *)(param_1 + 0x78) = ((ushort)(uVar5 >> 0xc) & 0x1ff) * 0x19 + -0x9c4;
    iVar10 = 0;
    uVar5 = 0;
    do {
      if ((int)(iVar10 - 0x20U) < 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)*pbVar2 << (iVar10 - 0x20U & 0x1f);
      }
      iVar10 = iVar10 + 8;
      uVar5 = uVar5 | uVar9;
      pbVar2 = pbVar2 + 1;
    } while (iVar10 != 0x40);
    *(undefined4 *)(param_1 + 0x58) = param_3;
    *(ushort *)(param_1 + 0x7a) = ((ushort)(uVar5 >> 0x15) & 0x1ff) * 0x19 + -0x9c4;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  FUN_ram_4ff3ee10(param_1);
  return;
}



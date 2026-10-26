/* Firmware entry: 0x4813f3aa */

void FUN_ram_4813f3aa(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = DAT_ram_4ff6e1f0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar10 = (uint)DAT_ram_4ff6e1f6;
  DAT_ram_4ff6e1ec = 0;
  bVar2 = false;
  uVar5 = 0;
  do {
    while( true ) {
      uVar4 = uVar5 & 0xffff;
      if (uVar10 <= uVar4) {
        if (bVar2) {
          DAT_ram_4ff6e1ec = (short)uVar5;
        }
        return;
      }
      uVar9 = uVar4 + 1 & 0xffff;
      if ((iVar3 == 0) || (uVar4 < DAT_ram_4ff6e1f4)) break;
      bVar6 = *(byte *)((uVar5 - DAT_ram_4ff6e1f4 & 0xff) + iVar3);
      if (bVar6 != 2) goto LAB_ram_4813f404;
LAB_ram_4813f422:
      uVar7 = uVar4 + 2 & 0xffff;
      if ((iVar3 == 0) || (uVar9 < DAT_ram_4ff6e1f4)) {
        if ((*(char *)(uVar9 + DAT_ram_4ff6e1f8 + 0x14) != '\x04') || (uVar10 <= uVar7 + 1))
        goto LAB_ram_4813f5c2;
        uVar9 = uVar4 + 3 & 0xffff;
        if (iVar3 != 0) goto joined_r0x4813f470;
        uVar5 = uVar4 + 4 & 0xffff;
        uVar8 = (ushort)*(byte *)(uVar7 + DAT_ram_4ff6e1f8 + 0x14) << 8;
LAB_ram_4813f490:
        bVar6 = *(byte *)(DAT_ram_4ff6e1f8 + uVar9 + 0x14);
      }
      else {
        if ((*(char *)((uVar9 - DAT_ram_4ff6e1f4 & 0xff) + iVar3) != '\x04') ||
           (uVar10 <= uVar7 + 1)) {
LAB_ram_4813f5c2:
          DAT_ram_4ff6e1ec = (short)((uVar4 + 2) * 0x10000 >> 0x10);
          return;
        }
        uVar9 = uVar4 + 3 & 0xffff;
joined_r0x4813f470:
        uVar5 = uVar4 + 4 & 0xffff;
        if (uVar7 < DAT_ram_4ff6e1f4) {
          bVar6 = *(byte *)(uVar7 + DAT_ram_4ff6e1f8 + 0x14);
        }
        else {
          bVar6 = *(byte *)((uVar7 - DAT_ram_4ff6e1f4 & 0xff) + iVar3);
        }
        uVar8 = (ushort)bVar6 << 8;
        if (uVar9 < DAT_ram_4ff6e1f4) goto LAB_ram_4813f490;
        bVar6 = *(byte *)((uVar9 - DAT_ram_4ff6e1f4 & 0xff) + iVar3);
      }
      uVar8 = bVar6 | uVar8;
      if (0x59f < (ushort)(uVar8 - 1)) {
        uVar8 = 0x5a0;
      }
      *(ushort *)(param_1 + 0x7e) = uVar8;
LAB_ram_4813f4b0:
      bVar2 = true;
    }
    bVar6 = *(byte *)(DAT_ram_4ff6e1f8 + uVar5 + 0x14);
    if (bVar6 == 2) goto LAB_ram_4813f422;
LAB_ram_4813f404:
    if (bVar6 < 3) {
      uVar5 = uVar5 + 1;
      bVar2 = true;
      if (bVar6 == 0) {
        DAT_ram_4ff6e1ec = (short)((uVar4 + 1) * 0x10000 >> 0x10);
        return;
      }
    }
    else if (bVar6 == 4) {
      uVar5 = uVar4 + 2 & 0xffff;
      if ((iVar3 == 0) || (uVar9 < DAT_ram_4ff6e1f4)) {
        cVar1 = *(char *)(uVar9 + DAT_ram_4ff6e1f8 + 0x14);
      }
      else {
        cVar1 = *(char *)((uVar9 - DAT_ram_4ff6e1f4 & 0xff) + iVar3);
      }
      if ((cVar1 != '\x02') || (uVar10 < uVar5)) {
        DAT_ram_4ff6e1ec = (short)((uVar4 + 2) * 0x10000 >> 0x10);
        return;
      }
      if ((DAT_ram_4ff6e1dd & 2) == 0) goto LAB_ram_4813f4b0;
      bVar2 = true;
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x1000;
    }
    else {
      if ((iVar3 == 0) || (uVar9 < DAT_ram_4ff6e1f4)) {
        bVar6 = *(byte *)(uVar9 + DAT_ram_4ff6e1f8 + 0x14);
      }
      else {
        bVar6 = *(byte *)((uVar9 - DAT_ram_4ff6e1f4 & 0xff) + iVar3);
      }
      if (bVar6 < 2) {
        DAT_ram_4ff6e1ec = (short)uVar5 + 2;
        return;
      }
      uVar5 = bVar6 + uVar4 & 0xffff;
      bVar2 = true;
    }
  } while( true );
}



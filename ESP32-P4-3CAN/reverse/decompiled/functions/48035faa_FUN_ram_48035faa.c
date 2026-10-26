/* Firmware entry: 0x48035faa */

undefined4 FUN_ram_48035faa(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint *puVar11;
  byte *local_30 [2];
  uint uStack_28;
  byte bStack_21;
  undefined1 auStack_20 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)DAT_ram_4ff5c55b < '\0') {
    if ((DAT_ram_4ff5c55b & 0x7f) == 0x20) goto LAB_ram_48035fea;
  }
  else if ((DAT_ram_4ff5c54c != 0) && (DAT_ram_4ff5c554 == 0x20)) {
LAB_ram_48035fea:
    FUN_ram_4802a8a8(local_30,"X-T2CAN-OTA-Token");
    puVar11 = (uint *)(DAT_ram_4ff5cbdc * 0x1d40 + 0x2c + DAT_ram_4ff5cbe8);
    if ((char)bStack_21 < '\0') {
      uStack_28 = bStack_21 & 0x7f;
      local_30[0] = (byte *)local_30;
    }
    else if (local_30[0] == (byte *)0x0) {
      uStack_28 = 0;
    }
    iVar6 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
    uVar7 = 0;
    if (iVar6 == 0) {
LAB_ram_480360e4:
      puVar5 = &DAT_ram_481df390;
    }
    else {
      iVar10 = 0;
      puVar1 = puVar11;
      do {
        if (*puVar1 == uStack_28) {
          if (uStack_28 == 0) {
LAB_ram_48036086:
            puVar5 = (undefined1 *)puVar11[iVar10 * 4 + 3];
            uVar7 = puVar11[iVar10 * 4 + 2];
            if (puVar5 == (undefined1 *)0x0) goto LAB_ram_480360e4;
            goto LAB_ram_48036094;
          }
          pbVar8 = (byte *)puVar1[1];
          pbVar9 = pbVar8 + uStack_28;
          pbVar2 = local_30[0];
          while( true ) {
            uVar7 = (uint)*pbVar8;
            pbVar8 = pbVar8 + 1;
            if ((uVar7 - 0x41 & 0xff) < 0x1a) {
              uVar7 = uVar7 + 0x20;
            }
            uVar4 = (uint)*pbVar2;
            pbVar2 = pbVar2 + 1;
            if ((uVar4 - 0x41 & 0xff) < 0x1a) {
              uVar4 = uVar4 + 0x20;
            }
            if (uVar4 != uVar7) break;
            if (pbVar9 == pbVar8) goto LAB_ram_48036086;
          }
        }
        iVar10 = iVar10 + 1;
        puVar1 = puVar1 + 4;
      } while (iVar10 != iVar6);
      puVar5 = &DAT_ram_481df390;
      uVar7 = 0;
    }
LAB_ram_48036094:
    FUN_ram_4802a888(auStack_20,puVar5,uVar7);
    uVar3 = FUN_ram_4802b13e(auStack_20,&DAT_ram_4ff5c54c);
    FUN_ram_4802a59e(auStack_20);
    FUN_ram_4802a59e(local_30);
    return uVar3;
  }
  return 0;
}



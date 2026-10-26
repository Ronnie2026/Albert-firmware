/* Firmware entry: 0x48076154 */

int FUN_ram_48076154(byte *param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_18;
  byte *pbStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_5 = "invalid_json";
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 < param_2) {
    return 0;
  }
  bVar8 = *param_1;
  uStack_18 = 0;
  pbVar2 = param_1 + param_2;
  if (bVar8 == 0) {
    return 0;
  }
  bVar1 = false;
  uVar10 = 0;
  uVar6 = 0;
  pbVar7 = param_1;
  do {
    while (bVar8 != 0x22) {
      if ((bVar8 & 0xdf) == 0x5b) {
        uVar6 = uVar6 + 1;
        if (0xc < uVar6) {
          return 0;
        }
LAB_ram_480761d6:
        if (param_4 < uVar10 + 1) {
          return 0;
        }
        pbVar7 = pbVar7 + 1;
        if (pbVar2 != pbVar7) {
          bVar8 = *pbVar7;
          if (bVar8 == 0) {
            return 0;
          }
          goto LAB_ram_480761ea;
        }
LAB_ram_480762c8:
        uStack_18 = uVar10 + 1;
        bVar9 = false;
        goto LAB_ram_48076242;
      }
      if ((bVar8 & 0xdf) == 0x5d) {
        if (uVar6 == 0) {
          return 0;
        }
        uVar6 = uVar6 - 1;
      }
      else if (bVar8 == 0x2c) goto LAB_ram_480761d6;
      if (pbVar2 == pbVar7 + 1) {
        bVar9 = false;
        uVar11 = uVar10;
        if (bVar1) goto LAB_ram_480762a0;
        goto LAB_ram_48076242;
      }
      pbVar7 = pbVar7 + 1;
      bVar8 = *pbVar7;
      if (bVar8 == 0) {
        return 0;
      }
    }
    uVar11 = uVar10 + 1;
    if (param_4 < uVar11) {
      return 0;
    }
    pbVar5 = pbVar7 + 1;
    if (pbVar2 == pbVar5) {
LAB_ram_4807629e:
      bVar9 = true;
LAB_ram_480762a0:
      uStack_18 = uVar11;
LAB_ram_48076242:
      if (uVar6 != 0) {
        return 0;
      }
      if (bVar9) {
        return 0;
      }
      pbStack_14 = (byte *)0x0;
      iVar3 = FUN_ram_48129b06(param_1,param_2,&pbStack_14);
      pbVar7 = pbStack_14;
      pbVar5 = pbStack_14;
      if (iVar3 == 0) {
        return 0;
      }
      break;
    }
    bVar8 = pbVar7[1];
    if (bVar8 == 0) {
      return 0;
    }
    if (bVar8 == 0x5c) goto LAB_ram_4807621e;
    while (bVar8 != 0x22) {
      pbVar5 = pbVar5 + 1;
      if (bVar8 < 0x20) {
        return 0;
      }
      while( true ) {
        if (pbVar2 == pbVar5) goto LAB_ram_4807629e;
        bVar8 = *pbVar5;
        if (bVar8 == 0) {
          return 0;
        }
        if (bVar8 != 0x5c) break;
LAB_ram_4807621e:
        if (pbVar2 == pbVar5 + 1) goto LAB_ram_4807629e;
        pbVar7 = pbVar5 + 1;
        pbVar5 = pbVar5 + 2;
        if (*pbVar7 == 0) {
          return 0;
        }
      }
    }
    pbVar7 = pbVar5 + 1;
    if (pbVar2 == pbVar7) goto LAB_ram_480762c8;
    bVar8 = pbVar5[1];
    if (bVar8 == 0) {
      return 0;
    }
LAB_ram_480761ea:
    uVar10 = uVar10 + 1;
    bVar1 = true;
  } while( true );
  while( true ) {
    if (pbVar2 <= pbVar7) {
      uStack_18 = 0;
      iVar4 = FUN_ram_48075e68(iVar3,0,&uStack_18,param_4);
      if (iVar4 != 0) {
        *param_5 = &DAT_ram_481df390;
        return iVar3;
      }
      goto LAB_ram_48076280;
    }
    bVar8 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar5 = (byte *)(0x800013U >> (bVar8 - 9 & 0x1f) & 1);
    if (0x17 < (bVar8 - 9 & 0xff)) break;
    if (pbVar5 == (byte *)0x0) break;
  }
  uStack_18 = 0;
LAB_ram_48076280:
  FUN_ram_481295cc(iVar3);
  return 0;
}



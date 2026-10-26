/* Firmware entry: 0x48185930 */

undefined4
FUN_ram_48185930(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                undefined4 param_7,uint param_8,uint param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *__s;
  uint __n;
  uint uVar12;
  byte *pbVar13;
  undefined1 *puStack_294;
  undefined1 auStack_28c [12];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [128];
  byte abStack_1c0 [128];
  byte abStack_140 [268];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = abStack_140 + 0x80;
  memset(__s,0,0x80);
  if (((0x80 < param_2) || (0x40 < param_4)) || (0x40 < param_6)) {
    return 0xffffe080;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      bVar4 = false;
      goto joined_r0x48185c56;
    }
LAB_ram_48185cce:
    uVar6 = 0xffffe080;
  }
  else {
    bVar4 = param_4 != 0;
joined_r0x48185c56:
    if (param_5 == 0) {
      if (param_6 != 0) goto LAB_ram_48185cce;
      FUN_ram_4817697e(param_7);
      uVar7 = FUN_ram_48176d4c();
      if (uVar7 < 0x21) {
        memset(auStack_240,param_8 & 0xff,0x40);
        bVar5 = false;
        __n = 0x40;
      }
      else {
        memset(auStack_240,param_8 & 0xff,0x80);
        bVar5 = false;
        __n = 0x80;
      }
    }
    else {
      __n = 0x40;
      FUN_ram_4817697e(param_7);
      uVar7 = FUN_ram_48176d4c();
      if (0x20 < uVar7) {
        __n = 0x80;
      }
      memset(auStack_240,param_8 & 0xff,__n);
      bVar5 = false;
      pbVar13 = abStack_1c0;
      if ((param_6 != 0) && (bVar5 = true, uVar12 = __n, param_5 != 0)) {
        do {
          uVar10 = param_6;
          if (uVar12 < param_6) {
            uVar10 = uVar12;
          }
          FUN_ram_4ff45158(pbVar13,param_5);
          uVar12 = uVar12 - uVar10;
          pbVar13 = pbVar13 + uVar10;
        } while (uVar12 != 0);
        bVar5 = true;
      }
    }
    if ((bVar4) && (pbVar13 = abStack_140, uVar12 = __n, uVar10 = param_4, param_3 != 0)) {
      while (uVar10 != 0) {
        uVar10 = param_4;
        if (uVar12 < param_4) {
          uVar10 = uVar12;
        }
        FUN_ram_4ff45158(pbVar13,param_3,uVar10);
        pbVar13 = pbVar13 + uVar10;
        uVar12 = uVar12 - uVar10;
        uVar10 = uVar12;
      }
    }
    puStack_294 = auStack_240;
    if (param_2 == 0) {
LAB_ram_48185bc0:
      uVar6 = 0;
    }
    else {
      while (iVar8 = FUN_ram_4817697e(param_7), iVar8 != 0) {
        FUN_ram_481769e8(auStack_28c);
        iVar9 = FUN_ram_48176b18(auStack_28c,iVar8,0);
        if (iVar9 != 0) break;
        iVar9 = FUN_ram_48176bfe(auStack_28c);
        if ((iVar9 != 0) || (iVar9 = FUN_ram_48176c62(auStack_28c,puStack_294,__n), iVar9 != 0)) {
LAB_ram_48185ad6:
          FUN_ram_48176a1a(auStack_28c);
          break;
        }
        if ((bVar5) && (iVar9 = FUN_ram_48176c62(auStack_28c,abStack_1c0,__n), iVar9 != 0)) {
          FUN_ram_48176a1a(auStack_28c);
          break;
        }
        if (((bVar4) && (iVar9 = FUN_ram_48176c62(auStack_28c,abStack_140,__n), iVar9 != 0)) ||
           (iVar9 = FUN_ram_48176caa(auStack_28c,auStack_280), iVar9 != 0)) goto LAB_ram_48185ad6;
        if (1 < param_9) {
          uVar12 = 1;
          do {
            iVar9 = FUN_ram_48176cf2(iVar8,auStack_280,uVar7);
            uVar12 = uVar12 + 1;
            if (iVar9 != 0) goto LAB_ram_48185ad6;
          } while (uVar12 != param_9);
        }
        FUN_ram_48176a1a(auStack_28c);
        if (param_2 <= uVar7) {
          FUN_ram_4ff45158(param_1,auStack_280,param_2);
          goto LAB_ram_48185bc0;
        }
        param_2 = param_2 - uVar7;
        FUN_ram_4ff45158(param_1,auStack_280,uVar7);
        if (param_2 == 0) goto LAB_ram_48185bc0;
        param_1 = param_1 + uVar7;
        pbVar13 = __s;
        uVar12 = __n;
        uVar10 = uVar7;
        while (uVar10 != 0) {
          uVar10 = uVar7;
          if (uVar12 < uVar7) {
            uVar10 = uVar12;
          }
          FUN_ram_4ff45158(pbVar13,auStack_280,uVar10);
          pbVar13 = pbVar13 + uVar10;
          uVar12 = uVar12 - uVar10;
          uVar10 = uVar12;
        }
        pbVar13 = __s + (__n - 1);
        do {
          bVar3 = *pbVar13;
          pbVar11 = pbVar13 + -1;
          *pbVar13 = bVar3 + 1;
          if (bVar3 != 0xff) break;
          pbVar13 = pbVar11;
        } while (pbVar11 + (1 - (int)__s) != (byte *)0x0);
        if (bVar5) {
          pbVar11 = abStack_1c0 + __n;
          pbVar13 = __s + __n;
          uVar12 = 0;
          do {
            pbVar1 = pbVar11 + -1;
            pbVar2 = pbVar13 + -1;
            pbVar11 = pbVar11 + -1;
            pbVar13 = pbVar13 + -1;
            uVar12 = (uint)*pbVar1 + (uint)*pbVar2 + uVar12;
            *pbVar11 = (byte)uVar12;
            uVar12 = uVar12 >> 8;
          } while (abStack_1c0 != pbVar11);
        }
        if (bVar4) {
          pbVar11 = abStack_140 + __n;
          pbVar13 = __s + __n;
          uVar12 = 0;
          do {
            pbVar1 = pbVar11 + -1;
            pbVar2 = pbVar13 + -1;
            pbVar11 = pbVar11 + -1;
            pbVar13 = pbVar13 + -1;
            uVar12 = (uint)*pbVar1 + (uint)*pbVar2 + uVar12;
            *pbVar11 = (byte)uVar12;
            uVar12 = uVar12 >> 8;
          } while (abStack_140 != pbVar11);
        }
      }
      uVar6 = 0xffffff92;
    }
    FUN_ram_48178af2(abStack_1c0,0x80);
    FUN_ram_48178af2(abStack_140,0x80);
    FUN_ram_48178af2(__s,0x80);
    FUN_ram_48178af2(auStack_280,0x40);
  }
  return uVar6;
}



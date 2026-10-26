/* Firmware entry: 0x4811ec88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4811ec88(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  
  uVar8 = DAT_ram_501091dc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6b760 = 3;
  DAT_ram_4ff6dfe8 = 0;
  DAT_ram_4ff6dfec = 0;
  DAT_ram_4ff6dff8 = 0;
  uVar7 = ~DAT_ram_50109178;
  DAT_ram_4ff6b770 = 0x103;
  DAT_ram_4ff6e008 = 0;
  DAT_ram_4ff6e00c = 0;
  DAT_ram_4ff6e010 = 0;
  DAT_ram_4ff6e014 = 0;
  DAT_ram_4ff6e000 = 0;
  DAT_ram_4ff6e004 = 0;
  DAT_ram_4ff6e018 = 0;
  DAT_ram_4ff6e01c = 0;
  DAT_ram_4ff6dff4 = 0;
  DAT_ram_4ff6b764 = 1;
  DAT_ram_50109178 = 0xfffffffe;
  if (uVar7 == DAT_ram_5010917c) {
    DAT_ram_4ff6b764 = uVar7 + 1;
    DAT_ram_50109178 = ~DAT_ram_4ff6b764;
  }
  puVar3 = &DAT_ram_50109180;
  DAT_ram_5010917c = DAT_ram_4ff6b764;
  if ((DAT_ram_50109180 == 0x50344346) && (DAT_ram_50109184 == 1)) {
    pbVar10 = (byte *)&DAT_ram_50109180;
    uVar7 = 0x811c9dc5;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar7 = (uVar7 ^ bVar1) * 0x1000193;
    } while ((uint *)pbVar10 != &DAT_ram_501091dc);
    if (DAT_ram_501091dc != uVar7) goto LAB_ram_4811ed48;
    puVar11 = &DAT_ram_4ff6b7b0;
    do {
      uVar12 = puVar3[1];
      uVar2 = puVar3[2];
      uVar5 = puVar3[3];
      *puVar11 = *puVar3;
      puVar11[1] = uVar12;
      puVar11[2] = uVar2;
      puVar11[3] = uVar5;
      puVar3 = puVar3 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar3 != &DAT_ram_501091e0);
    DAT_ram_4ff6b775 = '\x01';
    DAT_ram_4ff6b814 = 2;
    if (((((((_DAT_ram_50109050 == 0x50344345) && (DAT_ram_4ff6b814 = 3, DAT_ram_50109054 == 1)) &&
           (DAT_ram_50109058 == DAT_ram_50109188)) &&
          ((uVar8 == DAT_ram_5010905c &&
           (iVar6 = FUN_ram_4ff4511a(&DAT_ram_50109060,&DAT_ram_501091bc,0x20),
           iVar4 = DAT_ram_50109080, iVar6 == 0)))) &&
         ((DAT_ram_50109080 == 1 || ((DAT_ram_50109080 == 2 && (DAT_ram_50109094 < 2)))))) &&
        (DAT_ram_50109084 == 1)) && (DAT_ram_50109088 - 1U < 3)) {
      uVar8 = 0x811c9dc5;
      iVar6 = 0;
      do {
        pbVar10 = &DAT_ram_50109050 + iVar6;
        iVar6 = iVar6 + 1;
        uVar8 = (*pbVar10 ^ uVar8) * 0x1000193;
      } while (iVar6 != 0x120);
      if (DAT_ram_50109170 == uVar8) {
        puVar11 = &DAT_ram_50109080;
        puVar3 = &DAT_ram_4ff6b810;
        do {
          uVar2 = puVar11[1];
          uVar5 = puVar11[2];
          uVar12 = puVar11[3];
          *puVar3 = *puVar11;
          puVar3[1] = uVar2;
          puVar3[2] = uVar5;
          puVar3[3] = uVar12;
          puVar11 = puVar11 + 4;
          puVar3 = puVar3 + 4;
        } while (puVar11 != &DAT_ram_50109170);
        if (iVar4 == 1) {
          DAT_ram_4ff6b824 = 0xffffffff;
        }
      }
    }
  }
  else {
LAB_ram_4811ed48:
    if (DAT_ram_4ff6b775 == '\0') goto LAB_ram_4811ed50;
  }
  DAT_ram_4ff6b904 = 2;
  if ((((_DAT_ram_501099b0 == 0x50344352) &&
       (DAT_ram_4ff6b904 = 3, _DAT_ram_501099b4 == DAT_ram_501091dc)) &&
      (_DAT_ram_501099b8 == DAT_ram_50109188)) &&
     (((iVar4 = FUN_ram_4ff4511a(&DAT_ram_501099bc,&DAT_ram_501091bc,0x20), iVar4 == 0 &&
       (_DAT_ram_501099e0 - 1U < 2)) && (_DAT_ram_501099e4 == 1)))) {
    pbVar10 = &DAT_ram_501099b0;
    uVar8 = 0x811c9dc5;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar8 = (uVar8 ^ bVar1) * 0x1000193;
    } while (pbVar10 != &DAT_ram_50109b30);
    if (_DAT_ram_50109b30 == uVar8) {
      puVar11 = (undefined4 *)&DAT_ram_501099e0;
      puVar3 = &DAT_ram_4ff6b900;
      do {
        uVar2 = puVar11[1];
        uVar5 = puVar11[2];
        uVar12 = puVar11[3];
        *puVar3 = *puVar11;
        puVar3[1] = uVar2;
        puVar3[2] = uVar5;
        puVar3[3] = uVar12;
        puVar11 = puVar11 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar11 != (undefined4 *)&DAT_ram_50109b30);
    }
  }
LAB_ram_4811ed50:
  iVar4 = FUN_ram_480001f0();
  FUN_ram_4ff45158(&DAT_ram_4ff6b73c,iVar4 + 0x90,0x20);
  DAT_ram_4ff6bd68 = DAT_ram_4ff6b764;
  DAT_ram_4ff6e020 = 0;
  pbVar10 = &DAT_ram_501098b4;
  uVar8 = 0;
  if (_DAT_ram_501098b0 == 0x5034424c) goto LAB_ram_4811ee2e;
  do {
    do {
      if (uVar8 == 1) goto LAB_ram_4811edb6;
      pbVar9 = pbVar10 + 0x7c;
      pbVar10 = pbVar10 + 0x80;
      uVar8 = 1;
      if (*(int *)pbVar9 != 0x5034424c) goto LAB_ram_4811edb6;
LAB_ram_4811ee2e:
    } while ((*(int *)pbVar10 != 1) || (*(int *)(pbVar10 + 4) != DAT_ram_4ff6b764 - 1));
    uVar7 = 0x811c9dc5;
    pbVar9 = pbVar10;
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar7 = (bVar1 ^ uVar7) * 0x1000193;
    } while (pbVar10 + 0x74 != pbVar9);
  } while (*(uint *)(pbVar10 + 0x74) != uVar7);
  puVar11 = (undefined4 *)(&DAT_ram_501098b8 + uVar8 * 0x80);
  puVar3 = &DAT_ram_4ff6bcf8;
  do {
    uVar2 = puVar11[1];
    uVar12 = puVar11[2];
    uVar5 = puVar11[3];
    *puVar3 = *puVar11;
    puVar3[1] = uVar2;
    puVar3[2] = uVar12;
    puVar3[3] = uVar5;
    puVar11 = puVar11 + 4;
    puVar3 = puVar3 + 4;
  } while (puVar11 != (undefined4 *)(&DAT_ram_50109928 + uVar8 * 0x80));
  DAT_ram_4ff6e020 = uVar8 ^ 1;
  DAT_ram_4ff6bcf0 = 1;
LAB_ram_4811edb6:
  DAT_ram_4ff6bd6c = DAT_ram_4ff6b73c;
  DAT_ram_4ff6bd70 = DAT_ram_4ff6b740;
  DAT_ram_4ff6bd74 = DAT_ram_4ff6b744;
  DAT_ram_4ff6bd78 = DAT_ram_4ff6b748;
  DAT_ram_4ff6bd7c = DAT_ram_4ff6b74c;
  DAT_ram_4ff6bd80 = DAT_ram_4ff6b750;
  DAT_ram_4ff6bd84 = DAT_ram_4ff6b754;
  DAT_ram_4ff6bd88 = DAT_ram_4ff6b758;
  DAT_ram_4ff6bd8c = 1;
  DAT_ram_4ff6bd90 = cycle;
  DAT_ram_4ff6bda4 = 1;
  DAT_ram_4ff6bdb4 = cycle;
  DAT_ram_4ff6bd94 = 1;
  FUN_ram_4ff294b8();
  FUN_ram_4811f7b4(DAT_ram_4ff6b764,&DAT_ram_4ff6b73c);
  return;
}



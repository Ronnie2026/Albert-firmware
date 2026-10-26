/* Firmware entry: 0x4808b134 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_root_4808b134(void)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int local_40;
  undefined1 *puStack_3c;
  undefined8 uStack_30;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar12 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
  piVar15 = (int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
  if (iVar12 == 0) {
    iVar12 = 0;
    iVar13 = 0;
  }
  else {
    iVar14 = 0;
    piVar3 = piVar15;
    do {
      if (*piVar3 == 6) {
        pbVar4 = (byte *)piVar3[1];
        pbVar7 = (byte *)0x481cb4a8;
        uVar8 = 0x43;
        while( true ) {
          uVar5 = (uint)*pbVar4;
          pbVar7 = pbVar7 + 1;
          if ((uVar5 - 0x41 & 0xff) < 0x1a) {
            uVar5 = uVar5 + 0x20;
          }
          if ((uVar8 - 0x41 & 0xff) < 0x1a) {
            uVar8 = uVar8 + 0x20;
          }
          if (uVar8 != uVar5) break;
          pbVar4 = pbVar4 + 1;
          if (pbVar7 == (byte *)0x481cb4ae) {
            iVar13 = piVar15[iVar14 * 4 + 2];
            iVar12 = piVar15[iVar14 * 4 + 3];
            goto LAB_ram_4808b1d0;
          }
          uVar8 = (uint)*pbVar7;
        }
      }
      iVar14 = iVar14 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar12 != iVar14);
    iVar12 = 0;
    iVar13 = 0;
  }
LAB_ram_4808b1d0:
  iVar14 = FUN_ram_48025ba6();
  local_40 = iVar13;
  puStack_3c = (undefined1 *)iVar12;
  uStack_30 = FUN_ram_4808acac(iVar13,iVar12);
  pbVar4 = (byte *)((ulonglong)uStack_30 >> 0x20);
  if ((int)uStack_30 == 0x20) {
    puVar9 = &DAT_ram_4ff5cad4;
    do {
      if ((*(char *)(puVar9 + 0xb) != '\0') &&
         ((0x240c83ff < (uint)(iVar14 - puVar9[9]) || (0xa4cb7ff < (uint)(iVar14 - puVar9[10]))))) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        *(undefined1 *)(puVar9 + 0xb) = 0;
      }
      puVar9 = puVar9 + 0xc;
    } while (puVar9 != (undefined4 *)&DAT_ram_4ff5cb94);
    pbVar7 = (byte *)&DAT_ram_4ff5cad4;
    if (DAT_ram_4ff5cb00 != '\0') goto LAB_ram_4808b302;
    do {
      do {
        pbVar11 = pbVar7 + 0x30;
        if (pbVar11 == &DAT_ram_4ff5cb94) goto LAB_ram_4808b1f0;
        pbVar10 = pbVar7 + 0x5c;
        pbVar7 = pbVar11;
      } while (*pbVar10 == 0);
LAB_ram_4808b302:
      bVar6 = 0;
      pbVar11 = pbVar7;
      pbVar10 = pbVar4;
      do {
        bVar1 = *pbVar10;
        bVar2 = *pbVar11;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
        bVar6 = bVar6 | bVar1 ^ bVar2;
      } while (pbVar4 + 0x20 != pbVar10);
    } while (bVar6 != 0);
    *(int *)(pbVar7 + 0x28) = iVar14;
    FUN_ram_4802a8a8(&local_40,"Cache-Control");
    FUN_ram_4802a8a8(&uStack_30,"no-store, no-cache, must-revalidate");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_40,&uStack_30);
    FUN_ram_4802a59e(&uStack_30);
    FUN_ram_4802a59e(&local_40);
    FUN_ram_4802a8a8(&local_40,"Content-Encoding");
    FUN_ram_4802a8a8(&uStack_30,&DAT_ram_481cb520);
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_40,&uStack_30);
    FUN_ram_4802a59e(&uStack_30);
    FUN_ram_4802a59e(&local_40);
    uStack_30._0_4_ = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if ((*(char *)((int)uStack_30 + 0x44c) != '\0') && (*(char *)((int)uStack_30 + 0x44c) != '\x06')
       ) {
      *(undefined **)((int)uStack_30 + 0x1ce0) = &DAT_ram_481f5794;
      *(undefined4 *)((int)uStack_30 + 0x1ce8) = 0;
      *(undefined4 *)((int)uStack_30 + 0x1ce4) = 0x2b90c;
      uStack_30._4_4_ = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,200,"text/html",(int)uStack_30,&LAB_ram_4802d3f2);
      return;
    }
  }
  else {
LAB_ram_4808b1f0:
    FUN_ram_4802a8a8(&local_40,"Cache-Control");
    FUN_ram_4802a8a8(&uStack_30,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&local_40,&uStack_30);
    FUN_ram_4802a59e(&uStack_30);
    FUN_ram_4802a59e(&local_40);
    local_40 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if ((*(char *)(local_40 + 0x44c) != '\0') && (*(char *)(local_40 + 0x44c) != '\x06')) {
      *(undefined **)(local_40 + 0x1ce0) = &DAT_ram_482210b4;
      *(undefined4 *)(local_40 + 0x1ce8) = 0;
      *(undefined4 *)(local_40 + 0x1ce4) = 0x1511;
      puStack_3c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,200,"text/html",local_40,&LAB_ram_4802d3f2);
      return;
    }
  }
  return;
}



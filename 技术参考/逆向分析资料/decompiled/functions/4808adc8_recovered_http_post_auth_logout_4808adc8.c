/* Firmware entry: 0x4808adc8 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_auth_logout_4808adc8(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_30;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
  piVar17 = (int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
  if (iVar14 == 0) {
    iVar14 = 0;
    iVar15 = 0;
  }
  else {
    iVar16 = 0;
    piVar4 = piVar17;
    do {
      if (*piVar4 == 6) {
        pbVar5 = (byte *)piVar4[1];
        pbVar8 = (byte *)0x481cb4a8;
        uVar9 = 0x43;
        while( true ) {
          uVar6 = (uint)*pbVar5;
          pbVar8 = pbVar8 + 1;
          if ((uVar6 - 0x41 & 0xff) < 0x1a) {
            uVar6 = uVar6 + 0x20;
          }
          if ((uVar9 - 0x41 & 0xff) < 0x1a) {
            uVar9 = uVar9 + 0x20;
          }
          if (uVar9 != uVar6) break;
          pbVar5 = pbVar5 + 1;
          if (pbVar8 == (byte *)0x481cb4ae) {
            iVar15 = piVar17[iVar16 * 4 + 2];
            iVar14 = piVar17[iVar16 * 4 + 3];
            goto LAB_ram_4808ae64;
          }
          uVar9 = (uint)*pbVar8;
        }
      }
      iVar16 = iVar16 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar14 != iVar16);
    iVar14 = 0;
    iVar15 = 0;
  }
LAB_ram_4808ae64:
  iVar16 = FUN_ram_48025ba6();
  iStack_40 = iVar15;
  iStack_3c = iVar14;
  uStack_30 = FUN_ram_4808acac(iVar15,iVar14);
  pbVar5 = (byte *)((ulonglong)uStack_30 >> 0x20);
  if ((int)uStack_30 == 0x20) {
    puVar11 = &DAT_ram_4ff5cad4;
    do {
      if ((*(char *)(puVar11 + 0xb) != '\0') &&
         ((0x240c83ff < (uint)(iVar16 - puVar11[9]) || (0xa4cb7ff < (uint)(iVar16 - puVar11[10])))))
      {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        *(undefined1 *)(puVar11 + 0xb) = 0;
      }
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != (undefined4 *)&DAT_ram_4ff5cb94);
    pbVar8 = (byte *)&DAT_ram_4ff5cad4;
    if (DAT_ram_4ff5cb00 != '\0') goto LAB_ram_4808b06c;
    do {
      do {
        pbVar13 = pbVar8 + 0x30;
        if (pbVar13 == &DAT_ram_4ff5cb94) goto LAB_ram_4808ae84;
        pbVar12 = pbVar8 + 0x5c;
        pbVar8 = pbVar13;
      } while (*pbVar12 == 0);
LAB_ram_4808b06c:
      bVar7 = 0;
      pbVar13 = pbVar8;
      pbVar12 = pbVar5;
      do {
        bVar2 = *pbVar12;
        bVar3 = *pbVar13;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
        bVar7 = bVar7 | bVar2 ^ bVar3;
      } while (pbVar12 != pbVar5 + 0x20);
    } while (bVar7 != 0);
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 0;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    pbVar8[0xc] = 0;
    pbVar8[0xd] = 0;
    pbVar8[0xe] = 0;
    pbVar8[0xf] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
    pbVar8[0x14] = 0;
    pbVar8[0x15] = 0;
    pbVar8[0x16] = 0;
    pbVar8[0x17] = 0;
    pbVar8[0x18] = 0;
    pbVar8[0x19] = 0;
    pbVar8[0x1a] = 0;
    pbVar8[0x1b] = 0;
    pbVar8[0x1c] = 0;
    pbVar8[0x1d] = 0;
    pbVar8[0x1e] = 0;
    pbVar8[0x1f] = 0;
    pbVar8[0x20] = 0;
    pbVar8[0x21] = 0;
    pbVar8[0x22] = 0;
    pbVar8[0x23] = 0;
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0;
    pbVar8[0x27] = 0;
    pbVar8[0x28] = 0;
    pbVar8[0x29] = 0;
    pbVar8[0x2a] = 0;
    pbVar8[0x2b] = 0;
    pbVar8[0x2c] = 0;
  }
LAB_ram_4808ae84:
  FUN_ram_4802a8a8(&iStack_40,"Cache-Control");
  FUN_ram_4802a8a8(&uStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&uStack_30);
  FUN_ram_4802a59e(&uStack_30);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,"Set-Cookie");
  FUN_ram_4802a8a8(&uStack_30,"P4SID=; Max-Age=0; Path=/; HttpOnly; SameSite=Strict");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&uStack_30);
  FUN_ram_4802a59e(&uStack_30);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802a8a8(&iStack_40,"Location");
  FUN_ram_4802a8a8(&uStack_30,&DAT_ram_481b546c);
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_40,&uStack_30);
  FUN_ram_4802a59e(&uStack_30);
  FUN_ram_4802a59e(&iStack_40);
  iVar15 = DAT_ram_4ff5cbe8;
  iVar14 = DAT_ram_4ff5cbdc;
  iStack_40 = 0;
  uStack_48 = 0x12f;
  puStack_44 = &DAT_ram_481df390;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar16 = 1;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_48,&puStack_44,&iStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar16 = iStack_40;
      if (iStack_40 == 0) {
        iVar16 = 1;
      }
    }
    iVar16 = FUN_ram_4ff206d8(iVar16,0x404);
    iVar10 = iVar15 + iVar14 * 0x1d40;
    *(int *)(iVar10 + 0x1cdc) = iVar16;
    if (iVar16 == 0) {
      if (*(char *)(iVar10 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar15 + iVar14 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (iStack_40 != 0) {
        FUN_ram_4ff45158(iVar16,puStack_44,iStack_40);
        iVar16 = *(int *)(iVar10 + 0x1cdc);
      }
      uStack_30._0_4_ = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)((int)uStack_30 + 0x44c) != '\0') &&
         (*(char *)((int)uStack_30 + 0x44c) != '\x06')) {
        *(int *)((int)uStack_30 + 0x1ce0) = iVar16;
        *(int *)((int)uStack_30 + 0x1ce4) = iStack_40;
        *(undefined4 *)((int)uStack_30 + 0x1ce8) = 0;
        uStack_30._4_4_ = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_48,"text/plain",(int)uStack_30,&LAB_ram_4802d3f2);
        return;
      }
    }
  }
  return;
}



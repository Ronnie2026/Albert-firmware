/* Firmware entry: 0x480a3450 */

void FUN_ram_480a3450(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  void *__s;
  int iVar15;
  int iVar16;
  uint uStack_4c;
  void *pvStack_48;
  undefined1 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  size_t sStack_30;
  char *pcStack_2c;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_480a3262();
  iVar2 = DAT_ram_4ff5cbe8;
  iVar15 = DAT_ram_4ff5cbdc;
  if (iVar5 == 0) {
    iVar14 = DAT_ram_4ff5cbdc * 0x1d40;
    iVar5 = *(int *)(DAT_ram_4ff5cbe8 + iVar14 + 0x42c);
    piVar4 = (int *)(iVar14 + 0x2c + DAT_ram_4ff5cbe8);
    if (iVar5 != 0) {
      iVar16 = 0;
      piVar3 = piVar4;
      do {
        if (*piVar3 == 0x12) {
          pbVar13 = (byte *)piVar3[1];
          pcVar8 = "X-P4-Command-Nonce";
          uVar12 = 0x58;
          while( true ) {
            pcVar8 = pcVar8 + 1;
            uVar9 = (uint)*pbVar13;
            if ((uVar9 - 0x41 & 0xff) < 0x1a) {
              uVar9 = uVar9 + 0x20;
            }
            if ((uVar12 - 0x41 & 0xff) < 0x1a) {
              uVar12 = uVar12 + 0x20;
            }
            if (uVar12 != uVar9) break;
            pbVar13 = pbVar13 + 1;
            if ((byte *)pcVar8 == (byte *)0x481cbfd2) {
              if (piVar4[iVar16 * 4 + 2] != 0) {
                return;
              }
              goto LAB_ram_480a34f6;
            }
            uVar12 = (uint)(byte)*pcVar8;
          }
        }
        iVar16 = iVar16 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar16 != iVar5);
    }
LAB_ram_480a34f6:
    uVar12 = *(uint *)(DAT_ram_4ff5cbe8 + iVar14 + 0x430);
    __s = *(void **)(DAT_ram_4ff5cbe8 + iVar14 + 0x434);
    uStack_4c = uVar12;
    if (((uVar12 != 0) && (pvVar6 = memchr(__s,0x3f,uVar12), pvVar6 != (void *)0x0)) &&
       ((uint)((int)pvVar6 - (int)__s) < uVar12)) {
      uStack_4c = (int)pvVar6 - (int)__s;
    }
    uStack_44 = 1;
    cVar1 = *(char *)(iVar15 * 0x1d40 + iVar2 + 0x440);
    if (cVar1 == '\x01') {
      uStack_44 = 2;
    }
    else if ((cVar1 != '\x04') && (uStack_44 = 0, cVar1 != '\0')) {
      uStack_44 = 3;
    }
    pcVar8 = (char *)(iVar2 + iVar14 + 0x8a0);
    pvStack_48 = __s;
    if (iVar5 == 0) {
      iStack_40 = 0;
      iStack_3c = 0;
      iStack_38 = 0;
      iStack_34 = 0;
      sStack_30 = strlen(pcVar8);
    }
    else {
      iVar15 = 0;
      piVar3 = piVar4;
      do {
        if (*piVar3 == 4) {
          pbVar13 = (byte *)piVar3[1];
          pbVar10 = &DAT_ram_481c3da8;
          uVar12 = 0x48;
          while( true ) {
            uVar9 = (uint)*pbVar13;
            pbVar10 = pbVar10 + 1;
            if ((uVar9 - 0x41 & 0xff) < 0x1a) {
              uVar9 = uVar9 + 0x20;
            }
            if ((uVar12 - 0x41 & 0xff) < 0x1a) {
              uVar12 = uVar12 + 0x20;
            }
            if (uVar12 != uVar9) break;
            pbVar13 = pbVar13 + 1;
            if (pbVar10 == &UNK_ram_481c3dac) {
              iStack_40 = piVar4[iVar15 * 4 + 2];
              iStack_3c = piVar4[iVar15 * 4 + 3];
              goto LAB_ram_480a35fc;
            }
            uVar12 = (uint)*pbVar10;
          }
        }
        iVar15 = iVar15 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar15 != iVar5);
      iStack_3c = 0;
      iStack_40 = 0;
LAB_ram_480a35fc:
      iVar15 = 0;
      piVar3 = piVar4;
      do {
        if (*piVar3 == 6) {
          pbVar13 = (byte *)piVar3[1];
          pcVar11 = "Origin";
          uVar12 = 0x4f;
          while( true ) {
            uVar9 = (uint)*pbVar13;
            pcVar11 = pcVar11 + 1;
            if ((uVar9 - 0x41 & 0xff) < 0x1a) {
              uVar9 = uVar9 + 0x20;
            }
            if ((uVar12 - 0x41 & 0xff) < 0x1a) {
              uVar12 = uVar12 + 0x20;
            }
            if (uVar12 != uVar9) break;
            pbVar13 = pbVar13 + 1;
            if ((byte *)pcVar11 == (byte *)0x481cbfe6) {
              iStack_38 = piVar4[iVar15 * 4 + 2];
              iStack_34 = piVar4[iVar15 * 4 + 3];
              goto LAB_ram_480a3682;
            }
            uVar12 = (uint)(byte)*pcVar11;
          }
        }
        iVar15 = iVar15 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar15 != iVar5);
      iStack_34 = 0;
      iStack_38 = 0;
LAB_ram_480a3682:
      sStack_30 = strlen(pcVar8);
      iVar15 = 0;
      piVar3 = piVar4;
      do {
        if (*piVar3 == 6) {
          pbVar13 = (byte *)piVar3[1];
          pbVar10 = (byte *)0x481cb4a8;
          uVar12 = 0x43;
          while( true ) {
            uVar9 = (uint)*pbVar13;
            pbVar10 = pbVar10 + 1;
            if ((uVar9 - 0x41 & 0xff) < 0x1a) {
              uVar9 = uVar9 + 0x20;
            }
            if ((uVar12 - 0x41 & 0xff) < 0x1a) {
              uVar12 = uVar12 + 0x20;
            }
            if (uVar12 != uVar9) break;
            pbVar13 = pbVar13 + 1;
            if (pbVar10 == (byte *)0x481cb4ae) {
              iStack_28 = piVar4[iVar15 * 4 + 2];
              iStack_24 = piVar4[iVar15 * 4 + 3];
              goto LAB_ram_480a35c4;
            }
            uVar12 = (uint)*pbVar10;
          }
        }
        iVar15 = iVar15 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar15 != iVar5);
    }
    iStack_24 = 0;
    iStack_28 = 0;
LAB_ram_480a35c4:
    pcStack_2c = pcVar8;
    uVar7 = FUN_ram_48025ba6();
    FUN_ram_4808b9c6(&DAT_ram_4ff5cad4,&uStack_4c,uVar7);
  }
  return;
}



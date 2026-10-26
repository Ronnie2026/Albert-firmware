/* Firmware entry: 0x48070776 */

undefined4 FUN_ram_48070776(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  char cVar18;
  int *piVar19;
  size_t sVar20;
  void *pvVar21;
  int iVar22;
  undefined4 *puVar23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_1 + 0x430);
  sVar20 = *(size_t *)(param_1 + 0x438);
  if (uVar5 == 0) {
    if (sVar20 == 0) {
      iVar22 = 2;
      iVar3 = 0;
      iVar6 = 0;
    }
    else {
LAB_ram_48070b68:
      pvVar7 = memchr(*(void **)(param_1 + 0x43c),0,sVar20);
      if (pvVar7 != (void *)0x0) {
        return 0;
      }
      iVar22 = 2;
      iVar6 = 0;
      iVar3 = 0;
    }
  }
  else {
    pvVar21 = *(void **)(param_1 + 0x434);
    pvVar7 = memchr(pvVar21,0x3f,uVar5);
    if (pvVar7 == (void *)0x0) {
      if (sVar20 != 0) goto LAB_ram_48070b68;
      iVar6 = 0;
      iVar22 = 2;
      iVar3 = 0;
    }
    else {
      if ((sVar20 != 0) &&
         (pvVar8 = memchr(*(void **)(param_1 + 0x43c),0,sVar20), pvVar8 != (void *)0x0)) {
        return 0;
      }
      if ((int)pvVar7 - (int)pvVar21 == -1) {
        iVar22 = 2;
        iVar3 = 0;
        iVar6 = 0;
      }
      else {
        uVar14 = ((int)pvVar7 - (int)pvVar21) + 1;
        if (uVar5 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                           "basic_string_view::substr",uVar14,uVar5);
        }
        iVar6 = uVar5 - uVar14;
        iVar3 = (int)pvVar21 + uVar14;
        iVar22 = iVar6 + 2;
      }
    }
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    piVar19 = (int *)(param_1 + 0x2c);
    iVar2 = 0;
    do {
      if (*piVar19 == 0xc) {
        pbVar12 = (byte *)piVar19[1];
        pcVar15 = "Content-Type";
        uVar5 = 0x43;
        while( true ) {
          pcVar15 = pcVar15 + 1;
          uVar14 = (uint)*pbVar12;
          if ((uVar14 - 0x41 & 0xff) < 0x1a) {
            uVar14 = uVar14 + 0x20;
          }
          if ((uVar5 - 0x41 & 0xff) < 0x1a) {
            uVar5 = uVar5 + 0x20;
          }
          if (uVar5 != uVar14) break;
          pbVar12 = pbVar12 + 1;
          if ((byte *)pcVar15 == (byte *)0x481c85ec) {
            iVar2 = iVar2 * 0x10 + param_1;
            uVar5 = *(uint *)(iVar2 + 0x34);
            pvVar7 = *(void **)(iVar2 + 0x38);
            if (uVar5 == 0) goto LAB_ram_48070864;
            pvVar21 = memchr(pvVar7,0x3b,uVar5);
            if ((pvVar21 != (void *)0x0) && ((uint)((int)pvVar21 - (int)pvVar7) < uVar5)) {
              uVar5 = (int)pvVar21 - (int)pvVar7;
            }
            if ((uVar5 != 0x21) ||
               (iVar2 = FUN_ram_4ff4511a(pvVar7,"application/x-www-form-urlencoded",0x21),
               iVar2 != 0)) goto LAB_ram_48070864;
            iVar22 = iVar22 + sVar20;
            bVar17 = false;
            goto LAB_ram_4807086a;
          }
          uVar5 = (uint)(byte)*pcVar15;
        }
      }
      iVar2 = iVar2 + 1;
      piVar19 = piVar19 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x42c));
  }
LAB_ram_48070864:
  bVar17 = sVar20 != 0;
  sVar20 = 0;
LAB_ram_4807086a:
  *(bool *)(param_1 + 0xcc2) = bVar17;
  puVar9 = (undefined1 *)FUN_ram_4ff206d8(iVar22,0x404);
  *(undefined1 **)(param_1 + 0x1cc8) = puVar9;
  if (puVar9 == (undefined1 *)0x0) {
    return 0;
  }
  if (iVar6 == 0) {
    sVar4 = sVar20;
    if (sVar20 == 0) goto LAB_ram_48070896;
  }
  else {
    FUN_ram_4ff45158(puVar9,iVar3,iVar6);
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x1cc8) + iVar6);
    if (sVar20 == 0) goto LAB_ram_48070896;
    *puVar9 = 0x26;
    puVar9 = (undefined1 *)(*(int *)(param_1 + 0x1cc8) + iVar6 + 1);
    sVar4 = sVar20 + iVar6 + 1;
  }
  FUN_ram_4ff45158(puVar9,*(undefined4 *)(param_1 + 0x43c),sVar20);
  puVar9 = (undefined1 *)(*(int *)(param_1 + 0x1cc8) + sVar4);
LAB_ram_48070896:
  *puVar9 = 0;
  if (**(char **)(param_1 + 0x1cc8) != '\0') {
    iVar22 = *(int *)(param_1 + 0x1cc4);
    pcVar15 = *(char **)(param_1 + 0x1cc8);
    do {
      if (iVar22 == 0x200) {
        return 0;
      }
      pcVar10 = strchr(pcVar15,0x26);
      if (pcVar10 == (char *)0x0) {
        sVar20 = strlen(pcVar15);
        pcVar10 = pcVar15 + sVar20;
      }
      else {
        *pcVar10 = '\0';
        pcVar10 = pcVar10 + 1;
      }
      pcVar11 = strchr(pcVar15,0x3d);
      if (pcVar11 == (char *)0x0) {
        sVar20 = strlen(pcVar15);
        pcVar11 = pcVar15 + sVar20;
      }
      else {
        *pcVar11 = '\0';
        pcVar11 = pcVar11 + 1;
      }
      cVar18 = *pcVar15;
      pcVar16 = pcVar15;
      pcVar1 = pcVar15;
      while (cVar18 != '\0') {
        if (cVar18 == '%') {
          uVar5 = (uint)(byte)pcVar16[1];
          if (uVar5 == 0) {
            return 0;
          }
          uVar14 = (uint)(byte)pcVar16[2];
          if (uVar14 == 0) {
            return 0;
          }
          uVar13 = uVar5 - 0x30;
          if ((uVar13 & 0xff) < 10) {
            if ((uVar14 - 0x30 & 0xff) < 10) {
              iVar22 = uVar13 * 0x10 + (uVar14 - 0x30);
              if (iVar22 == 0) {
                return 0;
              }
            }
            else {
LAB_ram_48070a52:
              if ((uVar14 - 0x61 & 0xff) < 6) {
                iVar22 = uVar13 * 0x10 + (uVar14 - 0x57);
              }
              else {
                if (5 < (uVar14 - 0x41 & 0xff)) {
                  return 0;
                }
                iVar22 = uVar13 * 0x10 + (uVar14 - 0x37);
              }
            }
          }
          else {
            if ((uVar5 - 0x61 & 0xff) < 6) {
              uVar13 = uVar5 - 0x57;
            }
            else {
              if (5 < (uVar5 - 0x41 & 0xff)) {
                return 0;
              }
              uVar13 = uVar5 - 0x37;
            }
            if (9 < (uVar14 - 0x30 & 0xff)) goto LAB_ram_48070a52;
            iVar22 = uVar13 * 0x10 + (uVar14 - 0x30);
          }
          cVar18 = (char)iVar22;
          pcVar16 = pcVar16 + 3;
        }
        else {
          if (cVar18 == '+') {
            cVar18 = ' ';
          }
          pcVar16 = pcVar16 + 1;
        }
        *pcVar1 = cVar18;
        pcVar1 = pcVar1 + 1;
        cVar18 = *pcVar16;
      }
      *pcVar1 = '\0';
      cVar18 = *pcVar11;
      pcVar16 = pcVar11;
      pcVar1 = pcVar11;
      while (cVar18 != '\0') {
        if (cVar18 == '%') {
          uVar5 = (uint)(byte)pcVar16[1];
          if (uVar5 == 0) {
            return 0;
          }
          uVar14 = (uint)(byte)pcVar16[2];
          if (uVar14 == 0) {
            return 0;
          }
          uVar13 = uVar5 - 0x30;
          if ((uVar13 & 0xff) < 10) {
            if ((uVar14 - 0x30 & 0xff) < 10) {
              iVar22 = uVar13 * 0x10 + (uVar14 - 0x30);
              if (iVar22 == 0) {
                return 0;
              }
            }
            else {
LAB_ram_48070aa6:
              if ((uVar14 - 0x61 & 0xff) < 6) {
                iVar22 = uVar13 * 0x10 + (uVar14 - 0x57);
              }
              else {
                if (5 < (uVar14 - 0x41 & 0xff)) {
                  return 0;
                }
                iVar22 = uVar13 * 0x10 + (uVar14 - 0x37);
              }
            }
          }
          else {
            if ((uVar5 - 0x61 & 0xff) < 6) {
              uVar13 = uVar5 - 0x57;
            }
            else {
              if (5 < (uVar5 - 0x41 & 0xff)) {
                return 0;
              }
              uVar13 = uVar5 - 0x37;
            }
            if (9 < (uVar14 - 0x30 & 0xff)) goto LAB_ram_48070aa6;
            iVar22 = uVar13 * 0x10 + (uVar14 - 0x30);
          }
          cVar18 = (char)iVar22;
          pcVar16 = pcVar16 + 3;
        }
        else {
          if (cVar18 == '+') {
            cVar18 = ' ';
          }
          pcVar16 = pcVar16 + 1;
        }
        *pcVar1 = cVar18;
        pcVar1 = pcVar1 + 1;
        cVar18 = *pcVar16;
      }
      *pcVar1 = '\0';
      if (*pcVar15 == '\0') {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x1cc4);
      if (iVar3 == 0) {
        iVar22 = 1;
      }
      else {
        iVar22 = 0;
        puVar23 = (undefined4 *)(param_1 + 0xcc4);
        do {
          iVar6 = FUN_ram_4ff453ae(*puVar23,pcVar15);
          if (iVar6 == 0) {
            return 0;
          }
          iVar22 = iVar22 + 1;
          puVar23 = puVar23 + 2;
        } while (iVar22 != iVar3);
        iVar22 = iVar3 + 1;
      }
      iVar3 = iVar3 * 8 + param_1;
      *(int *)(param_1 + 0x1cc4) = iVar22;
      *(char **)(iVar3 + 0xcc4) = pcVar15;
      *(char **)(iVar3 + 0xcc8) = pcVar11;
      pcVar15 = pcVar10;
    } while (*pcVar10 != '\0');
  }
  return 1;
}



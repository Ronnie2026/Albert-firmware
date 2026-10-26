/* Firmware entry: 0x480475ac */

int FUN_ram_480475ac(uint *param_1,uint *param_2,int param_3,short *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint *puVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)((int)param_1 + 0x203) = 0;
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + 0x201) = 0;
    bVar13 = true;
  }
  else {
    sVar5 = *param_4;
    bVar15 = 0;
    puVar14 = param_2;
    do {
      if (sVar5 == 0) {
        return -1;
      }
      if (*(code **)(param_4 + 2) != (code *)0x0) {
        iVar3 = (**(code **)(param_4 + 2))();
        if (*(uint *)(param_4 + 6) <= (uint)(iVar3 - *(int *)(param_4 + 4))) {
          return -1;
        }
        sVar5 = *param_4;
      }
      sVar5 = sVar5 + -1;
      bVar1 = *(byte *)((int)puVar14 + 10);
      uVar12 = *puVar14;
      *param_4 = sVar5;
      uVar11 = (uint)(byte)param_1[0x80];
      bVar15 = bVar15 | bVar1 ^ 1;
      if (uVar11 == 0) {
        uVar7 = 1;
        uVar11 = 0;
      }
      else {
        uVar7 = 0;
        puVar8 = param_1;
        do {
          uVar6 = *puVar8;
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 2;
          if (uVar12 == uVar6) {
            cVar9 = *(char *)((int)puVar14 + 9);
            uVar7 = uVar11;
            goto LAB_ram_4804763e;
          }
        } while (uVar7 != uVar11);
        if (uVar11 == 0x40) {
          param_1[0x81] = param_1[0x81] + 1;
          return -1;
        }
        uVar7 = uVar11 + 1 & 0xff;
      }
      puVar8 = param_1 + uVar11 * 2;
      *(byte *)(puVar8 + 1) = (byte)param_1[0x80];
      *puVar8 = uVar12;
      *(undefined1 *)((int)puVar8 + 5) = 1;
      *(undefined2 *)((int)puVar8 + 6) = 0;
      *(char *)(param_1 + 0x80) = (char)uVar7;
      cVar9 = *(char *)((int)puVar14 + 9);
LAB_ram_4804763e:
      uVar11 = 0;
      puVar8 = param_1;
      do {
        uVar6 = *puVar8;
        puVar8 = puVar8 + 2;
        if (uVar12 == uVar6) goto LAB_ram_48047652;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
      uVar11 = 0xffffffff;
LAB_ram_48047652:
      *(char *)((int)param_1 + uVar11 * 8 + 7) = cVar9;
      if (cVar9 == '\x01') {
        *(undefined1 *)((int)param_1 + 0x203) = 1;
      }
      puVar14 = puVar14 + 4;
    } while (puVar14 != param_2 + param_3 * 4);
    if (bVar15 == 0) {
      *(undefined1 *)((int)param_1 + 0x201) = 0;
      bVar13 = true;
    }
    else {
      bVar13 = *(byte *)((int)param_1 + 0x201) < 2;
    }
    if (*(char *)((int)param_1 + 0x203) != '\0') {
      bVar15 = *(byte *)((int)param_1 + 0x202);
      iVar3 = 2;
      goto LAB_ram_48047688;
    }
  }
  *(undefined1 *)((int)param_1 + 0x202) = 0;
  bVar15 = 0;
  iVar3 = 2;
LAB_ram_48047688:
  do {
    if (param_3 != 0) {
      sVar5 = *param_4;
      uVar11 = 0xffffffff;
      iVar16 = -1;
      iVar17 = 0;
      puVar14 = param_2;
LAB_ram_48047698:
      do {
        if (sVar5 == 0) {
          return -1;
        }
        if (*(code **)(param_4 + 2) != (code *)0x0) {
          iVar4 = (**(code **)(param_4 + 2))();
          if (*(uint *)(param_4 + 6) <= (uint)(iVar4 - *(int *)(param_4 + 4))) {
            return -1;
          }
          sVar5 = *param_4;
        }
        sVar5 = sVar5 + -1;
        uVar12 = *puVar14;
        *param_4 = sVar5;
        if ((byte)param_1[0x80] != 0) {
          uVar7 = 0;
          puVar8 = param_1;
          do {
            uVar6 = *puVar8;
            puVar8 = puVar8 + 2;
            if (uVar12 == uVar6) {
              if (*(char *)((int)param_1 + uVar7 * 8 + 6) == '\0') {
                if (iVar16 == -1) {
LAB_ram_480477c4:
                  iVar16 = iVar17;
                  uVar11 = uVar7;
                }
                else {
                  puVar8 = param_2 + iVar16 * 4;
                  if (*(char *)((int)puVar8 + 10) == *(char *)((int)puVar14 + 10)) {
                    if (*(byte *)((int)puVar14 + 9) == *(byte *)((int)puVar8 + 9)) {
                      if ((byte)param_1[uVar7 * 2 + 1] == (byte)param_1[uVar11 * 2 + 1]) {
                        cVar9 = *(char *)((int)puVar14 + 0xb);
                        if (*(char *)((int)puVar8 + 0xb) == cVar9) {
                          if (*(char *)((int)puVar8 + 0xb) != '\0') {
                            if (puVar14[1] != puVar8[1]) {
                              if ((int)(puVar14[1] - puVar8[1]) < 0) goto LAB_ram_480477c4;
                              goto LAB_ram_48047704;
                            }
                          }
                          cVar9 = (char)puVar14[3];
                          if ((char)puVar8[3] == cVar9) {
                            if (uVar12 < *puVar8) goto LAB_ram_480477c4;
                            goto LAB_ram_48047704;
                          }
                        }
                      }
                      else {
                        cVar9 = (byte)param_1[uVar7 * 2 + 1] < (byte)param_1[uVar11 * 2 + 1];
                      }
                      if (cVar9 != '\0') goto LAB_ram_480477c4;
                    }
                    else {
                      bVar2 = *(byte *)((int)puVar8 + 9) < *(byte *)((int)puVar14 + 9);
                      if ((*(char *)((int)puVar8 + 10) == '\0') && (1 < bVar15)) {
                        bVar2 = !bVar2;
                      }
                      if (bVar2) {
                        iVar16 = iVar17;
                        uVar11 = uVar7;
                      }
                    }
                  }
                  else if (bVar13 == (bool)*(char *)((int)puVar14 + 10)) goto LAB_ram_480477c4;
                }
LAB_ram_48047704:
                iVar17 = iVar17 + 1;
                puVar14 = puVar14 + 4;
                if (iVar17 != param_3) goto LAB_ram_48047698;
                goto LAB_ram_4804770c;
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != (byte)param_1[0x80]);
        }
        iVar17 = iVar17 + 1;
        puVar14 = puVar14 + 4;
      } while (iVar17 != param_3);
      if (iVar16 != -1) {
LAB_ram_4804770c:
        *(undefined1 *)((int)param_1 + uVar11 * 8 + 6) = 1;
        return iVar16;
      }
    }
    puVar10 = (undefined1 *)((int)param_1 + 6);
    do {
      *puVar10 = 0;
      puVar10 = puVar10 + 8;
    } while ((undefined1 *)((int)param_1 + 0x206) != puVar10);
    bVar2 = iVar3 == 1;
    iVar3 = 1;
    if (bVar2) {
      return -1;
    }
  } while( true );
}



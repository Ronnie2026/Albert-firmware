/* Firmware entry: 0x4814bd32 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4814bd32(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &DAT_ram_4ff6d2fc;
  iVar2 = 0;
  do {
    bVar3 = *(byte *)(puVar1 + 9);
    if (bVar3 == 3) {
      puVar1[10] = puVar1[10] + 1;
    }
    else if (bVar3 < 4) {
      if (bVar3 == 1) {
        if (((uint)puVar1[10] < 3) || (*(char *)((int)puVar1 + 0x25) != '\0')) {
          puVar1[10] = puVar1[10] + 1;
          FUN_ram_4814a5e8(puVar1[5],puVar1,1);
        }
        else {
LAB_ram_4814c0e0:
          FUN_ram_4814aa20(iVar2);
        }
      }
      else if (bVar3 == 2) {
        if (puVar1[8] != 0) {
          FUN_ram_4814a806(iVar2);
        }
        if ((uint)puVar1[10] < 0x3e9) {
          puVar1[10] = 0;
          *(undefined1 *)(puVar1 + 9) = 3;
        }
        else {
          puVar1[10] = puVar1[10] - 1000;
        }
      }
    }
    else if (bVar3 == 4) {
      if ((uint)puVar1[10] < 2) {
        *(undefined1 *)(puVar1 + 9) = 5;
        puVar1[10] = 0;
      }
      else {
        puVar1[10] = puVar1[10] - 1;
      }
    }
    else if (bVar3 == 5) {
      if ((2 < (uint)puVar1[10]) && (*(char *)((int)puVar1 + 0x25) == '\0')) goto LAB_ram_4814c0e0;
      puVar1[10] = puVar1[10] + 1;
      FUN_ram_4814a5e8(puVar1[5],puVar1,0);
    }
    uVar9 = iVar2 + 1;
    iVar2 = (int)(uVar9 * 0x1000000) >> 0x18;
    puVar1 = puVar1 + 0xb;
    if ((uVar9 & 0xff) == 5) {
      piVar5 = &DAT_ram_4ff6d148;
      do {
        piVar7 = piVar5 + 0xc;
        *piVar5 = *piVar5 + 1;
        piVar5 = piVar7;
      } while (piVar7 != &DAT_ram_4ff6d328);
      puVar1 = &DAT_ram_4ff6d06c;
      do {
        piVar5 = (int *)*puVar1;
        if (piVar5 != (int *)0x0) {
          if ((uint)puVar1[1] < 2) {
            if (*(char *)((int)puVar1 + 9) == -1) {
              iVar2 = *piVar5;
              puVar6 = &DAT_ram_4ff6d11c;
              do {
                if ((((puVar6[5] == iVar2) && (puVar6[6] == piVar5[1])) && (puVar6[7] == piVar5[2]))
                   && ((puVar6[8] == piVar5[3] && (*(char *)(puVar6 + 9) == (char)piVar5[4])))) {
                  *puVar6 = 0;
                  puVar6[1] = 0;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  *(undefined1 *)(puVar6 + 4) = 0;
                }
                puVar6 = puVar6 + 0xc;
              } while (puVar6 != &DAT_ram_4ff6d2fc);
              *(undefined1 *)((int)piVar5 + 0x25) = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined1 *)(puVar1 + 2) = 0;
            }
          }
          else {
            puVar1[1] = puVar1[1] - 1;
          }
        }
        puVar1 = puVar1 + 3;
      } while (puVar1 != &DAT_ram_4ff6d090);
      puVar8 = &DAT_ram_4ff6d0a8;
      do {
        if (puVar8[-1] != 0) {
          if (*puVar8 < 2) {
            *puVar8 = 0;
            puVar8[-1] = 0;
          }
          else {
            *puVar8 = *puVar8 - 1;
          }
        }
        puVar8 = puVar8 + 7;
        piVar5 = DAT_ram_4ff6e1ac;
      } while (puVar8 != &DAT_ram_4ff6d134);
      do {
        if (piVar5 == (int *)0x0) {
          if (DAT_ram_4ff6e232 == '\0') {
            DAT_ram_4ff6e232 = '\x03';
            for (piVar5 = DAT_ram_4ff6e1ac; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
              if (((*(char *)(piVar5 + 0x3b) != '\0') && ((*(byte *)((int)piVar5 + 0xe7) & 1) != 0))
                 && (((*(byte *)((int)piVar5 + 0xe7) >> 2 & 1) != 0 &&
                     (((*(byte *)(piVar5 + 0x25) & 0xbf) != 0 &&
                      (iVar2 = FUN_ram_4814a42c(piVar5), iVar2 == 0)))))) {
                *(char *)(piVar5 + 0x3b) = *(char *)(piVar5 + 0x3b) + -1;
              }
            }
          }
          else {
            DAT_ram_4ff6e232 = DAT_ram_4ff6e232 + -1;
          }
          return;
        }
        pbVar10 = (byte *)(piVar5 + 0x25);
        iVar11 = (int)(piVar5 + 0x13);
        puVar8 = (uint *)(piVar5 + 0x29);
        iVar2 = 0;
        do {
          bVar3 = *pbVar10;
          if (bVar3 != 0) {
            uVar9 = puVar8[-3];
            if (uVar9 != 0) {
              if (uVar9 == 1) {
                puVar8[-3] = 0;
                *puVar8 = 0;
                FUN_ram_4813a504(piVar5,iVar2,0);
                bVar3 = *pbVar10;
              }
              else {
                if (uVar9 != 0xffffffff) {
                  puVar8[-3] = uVar9 - 1;
                }
                uVar9 = *puVar8;
                if (uVar9 < 2) {
                  *puVar8 = 0;
                  if (bVar3 == 0x30) {
                    FUN_ram_4813a504(piVar5,iVar2,0x10);
                    bVar3 = *pbVar10;
                    goto LAB_ram_4814be66;
                  }
                }
                else if (uVar9 != 0xffffffff) {
                  *puVar8 = uVar9 - 1;
                }
                bVar3 = *pbVar10;
              }
            }
LAB_ram_4814be66:
            if ((bVar3 & 8) != 0) {
              if ((bVar3 & 7) == 0) {
                if (((*(byte *)((int)piVar5 + 0xe7) & 1) != 0) &&
                   ((*(byte *)((int)piVar5 + 0xe7) >> 2 & 1) != 0)) {
                  FUN_ram_4813a504(piVar5,iVar2,bVar3 + 1);
                  FUN_ram_4814a5e8(piVar5,iVar11,5);
                }
              }
              else {
                iVar4 = 0x30;
                if (puVar8[-3] != 0) {
                  iVar4 = (-(uint)(*puVar8 == 0) & 0xffffffe0) + 0x30;
                }
                FUN_ram_4813a504(piVar5,iVar2,iVar4);
              }
            }
          }
          uVar9 = iVar2 + 1;
          pbVar10 = pbVar10 + 1;
          iVar11 = iVar11 + 0x18;
          puVar8 = puVar8 + 1;
          iVar2 = (int)(uVar9 * 0x1000000) >> 0x18;
        } while ((uVar9 & 0xff) != 3);
        piVar5 = (int *)*piVar5;
      } while( true );
    }
  } while( true );
}



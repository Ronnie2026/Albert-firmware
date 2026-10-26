/* Firmware entry: 0x4ff232be */

int * FUN_ram_4ff232be(int *param_1,char *param_2,int *param_3,int *param_4,char *param_5,
                      int param_6)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar17 = param_4[8];
  iVar6 = *param_4;
  iVar4 = param_4[1];
  iVar23 = param_4[2];
  iVar22 = param_4[3];
  iVar21 = param_4[4];
  iVar20 = param_4[5];
  iVar5 = param_4[6];
  param_3[7] = param_4[7];
  param_3[8] = iVar17;
  *param_3 = iVar6;
  param_3[1] = iVar4;
  param_3[2] = iVar23;
  param_3[3] = iVar22;
  param_3[4] = iVar21;
  param_3[5] = iVar20;
  param_3[6] = iVar5;
  cVar11 = *(char *)((int)param_4 + 0xd);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 1) = 0xff;
  param_1[9] = 0;
  if (cVar11 == '\x02') {
    if (*param_4 != 0x3fd) {
      return param_1;
    }
    cVar11 = (char)param_4[1];
  }
  else {
    if (*param_4 != 0x3fd) {
      return param_1;
    }
    if (cVar11 != '\x01') {
      return param_1;
    }
    cVar11 = (char)param_4[1];
  }
  if (cVar11 != '\b') {
    return param_1;
  }
  bVar13 = *(byte *)((int)param_4 + 5);
  *(undefined1 *)((int)param_1 + 6) = 1;
  bVar18 = bVar13 & 7;
  *(byte *)(param_1 + 1) = bVar18;
  fence();
  if (DAT_ram_4ff4b8d0 != '\0') {
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    if (DAT_ram_4ff4b934 == 0) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
    }
    else {
      puVar7 = &DAT_ram_4ff4b8c8;
      do {
        if ((*(int *)(puVar7 + 0xc) == *param_4) &&
           ((puVar7[0x10] & *(byte *)((int)param_4 + 0xd)) != 0)) {
          cVar11 = puVar7[0x11];
          cVar10 = (char)param_4[1];
          if (cVar10 == cVar11) {
            if (cVar10 == '\0') {
LAB_ram_4ff234f0:
              FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
              return param_1;
            }
            bVar9 = (puVar7[0x1a] ^ *(byte *)((int)param_4 + 5)) & puVar7[0x12];
            if ((((((cVar10 == '\x01') ||
                   (bVar9 = bVar9 | (puVar7[0x1b] ^ *(byte *)((int)param_4 + 6)) & puVar7[0x13],
                   cVar10 == '\x02')) ||
                  (bVar9 = bVar9 | (puVar7[0x1c] ^ *(byte *)((int)param_4 + 7)) & puVar7[0x14],
                  cVar10 == '\x03')) ||
                 ((bVar9 = bVar9 | (puVar7[0x1d] ^ *(byte *)(param_4 + 2)) & puVar7[0x15],
                  cVar10 == '\x04' ||
                  (bVar9 = bVar9 | (puVar7[0x1e] ^ *(byte *)((int)param_4 + 9)) & puVar7[0x16],
                  cVar10 == '\x05')))) ||
                (bVar9 = bVar9 | (puVar7[0x1f] ^ *(byte *)((int)param_4 + 10)) & puVar7[0x17],
                cVar11 == '\x06')) ||
               (bVar9 = bVar9 | (puVar7[0x20] ^ *(byte *)((int)param_4 + 0xb)) & puVar7[0x18],
               cVar11 == '\a')) {
              bVar3 = bVar9 == 0;
            }
            else {
              bVar3 = bVar9 == 0 && ((*(byte *)(param_4 + 3) ^ puVar7[0x21]) & puVar7[0x19]) == 0;
            }
            if (bVar3) goto LAB_ram_4ff234f0;
          }
        }
        puVar7 = puVar7 + 0x18;
      } while (puVar7 != &DAT_ram_4ff4b8c8 + (uint)DAT_ram_4ff4b934 * 0x18);
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
    }
  }
  cVar11 = *(char *)((int)param_4 + 0xd);
  if (cVar11 == '\x02') {
    if (param_5[2] == 0) {
      return param_1;
    }
    if (bVar18 == 1) {
      cVar11 = param_5[3];
      bVar18 = *(byte *)((int)param_3 + 10);
      bVar13 = *(byte *)((int)param_3 + 7);
      *(char *)((int)param_1 + 10) = cVar11;
      if (cVar11 == '\0') {
        cVar11 = param_5[4];
        *(undefined1 *)((int)param_1 + 0xb) = 0;
LAB_ram_4ff23708:
        if (cVar11 != '\0') {
          *(byte *)((int)param_3 + 7) = bVar13 & 0xf7;
          if (param_5[7] != '\0') {
            *(byte *)((int)param_3 + 10) = *(byte *)((int)param_3 + 10) | 0x80;
          }
          if ((bVar13 & 8) != 0) {
            *(undefined1 *)((int)param_1 + 7) = 1;
            goto LAB_ram_4ff23598;
          }
        }
      }
      else {
        uVar2 = *(ushort *)((int)param_4 + 10);
        *(byte *)((int)param_3 + 10) = bVar18 & 0xf7;
        cVar10 = param_5[2];
        *(byte *)((int)param_1 + 0xb) = (byte)(uVar2 >> 3) & 1;
        cVar11 = param_5[4];
        if (cVar10 != '\0') goto LAB_ram_4ff23708;
      }
      bVar3 = *(byte *)((int)param_3 + 10) != bVar18;
      *(bool *)((int)param_1 + 7) = bVar3;
joined_r0x4ff237d8:
      if (!bVar3) {
LAB_ram_4ff235de:
        uVar14 = 1;
        goto LAB_ram_4ff2359a;
      }
    }
    else {
      if (bVar18 == 2) {
        bVar13 = param_5[2] & param_5[5];
LAB_ram_4ff236ca:
        if (bVar13 != 0) {
          bVar9 = *(byte *)((int)param_3 + 6);
          bVar18 = *(byte *)(param_3 + 3);
          bVar15 = *(byte *)((int)param_3 + 5);
          bVar13 = bVar9;
          if (param_5[7] != '\0') {
            if ((byte)param_5[0x18] < 5) {
              *(byte *)(param_3 + 3) = param_5[0x18] << 4 | bVar18 & 0x8f;
              cVar11 = param_5[8];
            }
            else {
              *(byte *)(param_3 + 3) = bVar18 & 0x8f | 0x20;
              cVar11 = param_5[8];
            }
            if (param_5[0xc] != '\0') goto LAB_ram_4ff23754;
            goto LAB_ram_4ff23912;
          }
          bVar8 = bVar18;
          if (param_5[0xc] != '\0') {
            cVar11 = param_5[8];
LAB_ram_4ff23754:
            if ((*(int *)(param_5 + 0x1c) != 0) && (-1 < *(int *)(param_5 + 0x20) - param_6)) {
              *param_1 = *(int *)(param_5 + 0x1c);
              if (cVar11 == '\0') {
                bVar13 = param_5[0x19];
                if (0x3c < bVar13) {
                  bVar13 = 0x3c;
                }
                bVar13 = bVar9 & 0xc0 | bVar13;
                *(byte *)((int)param_3 + 6) = bVar13;
                goto LAB_ram_4ff23912;
              }
              bVar13 = param_5[0x19] << 6 | bVar15 & 0x3f;
              *(byte *)((int)param_3 + 5) = param_5[0x19] << 6 | bVar15 & 0x3f;
              *(byte *)((int)param_3 + 6) = bVar9 & 0xc0 | (byte)param_5[0x19] >> 2;
              goto LAB_ram_4ff236b4;
            }
            goto LAB_ram_4ff23912;
          }
LAB_ram_4ff2391a:
          if (bVar8 != bVar18) goto LAB_ram_4ff236b8;
        }
        *(undefined1 *)((int)param_1 + 7) = 0;
        *(bool *)((int)param_1 + 9) = *param_1 != 0;
        uVar14 = 1;
        goto LAB_ram_4ff2359a;
      }
      if ((bVar13 & 7) != 0) goto LAB_ram_4ff235d8;
      bVar13 = *(byte *)((int)param_3 + 10);
      bVar18 = *(byte *)((int)param_3 + 0xb);
      bVar9 = *(byte *)(param_3 + 3);
      if (param_2[1] == '\0') {
        bVar15 = bVar13;
        bVar8 = bVar18;
        if ((param_5[7] == '\0') && (param_5[5] != '\0')) {
          bVar12 = param_5[0x17];
          if (2 < bVar12) {
            bVar12 = 2;
          }
          *(byte *)((int)param_3 + 0xb) = bVar12 << 1 | bVar18 & 0xf9;
        }
        goto LAB_ram_4ff2358c;
      }
      *(byte *)((int)param_3 + 10) = bVar13 | 0x40;
      if (((param_5[7] == '\0') && (param_5[2] != '\0')) && (cVar11 = param_5[5], cVar11 != '\0'))
      goto LAB_ram_4ff2356e;
LAB_ram_4ff235aa:
      cVar10 = '\0';
LAB_ram_4ff235ac:
      FUN_ram_4ff2325e(param_3,param_5,cVar10);
      bVar15 = *(byte *)((int)param_3 + 10);
      bVar8 = bVar18;
LAB_ram_4ff2358c:
      if (bVar15 == bVar13) {
        bVar18 = *(byte *)((int)param_3 + 0xb);
LAB_ram_4ff23808:
        if (bVar18 == bVar8) {
          bVar3 = *(byte *)(param_3 + 3) != bVar9;
          *(bool *)((int)param_1 + 7) = bVar3;
          goto joined_r0x4ff237d8;
        }
      }
      *(undefined1 *)((int)param_1 + 7) = 1;
    }
  }
  else {
    cVar10 = *param_5;
    if (cVar10 == '\0') {
      return param_1;
    }
    if (bVar18 == 1) {
      cVar11 = param_5[9];
      bVar13 = *(byte *)((int)param_3 + 7);
      bVar18 = *(byte *)((int)param_3 + 10);
      *(char *)((int)param_1 + 10) = cVar11;
      if (cVar11 == '\0') {
        cVar11 = param_5[10];
        *(undefined1 *)((int)param_1 + 0xb) = 0;
      }
      else {
        uVar2 = *(ushort *)((int)param_4 + 10);
        *(byte *)((int)param_3 + 10) = bVar18 & 0xf7;
        *(byte *)((int)param_1 + 0xb) = (byte)(uVar2 >> 3) & 1;
        cVar11 = param_5[10];
      }
      goto LAB_ram_4ff23708;
    }
    if (bVar18 != 2) {
      if ((bVar13 & 7) == 0) {
        bVar13 = *(byte *)((int)param_3 + 10);
        bVar18 = *(byte *)((int)param_3 + 0xb);
        bVar9 = *(byte *)(param_3 + 3);
        bVar8 = bVar18;
        if (cVar11 == '\x01') {
          cVar11 = param_5[0xd];
          cVar16 = param_5[0xe];
          cVar1 = param_5[6];
          bVar15 = bVar18;
          if ((cVar11 != '\0') && ((uint)(param_6 - *(int *)(param_5 + 0x10)) < 0x3e9)) {
            if (*param_2 != '\0') goto LAB_ram_4ff23876;
            if (cVar16 == '\0') {
              bVar12 = bVar13;
              if ((param_5[7] == '\0') && (param_5[0xb] != '\0')) {
                bVar15 = param_5[0x17];
                if (2 < bVar15) {
                  bVar15 = 2;
                }
                bVar15 = bVar15 << 1 | bVar18 & 0xf9;
                *(byte *)((int)param_3 + 0xb) = bVar15;
              }
            }
            else {
              *(byte *)((int)param_3 + 10) = bVar13 | 0x10;
              bVar12 = bVar13 | 0x10;
              if (param_5[7] == '\0') {
                if (param_5[0xb] == '\0') {
                  bVar12 = *(byte *)((int)param_3 + 10);
                }
                else {
                  bVar15 = param_5[0x17];
                  if (2 < bVar15) {
                    bVar15 = 2;
                  }
                  bVar15 = bVar15 << 1 | bVar18 & 0xf9;
                  *(byte *)((int)param_3 + 0xb) = bVar15;
                  bVar12 = *(byte *)((int)param_3 + 10);
                }
              }
            }
LAB_ram_4ff238b4:
            *(byte *)((int)param_3 + 10) = bVar12 | 0x82;
            *(byte *)((int)param_3 + 0xb) = bVar15 | 8;
            if (param_5[7] == '\0') {
              *(byte *)(param_3 + 3) = bVar9 & 0xef;
            }
            bVar15 = bVar12 | 0x82;
            if (cVar1 == '\0') goto LAB_ram_4ff235ac;
LAB_ram_4ff238d6:
            *(byte *)((int)param_3 + 10) = bVar15 & 0xfc;
            if (param_5[7] == '\0') {
              *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) & 0xef;
            }
            goto LAB_ram_4ff235ac;
          }
          if (*param_2 != '\0') {
            cVar11 = '\0';
LAB_ram_4ff23876:
            if (cVar16 == '\0') {
              bVar12 = bVar13 | 0x40;
            }
            else {
              bVar12 = bVar13 | 0x50;
            }
            *(byte *)((int)param_3 + 10) = bVar12;
            if (param_5[7] == '\0') {
              cVar19 = param_5[0xb];
              if (cVar19 == '\0') {
                if (cVar11 == '\0') goto LAB_ram_4ff2392e;
                bVar12 = *(byte *)((int)param_3 + 10);
              }
              else {
                bVar15 = param_5[0x17];
                if (2 < bVar15) {
                  bVar15 = 2;
                }
                *(byte *)((int)param_3 + 0xb) = bVar15 << 1 | bVar18 & 0xf9;
                if (cVar11 == '\0') goto LAB_ram_4ff23994;
                bVar12 = *(byte *)((int)param_3 + 10);
                bVar15 = bVar15 << 1 | bVar18 & 0xf9;
              }
            }
            else if (cVar11 == '\0') {
LAB_ram_4ff2392e:
              if (cVar1 == '\0') goto LAB_ram_4ff235aa;
              goto LAB_ram_4ff23932;
            }
            goto LAB_ram_4ff238b4;
          }
          if (cVar16 != '\0') {
            *(byte *)((int)param_3 + 10) = bVar13 | 0x10;
            if (param_5[7] != '\0') {
              cVar10 = '\0';
              bVar15 = bVar13 | 0x10;
              if (cVar1 == '\0') goto LAB_ram_4ff235aa;
              goto LAB_ram_4ff238d6;
            }
            cVar16 = param_5[0xb];
            if (cVar16 == '\0') goto LAB_ram_4ff2392e;
            bVar15 = param_5[0x17];
            if (2 < bVar15) {
              bVar15 = 2;
            }
            *(byte *)((int)param_3 + 0xb) = bVar15 << 1 | bVar18 & 0xf9;
            cVar19 = '\0';
LAB_ram_4ff23994:
            if (cVar1 == '\0') {
              if ((cVar19 != '\0') || (cVar16 != '\0')) goto LAB_ram_4ff235aa;
              bVar15 = *(byte *)((int)param_3 + 10);
              goto LAB_ram_4ff2358c;
            }
LAB_ram_4ff23932:
            cVar10 = '\0';
            bVar15 = *(byte *)((int)param_3 + 10);
            goto LAB_ram_4ff238d6;
          }
          bVar15 = bVar13;
          if ((param_5[7] == '\0') && (param_5[0xb] != '\0')) {
            bVar12 = param_5[0x17];
            if (2 < bVar12) {
              bVar12 = 2;
            }
            *(byte *)((int)param_3 + 0xb) = bVar12 << 1 | bVar18 & 0xf9;
            if (cVar1 != '\0') {
              cVar10 = '\0';
              goto LAB_ram_4ff238d6;
            }
          }
          else {
            cVar10 = '\0';
            if (cVar1 != '\0') goto LAB_ram_4ff238d6;
          }
          goto LAB_ram_4ff2358c;
        }
        if ((param_5[7] == '\0') && (cVar11 = '\0', param_5[0xb] != '\0')) {
LAB_ram_4ff2356e:
          bVar15 = param_5[0x17];
          if (2 < bVar15) {
            bVar15 = 2;
          }
          *(byte *)((int)param_3 + 0xb) = bVar15 << 1 | bVar18 & 0xf9;
          if (cVar11 != '\0') goto LAB_ram_4ff235aa;
          bVar15 = *(byte *)((int)param_3 + 10);
          bVar8 = bVar18;
          goto LAB_ram_4ff2358c;
        }
        goto LAB_ram_4ff23808;
      }
LAB_ram_4ff235d8:
      if (*(char *)((int)param_1 + 7) != '\0') goto LAB_ram_4ff23598;
      goto LAB_ram_4ff235de;
    }
    bVar13 = param_5[0xb];
    if (((cVar11 != '\x01') || (param_5[0xd] == '\0')) ||
       (1000 < (uint)(param_6 - *(int *)(param_5 + 0x10)))) goto LAB_ram_4ff236ca;
    bVar18 = *(byte *)(param_3 + 3);
    bVar9 = *(byte *)((int)param_3 + 6);
    bVar15 = *(byte *)((int)param_3 + 5);
    bVar8 = bVar18;
    if (bVar13 != 0) {
      if (param_5[7] == '\0') {
LAB_ram_4ff239fe:
        cVar11 = param_5[8];
      }
      else {
        bVar13 = bVar18 & 0x8f;
        if ((byte)param_5[0x18] < 5) {
          bVar12 = param_5[0x18] << 4;
          bVar8 = bVar13 | bVar12;
          *(byte *)(param_3 + 3) = bVar13 | bVar12;
          goto LAB_ram_4ff239fe;
        }
        bVar8 = bVar13 | 0x20;
        *(byte *)(param_3 + 3) = bVar8;
        cVar11 = param_5[8];
      }
      if (((cVar11 == '\0') && (param_5[0xc] != '\0')) && (*(int *)(param_5 + 0x1c) != 0)) {
        if (-1 < *(int *)(param_5 + 0x20) - param_6) {
          bVar13 = param_5[0x19];
          *param_1 = *(int *)(param_5 + 0x1c);
          if (0x3c < bVar13) {
            bVar13 = 0x3c;
          }
          *(byte *)((int)param_3 + 6) = bVar9 & 0xc0 | bVar13;
        }
        bVar8 = *(byte *)(param_3 + 3);
      }
    }
    bVar13 = bVar15 | 0xc0;
    *(byte *)(param_3 + 3) = bVar8 | 0x80;
    *(byte *)((int)param_3 + 5) = bVar13;
LAB_ram_4ff236b4:
    if (bVar13 == bVar15) {
      bVar13 = *(byte *)((int)param_3 + 6);
LAB_ram_4ff23912:
      if (bVar13 == bVar9) {
        bVar8 = *(byte *)(param_3 + 3);
        goto LAB_ram_4ff2391a;
      }
    }
LAB_ram_4ff236b8:
    *(undefined1 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 7) = 1;
  }
LAB_ram_4ff23598:
  uVar14 = 3;
LAB_ram_4ff2359a:
  *(undefined1 *)((int)param_1 + 5) = uVar14;
  return param_1;
}



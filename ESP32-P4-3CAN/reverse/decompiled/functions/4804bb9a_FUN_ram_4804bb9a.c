/* Firmware entry: 0x4804bb9a */

void FUN_ram_4804bb9a(char *param_1,int param_2,char *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  cVar6 = *param_3;
  iVar8 = *(int *)(param_3 + 0xc);
  param_1[0x18] = cVar6;
  if (*(int *)(param_1 + 0x154) == 0) {
    uVar11 = *(uint *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x154) = iVar8;
    cVar5 = param_1[0x7a];
    cVar3 = param_1[0x82];
joined_r0x4804bc90:
    if (((((uVar11 & 0xffff0000) == 0x10a0000) && (param_1[9] != '\0')) && (param_1[10] != '\0')) &&
       (param_1[0xc] == '\0')) {
LAB_ram_4804c34a:
      if ((((((param_1[0xd] != '\0') && (param_1[0xe] == '\0')) &&
            ((param_1[0xf] == '\0' &&
             (((param_1[0x10] != '\0' && (param_1[0xb] != '\0')) && (param_1[0x2c] != '\0')))))) &&
           (((uint)(param_2 - *(int *)(param_1 + 0x30)) < 0x12d && (param_1[0x85] != '\0')))) &&
          ((uint)(param_2 - *(int *)(param_1 + 0x8c)) < 0x12d)) &&
         (((param_1[0x86] != '\0' && (1 < (byte)param_1[0x88])) &&
          ((param_1[0x87] == param_1[0x89] && (param_1[0x87] != '\x05')))))) {
        param_1[0xa0] = '\0';
        param_1[0xa2] = '\0';
        param_1[0xa3] = '\0';
      }
    }
    if (cVar5 == '\0') {
LAB_ram_4804bc0a:
      if (cVar3 != '\0') goto LAB_ram_4804bc0e;
      goto LAB_ram_4804bd60;
    }
    if (3000 < (uint)(param_2 - *(int *)(param_1 + 0x7c))) {
      param_1[0x7a] = '\0';
      if (param_1[0xa1] != '\x02') goto LAB_ram_4804bc0a;
      param_1[0xa1] = '\0';
    }
    if (cVar3 != '\0') {
LAB_ram_4804bc0e:
      if ((*(int *)(param_1 + 300) != 0) && (param_1[0x135] == '\0')) {
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
        param_1[300] = '\0';
        param_1[0x12d] = '\0';
        param_1[0x12e] = '\0';
        param_1[0x12f] = '\0';
        param_1[0x130] = '\0';
        param_1[0x131] = '\0';
        param_1[0x132] = '\0';
        param_1[0x133] = '\0';
        param_1[0x134] = '\0';
        param_1[0x148] = '\0';
        param_1[0x149] = '\0';
        param_1[0x14a] = '\0';
        param_1[0x14b] = '\0';
        param_1[0x14c] = '\0';
        param_1[0x14d] = '\0';
        param_1[0x14e] = '\0';
        param_1[0x14f] = '\0';
      }
      if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
        param_1[0x128] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        param_1[0x108] = '\0';
        param_1[0x109] = '\0';
        param_1[0x10a] = '\0';
        param_1[0x10b] = '\0';
        param_1[0x10c] = '\0';
        param_1[0x10d] = '\0';
        param_1[0x10e] = '\0';
        param_1[0x10f] = '\0';
        param_1[0x110] = '\0';
        param_1[0x111] = '\0';
        param_1[0x112] = '\0';
        param_1[0x113] = '\0';
        param_1[0x114] = '\0';
        param_1[0x115] = '\0';
        param_1[0x116] = '\0';
        param_1[0x117] = '\0';
        param_1[0x118] = '\0';
        param_1[0x119] = '\0';
        param_1[0x11a] = '\0';
        param_1[0x11b] = '\0';
        param_1[0x11c] = '\0';
        param_1[0x11d] = '\0';
        param_1[0x11e] = '\0';
        param_1[0x11f] = '\0';
        param_1[0x120] = '\0';
        param_1[0x121] = '\0';
        param_1[0x122] = '\0';
        param_1[0x123] = '\0';
        param_1[0x124] = '\0';
        param_1[0x125] = '\0';
        param_1[0x126] = '\0';
        param_1[0x127] = '\0';
      }
      return;
    }
    cVar5 = param_1[0xa5];
    if (param_1[0x68] != '\0') goto LAB_ram_4804bed2;
LAB_ram_4804bd76:
    cVar6 = param_1[0xa0];
    if (cVar5 != '\0') {
      if (cVar6 != '\x04') {
LAB_ram_4804bfd8:
        cVar6 = '\x0e';
        if (*param_1 == '\0') {
LAB_ram_4804bf3e:
          FUN_ram_4804a9c8(param_1,param_2,cVar6,7);
        }
        else {
LAB_ram_4804bf0a:
          if ((((((param_1[9] == '\0') || (param_1[10] == '\0')) || (param_1[0xc] != '\0')) ||
               ((param_1[0xd] == '\0' || (param_1[0xe] != '\0')))) || (param_1[0xf] != '\0')) ||
             (param_1[0x10] == '\0')) {
            cVar6 = '\t';
            if ((param_1[0xf] == '\0') && (cVar6 = '\n', param_1[0xe] == '\0')) {
              cVar6 = (-(param_1[0xd] == '\0') & 9U) + 1;
            }
            goto LAB_ram_4804bf3e;
          }
        }
        cVar3 = param_1[0xac];
        cVar6 = param_1[0xa0];
        if (cVar3 != '\0') goto LAB_ram_4804bf58;
        goto LAB_ram_4804bd8a;
      }
LAB_ram_4804c24e:
      cVar3 = param_1[0xac];
      cVar5 = '\x01';
      if (cVar3 != '\0') {
        if (param_3[1] == '\0') goto LAB_ram_4804c148;
        cVar6 = '\x04';
        goto LAB_ram_4804bf5e;
      }
LAB_ram_4804c266:
      if (param_1[0xae] == '\0') {
        uVar11 = (uint)(byte)param_1[0xa2];
        if ((uVar11 - 5 & 0xff) < 4) {
          cVar10 = param_3[1];
          if (cVar10 == '\0') {
            if (cVar5 == '\0') {
              if (cVar6 != '\x02') {
                bVar1 = 0;
                cVar9 = '\x01';
                goto LAB_ram_4804bf90;
              }
            }
            else if (cVar6 == '\x04') goto LAB_ram_4804be04;
LAB_ram_4804c3e6:
            if ((uVar11 != 9) && (uVar11 != 4)) goto LAB_ram_4804bff8;
            goto LAB_ram_4804bdf2;
          }
LAB_ram_4804c296:
          cVar3 = '\0';
          if (param_3[2] == '\0') goto LAB_ram_4804c29e;
LAB_ram_4804bf6c:
          cVar9 = param_3[4];
          bVar1 = 0;
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            bVar1 = 0;
            if (param_3[5] != '\0') {
              cVar9 = param_3[6];
              cVar10 = param_3[5];
              if (cVar9 == '\0') {
LAB_ram_4804c312:
                cVar9 = cVar10;
                bVar1 = (param_3[7] ^ 1U) & param_3[8];
              }
              else {
                bVar1 = 0;
              }
            }
          }
LAB_ram_4804bf7e:
          if ((cVar5 == '\0') && (cVar10 = cVar9, cVar3 == '\0')) goto LAB_ram_4804bf82;
LAB_ram_4804bfb2:
          if (cVar6 == '\x04') {
LAB_ram_4804c144:
            cVar3 = param_1[0xac];
            goto LAB_ram_4804c148;
          }
          goto LAB_ram_4804bfb8;
        }
        if (cVar5 == '\0') {
          iVar8 = FUN_ram_48031012(param_3);
          bVar1 = 0;
          if (iVar8 != 0) {
            bVar1 = param_3[3];
          }
          cVar9 = '\0';
          goto LAB_ram_4804bf90;
        }
        if (param_3[1] != '\0') {
          if (param_3[2] != '\0') {
LAB_ram_4804c402:
            if (param_3[4] == '\0') {
              cVar5 = param_3[5];
              bVar1 = 0;
              cVar9 = '\0';
              if (cVar5 != '\0') {
                if (param_3[6] == '\0') {
                  cVar3 = '\0';
                  cVar10 = '\0';
                  goto LAB_ram_4804c312;
                }
                bVar1 = 0;
              }
              goto LAB_ram_4804bfb2;
            }
          }
          if (cVar6 != '\x04') {
            if ((uVar11 != 9) && (uVar11 != 4)) goto LAB_ram_4804c426;
            goto LAB_ram_4804bdf2;
          }
          goto LAB_ram_4804be04;
        }
        if (cVar6 == '\x04') goto LAB_ram_4804be04;
LAB_ram_4804bdb6:
        cVar6 = '\t';
        if ((uVar11 == 9) || (uVar11 == 4)) goto LAB_ram_4804bdf2;
        if ((param_3[7] == '\0') && (cVar6 = '\n', param_3[6] == '\0')) {
          cVar6 = (-(param_3[5] == '\0') & 9U) + 1;
        }
LAB_ram_4804bde0:
        FUN_ram_4804a9c8(param_1,param_2,cVar6,7);
        goto LAB_ram_4804bdea;
      }
      cVar10 = param_3[1];
      if (cVar10 == '\0') goto LAB_ram_4804be04;
      if (param_3[2] != '\0') {
        cVar3 = '\0';
        goto LAB_ram_4804bf6c;
      }
LAB_ram_4804c29e:
      bVar1 = 0;
      cVar9 = cVar5;
      if (cVar5 != '\0') goto LAB_ram_4804bfb2;
LAB_ram_4804bf82:
      cVar9 = cVar10;
      if (1 < (byte)(cVar6 - 2U)) {
LAB_ram_4804bf90:
        if (cVar6 != '\x04') {
          uVar11 = (uint)(byte)param_1[0xa2];
LAB_ram_4804bf9a:
          if ((9 < uVar11) || ((0x234U >> (uVar11 & 0x1f) & 1) == 0)) goto LAB_ram_4804bdea;
          cVar6 = param_1[0xa0];
          goto LAB_ram_4804bfb2;
        }
        goto LAB_ram_4804c144;
      }
LAB_ram_4804bfb8:
      uVar11 = (uint)(byte)param_1[0xa2];
LAB_ram_4804bfbc:
      if ((uVar11 == 9) || (uVar11 == 4)) goto LAB_ram_4804bdea;
      if (bVar1 == 0) goto LAB_ram_4804c428;
      cVar6 = param_1[0xac];
      goto LAB_ram_4804bdee;
    }
LAB_ram_4804bd80:
    cVar3 = param_1[0xac];
LAB_ram_4804bd86:
    if (cVar3 == '\0') {
LAB_ram_4804bd8a:
      cVar3 = '\0';
      cVar5 = param_1[0xa5];
      if (cVar6 == '\x03') {
        cVar10 = param_3[1];
        if (cVar10 != '\0') goto LAB_ram_4804c296;
        if ((param_1[0xa2] != '\t') && (param_1[0xa2] != '\x04')) goto LAB_ram_4804bff8;
        goto LAB_ram_4804bdf2;
      }
      if (cVar6 == '\x04') goto LAB_ram_4804c266;
      uVar11 = (uint)(byte)param_1[0xa2];
      if ((uVar11 - 5 & 0xff) < 4) {
        cVar9 = param_3[1];
        if (cVar9 == '\0') {
          if ((cVar5 == '\0') && (cVar6 != '\x02')) {
            bVar1 = 0;
            cVar9 = '\x01';
            goto LAB_ram_4804bf9a;
          }
          goto LAB_ram_4804c3e6;
        }
        bVar1 = 0;
        if (param_3[2] != '\0') goto LAB_ram_4804bf6c;
        goto LAB_ram_4804bf7e;
      }
      if (cVar5 == '\0') {
        if (cVar6 != '\x02') {
          iVar8 = FUN_ram_48031012(param_3);
          bVar1 = 0;
          if (iVar8 != 0) {
            bVar1 = param_3[3];
          }
          cVar9 = '\0';
          goto LAB_ram_4804bf9a;
        }
        if ((param_3[1] == '\0') || (param_3[2] == '\0')) goto LAB_ram_4804c41c;
        if (param_3[4] == '\0') {
          if (param_3[5] == '\0') {
            bVar1 = 0;
            cVar10 = '\0';
          }
          else {
            if (param_3[6] == '\0') {
              cVar5 = '\0';
              cVar3 = '\0';
              cVar10 = '\0';
              goto LAB_ram_4804c312;
            }
            bVar1 = 0;
            cVar10 = '\0';
          }
          goto LAB_ram_4804bf82;
        }
        cVar9 = '\0';
        bVar1 = 0;
        goto LAB_ram_4804bfbc;
      }
      if (param_3[1] == '\0') goto LAB_ram_4804bdb6;
      if (param_3[2] != '\0') goto LAB_ram_4804c402;
LAB_ram_4804c41c:
      if ((uVar11 == 9) || (uVar11 == 4)) goto LAB_ram_4804bdf2;
LAB_ram_4804c426:
      cVar9 = '\0';
LAB_ram_4804c428:
      cVar6 = '\t';
      if ((param_3[7] == '\0') && (cVar6 = '\n', param_3[6] == '\0')) {
        cVar6 = (-(param_3[5] == '\0') & 9U) + 1;
      }
      if (cVar9 != '\0') goto LAB_ram_4804c018;
      goto LAB_ram_4804bde0;
    }
LAB_ram_4804bf58:
    if (param_3[1] != '\0') {
LAB_ram_4804bf5e:
      cVar3 = param_3[2];
      if (cVar3 == '\0') {
        bVar1 = 0;
        cVar9 = '\x01';
        goto LAB_ram_4804bfb2;
      }
      cVar5 = param_1[0xa5];
      goto LAB_ram_4804bf6c;
    }
    if (cVar6 != '\x04') goto LAB_ram_4804bfe8;
LAB_ram_4804c148:
    if (cVar3 != '\0') goto LAB_ram_4804c14c;
    goto LAB_ram_4804be04;
  }
  if ((iVar8 == 0) || (*(int *)(param_1 + 0x154) == iVar8)) {
    uVar11 = *(uint *)(param_1 + 0xa0);
    cVar5 = param_1[0x7a];
    cVar3 = param_1[0x82];
    goto joined_r0x4804bc90;
  }
  if (*(int *)(param_1 + 300) != 0) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
  }
  param_1[0xa0] = '\x05';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\n';
  param_1[0xa3] = '\x01';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x148] = '\0';
  param_1[0x149] = '\0';
  param_1[0x14a] = '\0';
  param_1[0x14b] = '\0';
  param_1[0x14c] = '\0';
  param_1[0x14d] = '\0';
  param_1[0x14e] = '\0';
  param_1[0x14f] = '\0';
  param_1[0x128] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[0xae] = '\0';
  param_1[0xdc] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x50] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0xb9] = '\0';
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  if ((param_1[9] != '\0') && (param_1[10] != '\0')) {
    cVar5 = '\0';
    cVar3 = '\0';
    if (param_1[0xc] != '\0') goto LAB_ram_4804bd60;
    goto LAB_ram_4804c34a;
  }
LAB_ram_4804bd60:
  if (param_1[0xa1] == '\x02') {
    if (-1 < param_2 - *(int *)(param_1 + 0x74)) {
      param_1[0xa3] = '\r';
      param_1[0xa1] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      if (param_1[0xa2] == '\x01') {
        cVar5 = param_1[0xa5];
        param_1[0xa2] = '\0';
        goto LAB_ram_4804bd76;
      }
    }
    cVar5 = param_1[0xa5];
    goto LAB_ram_4804bd76;
  }
  cVar5 = param_1[0xa5];
  if (param_1[0x68] == '\0') goto LAB_ram_4804bd76;
LAB_ram_4804bed2:
  if (param_1[0xa1] != '\x05') {
    if (((param_1[0xa1] != '\x03') || ((uint)(param_2 - *(int *)(param_1 + 0x6c)) < 0x5dc)) ||
       (*param_1 == '\0')) goto LAB_ram_4804bd76;
    if (cVar5 != '\0') {
      cVar6 = param_1[0xa0];
      param_1[0xa1] = '\x04';
      if (cVar6 != '\x04') goto LAB_ram_4804bf0a;
      goto LAB_ram_4804c24e;
    }
    if (((param_1[0x97] != '\0') && (param_1[0x98] != '\0')) && (1 < (byte)param_1[0x9a])) {
      cVar5 = '\x02';
      if (param_1[0x99] != param_1[0x9b]) goto LAB_ram_4804c482;
      if ((3 < (byte)(param_1[0x9b] - 3U)) || (1000 < (uint)(param_2 - *(int *)(param_1 + 0x9c))))
      goto LAB_ram_4804c4b8;
      iVar8 = FUN_ram_48031012(param_1 + 8);
      if ((iVar8 == 0) ||
         (((param_1[0xb] == '\0' || (param_1[0x2c] == '\0')) ||
          (300 < (uint)(param_2 - *(int *)(param_1 + 0x30)))))) {
        cVar5 = '\x01';
        goto LAB_ram_4804c482;
      }
      cVar6 = param_1[0xa0];
      param_1[0xa1] = '\x04';
      goto LAB_ram_4804bd80;
    }
LAB_ram_4804c4b8:
    cVar5 = '\x02';
LAB_ram_4804c482:
    cVar3 = param_1[0xac];
    cVar6 = param_1[0xa0];
    param_1[0xa3] = cVar5;
    goto LAB_ram_4804bd86;
  }
  if (((uint)(param_2 - *(int *)(param_1 + 0x6c)) < (-(uint)(param_1[7] == '\0') & 1000) + 500) ||
     (param_1[1] == '\0')) goto LAB_ram_4804bd76;
  iVar8 = FUN_ram_48031012(param_1 + 8);
  if (iVar8 == 0) {
    param_1[0xa3] = '\x01';
    goto LAB_ram_4804bd76;
  }
  if ((param_1[0x50] == '\0') || (cVar6 == '\0')) goto LAB_ram_4804bd76;
  param_1[0xdc] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  if ((*(int *)(param_1 + 300) != 0) && (param_1[0x135] == '\0')) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    param_1[0x134] = '\0';
    param_1[0x148] = '\0';
    param_1[0x149] = '\0';
    param_1[0x14a] = '\0';
    param_1[0x14b] = '\0';
    param_1[0x14c] = '\0';
    param_1[0x14d] = '\0';
    param_1[0x14e] = '\0';
    param_1[0x14f] = '\0';
  }
  if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
    param_1[0x128] = '\0';
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    param_1[0x108] = '\0';
    param_1[0x109] = '\0';
    param_1[0x10a] = '\0';
    param_1[0x10b] = '\0';
    param_1[0x10c] = '\0';
    param_1[0x10d] = '\0';
    param_1[0x10e] = '\0';
    param_1[0x10f] = '\0';
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
  }
  iVar8 = *(int *)(param_1 + 0xb0) + 1;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 0xb0) = iVar8;
  param_1[0xac] = '\x01';
  param_1[0xad] = '\0';
  param_1[0xdc] = '\x01';
  param_1[0xe5] = '\x01';
  iVar8 = param_2;
  if (param_2 == 0) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 200) = iVar8;
  param_1[0xd8] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xda] = '\0';
  param_1[0xdb] = '\0';
  *(int *)(param_1 + 0xe0) = param_2;
  param_1[0xec] = '\0';
  param_1[0xed] = '\0';
  param_1[0xf0] = '\0';
  param_1[0xf1] = '\0';
  param_1[0xf2] = '\0';
  param_1[0xf3] = '\0';
  param_1[0xf4] = '\0';
  param_1[0xf5] = '\0';
  param_1[0xf6] = '\0';
  param_1[0xf7] = '\0';
  param_1[0xf8] = '\0';
  param_1[0xf9] = '\0';
  param_1[0xfa] = '\0';
  param_1[0xfb] = '\0';
  param_1[0xfc] = '\0';
  param_1[0xfd] = '\0';
  param_1[0xfe] = '\0';
  param_1[0xff] = '\0';
  param_1[0xa0] = '\x03';
  param_1[0xa1] = '\x06';
  param_1[0xa2] = '\a';
  param_1[0xa3] = '\0';
  if (cVar5 != '\0') goto LAB_ram_4804bfd8;
  if (param_3[1] != '\0') {
    cVar6 = '\x03';
    goto LAB_ram_4804bf5e;
  }
LAB_ram_4804bfe8:
  if ((param_1[0xa2] == '\t') || (param_1[0xa2] == '\x04')) {
LAB_ram_4804bdea:
    cVar6 = param_1[0xac];
LAB_ram_4804bdee:
    if (cVar6 != '\0') goto LAB_ram_4804c14c;
LAB_ram_4804bdf2:
    if ((param_1[0xa0] == '\x03') && (param_1[1] == '\0')) {
LAB_ram_4804c166:
      param_1[0xac] = '\0';
      param_1[0xcc] = '\0';
      param_1[0xd0] = '\0';
      param_1[0xd1] = '\0';
      param_1[0xd2] = '\0';
      param_1[0xd3] = '\0';
      param_1[0xd4] = '\0';
      param_1[0xd5] = '\0';
      param_1[0xd6] = '\0';
      param_1[0xd7] = '\0';
      param_1[0xdc] = '\0';
      param_1[0xe0] = '\0';
      param_1[0xe1] = '\0';
      param_1[0xe2] = '\0';
      param_1[0xe3] = '\0';
      param_1[0xe4] = '\0';
      param_1[0xe5] = '\0';
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      param_1[0xa1] = '\0';
      param_1[0xae] = '\x01';
      if ((*(int *)(param_1 + 300) != 0) && (param_1[0x135] == '\0')) {
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
        param_1[300] = '\0';
        param_1[0x12d] = '\0';
        param_1[0x12e] = '\0';
        param_1[0x12f] = '\0';
        param_1[0x130] = '\0';
        param_1[0x131] = '\0';
        param_1[0x132] = '\0';
        param_1[0x133] = '\0';
        param_1[0x134] = '\0';
        param_1[0x148] = '\0';
        param_1[0x149] = '\0';
        param_1[0x14a] = '\0';
        param_1[0x14b] = '\0';
        param_1[0x14c] = '\0';
        param_1[0x14d] = '\0';
        param_1[0x14e] = '\0';
        param_1[0x14f] = '\0';
      }
      if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
        param_1[0x128] = '\0';
        param_1[0x104] = '\0';
        param_1[0x105] = '\0';
        param_1[0x106] = '\0';
        param_1[0x107] = '\0';
        param_1[0x108] = '\0';
        param_1[0x109] = '\0';
        param_1[0x10a] = '\0';
        param_1[0x10b] = '\0';
        param_1[0x10c] = '\0';
        param_1[0x10d] = '\0';
        param_1[0x10e] = '\0';
        param_1[0x10f] = '\0';
        param_1[0x110] = '\0';
        param_1[0x111] = '\0';
        param_1[0x112] = '\0';
        param_1[0x113] = '\0';
        param_1[0x114] = '\0';
        param_1[0x115] = '\0';
        param_1[0x116] = '\0';
        param_1[0x117] = '\0';
        param_1[0x118] = '\0';
        param_1[0x119] = '\0';
        param_1[0x11a] = '\0';
        param_1[0x11b] = '\0';
        param_1[0x11c] = '\0';
        param_1[0x11d] = '\0';
        param_1[0x11e] = '\0';
        param_1[0x11f] = '\0';
        param_1[0x120] = '\0';
        param_1[0x121] = '\0';
        param_1[0x122] = '\0';
        param_1[0x123] = '\0';
        param_1[0x124] = '\0';
        param_1[0x125] = '\0';
        param_1[0x126] = '\0';
        param_1[0x127] = '\0';
      }
      FUN_ram_4804a9c8(param_1,param_2,0xe,6);
    }
  }
  else {
LAB_ram_4804bff8:
    cVar6 = '\t';
    if ((param_3[7] == '\0') && (cVar6 = '\n', param_3[6] == '\0')) {
      cVar6 = (-(param_3[5] == '\0') & 9U) + 1;
    }
LAB_ram_4804c018:
    FUN_ram_4804ac7e(param_1,param_2,cVar6);
    if (param_1[0xac] == '\0') goto LAB_ram_4804bdf2;
LAB_ram_4804c14c:
    if (param_1[1] == '\0') {
      if ((param_1[0xa0] == '\x04') && (param_1[0xae] != '\0')) {
        param_1[0xa3] = '\x0e';
        goto LAB_ram_4804be04;
      }
      goto LAB_ram_4804c166;
    }
  }
LAB_ram_4804be04:
  FUN_ram_4804ad20(param_1,param_2);
  FUN_ram_4804b9a8(param_1,param_2);
  if ((*(int *)(param_1 + 0xe8) != 0) && (param_2 - *(int *)(param_1 + 0xe8) < 0))
  goto LAB_ram_4804bea8;
  if (param_1[0xa2] == '\b') {
    if ((((*(int *)(param_1 + 300) != 0) || (param_1[0x128] != '\0')) || (param_1[0x50] == '\0')) ||
       (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x3c))) goto LAB_ram_4804bea8;
    iVar8 = FUN_ram_4804a56e(param_1,5,0,0,param_2);
  }
  else {
    if (param_1[0xdc] == '\0') goto LAB_ram_4804bea8;
    if ((param_1[0xdc] != '\x01') || (param_1[0xac] == '\0')) {
      param_1[0xdc] = '\0';
      param_1[0xe0] = '\0';
      param_1[0xe1] = '\0';
      param_1[0xe2] = '\0';
      param_1[0xe3] = '\0';
      param_1[0xe4] = '\0';
      param_1[0xe5] = '\0';
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      goto LAB_ram_4804bea8;
    }
    if ((*(int *)(param_1 + 300) != 0) || (param_1[0x128] != '\0')) goto LAB_ram_4804bea8;
    if (param_1[0xe5] == '\0') {
      if (param_2 - *(int *)(param_1 + 0xe0) < 0) goto LAB_ram_4804bea8;
      param_1[0xe5] = '\x01';
    }
    if (param_1[0x50] == '\0') goto LAB_ram_4804bea8;
    iVar8 = FUN_ram_4804a56e(param_1,'\x03' - (param_1[0xe4] ^ 1U),param_1[0xe4] ^ 1U,0,param_2);
  }
  if (iVar8 == 0) {
    cVar6 = param_1[0xa3];
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    if (cVar6 == '\0') {
      cVar6 = '\x05';
    }
    param_1[0xa3] = cVar6;
    param_1[0xe5] = '\x01';
    *(int *)(param_1 + 0xe8) = param_2 + 5;
  }
LAB_ram_4804bea8:
  FUN_ram_4804a6fe(param_1,param_2);
  return;
}



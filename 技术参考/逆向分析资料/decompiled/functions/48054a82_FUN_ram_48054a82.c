/* Firmware entry: 0x48054a82 */

void FUN_ram_48054a82(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  iVar15 = *param_2;
  if (iVar15 == 0x273) {
    if (((*(char *)((int)param_2 + 0xd) == '\x02') && (7 < *(byte *)(param_2 + 1))) &&
       ((*(int *)(param_1 + 0x44) == 0 ||
        ((0x14 < (uint)(param_3 - *(int *)(param_1 + 0x44)) ||
         (iVar15 = FUN_ram_4ff4511a((int)param_2 + 5,param_1 + 0x3c,8), iVar15 != 0)))))) {
      iVar15 = param_3;
      if (param_3 == 0) {
        iVar15 = 1;
      }
      *(int *)(param_1 + 0x14) = iVar15;
      iVar15 = param_2[1];
      iVar14 = param_2[2];
      iVar13 = param_2[3];
      iVar6 = param_2[4];
      iVar7 = param_2[5];
      iVar8 = param_2[6];
      iVar9 = param_2[7];
      iVar10 = param_2[8];
      *(int *)(param_1 + 0x18) = *param_2;
      *(int *)(param_1 + 0x1c) = iVar15;
      *(int *)(param_1 + 0x20) = iVar14;
      *(int *)(param_1 + 0x24) = iVar13;
      *(int *)(param_1 + 0x28) = iVar6;
      *(int *)(param_1 + 0x2c) = iVar7;
      *(int *)(param_1 + 0x30) = iVar8;
      *(int *)(param_1 + 0x34) = iVar9;
      *(int *)(param_1 + 0x38) = iVar10;
      if ((*(char *)(param_1 + 0xc1) == '\0') &&
         (((*(char *)(param_1 + 0x48) != '\0' || (*(char *)(param_1 + 0xb4) != '\0')) ||
          (((*(char *)(param_1 + 0xb) != '\0' && (*(char *)(param_1 + 0xe9) == '\x02')) ||
           (*(char *)(param_1 + 0xc2) != '\0')))))) {
        if (*(char *)(param_1 + 0x94) != '\0') {
          *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
        }
        *(int *)(param_1 + 0x98) = param_3;
        *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 2;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      if ((((*(char *)(param_1 + 0x1b0) != '\0') && (*(char *)(param_1 + 0xe9) == '\x02')) &&
          (*(char *)(param_1 + 9) != '\0')) &&
         (iVar15 = FUN_ram_480549a6(param_1,8,3,4,param_3), iVar15 != 0)) {
        *(undefined1 *)(param_1 + 0x1b0) = 0;
      }
    }
    goto LAB_ram_48054ada;
  }
  if (iVar15 == 0x3e3) {
    if ((*(char *)((int)param_2 + 0xd) == '\x02') && (1 < *(byte *)(param_2 + 1))) {
      iVar15 = param_3;
      if (param_3 == 0) {
        iVar15 = 1;
      }
      iVar6 = iVar15;
      if ((*(byte *)((int)param_2 + 5) & 0x10) != 0) {
        if (param_3 == 0) {
          *(undefined4 *)(param_1 + 0x168) = 1;
          iVar6 = 1;
        }
        else {
          *(int *)(param_1 + 0x168) = param_3;
          iVar6 = param_3;
        }
      }
      *(int *)(param_1 + 0x164) = iVar6;
      bVar5 = *(byte *)((int)param_2 + 6);
      *(int *)(param_1 + 0x58) = iVar15;
      *(byte *)(param_1 + 0x5c) = bVar5 & 1;
    }
    goto LAB_ram_48054ada;
  }
  cVar11 = *(char *)(param_1 + 8);
  if (cVar11 != '\0') {
    if (iVar15 == 0x145) {
      if ((*(char *)((int)param_2 + 0xd) != '\x01') || (*(byte *)(param_2 + 1) < 8))
      goto LAB_ram_48054ada;
      uStack_38 = 0;
      iVar6 = FUN_ram_4805465c(param_2,0x15,1,&uStack_38);
      bVar2 = uStack_38 != 0;
      iVar7 = FUN_ram_4805465c(param_2,0x1d,2,&uStack_38);
      bVar1 = uStack_38 != 2;
      iVar15 = FUN_ram_4805465c(param_2,0x1f,1,&uStack_38);
      bVar4 = iVar15 != 0 && uStack_38 != 0;
      iVar8 = FUN_ram_4805465c(param_2,0x33,0xd,&uStack_38);
      iVar15 = param_3;
      if (param_3 == 0) {
        iVar15 = 1;
      }
      if (iVar7 == 0 || bVar1) {
        *(bool *)(param_1 + 0xf9) = bVar4;
        *(int *)(param_1 + 0x100) = iVar15;
        cVar16 = '\0';
        if (bVar4) goto LAB_ram_48054cba;
      }
      else {
        *(int *)(param_1 + 0x100) = iVar15;
        *(undefined1 *)(param_1 + 0xf9) = 1;
LAB_ram_48054cba:
        *(int *)(param_1 + 0x108) = iVar15;
        cVar16 = cVar11;
      }
      if (iVar6 != 0 && bVar2) {
        *(int *)(param_1 + 0x10c) = iVar15;
      }
      if (iVar8 != 0 && uStack_38 != 0) {
        *(int *)(param_1 + 0x110) = iVar15;
      }
      cVar11 = '\0';
      if (*(char *)(param_1 + 0xf8) != '\0') {
        cVar11 = '\0';
        if ((((*(int *)(param_1 + 0xfc) != 0) &&
             ((uint)(param_3 - *(int *)(param_1 + 0xfc)) < 0x12d)) &&
            ((cVar16 == '\0' || (cVar11 = cVar16, 300 < (uint)(param_3 - iVar15))))) &&
           (cVar11 = '\0', *(char *)(param_1 + 0xfa) != '\0')) {
          cVar11 = '\0';
          if (*(int *)(param_1 + 0x104) != 0) {
            cVar11 = (uint)(param_3 - *(int *)(param_1 + 0x104)) < 0x12d;
          }
        }
      }
      *(char *)(param_1 + 0xfb) = cVar11;
      goto LAB_ram_48054ada;
    }
    if (iVar15 != 0x39d) {
      if (iVar15 != 0x3c2) {
        if (iVar15 != 0x118) {
          if ((iVar15 == 0x111) || (iVar15 == 0x116)) {
            if ((*(char *)((int)param_2 + 0xd) == '\x01') &&
               (bVar5 = *(byte *)(param_2 + 1), 5 < bVar5)) {
              uStack_38 = 0;
              iVar6 = FUN_ram_4805465c(param_2,0,0x10,&uStack_38);
              if ((iVar6 != 0) &&
                 ((uVar12 = uStack_38, -1 < (int)(uStack_38 << 0x10) ||
                  (uVar12 = uStack_38 | 0xffff0000, uVar12 != 0xffff8000)))) {
                if ((iVar15 == 0x111) && (bVar5 != 6)) {
                  uStack_38 = 0;
                  iVar15 = FUN_ram_4805465c(param_2,0x30,1,&uStack_38);
                  if ((iVar15 == 0) || (uStack_38 == 0)) goto LAB_ram_48054ada;
                }
                FUN_ram_48054722(param_1,((int)(uVar12 * 0x7d) / 100) * 0x10000 >> 0x10,param_3);
              }
            }
            goto LAB_ram_48054ada;
          }
          if (iVar15 == 0x148) {
            if ((*(char *)((int)param_2 + 0xd) != '\x01') || (*(byte *)(param_2 + 1) < 4))
            goto LAB_ram_48054ada;
            uStack_38 = 0;
            iVar15 = FUN_ram_4805465c(param_2,0xf,1,&uStack_38);
            uVar12 = uStack_38;
            if (iVar15 == 0) goto LAB_ram_48054ada;
          }
          else {
            if (iVar15 != 0x185) {
              if (iVar15 == 0x186) {
                if ((*(char *)((int)param_2 + 0xd) == '\x01') && (7 < *(byte *)(param_2 + 1))) {
                  iStack_3c = 0;
                  uStack_38 = 0;
                  iVar15 = FUN_ram_4805465c(param_2,0x1b,0xd,&uStack_38);
                  if (iVar15 != 0) {
                    uVar12 = uStack_38;
                    if ((int)(uStack_38 << 0x13) < 0) {
                      uVar12 = uStack_38 | 0xffffe000;
                    }
                    iVar15 = FUN_ram_4805465c(param_2,0x38,2,&iStack_3c);
                    if (((iVar15 != 0) && (iStack_3c == 1)) && ((int)uVar12 < 0)) {
                      if (param_3 == 0) {
                        param_3 = 1;
                      }
                      *(int *)(param_1 + 0x118) = param_3;
                    }
                  }
                }
              }
              else if (((iVar15 == 599) && (*(char *)((int)param_2 + 0xd) == '\x01')) &&
                      (6 < *(byte *)(param_2 + 1))) {
                uStack_38 = 0;
                iVar15 = FUN_ram_4805465c(param_2,0x2b,0xd,&uStack_38);
                if ((iVar15 == 0) || (uStack_38 == 0x1fff)) {
                  *(undefined1 *)(param_1 + 0xf0) = 0;
                  if (param_3 == 0) {
                    param_3 = 1;
                  }
                  *(int *)(param_1 + 0xf4) = param_3;
                }
                else {
                  iVar15 = (uStack_38 - 500) * 8;
                  if (iVar15 < 0) {
                    uVar12 = (iVar15 + -5) / 10;
                  }
                  else {
                    uVar12 = (iVar15 + 5U) / 10;
                  }
                  uVar12 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
                  if (param_3 == 0) {
                    param_3 = 1;
                  }
                  if ((*(char *)(param_1 + 0xf0) != '\0') &&
                     ((int)(uVar12 + 5) < (int)(uint)*(ushort *)(param_1 + 0xee))) {
                    *(int *)(param_1 + 0x11c) = param_3;
                  }
                  *(int *)(param_1 + 0xf4) = param_3;
                  *(short *)(param_1 + 0xee) = (short)(uVar12 * 0x10000 >> 0x10);
                  *(undefined1 *)(param_1 + 0xf0) = 1;
                  if ((((uVar12 & 0xffff) < 6) && (*(char *)(param_1 + 0x48) != '\0')) &&
                     (*(char *)(param_1 + 0x4d) != '\x04')) {
                    *(undefined1 *)(param_1 + 0x49) = 1;
                  }
                }
              }
              goto LAB_ram_48054ada;
            }
            if ((*(char *)((int)param_2 + 0xd) != '\x01') || (*(byte *)(param_2 + 1) < 7))
            goto LAB_ram_48054ada;
            iStack_48 = 0;
            iStack_44 = 0;
            iStack_40 = 0;
            iStack_3c = 0;
            uStack_38 = 0;
            iVar15 = FUN_ram_4805465c(param_2,0x32,1,&iStack_48);
            if ((iVar15 == 0) ||
               ((((iStack_48 == 0 ||
                  (iVar15 = FUN_ram_4805465c(param_2,0,0xc,&iStack_44), iVar15 == 0)) ||
                 (iVar15 = FUN_ram_4805465c(param_2,0xc,0xc,&iStack_40), iVar15 == 0)) ||
                ((iVar15 = FUN_ram_4805465c(param_2,0x18,0xc,&iStack_3c), iVar15 == 0 ||
                 (iVar15 = FUN_ram_4805465c(param_2,0x24,0xc,&uStack_38), iVar15 == 0))))))
            goto LAB_ram_48054ada;
            uVar12 = iStack_44 + iStack_40 + iStack_3c + uStack_38;
          }
          if (uVar12 != 0) {
            if (param_3 == 0) {
              param_3 = 1;
            }
            *(int *)(param_1 + 0x110) = param_3;
          }
          goto LAB_ram_48054ada;
        }
        goto LAB_ram_48054acc;
      }
      goto LAB_ram_48054d84;
    }
    if ((*(char *)((int)param_2 + 0xd) != '\x01') || (*(byte *)(param_2 + 1) < 3))
    goto LAB_ram_48054ada;
    uStack_38 = 0;
    iVar15 = FUN_ram_4805465c(param_2,0x10,2,&uStack_38);
    if (iVar15 == 0) goto LAB_ram_48054ada;
    *(bool *)(param_1 + 0xfa) = uStack_38 == 2;
    iVar15 = param_3;
    if (param_3 == 0) {
      iVar15 = 1;
    }
    *(int *)(param_1 + 0x104) = iVar15;
    cVar11 = '\0';
    if (*(char *)(param_1 + 0xf8) != '\0') {
      cVar11 = '\0';
      if ((((*(int *)(param_1 + 0xfc) != 0) && ((uint)(param_3 - *(int *)(param_1 + 0xfc)) < 0x12d))
          && ((cVar11 = *(char *)(param_1 + 0xf9), cVar11 == '\0' ||
              ((*(int *)(param_1 + 0x100) == 0 ||
               (300 < (uint)(param_3 - *(int *)(param_1 + 0x100)))))))) &&
         (cVar11 = '\0', uStack_38 == 2)) {
        cVar11 = (uint)(param_3 - iVar15) < 0x12d;
      }
    }
    goto LAB_ram_48054d7c;
  }
  if (iVar15 != 0x3c2) {
    if (iVar15 != 0x118) goto LAB_ram_48054ada;
LAB_ram_48054acc:
    if ((*(char *)((int)param_2 + 0xd) != '\x01') || (*(byte *)(param_2 + 1) < 8))
    goto LAB_ram_48054ada;
    bVar5 = *(byte *)(param_1 + 0xe9);
    *(byte *)(param_1 + 0xea) = bVar5;
    bVar3 = *(byte *)((int)param_2 + 7) >> 5;
    *(byte *)(param_1 + 0xe9) = bVar3;
    if ((bVar5 == bVar3) || (*(char *)(param_1 + 0xb) == '\0')) {
      if (bVar3 == 2) goto LAB_ram_48055096;
      if (bVar5 == 2) goto LAB_ram_48054fdc;
LAB_ram_48054f2c:
      if (((bVar3 == 1) && (*(char *)(param_1 + 0x48) != '\0')) &&
         (*(char *)(param_1 + 0x4d) != '\x04')) {
        *(undefined1 *)(param_1 + 0x49) = 1;
      }
    }
    else {
      if (bVar3 != 2) {
        if (bVar5 == 2) {
          *(undefined1 *)(param_1 + 0xc2) = 1;
          *(undefined1 *)(param_1 + 0xc5) = 2;
          if (*(char *)(param_1 + 0x94) != '\0') {
            *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
          }
          *(int *)(param_1 + 0x98) = param_3;
          *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 4;
          *(undefined1 *)(param_1 + 0x94) = 1;
          *(undefined1 *)(param_1 + 0xbd) = 1;
LAB_ram_48054fdc:
          iVar15 = param_3;
          if (param_3 == 0) {
            iVar15 = 1;
          }
          *(int *)(param_1 + 0x150) = iVar15;
        }
        goto LAB_ram_48054f2c;
      }
      if (*(char *)(param_1 + 0x94) != '\0') {
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      }
      *(int *)(param_1 + 0x98) = param_3;
      *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) | 1;
      *(undefined1 *)(param_1 + 0x94) = 1;
      *(undefined1 *)(param_1 + 0xbd) = 1;
LAB_ram_48055096:
      if (*(int *)(param_1 + 0x150) == 0) {
        if (((((bVar5 & 0xfd) != 0) && (*(char *)(param_1 + 9) != '\0')) &&
            (*(char *)(param_1 + 0xc3) != '\0')) && (*(char *)(param_1 + 0xc4) != '\0')) {
          *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
          bVar5 = FUN_ram_480549a6(param_1,8,3,4,param_3);
          *(byte *)(param_1 + 0x1b0) = bVar5 ^ 1;
          *(undefined4 *)(param_1 + 0x15c) = 0;
          *(undefined4 *)(param_1 + 0x154) = 0;
          *(undefined2 *)(param_1 + 0x158) = 0;
          iVar15 = param_3;
          if (param_3 == 0) {
            iVar15 = 1;
          }
          if (((*(int *)(param_1 + 0x164) == 0) ||
              (500 < (uint)(param_3 - *(int *)(param_1 + 0x164)))) ||
             ((*(int *)(param_1 + 0x168) == 0 || (800 < (uint)(param_3 - *(int *)(param_1 + 0x168)))
              ))) {
            *(int *)(param_1 + 0x14c) = iVar15;
            *(undefined1 *)(param_1 + 0x148) = 1;
            *(undefined1 *)(param_1 + 0x154) = 4;
          }
          else {
            *(int *)(param_1 + 0x14c) = iVar15;
            *(undefined1 *)(param_1 + 0x148) = 4;
            *(undefined1 *)(param_1 + 0x159) = 1;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x150) = 0;
      }
    }
    uVar12 = (uint)*(byte *)(param_2 + 1);
    if (0x33 < uVar12 << 3) {
      iStack_34 = 0;
      uStack_38 = 0;
      if (8 < uVar12) {
        uVar12 = 8;
      }
      FUN_ram_4ff45158(&uStack_38,(int)param_2 + 5,uVar12);
      if (iStack_34 << 0xc < 0) {
        iVar15 = param_3;
        if (param_3 == 0) {
          iVar15 = 1;
        }
        *(int *)(param_1 + 0x114) = iVar15;
      }
    }
    uStack_38 = 0;
    iVar15 = FUN_ram_4805465c(param_2,0x34,0xc,&uStack_38);
    if ((iVar15 != 0) &&
       ((uVar12 = uStack_38, -1 < (int)(uStack_38 << 0x14) ||
        (uVar12 = uStack_38 | 0xfffff000, uVar12 != 0xfffff800)))) {
      FUN_ram_48054722(param_1,(int)(uVar12 * 0xa0000) >> 0x10,param_3);
    }
    goto LAB_ram_48054ada;
  }
LAB_ram_48054d84:
  if ((((*(char *)((int)param_2 + 0xd) != '\x02') || ((char)param_2[1] != '\b')) ||
      ((*(byte *)((int)param_2 + 5) & 3) != 0)) ||
     (((*(int *)(param_1 + 0x174) != 0 && ((uint)(param_3 - *(int *)(param_1 + 0x174)) < 0x321)) &&
      (iVar15 = FUN_ram_4ff4511a((int)param_2 + 5,param_1 + 0x16c), iVar15 == 0))))
  goto LAB_ram_48054ada;
  iVar15 = param_3;
  if (param_3 == 0) {
    iVar15 = 1;
  }
  *(int *)(param_1 + 0x160) = iVar15;
  bVar5 = *(byte *)(param_2 + 3);
  *(int *)(param_1 + 0xfc) = iVar15;
  *(char *)(param_1 + 0xf8) = (char)((bVar5 & 0x10) >> 4);
  if ((*(byte *)((int)param_2 + 5) & 8) == 0) {
    if (*(char *)(param_1 + 0x157) == '\0') goto LAB_ram_48054e14;
    if (2 < *(byte *)(param_1 + 0x158)) {
      *(undefined1 *)(param_1 + 0x157) = 0;
      *(int *)(param_1 + 0x14c) = iVar15;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      *(undefined1 *)(param_1 + 0x148) = 6;
      goto LAB_ram_48054e14;
    }
    if (param_3 - iVar15 < 0x259) {
      *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) + 1;
      *(undefined1 *)(param_1 + 0x157) = 0;
      *(undefined1 *)(param_1 + 0x1a4) = 0;
      *(int *)(param_1 + 0x14c) = iVar15;
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
      *(undefined1 *)(param_1 + 0x154) = 4;
      *(undefined1 *)(param_1 + 0x148) = 3;
      goto LAB_ram_48054e14;
    }
    *(int *)(param_1 + 0x14c) = iVar15;
    *(undefined1 *)(param_1 + 0x148) = 6;
LAB_ram_48055138:
    cVar11 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0x159) == '\0') {
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
    }
    *(int *)(param_1 + 0x14c) = iVar15;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined1 *)(param_1 + 0x159) = 1;
    *(undefined1 *)(param_1 + 0x148) = 4;
LAB_ram_48054e14:
    if (((bVar5 & 0x10) == 0) || (300 < (uint)(param_3 - iVar15))) goto LAB_ram_48055138;
    cVar11 = *(char *)(param_1 + 0xf9);
    if ((cVar11 == '\0') ||
       ((*(int *)(param_1 + 0x100) == 0 || (300 < (uint)(param_3 - *(int *)(param_1 + 0x100)))))) {
      if ((*(char *)(param_1 + 0xfa) == '\0') || (*(int *)(param_1 + 0x104) == 0))
      goto LAB_ram_48055138;
      cVar11 = (uint)(param_3 - *(int *)(param_1 + 0x104)) < 0x12d;
    }
  }
LAB_ram_48054d7c:
  *(char *)(param_1 + 0xfb) = cVar11;
LAB_ram_48054ada:
  FUN_ram_4ff3ee10(param_1);
  return;
}



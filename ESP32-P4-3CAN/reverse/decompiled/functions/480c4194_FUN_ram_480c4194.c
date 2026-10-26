/* Firmware entry: 0x480c4194 */

void FUN_ram_480c4194(int *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  ushort uStack_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  char cStack_10c;
  int iStack_100;
  undefined4 local_d4;
  undefined4 auStack_d0 [45];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar15 = (uint *)param_1[3];
  fence();
  uVar16 = *puVar15;
  do {
    uVar6 = uVar16 + 1;
    if ((int)uVar16 < 0) {
      return;
    }
    if ((uVar16 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar15 != uVar16;
    uVar16 = *puVar15;
  } while (bVar1);
  *puVar15 = uVar6;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar13 = (undefined4 *)(iVar2 + 0xb38);
  puVar10 = &local_d4;
  do {
    uVar4 = puVar13[1];
    uVar7 = puVar13[2];
    uVar9 = puVar13[3];
    *puVar10 = *puVar13;
    puVar10[1] = uVar4;
    puVar10[2] = uVar7;
    puVar10[3] = uVar9;
    puVar13 = puVar13 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar13 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar10 = *puVar13;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  cVar8 = local_d4._1_1_;
  if (local_d4._1_1_ != '\f') {
    cVar8 = '\x06';
  }
  uVar3 = FUN_ram_4805c396(*param_1,4,2,cVar8);
  cVar8 = *(char *)((int)param_2 + 0xd);
  uVar11 = 2;
  if (cVar8 == '\x01') {
    uVar11 = 1;
  }
  bVar12 = (byte)param_2[1];
  uVar16 = *param_2;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_142 = 0;
  uStack_14c = (uint)CONCAT11(uVar11,bVar12);
  bVar5 = bVar12;
  if (8 < bVar12) {
    bVar5 = 8;
  }
  local_150 = uVar16;
  if (bVar12 < 2) {
    if (bVar12 == 1) {
      uStack_14c = (uint)CONCAT12(*(undefined1 *)((int)param_2 + 5),CONCAT11(uVar11,bVar12));
    }
  }
  else {
    FUN_ram_4ff45158((int)&uStack_14c + 2,(int)param_2 + 5,bVar5);
  }
  if (local_d4._1_1_ == '\f') {
    if (((uVar16 & 0x7ff) != 0x249) || (cVar8 != '\x02')) goto LAB_ram_480c42cc;
    *(undefined1 *)(param_1 + 0xb4) = uVar3;
    if (uVar16 != 0x249) goto LAB_ram_480c4824;
    if (bVar12 == 4) {
      bVar12 = uStack_14c._3_1_ >> 4;
      uVar6 = bVar12 & 7;
      if (uStack_14c._2_1_ ==
          ((&DAT_ram_48222c90)[uVar6] ^ (&DAT_ram_48222c98)[uStack_14c._3_1_ & 0xf])) {
        if ((uVar6 < 3) && ((uStack_148 & 0xf) == 0)) {
          if (*(char *)((int)param_1 + 0x33a) == '\0') {
            if ((bVar12 & 7) == 0) {
LAB_ram_480c463a:
              uStack_13c = uStack_14c;
              uStack_138 = uStack_148;
              cVar8 = '\0';
              goto LAB_ram_480c4654;
            }
            if (uVar6 == 1) {
              if ((char)param_1[0xcc] == '\0') {
                if ((*(char *)((int)param_1 + 0x332) == '\0') ||
                   (3000 < (uint)(param_3 - param_1[0xcd]))) {
                  param_1[0xcd] = param_3;
                  *(undefined1 *)((int)param_1 + 0x332) = 1;
                  *(undefined1 *)((int)param_1 + 0x359) = 2;
                }
                else {
                  *(undefined1 *)((int)param_1 + 0x332) = 0;
                  *(undefined1 *)((int)param_1 + 0x339) = 1;
                  *(undefined1 *)((int)param_1 + 0x359) = 5;
                }
              }
            }
            else if ((*(char *)((int)param_1 + 0x331) == '\0') && ((char)param_1[0xae] != '\0')) {
              *(undefined1 *)((int)param_1 + 0x332) = 0;
              *(undefined2 *)(param_1 + 0xce) = 1;
              *(undefined1 *)((int)param_1 + 0x359) = 4;
            }
            *(bool *)(param_1 + 0xcc) = uVar6 == 1;
            *(bool *)((int)param_1 + 0x331) = uVar6 == 2;
          }
          else {
            *(bool *)(param_1 + 0xcc) = uVar6 == 1;
            *(bool *)((int)param_1 + 0x331) = uVar6 == 2;
            if ((bVar12 & 7) == 0) {
              if (*(char *)((int)param_1 + 0x33b) == '\0') {
                *(undefined1 *)((int)param_1 + 0x33a) = 0;
                goto LAB_ram_480c463a;
              }
              *(char *)((int)param_1 + 0x33b) = *(char *)((int)param_1 + 0x33b) + -1;
            }
          }
        }
        else {
          if (*(char *)((int)param_1 + 0x33a) == '\0') {
            bVar12 = *(byte *)((int)param_1 + 0x35d);
            if ((bVar12 == 0) && (bVar12 = *(byte *)(param_1 + 0xd9), bVar12 == 0)) {
              if ((byte)((char)param_1[0xd6] - 2U) < 3) {
                bVar12 = 1;
              }
              else if (*(byte *)((int)param_1 + 0x35a) < 10) {
                bVar12 = (byte)(0x234 >> (*(byte *)((int)param_1 + 0x35a) & 0x1f)) & 1;
              }
            }
            *(byte *)(param_1 + 0xcf) = bVar12;
            if (param_1[0x108] != -1) {
              param_1[0x108] = param_1[0x108] + 1;
            }
          }
          *(undefined1 *)((int)param_1 + 0x332) = 0;
          *(undefined2 *)(param_1 + 0xcc) = 0;
          param_1[0xce] = 0x4010000;
          if ((param_1[0xf9] != 0) && (*(char *)((int)param_1 + 0x3ed) == '\0')) {
            param_1[0x102] = param_1[0xf9];
            param_1[0xf9] = 0;
            param_1[0xfa] = 0;
            *(undefined1 *)(param_1 + 0xfb) = 0;
            param_1[0x100] = 0;
            param_1[0x101] = 0;
          }
          if (((char)param_1[0xf8] != '\0') && (*(char *)((int)param_1 + 0x3be) == '\0')) {
            *(undefined1 *)(param_1 + 0xf8) = 0;
            memset(param_1 + 0xef,0,0x24);
          }
        }
      }
    }
    goto LAB_ram_480c4520;
  }
  if ((uVar16 & 0x7ff) == 0x3c2) {
    if (cVar8 != '\x02') {
      uVar6 = (uint)*(byte *)(param_1 + 499);
      if (cVar8 != '\x01') {
        cVar8 = '\x01';
        goto LAB_ram_480c42d8;
      }
      if (uVar16 != 0x3f5) goto LAB_ram_480c42d8;
LAB_ram_480c4768:
      if (bVar12 == 8) {
        bVar12 = 5;
        if (uStack_148._2_1_ < '\0') {
          bVar12 = uStack_148._1_1_ >> 4 & 3;
          bVar5 = uStack_148._3_1_ >> 2 & 3;
          if ((uStack_148._1_1_ >> 4 & 3) == 0) {
            if (bVar5 != 1) {
LAB_ram_480c479e:
              bVar12 = 5;
            }
          }
          else if (bVar12 == 1) {
            if (bVar5 != 2) {
              if (bVar5 == 3) {
                bVar12 = 2;
              }
              else {
                bVar12 = ((uStack_148._3_1_ >> 2 & 3) != 1) + 4;
              }
            }
          }
          else {
            if (bVar5 != 3) goto LAB_ram_480c479e;
            bVar12 = 3;
          }
        }
        *(char *)((int)param_1 + 0x34d) = uStack_148._2_1_;
        param_1[0xd1] = param_3;
        *(byte *)(param_1 + 0xd3) = uStack_148._1_1_;
        *(byte *)((int)param_1 + 0x34e) = uStack_148._3_1_;
        *(undefined1 *)((int)param_1 + 0x33d) = 1;
        if (*(char *)((int)param_1 + 0x371) == '\x02') {
          *(undefined1 *)(param_1 + 0xdf) = 1;
        }
        if ((*(char *)((int)param_1 + 0x33e) == '\0') || (*(byte *)((int)param_1 + 0x33f) != bVar12)
           ) {
          *(byte *)((int)param_1 + 0x33f) = bVar12;
          *(undefined1 *)((int)param_1 + 0x33e) = 1;
          *(undefined1 *)(param_1 + 0xd0) = 1;
        }
        else {
          bVar5 = *(byte *)(param_1 + 0xd0);
          if ((bVar5 < 2) && (*(byte *)(param_1 + 0xd0) = bVar5 + 1, bVar5 == 0)) {
            cVar8 = '\x01';
            goto LAB_ram_480c42d8;
          }
          if (*(byte *)((int)param_1 + 0x341) != bVar12) {
            *(byte *)((int)param_1 + 0x341) = bVar12;
            param_1[0xd2] = param_3;
            if ((char)param_1[0xd9] == '\0') {
LAB_ram_480c4b7e:
              if (bVar12 == 0) {
LAB_ram_480c4bc4:
                if ((char)param_1[0xd6] == '\x01') {
                  *(undefined1 *)(param_1 + 0xd6) = 0;
                  cVar8 = '\x01';
                  goto LAB_ram_480c42d8;
                }
                goto LAB_ram_480c489a;
              }
            }
            else {
              if (bVar12 == 0) {
                iVar2 = param_1[0xea];
                if (iVar2 != 0) {
LAB_ram_480c4b50:
                  uVar16 = param_3 - iVar2;
                  param_1[0xeb] = uVar16;
                  if ((param_1[0xec] == 0) || (uVar16 < (uint)param_1[0xec])) {
                    param_1[0xec] = uVar16;
                  }
                  if ((uint)param_1[0xed] < uVar16) {
                    param_1[0xed] = uVar16;
                  }
                  iVar2 = param_3;
                  if (param_3 == 0) {
                    iVar2 = 1;
                  }
                  param_1[0xea] = iVar2;
                  goto LAB_ram_480c4b7e;
                }
                iVar2 = param_3;
                if (param_3 == 0) {
                  iVar2 = 1;
                }
                param_1[0xea] = iVar2;
                goto LAB_ram_480c4bc4;
              }
              if (2 < (byte)(bVar12 - 1)) goto LAB_ram_480c489a;
              iVar2 = param_1[0xea];
              if (iVar2 != 0) goto LAB_ram_480c4b50;
              iVar2 = param_3;
              if (param_3 == 0) {
                iVar2 = 1;
              }
              param_1[0xea] = iVar2;
            }
            if ((((bVar12 == 3) && ((char)param_1[0xd6] == '\0')) &&
                (*(char *)((int)param_1 + 0x359) != '\x04')) &&
               ((*(char *)((int)param_1 + 0x35a) != '\x02' && ((char)param_1[0xd9] == '\0')))) {
              *(undefined1 *)(param_1 + 0xd6) = 1;
              cVar8 = '\x01';
              goto LAB_ram_480c42d8;
            }
          }
        }
      }
LAB_ram_480c489a:
      cVar8 = '\x01';
      goto LAB_ram_480c42d8;
    }
    *(undefined1 *)(param_1 + 0xb4) = uVar3;
LAB_ram_480c4824:
    if (((uVar16 != 0x3c2) || (bVar12 != 8)) || ((uStack_14c._2_1_ & 3) != 1))
    goto LAB_ram_480c4520;
    cVar8 = '\x01';
    if (uStack_148._3_1_ >> 6 != 2) {
      if (uStack_148._3_1_ >> 6 != 0) goto LAB_ram_480c4520;
      cVar8 = '\0';
    }
    uStack_13c = uStack_14c & 0xc0ffffff | 0x15000000;
    uStack_138 = uStack_148 & 0xffffc0c0;
LAB_ram_480c4654:
    uStack_134 = (uint)uStack_144;
    uStack_140 = local_150;
    piVar17 = param_1 + 0xae;
    FUN_ram_4ff45158(param_1 + 0xbe,&uStack_140,0xe);
    param_1[0xc3] = param_3;
    *(undefined1 *)(param_1 + 0xc2) = 1;
    if ((uStack_13c._2_2_ == uStack_14c._2_2_) && ((uStack_138 & 0xffff) == (uStack_148 & 0xffff)))
    {
      if ((uStack_138._2_2_ != uStack_148._2_2_) || ((uStack_134 & 0xffff) != (uint)uStack_144))
      goto LAB_ram_480c467a;
    }
    else {
LAB_ram_480c467a:
      param_1[0xc5] = param_1[0xc5] + 1;
    }
    FUN_ram_4ff45158(param_1 + 0xb5,&local_150,0xe);
    param_1[0xba] = param_3;
    iVar2 = param_1[0xbb] + 1;
    *(undefined1 *)(param_1 + 0xb9) = 1;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    param_1[0xbb] = iVar2;
    if (uVar16 == 0x249) {
      FUN_ram_4804b736(piVar17,0,param_3);
      if ((char)param_1[0xcf] != '\0') {
        *(undefined1 *)(param_1 + 0xcf) = 0;
        if (*(char *)((int)param_1 + 0x35d) == '\0') {
          if ((char)param_1[0xd9] == '\0') {
            cVar8 = (char)param_1[0xd6];
            if (((byte)(cVar8 - 2U) < 3) ||
               ((*(byte *)((int)param_1 + 0x35a) < 10 &&
                ((0x234U >> (*(byte *)((int)param_1 + 0x35a) & 0x1f) & 1) != 0))))
            goto LAB_ram_480c4b12;
            goto LAB_ram_480c4520;
          }
        }
        else if ((char)param_1[0xd9] == '\0') {
          cVar8 = (char)param_1[0xd6];
LAB_ram_480c4b12:
          if ((cVar8 != '\x03') && (*(char *)((int)param_1 + 0x366) == '\0')) {
            FUN_ram_4804a9c8(piVar17,param_3,7);
            goto LAB_ram_480c4520;
          }
        }
        FUN_ram_4804ac7e(piVar17,param_3,7);
      }
    }
    else if (((char)param_1[0xc6] == '\0') || (*(char *)((int)param_1 + 0x319) != cVar8)) {
      *(char *)((int)param_1 + 0x319) = cVar8;
      param_1[199] = param_3;
      *(undefined1 *)(param_1 + 0xc6) = 1;
      *(undefined1 *)((int)param_1 + 0x31a) = 1;
      if ((char)param_1[200] != cVar8) {
        *(char *)(param_1 + 200) = cVar8;
        if (cVar8 == '\0') {
          FUN_ram_4804b5b0(piVar17,param_3,param_3);
        }
        else {
          param_1[0xc9] = param_3;
          if (((((char)param_1[0xd9] == '\0') && ((char)param_1[0xd6] != '\x03')) &&
              (((char)param_1[0xd6] != '\x04' || (*(char *)((int)param_1 + 0x366) == '\0')))) &&
             ((cVar8 = *(char *)((int)param_1 + 0x35a), 3 < (byte)(cVar8 - 5U) &&
              ((cVar8 != '\t' || (*(char *)((int)param_1 + 0x366) == '\0')))))) {
            if (*(char *)((int)param_1 + 0x35d) == '\0') {
              if (*(char *)((int)param_1 + 0x359) == '\x02') {
                iVar2 = param_3 - param_1[0xcb];
                goto joined_r0x480c4cbe;
              }
              goto LAB_ram_480c4c14;
            }
            param_1[0x108] = param_1[0x108] + 1;
            if (*(char *)((int)param_1 + 0x359) == '\x02') {
              iVar2 = param_3 - param_1[0xcb];
              goto joined_r0x480c4936;
            }
            goto LAB_ram_480c4738;
          }
        }
      }
    }
    else {
      if (*(byte *)((int)param_1 + 0x31a) < 2) {
        *(byte *)((int)param_1 + 0x31a) = *(byte *)((int)param_1 + 0x31a) + 1;
      }
      if ((char)param_1[200] != cVar8) {
        *(char *)(param_1 + 200) = cVar8;
        iVar2 = param_1[199];
        if (cVar8 == '\0') {
          FUN_ram_4804b5b0(piVar17,iVar2,param_3);
        }
        else {
          param_1[0xc9] = iVar2;
          if (((((char)param_1[0xd9] == '\0') && ((char)param_1[0xd6] != '\x03')) &&
              (((char)param_1[0xd6] != '\x04' || (*(char *)((int)param_1 + 0x366) == '\0')))) &&
             ((cVar8 = *(char *)((int)param_1 + 0x35a), 3 < (byte)(cVar8 - 5U) &&
              ((cVar8 != '\t' || (*(char *)((int)param_1 + 0x366) == '\0')))))) {
            if (*(char *)((int)param_1 + 0x35d) == '\0') {
              if (*(char *)((int)param_1 + 0x359) == '\x02') {
                iVar2 = iVar2 - param_1[0xcb];
joined_r0x480c4cbe:
                if (iVar2 < 0) goto LAB_ram_480c493a;
              }
LAB_ram_480c4c14:
              *(undefined1 *)((int)param_1 + 0x359) = 3;
              *(undefined1 *)(param_1 + 0xca) = 0;
              *(undefined1 *)((int)param_1 + 0x35a) = 1;
            }
            else {
              param_1[0x108] = param_1[0x108] + 1;
              if (*(char *)((int)param_1 + 0x359) == '\x02') {
                iVar2 = iVar2 - param_1[0xcb];
joined_r0x480c4936:
                if (iVar2 < 0) {
LAB_ram_480c493a:
                  *(undefined1 *)((int)param_1 + 0x359) = 5;
                  *(undefined1 *)(param_1 + 0xca) = 1;
                  goto LAB_ram_480c4520;
                }
              }
LAB_ram_480c4738:
              *(undefined **)(param_1 + 0xd6) = &medeleg;
              *(undefined1 *)(param_1 + 0xca) = 0;
              if (cVar8 != '\x02') {
                cVar8 = '\x03';
              }
              *(char *)((int)param_1 + 0x35a) = cVar8;
            }
          }
        }
      }
    }
LAB_ram_480c4520:
    iVar2 = param_1[0x102];
    if ((iVar2 != 0) && (param_1[0x102] = 0, param_1[0x1e7] == iVar2)) {
      param_1[0x1e7] = 0;
      *(undefined1 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)((int)param_1 + 0x7a1) = 0;
      *(undefined1 *)((int)param_1 + 0x7a2) = 0;
      *(undefined1 *)((int)param_1 + 0x7a3) = 0;
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      *(undefined1 *)((int)param_1 + 0x7a5) = 0;
      *(undefined1 *)((int)param_1 + 0x7a6) = 0;
      *(undefined1 *)((int)param_1 + 0x7a7) = 0;
      *(undefined1 *)(param_1 + 0x1ea) = 0;
      *(undefined1 *)((int)param_1 + 0x7a9) = 0;
      *(undefined1 *)((int)param_1 + 0x7aa) = 0;
      *(undefined1 *)((int)param_1 + 0x7ab) = 0;
      *(undefined1 *)(param_1 + 0x1eb) = 0;
      *(undefined1 *)((int)param_1 + 0x7ad) = 0;
    }
    if ((local_d4._1_1_ == '\f') || (*param_2 != 0x3c2)) goto LAB_ram_480c42d2;
    uVar16 = FUN_ram_4804a128(param_1 + 0xae);
    if ((uint)*(byte *)((int)param_1 + 0x739) == (uVar16 & 1)) {
      iVar2 = FUN_ram_48025b94();
      if (uVar16 == 1) {
        iVar14 = param_1[0x143];
        goto LAB_ram_480c49b6;
      }
LAB_ram_480c456a:
      bVar1 = false;
    }
    else {
      *(char *)((int)param_1 + 0x739) = (char)(uVar16 & 1);
      if (uVar16 != 1) {
        *(undefined2 *)((int)param_1 + 0x73a) = 0;
        FUN_ram_48025b94();
        goto LAB_ram_480c456a;
      }
      iVar2 = FUN_ram_48025b94();
      iVar14 = param_1[0x143];
LAB_ram_480c49b6:
      if (((((param_1[0x1e7] != 0) || (param_1[0x1ec] != 0)) || (param_1[0x1c8] == iVar14)) ||
          ((param_1[0x146] != 0 || ((char)param_1[0x112] == '\0')))) ||
         ((iVar14 == 0 || (param_1[0x144] == iVar14)))) goto LAB_ram_480c456a;
      bVar1 = (uint)(iVar2 - param_1[0x141]) < 0x1389;
    }
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (((local_150 == 0x3c2) && ((uStack_14c & 0xff) == 8)) && ((uStack_14c._2_1_ & 3) == 1)) {
      cVar8 = '\x01';
      if (uStack_148 >> 0x1e == 2) {
        FUN_ram_4ff45158(param_1 + 0x1c9,&local_150,0xe);
        param_1[0x1cd] = param_3;
        *(undefined1 *)(param_1 + 0x1ce) = 1;
      }
      else {
        if (uStack_148 >> 0x1e != 0) goto LAB_ram_480c42d2;
        uVar4 = FUN_ram_4ff45158(param_1 + 0x1c9,&local_150,0xe);
        param_1[0x1cd] = param_3;
        *(undefined1 *)(param_1 + 0x1ce) = 1;
        if (((*(char *)((int)param_1 + 0x739) != '\0') && (bVar1)) &&
           (*(char *)((int)param_1 + 0x73a) == '\0')) {
          uVar16 = FUN_ram_4804a006(uVar4,1,&uStack_140);
          uVar6 = (uint)*(byte *)(param_1 + 499);
          if (uVar16 != 0) {
            *(undefined2 *)((int)param_1 + 0x73a) = 1;
            *(undefined1 *)(param_1 + 0x1d9) = 2;
            FUN_ram_4ff45158(param_1 + 0x1e3,&uStack_140,0xe);
            if (uVar6 == 0) {
              *(undefined1 *)(param_1 + 499) = 1;
              cVar8 = '\0';
              uVar6 = uVar16;
            }
          }
          goto LAB_ram_480c42d8;
        }
      }
LAB_ram_480c48b6:
      uVar6 = (uint)*(byte *)(param_1 + 499);
      goto LAB_ram_480c42d8;
    }
  }
  else {
LAB_ram_480c42cc:
    if (cVar8 == '\x01') {
      if (uVar16 == 0x3f5) {
        uVar6 = (uint)*(byte *)(param_1 + 499);
        goto LAB_ram_480c4768;
      }
      if (uVar16 != 0x399) goto LAB_ram_480c42d2;
      iVar2 = FUN_ram_48025ba6();
      if (bVar12 == 8) {
        if ((uint)(iVar2 - param_3) < 0x3e9) {
          bVar12 = uStack_14c._2_1_ & 0xf;
          if ((*(char *)((int)param_1 + 0x34f) == '\0') || ((uint)(param_3 - param_1[0xd5]) < 0x3e9)
             ) {
            param_1[0xd5] = param_3;
            *(undefined1 *)((int)param_1 + 0x34f) = 1;
            if (((char)param_1[0xd4] != '\0') && (*(byte *)((int)param_1 + 0x351) == bVar12)) {
              bVar5 = *(byte *)((int)param_1 + 0x352);
              uVar6 = (uint)*(byte *)(param_1 + 499);
              if (bVar5 < 2) {
                *(byte *)((int)param_1 + 0x352) = bVar5 + 1;
                if (bVar5 == 1) {
                  *(byte *)((int)param_1 + 0x353) = bVar12;
                }
              }
              else {
                *(byte *)((int)param_1 + 0x353) = bVar12;
              }
              goto LAB_ram_480c42d8;
            }
          }
          else {
            param_1[0xd5] = param_3;
            *(undefined1 *)((int)param_1 + 0x34f) = 1;
          }
          *(byte *)((int)param_1 + 0x351) = bVar12;
          *(undefined1 *)(param_1 + 0xd4) = 1;
          *(undefined1 *)((int)param_1 + 0x352) = 1;
          uVar6 = (uint)*(byte *)(param_1 + 499);
        }
        else {
          *(undefined1 *)(param_1 + 0xd4) = 0;
          *(undefined1 *)((int)param_1 + 0x352) = 0;
          param_1[0xd5] = param_3;
          *(undefined1 *)((int)param_1 + 0x34f) = 1;
          uVar6 = (uint)*(byte *)(param_1 + 499);
        }
        goto LAB_ram_480c42d8;
      }
      goto LAB_ram_480c48b6;
    }
  }
LAB_ram_480c42d2:
  cVar8 = '\x01';
  uVar6 = (uint)*(byte *)(param_1 + 499);
LAB_ram_480c42d8:
  if ((((param_1[0x1e7] == 0) &&
       (((((char)param_1[0xf8] == '\0' || (param_1[0xf9] != 0)) &&
         (FUN_ram_4804a1e6(&uStack_140,param_1 + 0xae,param_3), iStack_100 == 0)) &&
        (((char)uStack_138 == '\0' && (uStack_13c._2_1_ == '\0')))))) && (uStack_138._1_1_ == '\0'))
     && (((uStack_138._2_1_ == '\0' && (cStack_10c == '\0')) &&
         ((uStack_140._3_1_ < 2 || (uStack_140._3_1_ == 10)))))) {
    if ((uVar6 != 0) && (iVar2 = FUN_ram_480a108a(param_1,param_3), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 499) = 0;
      FUN_ram_480553f6(param_1[3]);
    }
  }
  else if (uVar6 == 0) {
    *(undefined1 *)(param_1 + 499) = 1;
    return;
  }
  if (cVar8 != '\0') {
    fence();
    uVar16 = *puVar15;
    do {
      uVar6 = uVar16 - 1;
      if ((int)uVar16 < 0) {
        return;
      }
      if ((uVar16 & 0xffff) == 0) {
        return;
      }
      bVar1 = *puVar15 != uVar16;
      uVar16 = *puVar15;
    } while (bVar1);
    *puVar15 = uVar6;
  }
  return;
}



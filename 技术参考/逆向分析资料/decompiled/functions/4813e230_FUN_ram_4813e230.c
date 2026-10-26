/* Firmware entry: 0x4813e230 */

void FUN_ram_4813e230(int param_1)

{
  char cVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  ushort uVar13;
  undefined2 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  
  iVar17 = DAT_ram_4ff6e1e8;
  iVar15 = DAT_ram_4ff6e1e4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar11 = *(uint *)(param_1 + 0x3c);
  if (uVar11 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x498,"tcp_receive",
                     "tcp_receive: wrong state");
  }
  if ((DAT_ram_4ff6e1dd & 0x10) == 0) {
LAB_ram_4813e25c:
    uVar10 = (uint)DAT_ram_4ff6e1de;
    iVar17 = DAT_ram_4ff6e1e8;
    if (uVar10 == 0) goto LAB_ram_4813e390;
    uVar11 = *(uint *)(param_1 + 0x3c);
  }
  else {
    uVar13 = *(ushort *)(param_1 + 0xac);
    iVar7 = *(int *)(param_1 + 0xa4);
    if ((*(int *)(param_1 + 0xa0) - DAT_ram_4ff6e1e8 < 0) ||
       ((*(int *)(param_1 + 0xa0) == DAT_ram_4ff6e1e8 && (iVar7 - DAT_ram_4ff6e1e4 < 0)))) {
      uVar10 = (uint)*(ushort *)(DAT_ram_4ff6e1f8 + 0xe);
LAB_ram_4813e3e8:
      *(short *)(param_1 + 0xac) = (short)uVar10;
      if (*(ushort *)(param_1 + 0xae) < uVar10) {
        *(short *)(param_1 + 0xae) = (short)uVar10;
      }
      iVar9 = *(int *)(param_1 + 0x90);
      *(int *)(param_1 + 0xa0) = iVar17;
      *(int *)(param_1 + 0xa4) = iVar15;
      if (-1 < iVar9 - iVar15) goto LAB_ram_4813e36a;
LAB_ram_4813e40c:
      if (((iVar15 + -1) - iVar9 < 0) || (*(int *)(param_1 + 0x9c) - iVar15 < 0)) {
        FUN_ram_48141942(param_1);
      }
      else {
        uVar13 = *(ushort *)(param_1 + 0x46);
        uVar3 = *(ushort *)(param_1 + 0x96);
        sVar12 = *(short *)(param_1 + 0x88) >> 3;
        if ((uVar13 & 4) == 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x94);
          *(undefined2 *)(param_1 + 0x8e) = 0;
          *(int *)(param_1 + 0x90) = iVar15;
          *(short *)(param_1 + 0x8c) = sVar12 + *(short *)(param_1 + 0x8a);
          uVar10 = iVar15 - iVar9 & 0xffff;
          if (uVar3 <= uVar11) goto LAB_ram_4813e748;
          uVar16 = (((uVar13 & 0x800) == 0) + 1) * (uint)*(ushort *)(param_1 + 0x7e);
          if (uVar10 < (uVar16 & 0xffff)) {
            uVar16 = uVar10;
          }
          uVar14 = (undefined2)(uVar16 + uVar11);
          if ((uVar16 + uVar11 & 0xffff) < uVar11) goto LAB_ram_4813e486;
LAB_ram_4813e854:
          *(undefined2 *)(param_1 + 0x94) = uVar14;
        }
        else {
          *(ushort *)(param_1 + 0x46) = uVar13 & 0xfffb;
          uVar10 = iVar15 - iVar9 & 0xffff;
          *(ushort *)(param_1 + 0x94) = uVar3;
          *(undefined2 *)(param_1 + 0xb6) = 0;
          *(undefined2 *)(param_1 + 0x8e) = 0;
          *(int *)(param_1 + 0x90) = iVar15;
          *(short *)(param_1 + 0x8c) = sVar12 + *(short *)(param_1 + 0x8a);
          uVar11 = (uint)uVar3;
LAB_ram_4813e748:
          uVar10 = uVar10 + *(ushort *)(param_1 + 0xb6);
          sVar12 = (short)uVar10;
          if ((uVar10 & 0xffff) < (uint)*(ushort *)(param_1 + 0xb6)) {
            sVar12 = -1;
LAB_ram_4813e840:
            *(short *)(param_1 + 0xb6) = sVar12 - (short)uVar11;
            uVar10 = *(ushort *)(param_1 + 0x7e) + uVar11;
            uVar14 = (undefined2)uVar10;
            if (uVar11 <= (uVar10 & 0xffff)) goto LAB_ram_4813e854;
LAB_ram_4813e486:
            *(undefined2 *)(param_1 + 0x94) = 0xffff;
          }
          else {
            if (uVar11 <= (uVar10 & 0xffff)) goto LAB_ram_4813e840;
            *(short *)(param_1 + 0xb6) = (short)(uVar10 * 0x10000 >> 0x10);
          }
        }
        uVar8 = FUN_ram_4813e112(param_1,*(undefined4 *)(param_1 + 0xbc),
                                 *(undefined4 *)(param_1 + 0xb8));
        *(undefined4 *)(param_1 + 0xbc) = uVar8;
        iVar15 = FUN_ram_4813e112(param_1,*(undefined4 *)(param_1 + 0xb8),uVar8);
        *(undefined1 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0xb8) = iVar15;
        *(ushort *)(param_1 + 0x7c) = -(ushort)(*(int *)(param_1 + 0xbc) == 0);
        if (iVar15 == 0) {
          *(undefined2 *)(param_1 + 0xb4) = 0;
        }
        if (DAT_ram_4ff6cdc0 != 0) {
          FUN_ram_4814c67a(&DAT_ram_4ff6cdc8);
        }
        uVar13 = *(ushort *)(param_1 + 0x46);
        *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + DAT_ram_4ff6e1e0;
        if ((int)((uint)uVar13 << 0x14) < 0) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            if (*(int *)(param_1 + 0xb8) != 0) {
              iVar15 = FUN_ram_48137fd6(*(undefined4 *)
                                         (*(int *)(*(int *)(param_1 + 0xb8) + 0xc) + 4));
              if (iVar15 - *(int *)(param_1 + 0x98) < 0) goto LAB_ram_4813e65c;
              uVar13 = *(ushort *)(param_1 + 0x46);
            }
            *(ushort *)(param_1 + 0x46) = uVar13 & 0xf7ff;
          }
          else {
            iVar15 = FUN_ram_48137fd6(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xbc) + 0xc) + 4))
            ;
            if (-1 < iVar15 - *(int *)(param_1 + 0x98)) {
              *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) & 0xf7ff;
            }
          }
        }
      }
LAB_ram_4813e65c:
      uVar16 = *(uint *)(param_1 + 0x80);
      iVar15 = DAT_ram_4ff6e1e4;
      if (uVar16 != 0) {
LAB_ram_4813e666:
        if (*(int *)(param_1 + 0x84) - iVar15 < 0) {
          uVar11 = (uint)DAT_ram_4ff6e1d0;
          uVar10 = (int)*(short *)(param_1 + 0x88) >> 3 & 0xffff;
          uVar18 = (uVar11 - uVar10) - (uVar16 & 0xffff);
          uVar19 = uVar18 & 0xffff;
          sVar12 = (short)(((int)*(short *)(param_1 + 0x88) + uVar19) * 0x10000 >> 0x10);
          *(short *)(param_1 + 0x88) = sVar12;
          if ((short)uVar18 < 0) {
            uVar19 = (uVar16 & 0xffff) + (uVar10 - uVar11) & 0xffff;
          }
          sVar4 = (short)((uVar19 + ((int)*(short *)(param_1 + 0x8a) -
                                    ((int)*(short *)(param_1 + 0x8a) >> 2))) * 0x10000 >> 0x10);
          *(undefined4 *)(param_1 + 0x80) = 0;
          *(short *)(param_1 + 0x8c) = (sVar12 >> 3) + sVar4;
          *(short *)(param_1 + 0x8a) = sVar4;
        }
      }
      goto LAB_ram_4813e25c;
    }
    if ((iVar7 == DAT_ram_4ff6e1e4) &&
       (uVar10 = (uint)*(ushort *)(DAT_ram_4ff6e1f8 + 0xe), uVar13 < uVar10)) goto LAB_ram_4813e3e8;
    iVar9 = *(int *)(param_1 + 0x90);
    if (iVar9 - DAT_ram_4ff6e1e4 < 0) goto LAB_ram_4813e40c;
LAB_ram_4813e36a:
    uVar10 = (uint)DAT_ram_4ff6e1de;
    if (uVar10 == 0) {
      if ((((uint)*(ushort *)(param_1 + 0xac) + *(int *)(param_1 + 0xa4) == (uint)uVar13 + iVar7) &&
          (-1 < *(short *)(param_1 + 0x7c))) && (iVar9 == iVar15)) {
        cVar1 = *(char *)(param_1 + 0x8f);
        if (cVar1 == -1) {
LAB_ram_4813f05c:
          uVar13 = *(short *)(param_1 + 0x7e) + *(ushort *)(param_1 + 0x94);
          if (uVar13 < *(ushort *)(param_1 + 0x94)) {
            uVar13 = 0xffff;
          }
          *(ushort *)(param_1 + 0x94) = uVar13;
        }
        else {
          *(char *)(param_1 + 0x8f) = cVar1 + '\x01';
          if (3 < (byte)(cVar1 + 1U)) goto LAB_ram_4813f05c;
          if ((byte)(cVar1 + 1U) != 3) goto LAB_ram_4813e386;
        }
        FUN_ram_48141806(param_1);
        goto LAB_ram_4813e65c;
      }
LAB_ram_4813e386:
      uVar16 = *(uint *)(param_1 + 0x80);
      if (uVar16 == 0) goto LAB_ram_4813e390;
      goto LAB_ram_4813e666;
    }
    uVar16 = *(uint *)(param_1 + 0x80);
    if (uVar16 != 0) goto LAB_ram_4813e666;
  }
  if (6 < uVar11) {
LAB_ram_4813e390:
    if ((-1 < iVar17 - *(int *)(param_1 + 0x50)) &&
       (-1 < (int)((*(int *)(param_1 + 0x50) + -1 + (uint)*(ushort *)(param_1 + 0x54)) - iVar17))) {
      return;
    }
    *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 2;
    return;
  }
  iVar15 = *(int *)(param_1 + 0x50);
  uVar11 = iVar15 - iVar17;
  if ((-1 < (int)(uVar11 - 1)) && (-1 < (int)(uVar10 + (iVar17 - iVar15) + -1))) {
    if (DAT_ram_4ff6cf04 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x5aa,"tcp_receive",
                       "inseg.p != NULL");
    }
    if (0xfffe < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x5ab,"tcp_receive",
                       "insane offset!");
    }
    uVar10 = uVar11 & 0xffff;
    if (*(ushort *)(DAT_ram_4ff6cf04 + 2) < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x5ad,"tcp_receive",
                       "pbuf too short!");
    }
    uVar16 = (uint)*(ushort *)((int)DAT_ram_4ff6cf04 + 10);
    iVar15 = *(ushort *)(DAT_ram_4ff6cf04 + 2) - uVar10;
    DAT_ram_4ff6cf08 = DAT_ram_4ff6cf08 - (short)uVar11;
    piVar6 = DAT_ram_4ff6cf04;
    if (uVar16 < uVar10) {
      do {
        *(undefined2 *)((int)piVar6 + 10) = 0;
        *(short *)(piVar6 + 2) = (short)((uint)(iVar15 * 0x10000) >> 0x10);
        piVar6 = (int *)*piVar6;
        uVar10 = uVar10 - uVar16;
        uVar16 = (uint)*(ushort *)((int)piVar6 + 10);
        uVar10 = uVar10 & 0xffff;
      } while (uVar16 < uVar10);
    }
    FUN_ram_4813ab98();
    iVar15 = DAT_ram_4ff6cf0c;
    iVar17 = *(int *)(param_1 + 0x50);
    sVar12 = *(short *)(param_1 + 0x54);
    DAT_ram_4ff6e1e8 = iVar17;
    *(char *)(DAT_ram_4ff6cf0c + 5) = (char)((uint)iVar17 >> 8);
    *(char *)(iVar15 + 4) = (char)iVar17;
    *(char *)(iVar15 + 6) = (char)((uint)iVar17 >> 0x10);
    *(char *)(iVar15 + 7) = (char)((uint)iVar17 >> 0x18);
    if (sVar12 == 0) goto LAB_ram_4813e320;
LAB_ram_4813e766:
    uVar13 = DAT_ram_4ff6cf08;
    uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
    DAT_ram_4ff6e1de = uVar13 + ((uVar11 & 3) != 0);
    uVar11 = (uint)*(ushort *)(param_1 + 0x54);
    if (uVar11 < DAT_ram_4ff6e1de) {
      uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
      uVar10 = (uint)*(ushort *)(DAT_ram_4ff6cf0c + 0xc);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_ram_48137fc8(uVar10);
        uVar11 = FUN_ram_48137fc8(uVar11 & 0x3e);
        iVar15 = DAT_ram_4ff6cf0c;
        uVar16 = uVar10 & 0xffffc0ff;
        uVar10 = uVar11 & 0xffff | uVar16;
        *(byte *)(DAT_ram_4ff6cf0c + 0xc) = (byte)uVar11 | (byte)uVar16;
        *(char *)(iVar15 + 0xd) = (char)(uVar10 >> 8);
      }
      DAT_ram_4ff6cf08 = *(ushort *)(param_1 + 0x54);
      uVar11 = FUN_ram_48137fc8(uVar10);
      if ((uVar11 & 2) != 0) {
        DAT_ram_4ff6cf08 = DAT_ram_4ff6cf08 - 1;
      }
      FUN_ram_4813af5e(DAT_ram_4ff6cf04);
      uVar13 = DAT_ram_4ff6cf08;
      uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
      DAT_ram_4ff6e1de = uVar13 + ((uVar11 & 3) != 0);
      uVar11 = (uint)*(ushort *)(param_1 + 0x54);
      if ((uint)DAT_ram_4ff6e1de + DAT_ram_4ff6e1e8 != *(int *)(param_1 + 0x50) + uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x5e1,"tcp_receive",
                         "tcp_receive: segment not trimmed correctly to rcv_wnd");
      }
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar10 = (uint)DAT_ram_4ff6e1de;
      iVar15 = DAT_ram_4ff6e1e8 + uVar10;
    }
    else {
      uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
      puVar21 = *(undefined4 **)(param_1 + 0xc0);
      if ((uVar11 & 1) == 0) {
        while (puVar21 != (undefined4 *)0x0) {
          uVar10 = (uint)DAT_ram_4ff6e1de;
          iVar17 = *(int *)(puVar21[3] + 4);
          iVar15 = uVar10 + DAT_ram_4ff6e1e8;
          if ((int)(iVar15 - ((uint)*(ushort *)(puVar21 + 2) + iVar17)) < 0) {
            if (iVar17 - iVar15 < 0) {
              DAT_ram_4ff6cf08 = (short)iVar17 - (short)DAT_ram_4ff6e1e8;
              uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
              if (((uVar11 & 2) != 0) ||
                 (uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc)),
                 (uVar11 & 1) != 0)) {
                DAT_ram_4ff6cf08 = DAT_ram_4ff6cf08 - 1;
              }
              FUN_ram_4813af5e(DAT_ram_4ff6cf04,DAT_ram_4ff6cf08);
              uVar13 = DAT_ram_4ff6cf08;
              uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
              DAT_ram_4ff6e1de = uVar13 + ((uVar11 & 3) != 0);
              uVar10 = (uint)DAT_ram_4ff6e1de;
              iVar15 = *(int *)(puVar21[3] + 4);
              if (uVar10 + DAT_ram_4ff6e1e8 != iVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x615,"tcp_receive",
                                 "tcp_receive: segment not trimmed correctly to ooseq queue");
              }
            }
            goto LAB_ram_4813f0b4;
          }
          uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc));
          if (((uVar11 & 1) != 0) &&
             (uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc)), (uVar11 & 2) == 0)
             ) {
            uVar14 = *(undefined2 *)(DAT_ram_4ff6cf0c + 0xc);
            uVar5 = FUN_ram_48137fc8(1);
            iVar15 = DAT_ram_4ff6cf0c;
            *(byte *)(DAT_ram_4ff6cf0c + 0xc) = (byte)uVar14 | (byte)uVar5;
            *(byte *)(iVar15 + 0xd) = (byte)((ushort)uVar14 >> 8) | (byte)((ushort)uVar5 >> 8);
            uVar13 = DAT_ram_4ff6cf08;
            uVar11 = FUN_ram_48137fc8();
            DAT_ram_4ff6e1de = uVar13 + ((uVar11 & 3) != 0);
          }
          puVar22 = (undefined4 *)*puVar21;
          FUN_ram_4813c78a(puVar21);
          puVar21 = puVar22;
        }
        uVar10 = (uint)DAT_ram_4ff6e1de;
        iVar15 = DAT_ram_4ff6e1e8 + uVar10;
LAB_ram_4813f0b4:
        uVar11 = (uint)*(ushort *)(param_1 + 0x54);
        *(undefined4 **)(param_1 + 0xc0) = puVar21;
      }
      else {
        while (puVar21 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0xc0) = *puVar21;
          FUN_ram_4813c78a(puVar21);
          puVar21 = *(undefined4 **)(param_1 + 0xc0);
        }
        uVar10 = (uint)DAT_ram_4ff6e1de;
        uVar11 = (uint)*(ushort *)(param_1 + 0x54);
        iVar15 = DAT_ram_4ff6e1e8 + uVar10;
      }
    }
    *(int *)(param_1 + 0x50) = iVar15;
    if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x620,"tcp_receive",
                       "tcp_receive: tcplen > rcv_wnd");
    }
    *(short *)(param_1 + 0x54) = (short)uVar11 - (short)uVar10;
    FUN_ram_4813c59c(param_1);
    piVar6 = DAT_ram_4ff6cf04;
    if ((short)DAT_ram_4ff6cf04[2] != 0) {
      DAT_ram_4ff6cf04 = (int *)0x0;
      DAT_ram_4ff6e1d8 = piVar6;
    }
    uVar11 = FUN_ram_48137fc8(*(undefined2 *)(DAT_ram_4ff6cf0c + 0xc));
    if ((uVar11 & 1) != 0) {
      DAT_ram_4ff6e1dc = DAT_ram_4ff6e1dc | 0x20;
    }
    puVar21 = *(undefined4 **)(param_1 + 0xc0);
    if (puVar21 == (undefined4 *)0x0) {
      uVar11 = (uint)*(ushort *)(param_1 + 0x46);
      if (-1 < (int)(uVar11 << 0x13)) {
        iVar15 = *(int *)(param_1 + 0x5c);
        iVar17 = *(int *)(param_1 + 0x60);
        goto LAB_ram_4813ebfe;
      }
    }
    else {
      do {
        iVar15 = *(int *)(puVar21[3] + 4);
        if (iVar15 != *(int *)(param_1 + 0x50)) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x46);
          if (-1 < (int)(uVar11 << 0x13)) goto LAB_ram_4813ebf4;
          piVar6 = (int *)(param_1 + 0x5c);
          uVar16 = 0;
          uVar10 = 0;
          goto LAB_ram_4813ecc2;
        }
        uVar13 = *(ushort *)(puVar21 + 2);
        uVar3 = *(ushort *)(param_1 + 0x54);
        DAT_ram_4ff6e1e8 = iVar15;
        uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc));
        if ((uint)uVar3 < (uint)((uVar11 & 3) != 0) + (uint)uVar13) {
          uVar14 = *(undefined2 *)(puVar21[3] + 0xc);
          *(undefined2 *)(puVar21 + 2) = *(undefined2 *)(param_1 + 0x54);
          uVar11 = FUN_ram_48137fc8(uVar14);
          if (((uVar11 & 2) == 0) &&
             (uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc)), (uVar11 & 1) == 0)) {
            sVar12 = *(short *)(puVar21 + 2);
          }
          else {
            sVar12 = *(short *)(puVar21 + 2) + -1;
            *(short *)(puVar21 + 2) = sVar12;
          }
          FUN_ram_4813af5e(puVar21[1],sVar12);
          FUN_ram_4813c75e(*puVar21);
          *puVar21 = 0;
        }
        uVar13 = *(ushort *)(puVar21 + 2);
        uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc));
        iVar15 = puVar21[3];
        *(uint *)(param_1 + 0x50) =
             (uint)((uVar11 & 3) != 0) + (uint)uVar13 + *(int *)(param_1 + 0x50);
        uVar13 = *(ushort *)(puVar21 + 2);
        uVar3 = *(ushort *)(param_1 + 0x54);
        uVar11 = FUN_ram_48137fc8(*(undefined2 *)(iVar15 + 0xc));
        if ((uint)uVar3 < (uint)((uVar11 & 3) != 0) + (uint)uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x654,"tcp_receive",
                           "tcp_receive: ooseq tcplen > rcv_wnd");
        }
        sVar12 = *(short *)(puVar21 + 2);
        uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc));
        *(ushort *)(param_1 + 0x54) =
             *(short *)(param_1 + 0x54) - ((ushort)((uVar11 & 3) != 0) + sVar12);
        FUN_ram_4813c59c(param_1);
        if ((short)((int *)puVar21[1])[2] != 0) {
          piVar6 = (int *)puVar21[1];
          if (DAT_ram_4ff6e1d8 != (int *)0x0) {
            FUN_ram_4813b116();
            piVar6 = DAT_ram_4ff6e1d8;
          }
          DAT_ram_4ff6e1d8 = piVar6;
          puVar21[1] = 0;
        }
        uVar11 = FUN_ram_48137fc8(*(undefined2 *)(puVar21[3] + 0xc));
        if (((uVar11 & 1) != 0) &&
           (DAT_ram_4ff6e1dc = DAT_ram_4ff6e1dc | 0x20, *(int *)(param_1 + 0x3c) == 4)) {
          *(undefined4 *)(param_1 + 0x3c) = 7;
        }
        *(undefined4 *)(param_1 + 0xc0) = *puVar21;
        FUN_ram_4813c78a(puVar21);
        puVar21 = *(undefined4 **)(param_1 + 0xc0);
      } while (puVar21 != (undefined4 *)0x0);
      uVar11 = (uint)*(ushort *)(param_1 + 0x46);
      if (-1 < (int)(uVar11 << 0x13)) goto LAB_ram_4813ebf4;
    }
    if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
      memset((void *)(param_1 + 0x5c),0,0x20);
    }
    if ((uVar11 & 1) == 0) {
      *(ushort *)(param_1 + 0x46) = (ushort)uVar11 | 1;
    }
    else {
      *(ushort *)(param_1 + 0x46) = (ushort)uVar11 & 0xfffe | 2;
    }
    goto LAB_ram_4813ec1e;
  }
  if (iVar17 - iVar15 < 0) {
    *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 2;
    goto LAB_ram_4813e320;
  }
  if ((int)((uVar11 - 1) + (uint)*(ushort *)(param_1 + 0x54)) < 0) goto LAB_ram_4813e320;
  if (iVar17 == iVar15) goto LAB_ram_4813e766;
  piVar6 = *(int **)(param_1 + 0xc0);
  if (piVar6 == (int *)0x0) {
    uVar8 = FUN_ram_4813c7ac(&DAT_ram_4ff6cf00);
    *(undefined4 *)(param_1 + 0xc0) = uVar8;
    iVar15 = DAT_ram_4ff6e1e8;
    if ((int)((uint)*(ushort *)(param_1 + 0x46) << 0x13) < 0) {
      uVar11 = (uint)DAT_ram_4ff6cf08;
      *(int *)(param_1 + 0x5c) = DAT_ram_4ff6e1e8;
      *(uint *)(param_1 + 0x60) = uVar11 + iVar15;
    }
    goto LAB_ram_4813e320;
  }
  iVar7 = piVar6[3];
  iVar15 = *(int *)(iVar7 + 4);
  iVar9 = iVar15;
  if (iVar17 - iVar15 < 0) {
    iVar9 = iVar17;
  }
  if (iVar15 == iVar17) {
    piVar20 = (int *)0x0;
LAB_ram_4813e864:
    if ((*(ushort *)(piVar6 + 2) < DAT_ram_4ff6cf08) &&
       (iVar15 = FUN_ram_4813c7ac(&DAT_ram_4ff6cf00), iVar15 != 0)) {
      if (piVar20 == (int *)0x0) {
        *(int *)(param_1 + 0xc0) = iVar15;
        FUN_ram_4813dfb6(iVar15,piVar6);
        uVar13 = *(ushort *)(param_1 + 0x46);
        goto joined_r0x4813ef04;
      }
      *piVar20 = iVar15;
      FUN_ram_4813dfb6(iVar15,piVar6);
      uVar13 = *(ushort *)(param_1 + 0x46);
      goto joined_r0x4813edca;
    }
    if (-1 < (int)((uint)*(ushort *)(param_1 + 0x46) << 0x13)) goto LAB_ram_4813e622;
    if (piVar20 == (int *)0x0) goto LAB_ram_4813e888;
LAB_ram_4813ed18:
    piVar6 = (int *)*piVar20;
    if (piVar6 == (int *)0x0) goto LAB_ram_4813e622;
    iVar15 = *(int *)(piVar6[3] + 4);
    if (*(int *)(piVar20[3] + 4) + (uint)*(ushort *)(piVar20 + 2) != iVar15) {
      iVar9 = iVar15;
    }
  }
  else {
    if (-1 < iVar17 - iVar15) {
      piVar20 = piVar6;
      for (piVar6 = (int *)*piVar6; piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
        iVar7 = piVar6[3];
        iVar15 = *(int *)(iVar7 + 4);
        if (iVar17 == iVar15) goto LAB_ram_4813e864;
        if ((-1 < (iVar17 + -1) - *(int *)(piVar20[3] + 4)) && (-1 < (iVar15 - iVar17) + -1)) {
          iVar15 = FUN_ram_4813c7ac(&DAT_ram_4ff6cf00);
          if (iVar15 == 0) goto LAB_ram_4813ed0c;
          if ((int)(DAT_ram_4ff6e1e8 - ((uint)*(ushort *)(piVar20 + 2) + *(int *)(piVar20[3] + 4)))
              < 0) {
            *(short *)(piVar20 + 2) =
                 (short)((uint)((DAT_ram_4ff6e1e8 - *(int *)(piVar20[3] + 4)) * 0x10000) >> 0x10);
            FUN_ram_4813af5e(piVar20[1]);
          }
          *piVar20 = iVar15;
          FUN_ram_4813dfb6(iVar15,piVar6);
          uVar13 = *(ushort *)(param_1 + 0x46);
          goto joined_r0x4813edca;
        }
        if (*(int *)(piVar20[3] + 4) + (uint)*(ushort *)(piVar20 + 2) != iVar15) {
          iVar9 = iVar15;
        }
        piVar20 = piVar6;
      }
      if (-1 < iVar15 - iVar17) goto LAB_ram_4813e622;
      uVar11 = FUN_ram_48137fc8(*(undefined2 *)(iVar7 + 0xc));
      if ((uVar11 & 1) == 0) {
        iVar15 = FUN_ram_4813c7ac(&DAT_ram_4ff6cf00);
        *piVar20 = iVar15;
        if (iVar15 == 0) goto LAB_ram_4813e622;
        if ((int)(DAT_ram_4ff6e1e8 - ((uint)*(ushort *)(piVar20 + 2) + *(int *)(piVar20[3] + 4))) <
            0) {
          *(short *)(piVar20 + 2) =
               (short)((uint)((DAT_ram_4ff6e1e8 - *(int *)(piVar20[3] + 4)) * 0x10000) >> 0x10);
          FUN_ram_4813af5e(piVar20[1]);
        }
        if ((int)(((*(int *)(param_1 + 0x50) - (uint)DAT_ram_4ff6e1de) +
                  (uint)*(ushort *)(param_1 + 0x54)) - DAT_ram_4ff6e1e8) < 0) {
          uVar11 = FUN_ram_48137fc8(*(undefined2 *)(*(int *)(*piVar20 + 0xc) + 0xc));
          if ((uVar11 & 1) == 0) {
            iVar17 = *piVar20;
          }
          else {
            uVar10 = (uint)*(ushort *)(*(int *)(*piVar20 + 0xc) + 0xc);
            uVar11 = FUN_ram_48137fc8(uVar10);
            uVar11 = FUN_ram_48137fc8(uVar11 & 0x3e);
            iVar17 = *piVar20;
            uVar11 = uVar11 | uVar10 & 0xffffc0ff;
            iVar15 = *(int *)(iVar17 + 0xc);
            *(char *)(iVar15 + 0xd) = (char)(uVar11 >> 8);
            *(char *)(iVar15 + 0xc) = (char)uVar11;
          }
          *(short *)(iVar17 + 8) =
               (*(short *)(param_1 + 0x54) - (short)DAT_ram_4ff6e1e8) +
               (short)*(undefined4 *)(param_1 + 0x50);
          uVar11 = FUN_ram_48137fc8(*(undefined2 *)(*(int *)(iVar17 + 0xc) + 0xc));
          iVar15 = *piVar20;
          if ((uVar11 & 2) != 0) {
            *(short *)(iVar15 + 8) = *(short *)(iVar15 + 8) + -1;
          }
          FUN_ram_4813af5e(*(undefined4 *)(iVar15 + 4),*(undefined2 *)(iVar15 + 8));
          sVar12 = *(short *)(*piVar20 + 8);
          uVar11 = FUN_ram_48137fc8(*(undefined2 *)(*(int *)(*piVar20 + 0xc) + 0xc));
          DAT_ram_4ff6e1de = (ushort)((uVar11 & 3) != 0) + sVar12;
          if ((uint)DAT_ram_4ff6e1de + DAT_ram_4ff6e1e8 !=
              (uint)*(ushort *)(param_1 + 0x54) + *(int *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x72c,"tcp_receive",
                             "tcp_receive: segment not trimmed correctly to rcv_wnd");
          }
        }
      }
LAB_ram_4813ed0c:
      uVar13 = *(ushort *)(param_1 + 0x46);
joined_r0x4813edca:
      if (-1 < (int)((uint)uVar13 << 0x13)) goto LAB_ram_4813e622;
      goto LAB_ram_4813ed18;
    }
    iVar15 = FUN_ram_4813c7ac(&DAT_ram_4ff6cf00);
    if (iVar15 != 0) {
      *(int *)(param_1 + 0xc0) = iVar15;
      FUN_ram_4813dfb6(iVar15,piVar6);
    }
    uVar13 = *(ushort *)(param_1 + 0x46);
joined_r0x4813ef04:
    if (-1 < (int)((uint)uVar13 << 0x13)) goto LAB_ram_4813e622;
LAB_ram_4813e888:
    piVar6 = *(int **)(param_1 + 0xc0);
    if (piVar6 == (int *)0x0) goto LAB_ram_4813e622;
    iVar15 = *(int *)(piVar6[3] + 4);
  }
  do {
    puVar2 = (ushort *)(piVar6 + 2);
    piVar6 = (int *)*piVar6;
    iVar15 = iVar15 + (uint)*puVar2;
    if (piVar6 == (int *)0x0) break;
  } while (iVar15 == *(int *)(piVar6[3] + 4));
  if (iVar9 - iVar15 < 0) {
    piVar6 = (int *)(param_1 + 0x5c);
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (piVar6[1] == *piVar6) break;
      if ((-1 < iVar9 - piVar6[1]) || (-1 < *piVar6 - iVar15)) {
        if (uVar10 != uVar11) {
          iVar17 = uVar11 * 8 + param_1;
          *(int *)(iVar17 + 0x5c) = *piVar6;
          *(int *)(iVar17 + 0x60) = piVar6[1];
        }
        uVar11 = uVar11 + 1 & 0xff;
      }
      uVar10 = uVar10 + 1 & 0xff;
      piVar6 = piVar6 + 2;
    } while (uVar10 != 4);
    puVar21 = (undefined4 *)(param_1 + 0x6c);
    uVar10 = 3;
    do {
      if (uVar11 < uVar10) {
        puVar21[3] = 0;
        puVar21[2] = 0;
      }
      else {
        puVar21[2] = *puVar21;
        puVar21[3] = puVar21[1];
      }
      uVar10 = uVar10 - 1 & 0xff;
      puVar21 = puVar21 + -2;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x5c) = iVar9;
    *(int *)(param_1 + 0x60) = iVar15;
LAB_ram_4813e320:
    FUN_ram_48141942(param_1);
    return;
  }
LAB_ram_4813e622:
  FUN_ram_48141942(param_1);
  return;
  while( true ) {
    if (iVar15 - piVar6[1] < 0) {
      if (uVar10 != uVar16) {
        iVar17 = uVar16 * 8 + param_1;
        *(int *)(iVar17 + 0x5c) = *piVar6;
        *(int *)(iVar17 + 0x60) = piVar6[1];
      }
      iVar17 = uVar16 * 8 + param_1;
      if (*(int *)(iVar17 + 0x5c) - iVar15 < 0) {
        *(int *)(iVar17 + 0x5c) = iVar15;
      }
      uVar16 = uVar16 + 1 & 0xff;
    }
    uVar10 = uVar10 + 1 & 0xff;
    piVar6 = piVar6 + 2;
    if (uVar10 == 4) break;
LAB_ram_4813ecc2:
    if (piVar6[1] == *piVar6) break;
  }
  iVar15 = uVar16 * 8 + param_1;
  if (uVar16 < 4) {
    do {
      *(undefined4 *)(iVar15 + 0x60) = 0;
      *(undefined4 *)(iVar15 + 0x5c) = 0;
      uVar16 = uVar16 + 1 & 0xff;
      iVar15 = iVar15 + 8;
    } while (uVar16 != 4);
  }
LAB_ram_4813ebf4:
  iVar15 = *(int *)(param_1 + 0x5c);
  iVar17 = *(int *)(param_1 + 0x60);
LAB_ram_4813ebfe:
  uVar13 = (ushort)uVar11 | 1;
  if ((uVar11 & 1) != 0) {
    uVar13 = (ushort)uVar11 & 0xfffe | 2;
  }
  *(ushort *)(param_1 + 0x46) = uVar13;
  if (iVar15 != iVar17) {
    FUN_ram_48141942(param_1);
  }
LAB_ram_4813ec1e:
  if (DAT_ram_4ff6cdc0 == 0) {
    return;
  }
  FUN_ram_4814c67a(&DAT_ram_4ff6cdc8);
  return;
}



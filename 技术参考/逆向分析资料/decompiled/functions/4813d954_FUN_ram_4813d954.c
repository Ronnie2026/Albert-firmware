/* Firmware entry: 0x4813d954 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4813d954(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  code *pcVar16;
  undefined4 uVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_4ff6e1d0 = _DAT_ram_4ff6e1d0 + 1;
  DAT_ram_4ff6e1bc = DAT_ram_4ff6e1bc + '\x01';
LAB_ram_4813d996:
  if (DAT_ram_4ff6e1c4 == 0) {
LAB_ram_4813da6a:
    iVar14 = 0;
    iVar13 = DAT_ram_4ff6e1c0;
    do {
      if (iVar13 == 0) {
        return;
      }
      while( true ) {
        if (*(int *)(iVar13 + 0x3c) != 10) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x5af,"tcp_slowtmr",
                           "tcp_slowtmr: TIME-WAIT pcb->state == TIME-WAIT");
        }
        if (0xf0 < (uint)(_DAT_ram_4ff6e1d0 - *(int *)(iVar13 + 0x4c))) break;
        piVar5 = (int *)(iVar13 + 0x34);
        iVar14 = iVar13;
        iVar13 = *piVar5;
        if (*piVar5 == 0) {
          return;
        }
      }
      if (iVar14 == 0) {
        if (iVar13 != DAT_ram_4ff6e1c0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x5c1,"tcp_slowtmr",
                           "tcp_slowtmr: first pcb == tcp_tw_pcbs");
        }
        iVar13 = *(int *)(iVar13 + 0x34);
        DAT_ram_4ff6e1c0 = iVar13;
      }
      else {
        if (iVar13 == DAT_ram_4ff6e1c0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x5bd,"tcp_slowtmr",
                           "tcp_slowtmr: middle tcp != tcp_tw_pcbs");
        }
        iVar13 = *(int *)(iVar13 + 0x34);
        *(int *)(iVar14 + 0x34) = iVar13;
      }
      FUN_ram_48139604(2);
    } while( true );
  }
  iVar14 = 0;
  iVar13 = DAT_ram_4ff6e1c4;
  do {
    uVar12 = *(uint *)(iVar13 + 0x3c);
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x4c8,"tcp_slowtmr",
                       "tcp_slowtmr: active pcb->state != CLOSED");
    }
    if (uVar12 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x4c9,"tcp_slowtmr",
                       "tcp_slowtmr: active pcb->state != LISTEN");
    }
    if (uVar12 == 10) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x4ca,"tcp_slowtmr",
                       "tcp_slowtmr: active pcb->state != TIME-WAIT");
    }
    if (*(char *)(iVar13 + 0x4a) == DAT_ram_4ff6e1bc) {
      iVar14 = iVar13;
      iVar15 = *(int *)(iVar13 + 0x34);
      goto joined_r0x4813da68;
    }
    *(char *)(iVar13 + 0x4a) = DAT_ram_4ff6e1bc;
    if (uVar12 == 2) {
      if (*(byte *)(iVar13 + 0x8e) < 0xc) goto LAB_ram_4813dba0;
      iVar15 = 1;
      goto LAB_ram_4813db76;
    }
    iVar15 = 1;
    if (*(byte *)(iVar13 + 0x8e) < 0xc) {
LAB_ram_4813dba0:
      if (*(byte *)(iVar13 + 0xed) == 0) {
        uVar4 = *(ushort *)(iVar13 + 0x7c);
        iVar9 = (int)(short)uVar4;
        if (uVar4 < 0x7fff) {
          iVar15 = (uVar4 + 1) * 0x10000;
          iVar9 = iVar15 >> 0x10;
          *(short *)(iVar13 + 0x7c) = (short)((uint)iVar15 >> 0x10);
        }
        iVar15 = 0;
        if (*(short *)(iVar13 + 0x8c) <= iVar9) {
          iVar9 = FUN_ram_48141622(iVar13);
          uVar12 = *(uint *)(iVar13 + 0x3c);
          if ((iVar9 == 0) || ((*(int *)(iVar13 + 0xbc) == 0 && (*(int *)(iVar13 + 0xb8) != 0)))) {
            if (1 < uVar12 - 2) {
              bVar2 = DAT_ram_48236b5c;
              if (*(byte *)(iVar13 + 0x8e) < 0xd) {
                bVar2 = (&DAT_ram_48236b50)[*(byte *)(iVar13 + 0x8e)];
              }
              iVar9 = ((int)*(short *)(iVar13 + 0x88) >> 3) + (int)*(short *)(iVar13 + 0x8a) <<
                      (bVar2 & 0x1f);
              uVar11 = (undefined2)iVar9;
              if (0x7fff < iVar9) {
                uVar11 = 0x7fff;
              }
              *(undefined2 *)(iVar13 + 0x8c) = uVar11;
            }
            *(undefined2 *)(iVar13 + 0x7c) = 0;
            uVar4 = *(ushort *)(iVar13 + 0x7e);
            uVar12 = (uint)*(ushort *)(iVar13 + 0xac);
            if ((uint)*(ushort *)(iVar13 + 0x94) < (uint)*(ushort *)(iVar13 + 0xac)) {
              uVar12 = (uint)*(ushort *)(iVar13 + 0x94);
            }
            sVar8 = (short)(uVar12 >> 1);
            if (uVar12 >> 1 < (uVar4 & 0x7fff) << 1) {
              sVar8 = uVar4 << 1;
            }
            *(short *)(iVar13 + 0x96) = sVar8;
            *(ushort *)(iVar13 + 0x94) = uVar4;
            *(undefined2 *)(iVar13 + 0xb6) = 0;
            FUN_ram_48142180(iVar13);
            uVar12 = *(uint *)(iVar13 + 0x3c);
          }
        }
        goto LAB_ram_4813d9d4;
      }
      if (*(int *)(iVar13 + 0xbc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x4de,"tcp_slowtmr",
                         "tcp_slowtimr: persist ticking with in-flight data");
      }
      if (*(int *)(iVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x4df,"tcp_slowtmr",
                         "tcp_slowtimr: persist ticking with empty send buffer");
      }
      if (0xb < *(byte *)(iVar13 + 0xee)) {
        iVar15 = 1;
        goto LAB_ram_4813d9d4;
      }
      bVar2 = *(byte *)((int)&DAT_ram_48236b44 + *(byte *)(iVar13 + 0xed) + 3);
      bVar3 = *(byte *)(iVar13 + 0xec);
      if ((bVar2 <= bVar3) || (*(byte *)(iVar13 + 0xec) = bVar3 + 1, bVar2 <= (byte)(bVar3 + 1))) {
        if (*(short *)(iVar13 + 0xac) == 0) {
          iVar15 = FUN_ram_481422c2(iVar13);
          if (iVar15 == 0) {
LAB_ram_4813dbe8:
            *(undefined1 *)(iVar13 + 0xec) = 0;
            if (*(byte *)(iVar13 + 0xed) < 7) {
              *(byte *)(iVar13 + 0xed) = *(byte *)(iVar13 + 0xed) + 1;
            }
          }
          uVar12 = *(uint *)(iVar13 + 0x3c);
        }
        else {
          iVar15 = FUN_ram_48141118(iVar13);
          if ((iVar15 != 0) || (iVar15 = FUN_ram_48141ae6(iVar13), iVar15 != 0))
          goto LAB_ram_4813dbe8;
          uVar12 = *(uint *)(iVar13 + 0x3c);
        }
      }
      iVar15 = 0;
      if (uVar12 == 6) goto LAB_ram_4813dc06;
LAB_ram_4813d9da:
      if (((*(byte *)(iVar13 + 0x31) & 8) != 0) && ((uVar12 == 4 || (uVar12 == 7)))) {
        iVar9 = *(int *)(iVar13 + 0x4c);
        if ((uint)(_DAT_ram_4ff6e1d0 - iVar9) <=
            (uint)(*(int *)(iVar13 + 0xe4) * *(int *)(iVar13 + 0xe8) + *(int *)(iVar13 + 0xe0)) /
            500) {
          if ((uint)(_DAT_ram_4ff6e1d0 - iVar9) <=
              ((uint)*(byte *)(iVar13 + 0xef) * *(int *)(iVar13 + 0xe4) + *(int *)(iVar13 + 0xe0)) /
              500) goto LAB_ram_4813dc18;
          iVar9 = FUN_ram_4814221a(iVar13);
          if (iVar9 == 0) {
            *(char *)(iVar13 + 0xef) = *(char *)(iVar13 + 0xef) + '\x01';
          }
          goto LAB_ram_4813db76;
        }
        iVar10 = *(int *)(iVar13 + 0xc0);
        bVar7 = true;
joined_r0x4813dd30:
        iVar15 = iVar15 + 1;
        bVar6 = bVar7;
        if (iVar10 != 0) {
LAB_ram_4813da26:
          bVar6 = bVar7;
          if ((uint)(*(short *)(iVar13 + 0x8c) * 6) <= (uint)(_DAT_ram_4ff6e1d0 - iVar9))
          goto LAB_ram_4813db98;
          goto LAB_ram_4813da3c;
        }
        goto LAB_ram_4813dd34;
      }
LAB_ram_4813db76:
      bVar7 = false;
      bVar6 = false;
      if ((*(int *)(iVar13 + 0xc0) != 0) &&
         (bVar6 = bVar7,
         (uint)(*(short *)(iVar13 + 0x8c) * 6) <=
         (uint)(_DAT_ram_4ff6e1d0 - *(int *)(iVar13 + 0x4c)))) {
LAB_ram_4813db98:
        FUN_ram_4813ccfa(iVar13);
        bVar6 = bVar7;
      }
LAB_ram_4813da3c:
      uVar12 = *(uint *)(iVar13 + 0x3c);
      if (uVar12 == 3) {
        if ((uint)(_DAT_ram_4ff6e1d0 - *(int *)(iVar13 + 0x4c)) < 0x29) {
LAB_ram_4813db2a:
          if (iVar15 == 0) {
            cVar1 = *(char *)(iVar13 + 0x48);
            iVar15 = *(int *)(iVar13 + 0x34);
            *(char *)(iVar13 + 0x48) = cVar1 + '\x01';
            iVar14 = iVar13;
            if ((byte)(cVar1 + 1U) < *(byte *)(iVar13 + 0x49)) goto joined_r0x4813da68;
            goto LAB_ram_4813db48;
          }
        }
      }
      else {
        if (uVar12 != 9) goto LAB_ram_4813da46;
        if ((uint)(_DAT_ram_4ff6e1d0 - *(int *)(iVar13 + 0x4c)) < 0xf1) goto LAB_ram_4813db2a;
      }
      pcVar16 = *(code **)(iVar13 + 0xdc);
LAB_ram_4813dac6:
      FUN_ram_4813cd48(iVar13);
LAB_ram_4813dacc:
      if (iVar14 == 0) {
        if (iVar13 != DAT_ram_4ff6e1c4) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x57f,"tcp_slowtmr",
                           "tcp_slowtmr: first pcb == tcp_active_pcbs");
        }
        DAT_ram_4ff6e1c4 = *(int *)(iVar13 + 0x34);
      }
      else {
        if (iVar13 == DAT_ram_4ff6e1c4) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x57b,"tcp_slowtmr",
                           "tcp_slowtmr: middle tcp != tcp_active_pcbs");
        }
        *(undefined4 *)(iVar14 + 0x34) = *(undefined4 *)(iVar13 + 0x34);
      }
      if (bVar6) {
        FUN_ram_481418a4(iVar13,*(undefined4 *)(iVar13 + 0x9c),*(undefined4 *)(iVar13 + 0x50),iVar13
                         ,iVar13 + 0x18,*(undefined2 *)(iVar13 + 0x42),
                         *(undefined2 *)(iVar13 + 0x44));
      }
      iVar15 = *(int *)(iVar13 + 0x34);
      uVar17 = *(undefined4 *)(iVar13 + 0x38);
      if (*(int *)(iVar13 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0xd4,"tcp_free",
                         "tcp_free: LISTEN");
      }
      FUN_ram_48139604(2,iVar13);
      DAT_ram_4ff6e1be = '\0';
      if ((pcVar16 != (code *)0x0) && ((*pcVar16)(uVar17,0xfffffff3), DAT_ram_4ff6e1be != '\0'))
      goto LAB_ram_4813d996;
    }
    else {
LAB_ram_4813d9d4:
      if (uVar12 != 6) goto LAB_ram_4813d9da;
LAB_ram_4813dc06:
      if ((*(ushort *)(iVar13 + 0x46) & 0x10) != 0) {
        iVar9 = *(int *)(iVar13 + 0x4c);
        if ((uint)(_DAT_ram_4ff6e1d0 - iVar9) < 0x29) goto LAB_ram_4813dc18;
        iVar10 = *(int *)(iVar13 + 0xc0);
        bVar7 = false;
        goto joined_r0x4813dd30;
      }
      if ((*(byte *)(iVar13 + 0x31) & 8) != 0) goto LAB_ram_4813db76;
LAB_ram_4813dc18:
      if (*(int *)(iVar13 + 0xc0) != 0) {
        iVar9 = *(int *)(iVar13 + 0x4c);
        bVar7 = false;
        goto LAB_ram_4813da26;
      }
      bVar6 = false;
LAB_ram_4813da46:
      if (iVar15 != 0) {
LAB_ram_4813dd34:
        pcVar16 = *(code **)(iVar13 + 0xdc);
        if ((1 < uVar12) && (uVar12 != 10)) goto LAB_ram_4813dac6;
        goto LAB_ram_4813dacc;
      }
      cVar1 = *(char *)(iVar13 + 0x48);
      iVar15 = *(int *)(iVar13 + 0x34);
      *(char *)(iVar13 + 0x48) = cVar1 + '\x01';
      iVar14 = iVar13;
      if (*(byte *)(iVar13 + 0x49) <= (byte)(cVar1 + 1U)) {
LAB_ram_4813db48:
        *(undefined1 *)(iVar13 + 0x48) = 0;
        DAT_ram_4ff6e1be = '\0';
        if (*(code **)(iVar13 + 0xd8) != (code *)0x0) {
          iVar9 = (**(code **)(iVar13 + 0xd8))(*(undefined4 *)(iVar13 + 0x38),iVar13);
          if (DAT_ram_4ff6e1be != '\0') goto LAB_ram_4813d996;
          iVar14 = iVar13;
          if (iVar9 != 0) goto joined_r0x4813da68;
        }
        FUN_ram_48141ae6(iVar13);
        iVar14 = iVar13;
      }
    }
joined_r0x4813da68:
    iVar13 = iVar15;
    if (iVar13 == 0) goto LAB_ram_4813da6a;
  } while( true );
}



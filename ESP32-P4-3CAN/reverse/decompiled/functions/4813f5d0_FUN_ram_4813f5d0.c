/* Firmware entry: 0x4813f5d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_4813f5d0(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  char cVar10;
  short *psVar11;
  short *psVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  undefined2 uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint *puVar21;
  uint uVar22;
  char cVar23;
  short sVar24;
  ushort uVar25;
  uint uVar26;
  uint *puVar27;
  undefined1 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x8e,"tcp_input",
                     "tcp_input: invalid pbuf");
  }
  DAT_ram_4ff6e1f8 = (short *)param_1[1];
  if (*(ushort *)((int)param_1 + 10) < 0x14) goto LAB_ram_4813f6da;
  if (DAT_ram_4ff6cdf4 == '\x06') {
LAB_ram_4813f608:
    if (DAT_ram_4ff6cde0 == -1) goto LAB_ram_4813f6da;
  }
  else {
    iVar17 = FUN_ram_48147794(_DAT_ram_4ff6cde0,DAT_ram_4ff6cdb4);
    if (iVar17 != 0) goto LAB_ram_4813f6da;
    if (DAT_ram_4ff6cdf4 == '\x06') goto LAB_ram_4813f608;
    if ((_DAT_ram_4ff6cde0 & 0xf0) == 0xe0) goto LAB_ram_4813f6da;
  }
  iVar17 = FUN_ram_48151a52(param_1,6,(short)param_1[2],&DAT_ram_4ff6cdc8,&DAT_ram_4ff6cde0);
  if (iVar17 != 0) goto LAB_ram_4813f6da;
  uVar18 = FUN_ram_48137fc8(DAT_ram_4ff6e1f8[6]);
  uVar18 = uVar18 >> 10 & 0xfc;
  if ((uVar18 < 0x14) || (*(ushort *)(param_1 + 2) < uVar18)) goto LAB_ram_4813f6da;
  DAT_ram_4ff6e1f6 = (short)((uVar18 - 0x14) * 0x10000 >> 0x10);
  DAT_ram_4ff6e1f0 = 0;
  if (*(ushort *)((int)param_1 + 10) < uVar18) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0xcd,"tcp_input",
                       "p->next != NULL");
    }
    FUN_ram_4813ab98(param_1,0x14);
    sVar24 = DAT_ram_4ff6e1f6;
    sVar6 = *(short *)((int)param_1 + 10);
    DAT_ram_4ff6e1f4 = sVar6;
    FUN_ram_4813ab98(param_1,sVar6);
    iVar17 = *param_1;
    uVar25 = sVar24 - sVar6;
    if (*(ushort *)(iVar17 + 10) < uVar25) goto LAB_ram_4813f6da;
    DAT_ram_4ff6e1f0 = *(undefined4 *)(iVar17 + 4);
    FUN_ram_4813ab98(iVar17,uVar25);
    sVar24 = ((short)param_1[2] + sVar6) - sVar24;
    *(short *)(param_1 + 2) = sVar24;
    if (*(short *)((int)param_1 + 10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0xea,"tcp_input","p->len == 0")
      ;
    }
    if (*(short *)(*param_1 + 8) != sVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0xeb,"tcp_input",
                       "p->tot_len == p->next->tot_len");
    }
  }
  else {
    DAT_ram_4ff6e1f4 = DAT_ram_4ff6e1f6;
    FUN_ram_4813ab98(param_1);
  }
  psVar11 = DAT_ram_4ff6e1f8;
  uVar16 = FUN_ram_48137fc8(*DAT_ram_4ff6e1f8);
  psVar12 = DAT_ram_4ff6e1f8;
  *(char *)psVar11 = (char)uVar16;
  *(char *)((int)psVar11 + 1) = (char)((ushort)uVar16 >> 8);
  uVar16 = FUN_ram_48137fc8(psVar12[1]);
  psVar11 = DAT_ram_4ff6e1f8;
  *(char *)(psVar12 + 1) = (char)uVar16;
  *(char *)((int)psVar12 + 3) = (char)((ushort)uVar16 >> 8);
  DAT_ram_4ff6e1e8 = FUN_ram_48137fd6(*(undefined4 *)(psVar11 + 2));
  psVar12 = DAT_ram_4ff6e1f8;
  *(char *)(psVar11 + 2) = (char)DAT_ram_4ff6e1e8;
  *(char *)((int)psVar11 + 5) = (char)(DAT_ram_4ff6e1e8 >> 8);
  *(char *)(psVar11 + 3) = (char)(DAT_ram_4ff6e1e8 >> 0x10);
  *(char *)((int)psVar11 + 7) = (char)(DAT_ram_4ff6e1e8 >> 0x18);
  DAT_ram_4ff6e1e4 = FUN_ram_48137fd6(*(undefined4 *)(psVar12 + 4));
  psVar11 = DAT_ram_4ff6e1f8;
  *(char *)((int)psVar12 + 9) = (char)(DAT_ram_4ff6e1e4 >> 8);
  *(char *)(psVar12 + 5) = (char)(DAT_ram_4ff6e1e4 >> 0x10);
  *(char *)(psVar12 + 4) = (char)DAT_ram_4ff6e1e4;
  *(char *)((int)psVar12 + 0xb) = (char)(DAT_ram_4ff6e1e4 >> 0x18);
  uVar16 = FUN_ram_48137fc8(psVar11[7]);
  psVar12 = DAT_ram_4ff6e1f8;
  *(char *)(psVar11 + 7) = (char)uVar16;
  *(char *)((int)psVar11 + 0xf) = (char)((ushort)uVar16 >> 8);
  bVar15 = FUN_ram_48137fc8(psVar12[6]);
  psVar11 = DAT_ram_4ff6e1f8;
  puVar19 = DAT_ram_4ff6e1c8;
  iVar17 = DAT_ram_4ff6cdb8;
  DAT_ram_4ff6e1dd = bVar15 & 0x3f;
  uVar25 = *(ushort *)(param_1 + 2);
  DAT_ram_4ff6e1de = uVar25;
  if (((bVar15 & 3) != 0) && (DAT_ram_4ff6e1de = uVar25 + 1, (ushort)(uVar25 + 1) < uVar25))
  goto LAB_ram_4813f6da;
  puVar14 = DAT_ram_4ff6e1c0;
  if (DAT_ram_4ff6e1c4 != (uint *)0x0) {
    puVar13 = DAT_ram_4ff6e1c4;
    puVar21 = (uint *)0x0;
    do {
      puVar27 = puVar13;
      uVar18 = puVar27[0xf];
      if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x106,"tcp_input",
                         "tcp_input: active pcb->state != CLOSED");
      }
      if (uVar18 == 10) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x107,"tcp_input",
                         "tcp_input: active pcb->state != TIME-WAIT");
      }
      if (uVar18 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x108,"tcp_input",
                         "tcp_input: active pcb->state != LISTEN");
      }
      if (((((char)puVar27[0xc] == '\0') ||
           ((char)puVar27[0xc] == (char)(*(char *)(DAT_ram_4ff6cdb8 + 0xea) + '\x01'))) &&
          ((short)puVar27[0x11] == *DAT_ram_4ff6e1f8)) &&
         ((*(short *)((int)puVar27 + 0x42) == DAT_ram_4ff6e1f8[1] &&
          ((char)puVar27[0xb] == DAT_ram_4ff6cddc)))) {
        if (DAT_ram_4ff6cddc == '\x06') {
          if (((DAT_ram_4ff6cdc8 == puVar27[6]) && (puVar27[7] == DAT_ram_4ff6cdcc)) &&
             ((puVar27[8] == DAT_ram_4ff6cdd0 &&
              ((puVar27[9] == DAT_ram_4ff6cdd4 && ((char)puVar27[10] == DAT_ram_4ff6cdd8))))))
          goto LAB_ram_4813f90e;
        }
        else if (DAT_ram_4ff6cdc8 == puVar27[6]) {
LAB_ram_4813f90e:
          if (DAT_ram_4ff6cdf4 == (char)puVar27[5]) {
            if (DAT_ram_4ff6cdf4 == '\x06') {
              if ((((_DAT_ram_4ff6cde0 == *puVar27) && (puVar27[1] == DAT_ram_4ff6cde4)) &&
                  (puVar27[2] == DAT_ram_4ff6cde8)) &&
                 ((puVar27[3] == DAT_ram_4ff6cdec && ((char)puVar27[4] == DAT_ram_4ff6cdf0))))
              goto LAB_ram_4813f92c;
            }
            else if (_DAT_ram_4ff6cde0 == *puVar27) {
LAB_ram_4813f92c:
              if ((uint *)puVar27[0xd] == puVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x118,"tcp_input",
                                 "tcp_input: pcb->next != pcb (before cache)");
              }
              if (puVar21 != (uint *)0x0) {
                puVar21[0xd] = puVar27[0xd];
                puVar27[0xd] = (uint)DAT_ram_4ff6e1c4;
                bVar1 = DAT_ram_4ff6e1c4 == puVar27;
                DAT_ram_4ff6e1c4 = puVar27;
                if (bVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x120,"tcp_input",
                                   "tcp_input: pcb->next != pcb (after cache)");
                }
              }
              DAT_ram_4ff6cf00 = 0;
              DAT_ram_4ff6cf0c = psVar11;
              DAT_ram_4ff6e1d8 = 0;
              DAT_ram_4ff6e1dc = 0;
              DAT_ram_4ff6e1e0 = 0;
              DAT_ram_4ff6cf04 = param_1;
              DAT_ram_4ff6cf08 = uVar25;
              if ((bVar15 & 8) != 0) {
                *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 1;
              }
              if ((puVar27[0x31] != 0) &&
                 ((iVar17 = FUN_ram_4813d812(puVar27), iVar17 == -0xd ||
                  ((puVar27[0x31] != 0 && (DAT_ram_4ff6e1de != 0)))))) {
                if (*(short *)((int)puVar27 + 0x56) == 0) {
                  FUN_ram_48141942(puVar27);
                }
                goto LAB_ram_4813fa1a;
              }
              bVar15 = DAT_ram_4ff6e1dd;
              DAT_ram_4ff6e1d4 = puVar27;
              if ((DAT_ram_4ff6e1dd & 4) != 0) {
                if (puVar27[0xf] == 2) {
                  if (puVar27[0x27] != DAT_ram_4ff6e1e4) goto LAB_ram_4813f9f4;
                }
                else {
                  uVar18 = puVar27[0x14];
                  if (uVar18 != DAT_ram_4ff6e1e8) {
                    if ((-1 < (int)(DAT_ram_4ff6e1e8 - uVar18)) &&
                       (-1 < (int)((uVar18 - DAT_ram_4ff6e1e8) + (uint)(ushort)puVar27[0x15]))) {
LAB_ram_4813f9e8:
                      *(ushort *)((int)puVar27 + 0x46) = *(ushort *)((int)puVar27 + 0x46) | 2;
                    }
                    goto LAB_ram_4813f9f4;
                  }
                  if (puVar27[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x348,
                                     "tcp_process","tcp_input: pcb->state != CLOSED");
                  }
                }
                DAT_ram_4ff6e1dc = DAT_ram_4ff6e1dc | 8;
                *(ushort *)((int)puVar27 + 0x46) = *(ushort *)((int)puVar27 + 0x46) & 0xfffe;
                goto LAB_ram_4813f9f4;
              }
              bVar8 = DAT_ram_4ff6e1dd & 2;
              uVar25 = *(ushort *)((int)puVar27 + 0x46);
              if (((DAT_ram_4ff6e1dd & 2) == 0) || (puVar27[0xf] - 2 < 2)) {
                if ((uVar25 & 0x10) == 0) {
                  puVar27[0x13] = _DAT_ram_4ff6e1d0;
                }
                sVar6 = DAT_ram_4ff6e1f6;
                *(undefined2 *)((int)puVar27 + 0xee) = 0;
                if (sVar6 != 0) {
                  FUN_ram_4813f3aa(puVar27);
                }
                psVar11 = DAT_ram_4ff6e1f8;
                uVar18 = DAT_ram_4ff6e1e8;
                uVar26 = puVar27[0xf];
                if (bVar8 == 0) {
                  if (uVar26 == 5) {
                    FUN_ram_4813e230(puVar27);
                    if ((DAT_ram_4ff6e1dc & 0x20) == 0) {
                      if ((((DAT_ram_4ff6e1dd & 0x10) != 0) && (puVar27[0x27] == DAT_ram_4ff6e1e4))
                         && (puVar27[0x2e] == 0)) {
                        puVar27[0xf] = 6;
                      }
                      goto LAB_ram_4813f9f4;
                    }
                    uVar25 = *(ushort *)((int)puVar27 + 0x46) | 2;
                    if ((((DAT_ram_4ff6e1dd & 0x10) == 0) || (puVar27[0x27] != DAT_ram_4ff6e1e4)) ||
                       (puVar27[0x2e] != 0)) {
                      *(ushort *)((int)puVar27 + 0x46) = uVar25;
                      puVar27[0xf] = 8;
                      goto LAB_ram_4813f9f4;
                    }
                    *(ushort *)((int)puVar27 + 0x46) = uVar25;
                    FUN_ram_4813cdc8(puVar27);
                    puVar19 = DAT_ram_4ff6e1c4;
                    if (DAT_ram_4ff6e1c4 != puVar27) goto LAB_ram_48140490;
                  }
                  else {
                    if (uVar26 < 6) {
                      if (uVar26 == 3) {
                        if ((bVar15 & 0x10) == 0) goto LAB_ram_4813f9f4;
                        if (((int)((DAT_ram_4ff6e1e4 - 1) - puVar27[0x24]) < 0) ||
                           ((int)(puVar27[0x27] - DAT_ram_4ff6e1e4) < 0)) {
                          FUN_ram_481418a4(puVar27,DAT_ram_4ff6e1e4,
                                           DAT_ram_4ff6e1de + DAT_ram_4ff6e1e8,&DAT_ram_4ff6cde0,
                                           &DAT_ram_4ff6cdc8,DAT_ram_4ff6e1f8[1],*DAT_ram_4ff6e1f8);
                          goto LAB_ram_4813f9f4;
                        }
                        puVar27[0xf] = 4;
                        if (puVar27[0x32] == 0) goto LAB_ram_4814053a;
                        if (*(int *)(puVar27[0x32] + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x3c5,
                                           "tcp_process","pcb->listener->accept != NULL");
                        }
                        FUN_ram_4813c052(puVar27);
                        if (*(code **)(puVar27[0x32] + 0x44) == (code *)0x0) goto LAB_ram_4814053a;
                        iVar17 = (**(code **)(puVar27[0x32] + 0x44))(puVar27[0xe],puVar27,0);
                        if (iVar17 != 0) {
                          if (iVar17 == -0xd) goto LAB_ram_4813fa1a;
                          goto LAB_ram_4814053a;
                        }
                        FUN_ram_4813e230(puVar27);
                        bVar15 = DAT_ram_4ff6e1dc;
                        if (DAT_ram_4ff6e1e0 != 0) {
                          DAT_ram_4ff6e1e0 = DAT_ram_4ff6e1e0 + -1;
                        }
                        uVar22 = (uint)*(ushort *)((int)puVar27 + 0x7e);
                        uVar26 = uVar22 << 1;
                        uVar18 = uVar26;
                        if (uVar26 < 0x111c) {
                          uVar18 = 0x111c;
                        }
                        if (uVar22 << 2 < uVar18) {
                          uVar16 = (undefined2)((uVar22 & 0x3fff) << 2);
                        }
                        else {
                          uVar16 = 0x111c;
                          if (0x111c < uVar26) {
                            uVar16 = (undefined2)((uVar22 & 0x7fff) << 1);
                          }
                        }
                        *(undefined2 *)(puVar27 + 0x25) = uVar16;
                      }
                      else {
                        if (uVar26 != 4) {
                          if (uVar26 == 2) goto LAB_ram_48140294;
                          goto LAB_ram_4813f9f4;
                        }
LAB_ram_4814018c:
                        FUN_ram_4813e230(puVar27);
                        bVar15 = DAT_ram_4ff6e1dc;
                      }
                      if ((bVar15 & 0x20) != 0) {
                        uVar25 = *(ushort *)((int)puVar27 + 0x46);
                        puVar27[0xf] = 7;
                        goto LAB_ram_481401a6;
                      }
                      goto LAB_ram_4813f9f4;
                    }
                    if (uVar26 == 8) {
                      FUN_ram_4813e230(puVar27);
                      if ((((DAT_ram_4ff6e1dd & 0x10) == 0) || (puVar27[0x27] != DAT_ram_4ff6e1e4))
                         || (puVar27[0x2e] != 0)) goto LAB_ram_4813f9f4;
                      FUN_ram_4813cdc8(puVar27);
                      puVar19 = DAT_ram_4ff6e1c4;
                      if (DAT_ram_4ff6e1c4 != puVar27) goto LAB_ram_4814049c;
                    }
                    else {
                      if (8 < uVar26) {
                        if (((uVar26 == 9) &&
                            (FUN_ram_4813e230(puVar27), (DAT_ram_4ff6e1dd & 0x10) != 0)) &&
                           ((puVar27[0x27] == DAT_ram_4ff6e1e4 && (puVar27[0x2e] == 0)))) {
                          DAT_ram_4ff6e1dc = DAT_ram_4ff6e1dc | 0x10;
                        }
                        goto LAB_ram_4813f9f4;
                      }
                      if (uVar26 != 6) goto LAB_ram_4814018c;
                      FUN_ram_4813e230(puVar27);
                      if ((DAT_ram_4ff6e1dc & 0x20) == 0) goto LAB_ram_4813f9f4;
                      *(ushort *)((int)puVar27 + 0x46) = *(ushort *)((int)puVar27 + 0x46) | 2;
                      FUN_ram_4813cdc8(puVar27);
                      puVar19 = DAT_ram_4ff6e1c4;
                      if (DAT_ram_4ff6e1c4 != puVar27) goto LAB_ram_48140336;
                    }
                  }
                  DAT_ram_4ff6e1c4 = (uint *)puVar27[0xd];
                  goto LAB_ram_481403b4;
                }
                if (1 < uVar26 - 2) goto LAB_ram_4813f9f4;
                if (uVar26 == 3) {
                  if (puVar27[0x14] - 1 == DAT_ram_4ff6e1e8) {
                    FUN_ram_48141714(puVar27);
                  }
                  goto LAB_ram_4813f9f4;
                }
                if ((bVar15 & 0x12) == 0x12) {
                  if (puVar27[0x24] + 1 == DAT_ram_4ff6e1e4) {
                    puVar27[0x24] = puVar27[0x24] + 1;
                    uVar26 = uVar18 + 1;
                    puVar27[0x14] = uVar26;
                    puVar27[0x16] = uVar26;
                    puVar27[0x2b] = CONCAT22(psVar11[7],psVar11[7]);
                    puVar27[0x28] = uVar18 - 1;
                    puVar27[0xf] = 4;
                    uVar16 = *(undefined2 *)((int)puVar27 + 0x7e);
                    if ((char)puVar27[0xb] == '\x06') {
                      uVar20 = FUN_ram_48148070(puVar27,puVar27 + 6);
                    }
                    else {
                      uVar20 = FUN_ram_481470f4();
                    }
                    uVar26 = FUN_ram_4813c942(uVar16,uVar20,puVar27 + 6);
                    uVar22 = uVar26 << 1;
                    *(short *)((int)puVar27 + 0x7e) = (short)uVar26;
                    uVar18 = uVar22;
                    if (uVar22 < 0x111c) {
                      uVar18 = 0x111c;
                    }
                    if (uVar26 << 2 < uVar18) {
                      uVar16 = (undefined2)((uVar26 & 0x3fff) << 2);
                    }
                    else {
                      uVar16 = 0x111c;
                      if (0x111c < uVar22) {
                        uVar16 = (undefined2)((uVar26 & 0x7fff) << 1);
                      }
                    }
                    *(undefined2 *)(puVar27 + 0x25) = uVar16;
                    if (*(short *)((int)puVar27 + 0xb2) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",900,
                                       "tcp_process","pcb->snd_queuelen > 0");
                    }
                    *(short *)((int)puVar27 + 0xb2) = *(short *)((int)puVar27 + 0xb2) + -1;
                    if ((uint *)puVar27[0x2f] == (uint *)0x0) {
                      if ((uint *)puVar27[0x2e] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x38c,
                                         "tcp_process","no segment to free");
                      }
                      puVar27[0x2e] = *(uint *)puVar27[0x2e];
                    }
                    else {
                      puVar27[0x2f] = *(uint *)puVar27[0x2f];
                    }
                    FUN_ram_4813c78a();
                    if (puVar27[0x2f] == 0) {
                      uVar16 = 0xffff;
                    }
                    else {
                      *(undefined1 *)((int)puVar27 + 0x8e) = 0;
                      uVar16 = 0;
                    }
                    *(undefined2 *)(puVar27 + 0x1f) = uVar16;
                    if (((code *)puVar27[0x35] == (code *)0x0) ||
                       (iVar17 = (*(code *)puVar27[0x35])(puVar27[0xe],puVar27,0), iVar17 != -0xd))
                    goto LAB_ram_4813f9e8;
                    goto LAB_ram_4813fa1a;
                  }
                }
                else {
LAB_ram_48140294:
                  if ((bVar15 & 0x10) == 0) goto LAB_ram_4813f9f4;
                }
                FUN_ram_481418a4(puVar27,DAT_ram_4ff6e1e4,DAT_ram_4ff6e1de + DAT_ram_4ff6e1e8,
                                 &DAT_ram_4ff6cde0,&DAT_ram_4ff6cdc8,DAT_ram_4ff6e1f8[1],
                                 *DAT_ram_4ff6e1f8);
                if (*(byte *)((int)puVar27 + 0x8e) < 0xc) {
                  *(undefined2 *)(puVar27 + 0x1f) = 0;
                  FUN_ram_481421c0(puVar27);
                }
                goto LAB_ram_4813f9f4;
              }
LAB_ram_481401a6:
              *(ushort *)((int)puVar27 + 0x46) = uVar25 | 2;
              goto LAB_ram_4813f9f4;
            }
          }
        }
      }
      puVar13 = (uint *)puVar27[0xd];
      puVar21 = puVar27;
    } while ((uint *)puVar27[0xd] != (uint *)0x0);
  }
  for (; puVar14 != (uint *)0x0; puVar14 = (uint *)puVar14[0xd]) {
    if (puVar14[0xf] != 10) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x12a,"tcp_input",
                       "tcp_input: TIME-WAIT pcb->state == TIME-WAIT");
    }
    if (((((char)puVar14[0xc] == '\0') ||
         ((char)puVar14[0xc] == (char)(*(char *)(DAT_ram_4ff6cdb8 + 0xea) + '\x01'))) &&
        ((short)puVar14[0x11] == *DAT_ram_4ff6e1f8)) &&
       ((*(short *)((int)puVar14 + 0x42) == DAT_ram_4ff6e1f8[1] &&
        ((char)puVar14[0xb] == DAT_ram_4ff6cddc)))) {
      if (DAT_ram_4ff6cddc == '\x06') {
        if (((puVar14[6] == DAT_ram_4ff6cdc8) && (puVar14[7] == DAT_ram_4ff6cdcc)) &&
           ((puVar14[8] == DAT_ram_4ff6cdd0 &&
            ((puVar14[9] == DAT_ram_4ff6cdd4 && ((char)puVar14[10] == DAT_ram_4ff6cdd8))))))
        goto LAB_ram_4813fad4;
      }
      else if (puVar14[6] == DAT_ram_4ff6cdc8) {
LAB_ram_4813fad4:
        if (DAT_ram_4ff6cdf4 == (char)puVar14[5]) {
          if (DAT_ram_4ff6cdf4 == '\x06') {
            if ((((_DAT_ram_4ff6cde0 == *puVar14) && (puVar14[1] == DAT_ram_4ff6cde4)) &&
                (puVar14[2] == DAT_ram_4ff6cde8)) &&
               ((puVar14[3] == DAT_ram_4ff6cdec && ((char)puVar14[4] == DAT_ram_4ff6cdf0))))
            goto LAB_ram_4813faf2;
          }
          else if (_DAT_ram_4ff6cde0 == *puVar14) {
LAB_ram_4813faf2:
            if ((bVar15 & 4) != 0) goto LAB_ram_4813f6da;
            uVar18 = (uint)DAT_ram_4ff6e1de;
            if ((bVar15 & 2) == 0) {
              if ((bVar15 & 1) != 0) {
                puVar14[0x13] = _DAT_ram_4ff6e1d0;
              }
            }
            else if ((-1 < (int)(DAT_ram_4ff6e1e8 - puVar14[0x14])) &&
                    (-1 < (int)((puVar14[0x14] - DAT_ram_4ff6e1e8) + (uint)(ushort)puVar14[0x15])))
            {
              FUN_ram_481418a4(puVar14,DAT_ram_4ff6e1e4,DAT_ram_4ff6e1e8 + uVar18,&DAT_ram_4ff6cde0,
                               &DAT_ram_4ff6cdc8);
              goto LAB_ram_4813f6da;
            }
            if (uVar18 != 0) {
              *(ushort *)((int)puVar14 + 0x46) = *(ushort *)((int)puVar14 + 0x46) | 2;
              FUN_ram_48141ae6(puVar14);
            }
            goto LAB_ram_4813f6da;
          }
        }
      }
    }
  }
  if (DAT_ram_4ff6e1c8 == (uint *)0x0) {
LAB_ram_4813fe16:
    uVar18 = FUN_ram_48137fc8(DAT_ram_4ff6e1f8[6]);
    if ((uVar18 & 4) != 0) goto LAB_ram_4813f6da;
    uVar2 = *(undefined1 *)((int)DAT_ram_4ff6e1f8 + 1);
    uVar3 = *(undefined1 *)((int)DAT_ram_4ff6e1f8 + 3);
    uVar4 = (undefined1)*DAT_ram_4ff6e1f8;
    uVar5 = (undefined1)DAT_ram_4ff6e1f8[1];
    iVar17 = DAT_ram_4ff6cdb8;
  }
  else {
    puVar13 = (uint *)0x0;
    puVar27 = (uint *)0x0;
    puVar21 = (uint *)0x0;
    puVar14 = DAT_ram_4ff6e1c8;
    do {
      if ((((char)puVar14[0xc] == '\0') ||
          ((char)puVar14[0xc] == (char)(*(char *)(DAT_ram_4ff6cdb8 + 0xea) + '\x01'))) &&
         (*(short *)((int)puVar14 + 0x42) == DAT_ram_4ff6e1f8[1])) {
        if ((char)puVar14[5] == '.') {
LAB_ram_4813fbc2:
          puVar13 = puVar14;
          puVar27 = puVar21;
        }
        else if ((char)puVar14[5] == DAT_ram_4ff6cdf4) {
          uVar18 = *puVar14;
          if (DAT_ram_4ff6cdf4 == '\x06') {
            if (((_DAT_ram_4ff6cde0 == uVar18) && (puVar14[1] == DAT_ram_4ff6cde4)) &&
               ((puVar14[2] == DAT_ram_4ff6cde8 &&
                ((puVar14[3] == DAT_ram_4ff6cdec && ((char)puVar14[4] == DAT_ram_4ff6cdf0))))))
            goto LAB_ram_4813fc84;
            if ((uVar18 != 0) || ((puVar14[1] != 0 || (puVar14[2] != 0)))) goto LAB_ram_4813fb74;
            uVar18 = puVar14[3];
          }
          else if (_DAT_ram_4ff6cde0 == uVar18) goto LAB_ram_4813fc84;
          if (uVar18 == 0) goto LAB_ram_4813fbc2;
        }
      }
LAB_ram_4813fb74:
      puVar7 = puVar14 + 0xd;
      puVar21 = puVar14;
      puVar14 = (uint *)*puVar7;
    } while ((uint *)*puVar7 != (uint *)0x0);
    puVar14 = puVar13;
    puVar21 = puVar27;
    if (puVar13 == (uint *)0x0) goto LAB_ram_4813fe16;
LAB_ram_4813fc84:
    if (puVar21 != (uint *)0x0) {
      DAT_ram_4ff6e1c8 = puVar14;
      puVar21[0xd] = puVar14[0xd];
      puVar14[0xd] = (uint)puVar19;
    }
    if ((bVar15 & 4) != 0) goto LAB_ram_4813f6da;
    if ((bVar15 & 0x10) == 0) {
      if (((bVar15 & 2) != 0) && (*(byte *)((int)puVar14 + 0x49) < (byte)puVar14[0x12])) {
        puVar19 = (uint *)FUN_ram_4813d344((char)puVar14[0x10]);
        cVar23 = DAT_ram_4ff6cdf4;
        if (puVar19 == (uint *)0x0) {
          if ((code *)puVar14[0x11] != (code *)0x0) {
            (*(code *)puVar14[0x11])(puVar14[0xe],0,0xffffffff);
          }
        }
        else {
          *(char *)((int)puVar14 + 0x49) = *(char *)((int)puVar14 + 0x49) + '\x01';
          *(char *)(puVar19 + 5) = cVar23;
          uVar18 = _DAT_ram_4ff6cde0;
          *(ushort *)((int)puVar19 + 0x46) = *(ushort *)((int)puVar19 + 0x46) | 0x200;
          uVar22 = DAT_ram_4ff6cde8;
          uVar26 = DAT_ram_4ff6cde4;
          if (cVar23 == '\x06') {
            puVar19[3] = DAT_ram_4ff6cdec;
            *puVar19 = uVar18;
            cVar23 = DAT_ram_4ff6cdf0;
            puVar19[1] = uVar26;
            puVar19[2] = uVar22;
          }
          else {
            *puVar19 = uVar18;
            puVar19[3] = 0;
            puVar19[2] = 0;
            puVar19[1] = 0;
            cVar23 = '\0';
          }
          *(char *)(puVar19 + 4) = cVar23;
          cVar10 = DAT_ram_4ff6cddc;
          uVar18 = DAT_ram_4ff6cdc8;
          *(char *)(puVar19 + 0xb) = DAT_ram_4ff6cddc;
          cVar23 = DAT_ram_4ff6cdd8;
          uVar9 = DAT_ram_4ff6cdd4;
          uVar22 = DAT_ram_4ff6cdd0;
          uVar26 = DAT_ram_4ff6cdcc;
          if (cVar10 == '\x06') {
            puVar19[6] = uVar18;
            puVar19[7] = uVar26;
            puVar19[8] = uVar22;
            puVar19[9] = uVar9;
          }
          else {
            puVar19[6] = uVar18;
            puVar19[9] = 0;
            puVar19[8] = 0;
            puVar19[7] = 0;
            cVar23 = '\0';
          }
          uVar16 = *(undefined2 *)((int)puVar14 + 0x42);
          uVar18 = DAT_ram_4ff6e1e8 + 1;
          *(short *)(puVar19 + 0x11) = *DAT_ram_4ff6e1f8;
          *(undefined2 *)((int)puVar19 + 0x42) = uVar16;
          puVar19[0x14] = uVar18;
          puVar19[0x16] = uVar18;
          puVar19[0xf] = 3;
          *(char *)(puVar19 + 10) = cVar23;
          uVar26 = FUN_ram_4813c906(puVar19);
          uVar18 = DAT_ram_4ff6e1e8;
          uVar22 = puVar14[0xe];
          puVar19[0x29] = uVar26;
          puVar19[0x28] = uVar18 - 1;
          puVar19[0xe] = uVar22;
          puVar19[0x27] = uVar26;
          puVar19[0x24] = uVar26;
          puVar19[0x2a] = uVar26;
          puVar19[0x32] = (uint)puVar14;
          puVar13 = DAT_ram_4ff6e1c4;
          DAT_ram_4ff6e1c4 = puVar19;
          *(byte *)((int)puVar19 + 0x31) = *(byte *)((int)puVar14 + 0x31) & 0xc;
          uVar18 = puVar14[0xc];
          puVar19[0xd] = (uint)puVar13;
          *(char *)(puVar19 + 0xc) = (char)uVar18;
          FUN_ram_4814257c();
          DAT_ram_4ff6e1be = 1;
          if (DAT_ram_4ff6e1f6 != 0) {
            FUN_ram_4813f3aa(puVar19);
          }
          puVar19[0x2b] = CONCAT22(DAT_ram_4ff6e1f8[7],DAT_ram_4ff6e1f8[7]);
          uVar16 = *(undefined2 *)((int)puVar19 + 0x7e);
          if ((char)puVar19[0xb] == '\x06') {
            uVar20 = FUN_ram_48148070(puVar19,puVar19 + 6);
          }
          else {
            uVar20 = FUN_ram_481470f4();
          }
          uVar16 = FUN_ram_4813c942(uVar16,uVar20,puVar19 + 6);
          *(undefined2 *)((int)puVar19 + 0x7e) = uVar16;
          iVar17 = FUN_ram_4814137a(puVar19,0x12);
          if (iVar17 == 0) {
            FUN_ram_48141ae6(puVar19);
          }
          else {
            FUN_ram_4813cf92(puVar19,0);
          }
        }
      }
      goto LAB_ram_4813f6da;
    }
    uVar2 = *(undefined1 *)((int)psVar11 + 1);
    uVar3 = *(undefined1 *)((int)psVar11 + 3);
    uVar4 = (undefined1)*psVar11;
    uVar5 = (undefined1)psVar11[1];
  }
  FUN_ram_48141902(iVar17,DAT_ram_4ff6e1e4,DAT_ram_4ff6e1e8 + DAT_ram_4ff6e1de,&DAT_ram_4ff6cde0,
                   &DAT_ram_4ff6cdc8,CONCAT11(uVar3,uVar5),CONCAT11(uVar2,uVar4));
LAB_ram_4813f6da:
  FUN_ram_4813ac74(param_1);
  return;
  while (puVar19 = (uint *)puVar14[0xd], (uint *)puVar14[0xd] != puVar27) {
LAB_ram_48140490:
    puVar14 = puVar19;
    if (puVar14 == (uint *)0x0) goto LAB_ram_481403b4;
  }
  goto LAB_ram_481403d8;
  while (puVar19 = (uint *)puVar14[0xd], (uint *)puVar14[0xd] != puVar27) {
LAB_ram_4814049c:
    puVar14 = puVar19;
    if (puVar14 == (uint *)0x0) goto LAB_ram_481403b4;
  }
  goto LAB_ram_481403d8;
  while (puVar19 = (uint *)puVar14[0xd], (uint *)puVar14[0xd] != puVar27) {
LAB_ram_48140336:
    puVar14 = puVar19;
    if (puVar14 == (uint *)0x0) goto LAB_ram_481403b4;
  }
LAB_ram_481403d8:
  puVar14[0xd] = puVar27[0xd];
LAB_ram_481403b4:
  puVar27[0xf] = 10;
  puVar27[0xd] = (uint)DAT_ram_4ff6e1c0;
  DAT_ram_4ff6e1be = 1;
  DAT_ram_4ff6e1c0 = puVar27;
  FUN_ram_4814257c();
LAB_ram_4813f9f4:
  if ((DAT_ram_4ff6e1dc & 8) == 0) {
    if (DAT_ram_4ff6e1e0 != 0) {
      if (((code *)puVar27[0x33] != (code *)0x0) &&
         (iVar17 = (*(code *)puVar27[0x33])(puVar27[0xe],puVar27), iVar17 == -0xd))
      goto LAB_ram_4813fa1a;
      DAT_ram_4ff6e1e0 = 0;
    }
    iVar17 = FUN_ram_4813e0c8(puVar27);
    if (iVar17 == 0) {
      if (DAT_ram_4ff6e1d8 != 0) {
        if (puVar27[0x31] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x1f1,"tcp_input",
                           "pcb->refused_data == NULL");
        }
        if ((*(ushort *)((int)puVar27 + 0x46) & 0x10) != 0) {
          FUN_ram_4813ac74(DAT_ram_4ff6e1d8);
LAB_ram_4814053a:
          FUN_ram_4813d148(puVar27);
          goto LAB_ram_4813fa1a;
        }
        if ((code *)puVar27[0x34] == (code *)0x0) {
          iVar17 = FUN_ram_4813d7c6(0,puVar27,DAT_ram_4ff6e1d8,0);
        }
        else {
          iVar17 = (*(code *)puVar27[0x34])(puVar27[0xe],puVar27,DAT_ram_4ff6e1d8,0);
        }
        if (iVar17 == -0xd) goto LAB_ram_4813fa1a;
        if (iVar17 != 0) {
          puVar27[0x31] = DAT_ram_4ff6e1d8;
        }
      }
      if ((DAT_ram_4ff6e1dc & 0x20) != 0) {
        uVar18 = puVar27[0x31];
        if (uVar18 == 0) {
          if ((short)puVar27[0x15] != -2) {
            *(short *)(puVar27 + 0x15) = (short)puVar27[0x15] + 1;
          }
          if ((code *)puVar27[0x34] != (code *)0x0) {
            iVar17 = (*(code *)puVar27[0x34])(puVar27[0xe],puVar27,0,0);
            if (iVar17 == -0xd) goto LAB_ram_4813fa1a;
            if (iVar17 == -1) {
              *(ushort *)((int)puVar27 + 0x46) = *(ushort *)((int)puVar27 + 0x46) | 8;
            }
          }
        }
        else {
          *(byte *)(uVar18 + 0xd) = *(byte *)(uVar18 + 0xd) | 0x20;
        }
      }
      DAT_ram_4ff6e1d4 = (uint *)0x0;
      iVar17 = FUN_ram_4813e0c8(puVar27);
      if (iVar17 == 0) {
        FUN_ram_48141ae6(puVar27);
      }
    }
  }
  else {
    if ((code *)puVar27[0x37] != (code *)0x0) {
      (*(code *)puVar27[0x37])(puVar27[0xe],0xfffffff2);
    }
    FUN_ram_4813cdde(&DAT_ram_4ff6e1c4,puVar27);
    FUN_ram_4813bfbe(puVar27);
  }
LAB_ram_4813fa1a:
  DAT_ram_4ff6e1d4 = (uint *)0x0;
  DAT_ram_4ff6e1d8 = 0;
  if (DAT_ram_4ff6cf04 != (int *)0x0) {
    FUN_ram_4813ac74();
    DAT_ram_4ff6cf04 = (int *)0x0;
  }
  return;
}



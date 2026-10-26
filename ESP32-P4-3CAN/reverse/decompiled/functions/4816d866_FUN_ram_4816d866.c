/* Firmware entry: 0x4816d866 */

int FUN_ram_4816d866(int *param_1)

{
  byte bVar1;
  short *psVar2;
  short sVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 uVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  uint uVar17;
  short *psVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  short *psVar23;
  undefined4 uVar24;
  short sVar25;
  int extraout_a3;
  int iVar26;
  uint uVar27;
  undefined4 uVar28;
  ushort uVar29;
  short sVar30;
  int *piVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  short *psVar35;
  short *psVar36;
  undefined4 *puVar37;
  char cVar38;
  uint uVar39;
  int unaff_s3;
  undefined1 *puVar40;
  char *pcVar41;
  int unaff_s4;
  undefined1 *puVar42;
  uint *puVar43;
  char *pcVar44;
  int iVar45;
  int iVar46;
  code *pcVar47;
  undefined8 uVar48;
  byte bStack_108;
  byte bStack_107;
  uint uStack_104;
  uint auStack_100 [12];
  undefined4 local_d0;
  uint auStack_cc [5];
  undefined1 auStack_b8 [120];
  undefined4 auStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar45 = param_1[1];
  if (iVar45 == 8) {
    iVar45 = *(int *)(param_1[0x10] + 0x10);
    iVar20 = FUN_ram_48170c76(param_1,1);
    if (iVar20 != 0) {
      return iVar20;
    }
    pcVar41 = (char *)param_1[0x1d];
    iVar20 = param_1[0x22];
    if ((param_1[0x1f] != 0x16) || (*pcVar41 != '\x10')) {
      return -0x7700;
    }
    cVar38 = *(char *)(iVar45 + 10);
    if (((byte)(cVar38 - 3U) < 2) || ((byte)(cVar38 - 9U) < 2)) {
      iVar45 = FUN_ram_481729d4(param_1[0x10] + 0x4c,pcVar41 + 4,iVar20 + -4);
      if (iVar45 != 0) {
        return -0x7300;
      }
      iVar45 = param_1[0x10];
      iVar45 = FUN_ram_48172a1c(iVar45 + 0x4c,iVar45 + 0x238,iVar45 + 500,0x400,
                                *(undefined4 *)(*param_1 + 0x20),*(undefined4 *)(*param_1 + 0x24));
      if (iVar45 != 0) {
        return -0x7300;
      }
      goto LAB_ram_4816e1f6;
    }
    if (cVar38 != '\x01') {
      return -0x6c00;
    }
    iVar26 = param_1[0x10];
    local_d0 = CONCAT22(local_d0._2_2_,0xffff);
    uStack_104 = 0;
    iVar45 = *param_1;
    if (iVar26 == 0) {
      piVar31 = *(int **)(iVar45 + 0x54);
      if (piVar31 != (int *)0x0) goto LAB_ram_4816e0c6;
      uVar10 = 0xffff8b80;
    }
    else {
      piVar31 = *(int **)(iVar26 + 0xfc);
      if ((piVar31 != (int *)0x0) || (piVar31 = *(int **)(iVar45 + 0x54), piVar31 != (int *)0x0)) {
LAB_ram_4816e0c6:
        if (*piVar31 != 0) {
          iVar32 = piVar31[1];
          iVar45 = FUN_ram_481774b6(*piVar31 + 0xcc);
          pcVar13 = pcVar41 + 6;
          uVar10 = iVar45 + 7U >> 3;
          if ((((pcVar41 + iVar20 < pcVar13) ||
               ((uint)(byte)pcVar41[4] != (iVar45 + 7U >> 0xb & 0xff))) ||
              ((uint)(byte)pcVar41[5] != (uVar10 & 0xff))) || (pcVar41 + iVar20 != pcVar13 + uVar10)
             ) {
            iVar45 = *param_1;
            uVar10 = 0xffff8d00;
          }
          else {
            iVar20 = FUN_ram_48177194(iVar32,1);
            iVar45 = *param_1;
            if (iVar20 == 0) {
              uVar10 = 0xffff8a00;
            }
            else {
              uVar10 = FUN_ram_48177472(iVar32,pcVar13,uVar10,&local_d0,&uStack_104,0x30,
                                        *(undefined4 *)(iVar45 + 0x20),
                                        *(undefined4 *)(iVar45 + 0x24));
              iVar45 = *param_1;
            }
          }
          goto LAB_ram_4816e148;
        }
      }
      iVar45 = *param_1;
      uVar10 = 0xffff8b80;
    }
LAB_ram_4816e148:
    FUN_ram_48171448(&bStack_108,*(undefined1 *)(iVar45 + 9),*(undefined4 *)(param_1[0xf] + 4));
    uVar33 = uStack_104 ^ 0x30;
    bVar1 = (byte)local_d0 ^ bStack_108;
    bVar4 = local_d0._1_1_ ^ bStack_107;
    iVar45 = (**(code **)(*param_1 + 0x20))(*(undefined4 *)(*param_1 + 0x24),auStack_100,0x30);
    if (iVar45 != 0) {
      return iVar45;
    }
    *(undefined4 *)(param_1[0x10] + 0x238) = 0x30;
    FUN_ram_4817248c((int)(-(uint)bVar1 | -(uint)bVar4 | -uVar33 | -uVar10 | -(uVar10 >> 1) |
                           -(uVar33 >> 1) | -(uint)(bVar1 >> 1) | -(uint)(bVar4 >> 1)) >> 0x1f,
                     iVar26 + 500,auStack_100,&local_d0,0x30);
LAB_ram_4816e1f6:
    iVar45 = FUN_ram_4816b0fa(param_1);
    if (iVar45 == 0) {
      param_1[1] = param_1[1] + 1;
      return 0;
    }
    return iVar45;
  }
  if (8 < iVar45) {
    if (iVar45 != 0xc) {
      if (0xc < iVar45) {
        if (iVar45 == 0xe) {
          param_1[1] = 0xf;
          return 0;
        }
        if (iVar45 != 0xf) {
          if (iVar45 != 0xd) {
            return -0x7100;
          }
          iVar45 = FUN_ram_4816b80a();
          return iVar45;
        }
        FUN_ram_4816b758();
        return 0;
      }
      if (iVar45 == 10) {
        iVar45 = FUN_ram_48170fd4();
        return iVar45;
      }
      if (iVar45 == 0xb) {
        iVar45 = FUN_ram_4816b912();
        return iVar45;
      }
      bVar1 = *(byte *)(*(int *)(param_1[0x10] + 0x10) + 10);
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_ram_4816e2b0;
      }
      else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_4816e2b0;
      if (*(int *)(param_1[0xf] + 0x68) != 0) {
        iVar45 = FUN_ram_48170c76(param_1,0);
        if (iVar45 != 0) {
          return iVar45;
        }
        param_1[1] = param_1[1] + 1;
        if ((param_1[0x1f] != 0x16) || (*(char *)param_1[0x1d] != '\x0f')) {
          return -0x7700;
        }
        if (*(int *)(param_1[0xf] + 0x68) == 0) {
          return -0x6c00;
        }
        iVar45 = *(int *)(param_1[0xf] + 0x68) + 0xcc;
        if ((uint)param_1[0x22] < 6) {
          return -0x7300;
        }
        iVar20 = FUN_ram_4816ae6c(((char *)param_1[0x1d])[4]);
        if ((iVar20 != 0) &&
           (iVar26 = FUN_ram_4816b5b6(param_1,*(undefined1 *)(param_1[0x1d] + 4)), iVar26 == 0)) {
          puVar11 = auStack_cc + 3;
          if (iVar20 != 5) {
            puVar11 = &local_d0;
          }
          iVar26 = FUN_ram_4816ae5c(*(undefined1 *)(param_1[0x1d] + 5));
          if ((iVar26 != 0) && (iVar26 = FUN_ram_48177194(iVar45,iVar26), iVar26 != 0)) {
            uVar10 = param_1[0x22];
            if (uVar10 < 8) {
              return -0x7300;
            }
            uVar29 = *(ushort *)(param_1[0x1d] + 6);
            uVar33 = (uVar29 & 0xff) << 8 | (uint)(uVar29 >> 8);
            if (uVar10 != uVar33 + 8) {
              return -0x7300;
            }
            iVar26 = (**(code **)(param_1[0x10] + 0x18))
                               (param_1,&local_d0,auStack_100,*(undefined1 *)(param_1[0x1d] + 6),
                                uVar10,*(code **)(param_1[0x10] + 0x18));
            if (iVar26 != 0) {
              return iVar26;
            }
            iVar45 = FUN_ram_4817720e(iVar45,iVar20,puVar11,0,param_1[0x1d] + 8,uVar33);
            if (iVar45 == 0) {
              iVar45 = FUN_ram_48170b9e(param_1);
              return iVar45;
            }
            return iVar45;
          }
        }
        return -0x6600;
      }
LAB_ram_4816e2b0:
      param_1[1] = 10;
      return 0;
    }
    if (*(char *)(param_1[0x10] + 4) == '\0') {
      iVar45 = FUN_ram_48170fb4();
      return iVar45;
    }
    param_1[0x2d] = 0x16;
    *(undefined1 *)param_1[0x2c] = 4;
    iVar45 = param_1[0xf];
    uVar48 = FUN_ram_4816f10a();
    iVar26 = param_1[0x2c];
    pcVar47 = *(code **)(*param_1 + 0x44);
    uVar19 = *(undefined4 *)(*param_1 + 0x4c);
    iVar20 = param_1[0xf];
    *(undefined8 *)(iVar45 + 0x80) = uVar48;
    iVar45 = (*pcVar47)(uVar19,iVar20,iVar26 + 10,iVar26 + 0x1000,auStack_100,&local_d0,pcVar47);
    if (iVar45 == 0) {
      iVar45 = auStack_100[0] + 10;
      uVar29 = (ushort)((auStack_100[0] & 0xff) << 8) | (ushort)(auStack_100[0] >> 8) & 0xff;
    }
    else {
      auStack_100[0] = 0;
      iVar45 = 10;
      uVar29 = 0;
    }
    iVar20 = param_1[0x2c];
    uVar19 = __bswapsi2(local_d0);
    *(char *)(iVar20 + 4) = (char)uVar19;
    *(char *)(iVar20 + 6) = (char)((uint)uVar19 >> 0x10);
    *(char *)(iVar20 + 5) = (char)((uint)uVar19 >> 8);
    *(char *)(iVar20 + 7) = (char)((uint)uVar19 >> 0x18);
    iVar20 = param_1[0x2c];
    *(char *)(iVar20 + 8) = (char)uVar29;
    *(char *)(iVar20 + 9) = (char)(uVar29 >> 8);
    param_1[0x2e] = iVar45;
    *(undefined1 *)(param_1[0x10] + 4) = 0;
    goto LAB_ram_4816e036;
  }
  if (iVar45 != 4) {
    if (4 < iVar45) {
      if (iVar45 == 6) {
        param_1[0x2e] = 4;
        param_1[0x2d] = 0x16;
        *(undefined1 *)param_1[0x2c] = 0xe;
        param_1[1] = param_1[1] + 1;
        goto LAB_ram_4816df66;
      }
      if (iVar45 == 7) {
        cVar38 = *(char *)(param_1[0x10] + 2);
        if (cVar38 == '\x03') {
          cVar38 = *(char *)(*param_1 + 10);
        }
        uVar10 = (uint)*(byte *)(*(int *)(param_1[0x10] + 0x10) + 10);
        if ((10 < uVar10) || ((0x69eU >> (uVar10 & 0x1f) & 1) == 0)) {
          *(undefined4 *)(param_1[0xf] + 0x6c) = 0;
          goto LAB_ram_4816c42e;
        }
        if (*(char *)(*param_1 + 8) == '\x01') {
          if (uVar10 == 7) goto LAB_ram_4816c42e;
          if (cVar38 == '\0') {
            *(undefined4 *)(param_1[0xf] + 0x6c) = 0x80;
            goto LAB_ram_4816c42e;
          }
        }
        iVar45 = FUN_ram_48170c76(param_1,1);
        if (iVar45 != 0) {
          return iVar45;
        }
        iVar45 = param_1[0xf];
        if ((((*(char *)(*param_1 + 8) != '\0') && (param_1[0x22] == 7)) && (param_1[0x1f] == 0x16))
           && (((pcVar41 = (char *)param_1[0x1d], *pcVar41 == '\v' && (pcVar41[4] == '\0')) &&
               ((pcVar41[5] == '\0' && (pcVar41[6] == '\0')))))) {
          *(undefined4 *)(iVar45 + 0x6c) = 0x40;
          if (cVar38 != '\x01') {
            return -0x7480;
          }
LAB_ram_4816c42e:
          param_1[1] = param_1[1] + 1;
          return 0;
        }
        if (*(int *)(iVar45 + 0x68) != 0) {
          FUN_ram_48189290();
          thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar45 + 0x68));
          *(undefined4 *)(iVar45 + 0x68) = 0;
        }
        iVar45 = thunk_FUN_ram_4817b126(1,0x198);
        if (iVar45 == 0) {
          FUN_ram_48170f7a(param_1,2,0x50);
          return -0x7f00;
        }
        FUN_ram_48189282();
        if ((param_1[0x1f] == 0x16) && (pcVar41 = (char *)param_1[0x1d], *pcVar41 == '\v')) {
          uVar10 = param_1[0x22];
          if (((uVar10 < 10) || (pcVar41[4] != '\0')) ||
             (uVar10 != ((uint)(*(ushort *)(pcVar41 + 5) >> 8) |
                        (*(ushort *)(pcVar41 + 5) & 0xff) << 8) + 7)) {
LAB_ram_4816c51e:
            FUN_ram_48170f7a(param_1,2,0x32);
            iVar20 = -0x7300;
          }
          else {
            uVar33 = 7;
            iVar26 = 0;
            do {
              uVar34 = uVar33 + 3;
              if (uVar10 < uVar34) goto LAB_ram_4816c51e;
              iVar20 = param_1[0x1d];
              if (*(char *)(uVar33 + iVar20) != '\0') {
                FUN_ram_48170f7a(param_1,2,0x2b);
LAB_ram_4816c548:
                iVar20 = -0x7a00;
                goto LAB_ram_4816c40c;
              }
              uVar29 = *(ushort *)((char *)(uVar33 + iVar20) + 1);
              uVar21 = (uVar29 & 0xff) << 8 | (uint)(uVar29 >> 8);
              if ((uVar21 < 0x80) || (uVar33 = uVar34 + uVar21, uVar10 < uVar33))
              goto LAB_ram_4816c51e;
              if (((iVar26 == 0) && (*(char *)(*param_1 + 8) == '\0')) && (param_1[2] == 1)) {
                iVar46 = param_1[0xe];
                iVar32 = *(int *)(iVar46 + 0x68);
                if (((iVar32 == 0) || (uVar21 != *(uint *)(iVar32 + 8))) ||
                   (iVar20 = FUN_ram_4ff4511a(*(undefined4 *)(iVar32 + 0xc),iVar20 + uVar34),
                   iVar20 != 0)) {
                  FUN_ram_48170f7a(param_1,2,0x31);
                  goto LAB_ram_4816c548;
                }
                FUN_ram_48189290(iVar32);
                thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar46 + 0x68));
                iVar20 = param_1[0x1d];
                *(undefined4 *)(iVar46 + 0x68) = 0;
              }
              iVar20 = FUN_ram_48189d0e(iVar45,iVar20 + uVar34,uVar21);
              if (iVar20 == -0x2580) {
                uVar19 = 0x2b;
LAB_ram_4816c3fa:
                FUN_ram_48170f7a(param_1,2,uVar19);
                goto LAB_ram_4816c40c;
              }
              if (iVar20 < -0x257f) {
                if (iVar20 == -0x2880) {
                  uVar19 = 0x50;
                  goto LAB_ram_4816c3fa;
                }
                if (iVar20 != -0x262e) goto LAB_ram_4816c4b6;
              }
              else if (iVar20 != 0) {
LAB_ram_4816c4b6:
                uVar19 = 0x2a;
                goto LAB_ram_4816c3fa;
              }
              uVar10 = param_1[0x22];
              iVar26 = iVar26 + 1;
            } while (uVar33 < uVar10);
            iVar20 = FUN_ram_4816c054(param_1,cVar38,iVar45,*(undefined4 *)(param_1[0x10] + 0x10),0)
            ;
            if (iVar20 == 0) {
              *(int *)(param_1[0xf] + 0x68) = iVar45;
              goto LAB_ram_4816c42e;
            }
          }
        }
        else {
          FUN_ram_48170f7a(param_1,2,10);
          iVar20 = -0x7700;
        }
LAB_ram_4816c40c:
        FUN_ram_48189290(iVar45);
        thunk_FUN_ram_4ff209c6(iVar45);
        return iVar20;
      }
      iVar45 = *(int *)(param_1[0x10] + 0x10);
      param_1[1] = 6;
      cVar38 = *(char *)(param_1[0x10] + 2);
      unaff_s3 = param_1[0x2c];
      if (cVar38 == '\x03') {
        cVar38 = *(char *)(*param_1 + 10);
      }
      bVar1 = *(byte *)(iVar45 + 10);
      if (bVar1 < 5) {
        if (bVar1 == 0) {
          return 0;
        }
      }
      else if (1 < (byte)(bVar1 - 9)) {
        return 0;
      }
      if (cVar38 == '\0') {
        return 0;
      }
      *(undefined1 *)(unaff_s3 + 5) = 1;
      *(undefined1 *)(unaff_s3 + 6) = 0x40;
      *(undefined1 *)(unaff_s3 + 4) = 2;
      puVar16 = *(ushort **)(*param_1 + 0x60);
      if (puVar16 == (ushort *)0x0) {
        return -0x5e80;
      }
      uVar29 = *puVar16;
      uVar10 = (uint)uVar29;
      if (uVar10 == 0) {
        unaff_s4 = 9;
        iVar45 = 4;
      }
      else {
        uVar33 = 0;
        do {
          iVar45 = FUN_ram_4816b5b6(param_1,uVar10 >> 8);
          if (((iVar45 == 0) && (param_1[4] == 0x303)) &&
             ((uVar29 = *puVar16, (uVar29 >> 8) - 1 < 6 && ((uVar29 & 0xfd) == 1)))) {
            uVar33 = uVar33 + 2;
            puVar22 = (undefined1 *)(unaff_s3 + 7 + uVar33);
            puVar22[1] = (char)uVar29;
            *puVar22 = (char)(uVar29 >> 8);
          }
          uVar10 = (uint)puVar16[1];
          puVar16 = puVar16 + 1;
        } while (uVar10 != 0);
        iVar45 = uVar33 + 4;
        uVar29 = (ushort)((uVar33 & 0xff) << 8) | (ushort)(uVar33 >> 8) & 0xff;
        unaff_s4 = uVar33 + 9;
      }
      *(char *)(unaff_s3 + 8) = (char)(uVar29 >> 8);
      *(char *)(unaff_s3 + 7) = (char)uVar29;
      iVar20 = *param_1;
      puVar22 = (undefined1 *)(iVar45 + unaff_s3 + 7);
      uVar29 = 0;
      uVar10 = 0;
      if (*(char *)(iVar20 + 0x11) == '\x01') goto LAB_ram_4816eae0;
LAB_ram_4816e98e:
      param_1[0x2e] = (int)puVar22 - unaff_s3;
      param_1[0x2d] = 0x16;
      *(undefined1 *)param_1[0x2c] = 0xd;
      iVar45 = param_1[0x2c];
      *(undefined1 *)(iVar45 + unaff_s4) = (char)uVar29;
      ((undefined1 *)(iVar45 + unaff_s4))[1] = (char)(uVar29 >> 8);
LAB_ram_4816df66:
      iVar45 = FUN_ram_48170976(param_1,1);
      return iVar45;
    }
    if (iVar45 != 2) {
      if (iVar45 == 3) {
        iVar45 = FUN_ram_4816b5e8();
        return iVar45;
      }
      if (iVar45 == 0) {
        param_1[1] = 1;
        return 0;
      }
      if (iVar45 != 1) {
        return -0x7100;
      }
      iVar45 = FUN_ram_48170c76(param_1,0);
      if (iVar45 != 0) {
        return iVar45;
      }
      iVar45 = FUN_ram_48170b9e(param_1);
      if (iVar45 != 0) {
        return iVar45;
      }
      pcVar41 = (char *)param_1[0x1d];
      if ((param_1[0x1f] != 0x16) || (*pcVar41 != '\x01')) {
        return -0x7700;
      }
      pcVar13 = pcVar41 + 4;
      uVar10 = param_1[0x22] - 4;
      if (uVar10 < 0x26) {
        return -0x7300;
      }
      iVar45 = FUN_ram_48171466(pcVar13,*(undefined1 *)(*param_1 + 9));
      iVar26 = param_1[0xf];
      iVar20 = *param_1;
      param_1[4] = iVar45;
      *(int *)(iVar26 + 4) = iVar45;
      *(undefined1 *)(iVar26 + 2) = *(undefined1 *)(iVar20 + 8);
      if (iVar45 != 0x303) {
        FUN_ram_48170f7a(param_1,2,0x46);
        return -0x6e80;
      }
      FUN_ram_4ff45158(param_1[0x10] + 0x1b4,pcVar41 + 6,0x20);
      uVar33 = (uint)(byte)pcVar41[0x26];
      if ((0x20 < uVar33) || (uVar10 < uVar33 + 0x24)) {
LAB_ram_4816ea1a:
        FUN_ram_48170f7a(param_1,2,0x32);
        return -0x7300;
      }
      iVar45 = param_1[0xf];
      *(uint *)(iVar45 + 0x14) = uVar33;
      memset((void *)(iVar45 + 0x18),0,0x20);
      FUN_ram_4ff45158(param_1[0xf] + 0x18,pcVar41 + 0x27,*(undefined4 *)(param_1[0xf] + 0x14));
      uVar29 = *(ushort *)(pcVar13 + uVar33 + 0x23);
      uVar34 = (uVar29 & 0xff) << 8 | (uint)(uVar29 >> 8);
      if ((uVar34 < 2) ||
         ((iVar45 = uVar33 + 0x23 + uVar34, uVar10 < iVar45 + 3U || ((uVar29 & 0x100) != 0))))
      goto LAB_ram_4816ea1a;
      iVar45 = iVar45 + 2;
      if (0xf < (byte)pcVar13[iVar45] - 1) goto LAB_ram_4816ea1a;
      iVar45 = iVar45 + (uint)(byte)pcVar13[iVar45];
      uVar21 = iVar45 + 1;
      if (uVar10 < uVar21) goto LAB_ram_4816ea1a;
      if (uVar10 <= uVar21) {
        bVar7 = false;
        goto LAB_ram_4816ea82;
      }
      uVar27 = iVar45 + 3;
      if ((uVar10 < uVar27) ||
         (uVar21 = (*(ushort *)(pcVar13 + uVar21) & 0xff) << 8 |
                   (uint)(*(ushort *)(pcVar13 + uVar21) >> 8), uVar10 != uVar27 + uVar21))
      goto LAB_ram_4816ea1a;
      if (uVar21 == 0) {
        bVar7 = false;
LAB_ram_4816ea82:
        iVar45 = param_1[0x10];
        auStack_cc[0] = auStack_cc[0] & 0xffff0000;
        local_d0 = 0x2010203;
        *(undefined1 *)(iVar45 + 0x24) = 3;
        *(undefined1 *)(iVar45 + 0x28) = 0;
        *(undefined1 *)(iVar45 + 0x29) = 0;
        *(undefined1 *)(iVar45 + 0x25) = 2;
        *(undefined1 *)(iVar45 + 0x26) = 1;
        *(undefined1 *)(iVar45 + 0x27) = 2;
      }
      else {
        bVar7 = false;
        bVar6 = false;
        pcVar41 = pcVar13 + uVar27;
        do {
          if (uVar21 < 4) goto LAB_ram_4816ea1a;
          puVar5 = *(undefined **)pcVar41;
          uVar27 = (uint)(*(ushort *)(pcVar41 + 2) >> 8) | (*(ushort *)(pcVar41 + 2) & 0xff) << 8;
          uVar10 = uVar27 + 4;
          uVar29 = (short)puVar5 << 8 | (ushort)puVar5 >> 8;
          if (uVar21 < uVar10) goto LAB_ram_4816ea1a;
          if (puVar5 == (undefined *)0x1000) {
            iVar45 = FUN_ram_4816bd14(param_1,pcVar41 + 4,pcVar41 + uVar10);
joined_r0x4816e91a:
            pcVar44 = pcVar41 + uVar10;
            if (iVar45 != 0) {
              return iVar45;
            }
          }
          else if (uVar29 < 0x11) {
            if (puVar5 == &mcycle) {
              if (uVar27 < 2) goto LAB_ram_4816ea1a;
              uVar29 = *(ushort *)(pcVar41 + 4);
              uVar17 = (uVar29 & 0xff) << 8 | (uint)(uVar29 >> 8);
              if ((uVar27 != uVar17 + 2) || ((uVar29 & 0x100) != 0)) goto LAB_ram_4816ea1a;
              if (*(int *)(param_1[0x10] + 0xf8) != 0) {
LAB_ram_4816efd6:
                FUN_ram_48170f7a(param_1,2,0x2f);
                return -0x6600;
              }
              uVar39 = (uVar17 >> 1) + 1;
              if (0xe < uVar39) {
                uVar39 = 0xe;
              }
              puVar16 = (ushort *)thunk_FUN_ram_4817b126(uVar39,2);
              if (puVar16 == (ushort *)0x0) {
                FUN_ram_48170f7a(param_1,2,0x50);
                return -0x7f00;
              }
              pcVar44 = pcVar41 + uVar10;
              iVar45 = uVar17 + 6;
              *(ushort **)(param_1[0x10] + 0xf8) = puVar16;
              if (uVar17 != 0) {
                while (uVar39 != 1) {
                  while( true ) {
                    uVar29 = *(ushort *)(pcVar41 + (iVar45 - uVar17)) >> 8 |
                             *(ushort *)(pcVar41 + (iVar45 - uVar17)) << 8;
                    iVar20 = FUN_ram_4816af3a(uVar29);
                    if (iVar20 != 0) break;
                    uVar17 = uVar17 - 2;
                    if (uVar17 == 0) goto LAB_ram_4816e4d6;
                  }
                  *puVar16 = uVar29;
                  uVar17 = uVar17 - 2;
                  puVar16 = puVar16 + 1;
                  uVar39 = uVar39 - 1;
                  if (uVar17 == 0) break;
                }
              }
            }
            else if (uVar29 < 0xb) {
              if (puVar5 == (undefined *)0x0) {
                iVar45 = FUN_ram_4816bc46(param_1,pcVar41 + 4,pcVar41 + uVar10);
                goto joined_r0x4816e91a;
              }
              if (puVar5 != (undefined *)0x100) goto LAB_ram_4816e750;
              if ((uVar27 != 1) || (4 < (byte)pcVar41[4])) goto LAB_ram_4816efd6;
              pcVar44 = pcVar41 + 5;
              *(char *)param_1[0xf] = pcVar41[4];
            }
            else if (puVar5 == &DAT_csreg_0b00) {
              iVar45 = param_1[0x10];
              *(byte *)(iVar45 + 1) = *(byte *)(iVar45 + 1) | 1;
              if ((uVar27 == 0) || (uVar17 = (uint)(byte)pcVar41[4], uVar17 + 1 != uVar27))
              goto LAB_ram_4816ea1a;
              pbVar14 = (byte *)(pcVar41 + 5);
              pcVar44 = pcVar41 + uVar10;
              if (uVar17 != 0) {
                pbVar15 = pbVar14 + uVar17;
                do {
                  if (*pbVar14 < 2) {
                    *(byte *)(iVar45 + 0x4c) = *pbVar14;
                    break;
                  }
                  pbVar14 = pbVar14 + 1;
                } while (pbVar14 != pbVar15);
              }
            }
            else {
              if (puVar5 != (undefined *)0xd00) goto LAB_ram_4816e750;
              pcVar44 = pcVar41 + uVar10;
              iVar45 = FUN_ram_4816afa8(param_1,pcVar41 + 4,pcVar44);
              if (iVar45 != 0) {
                return iVar45;
              }
              bVar6 = true;
            }
          }
          else if (puVar5 == (undefined *)0x2300) {
            FUN_ram_4816a416(&local_d0);
            iVar45 = *param_1;
            pcVar47 = *(code **)(iVar45 + 0x48);
            if ((((pcVar47 != (code *)0x0) && (*(int *)(iVar45 + 0x44) != 0)) &&
                (*(undefined1 *)(param_1[0x10] + 4) = 1, uVar27 != 0)) && (param_1[2] == 0)) {
              iVar45 = (*pcVar47)(*(undefined4 *)(iVar45 + 0x4c),&local_d0,pcVar41 + 4,uVar27);
              if (iVar45 != 0) {
                FUN_ram_4816abbc(&local_d0);
                pcVar44 = pcVar41 + uVar10;
                goto LAB_ram_4816e4d6;
              }
              iVar45 = param_1[0xf];
              auStack_cc[4] = *(undefined4 *)(iVar45 + 0x14);
              FUN_ram_4ff45158(auStack_b8,iVar45 + 0x18);
              FUN_ram_4816abbc(iVar45);
              FUN_ram_4ff45158(param_1[0xf],&local_d0,0x90);
              FUN_ram_48178af2(&local_d0,0x90);
              puVar22 = (undefined1 *)param_1[0x10];
              puVar22[4] = 0;
              *puVar22 = 1;
            }
LAB_ram_4816e750:
            pcVar44 = pcVar41 + uVar10;
          }
          else if (uVar29 < 0x24) {
            if (puVar5 == (undefined *)0x1600) {
              if (uVar27 != 0) goto LAB_ram_4816ea1a;
              if (*(char *)(*param_1 + 0xd) == '\x01') {
                pcVar44 = pcVar41 + 4;
                *(undefined4 *)(param_1[0xf] + 0x88) = 1;
              }
              else {
LAB_ram_4816e68c:
                pcVar44 = pcVar41 + 4;
              }
            }
            else {
              if (puVar5 != (undefined *)0x1700) goto LAB_ram_4816e750;
              if (uVar27 != 0) goto LAB_ram_4816ea1a;
              if (*(char *)(*param_1 + 0xe) != '\x01') goto LAB_ram_4816e68c;
              pcVar44 = pcVar41 + 4;
              *(undefined1 *)(param_1[0x10] + 0xc) = 1;
            }
          }
          else {
            if (puVar5 != (undefined *)0x1ff) goto LAB_ram_4816e750;
            bVar7 = true;
            if (param_1[2] == 0) {
              if ((uVar27 != 1) || (pcVar41[4] != '\0')) goto LAB_ram_4816edf2;
              param_1[0x34] = 1;
              pcVar44 = pcVar41 + 5;
            }
            else {
              if (((uVar27 != param_1[0x35] + 1U) || (param_1[0x35] != (uint)(byte)pcVar41[4])) ||
                 (iVar45 = FUN_ram_481723ca(pcVar41 + 5,param_1 + 0x39), iVar45 != 0))
              goto LAB_ram_4816edf2;
              pcVar44 = pcVar41 + uVar10;
            }
          }
LAB_ram_4816e4d6:
          uVar10 = uVar21 - 4;
          uVar21 = uVar10 - uVar27;
          pcVar41 = pcVar44;
        } while (uVar10 != uVar27);
        if (!bVar6) goto LAB_ram_4816ea82;
      }
      uVar10 = 0;
      puVar9 = (ushort *)(pcVar13 + uVar33 + 0x25);
      puVar16 = puVar9;
      do {
        if (((char)*puVar16 == '\0') && (*(char *)((int)puVar16 + 1) == -1)) {
          if (param_1[2] == 1) goto LAB_ram_4816edf2;
          param_1[0x34] = 1;
          goto LAB_ram_4816eef0;
        }
        uVar10 = uVar10 + 2;
        puVar16 = puVar16 + 1;
      } while (uVar10 < uVar34);
      if (param_1[0x34] == 1) {
        if (param_1[2] == 1) {
          if (!bVar7) goto LAB_ram_4816edf2;
          iVar45 = *param_1;
        }
        else {
LAB_ram_4816eef0:
          iVar45 = *param_1;
        }
      }
      else {
        iVar45 = *param_1;
        if ((*(char *)(iVar45 + 0xb) == '\x02') ||
           (((param_1[2] == 1 && (param_1[0x34] == 0)) &&
            ((*(char *)(iVar45 + 0xb) == '\0' || (bVar7)))))) goto LAB_ram_4816edf2;
      }
      if (*(code **)(iVar45 + 0x84) != (code *)0x0) {
        iVar45 = (**(code **)(iVar45 + 0x84))(param_1);
        if (iVar45 != 0) {
          return iVar45;
        }
        iVar45 = *param_1;
      }
      iVar20 = param_1[0x10];
      puVar11 = *(uint **)(iVar45 + 0x14);
      *(undefined4 *)(iVar20 + 0x23c) = 0;
      *(undefined4 *)(iVar20 + 0x240) = 0;
      local_d0 = 0;
      if (*(char *)(iVar45 + 0x12) == '\x01') {
        uVar10 = 0;
        do {
          iVar45 = 0;
          uVar33 = *puVar11;
          puVar43 = puVar11;
          while (uVar33 != 0) {
            puVar43 = puVar43 + 1;
            if (((uint)(*(ushort *)((int)puVar9 + uVar10) >> 8) |
                (*(ushort *)((int)puVar9 + uVar10) & 0xff) << 8) == uVar33) {
              iVar20 = FUN_ram_4816d716(param_1,uVar33,&local_d0);
              if (iVar20 != 0) {
                return -0x6c00;
              }
              if (local_d0 != 0) goto LAB_ram_4816e5fc;
            }
            iVar45 = iVar45 + 1;
            uVar33 = *puVar43;
          }
          uVar10 = uVar10 + 2;
        } while (uVar10 < uVar34);
      }
      else {
        uVar10 = *puVar11;
        if (uVar10 != 0) {
          iVar45 = 0;
          puVar16 = puVar9;
          puVar43 = puVar11;
LAB_ram_4816e594:
          do {
            if (((uint)(*puVar16 >> 8) | (*puVar16 & 0xff) << 8) == uVar10) {
              iVar20 = FUN_ram_4816d716(param_1,uVar10,&local_d0);
              if (iVar20 != 0) {
                return -0x6c00;
              }
              if (local_d0 != 0) {
LAB_ram_4816e5fc:
                iVar26 = param_1[1];
                iVar20 = param_1[0x10];
                *(uint *)(param_1[0xf] + 0x10) = puVar11[iVar45];
                *(uint *)(iVar20 + 0x10) = local_d0;
                param_1[1] = iVar26 + 1;
                return 0;
              }
            }
            if (puVar16 != (ushort *)((uVar34 - 1 & 0xfffffffe) + (int)puVar9)) {
              uVar10 = *puVar43;
              puVar16 = puVar16 + 1;
              goto LAB_ram_4816e594;
            }
            uVar10 = puVar43[1];
            puVar43 = puVar43 + 1;
            iVar45 = iVar45 + 1;
            puVar16 = puVar9;
          } while (uVar10 != 0);
        }
      }
LAB_ram_4816edf2:
      FUN_ram_48170f7a(param_1,2,0x28);
      return -0x6e00;
    }
    iVar45 = param_1[0x2c];
    FUN_ram_48171448(iVar45 + 4,*(undefined1 *)(*param_1 + 9),param_1[4]);
    FUN_ram_4819b728(0);
    uVar10 = __bswapsi2();
    *(char *)(iVar45 + 6) = (char)uVar10;
    *(char *)(iVar45 + 7) = (char)(uVar10 >> 8);
    *(char *)(iVar45 + 8) = (char)(uVar10 >> 0x10);
    *(char *)(iVar45 + 9) = (char)(uVar10 >> 0x18);
    pcVar47 = *(code **)(*param_1 + 0x20);
    iVar20 = (*pcVar47)(*(undefined4 *)(*param_1 + 0x24),iVar45 + 10,0x14,uVar10 >> 8,pcVar47);
    if (iVar20 != 0) {
      return iVar20;
    }
    iVar20 = (**(code **)(*param_1 + 0x20))(*(undefined4 *)(*param_1 + 0x24),iVar45 + 0x1e,8);
    if (iVar20 != 0) {
      return iVar20;
    }
    FUN_ram_4ff45158(param_1[0x10] + 0x1d4,iVar45 + 6,0x20);
    cVar38 = *(char *)param_1[0x10];
    if (cVar38 == '\x01') {
LAB_ram_4816de44:
      param_1[1] = 0xc;
      iVar20 = FUN_ram_4816b0fa(param_1);
joined_r0x4816de52:
      if (iVar20 != 0) {
        return iVar20;
      }
    }
    else {
      puVar8 = (undefined4 *)param_1[0xf];
      if (((puVar8[5] != 0) && (*(int *)(*param_1 + 0x28) != 0)) && (param_1[2] == 0)) {
        FUN_ram_4816a416(&local_d0);
        pcVar47 = *(code **)(*param_1 + 0x28);
        iVar20 = (*pcVar47)(*(undefined4 *)(*param_1 + 0x30),puVar8 + 6,puVar8[5],&local_d0,pcVar47)
        ;
        if ((iVar20 == 0) && (puVar8[4] == auStack_cc[3])) {
          FUN_ram_4816abbc(puVar8);
          puVar37 = &local_d0;
          do {
            uVar19 = *puVar37;
            uVar24 = puVar37[1];
            uVar28 = puVar37[2];
            puVar8[3] = puVar37[3];
            *puVar8 = uVar19;
            puVar8[1] = uVar24;
            puVar8[2] = uVar28;
            puVar37 = puVar37 + 4;
            puVar8 = puVar8 + 4;
          } while (puVar37 != auStack_40);
          memset(&local_d0,0,0x90);
          *(undefined1 *)param_1[0x10] = 1;
        }
        FUN_ram_4816abbc(&local_d0);
        cVar38 = *(char *)param_1[0x10];
      }
      if (cVar38 != '\0') goto LAB_ram_4816de44;
      iVar20 = param_1[0xf];
      param_1[1] = param_1[1] + 1;
      uVar48 = FUN_ram_4819b728(0);
      iVar26 = param_1[0x10];
      *(undefined8 *)(iVar20 + 8) = uVar48;
      iVar20 = param_1[0xf];
      if (*(char *)(iVar26 + 4) == '\0') {
        iVar26 = *param_1;
        *(undefined4 *)(iVar20 + 0x14) = 0x20;
        iVar20 = (**(code **)(iVar26 + 0x20))(*(undefined4 *)(iVar26 + 0x24),iVar20 + 0x18);
        goto joined_r0x4816de52;
      }
      *(undefined4 *)(iVar20 + 0x14) = 0;
      memset((void *)(iVar20 + 0x18),0,0x20);
    }
    iVar20 = 0;
    *(char *)(iVar45 + 0x26) = (char)*(undefined4 *)(param_1[0xf] + 0x14);
    FUN_ram_4ff45158(iVar45 + 0x27,param_1[0xf] + 0x18,*(undefined4 *)(param_1[0xf] + 0x14));
    uVar19 = *(undefined4 *)(param_1[0xf] + 0x10);
    puVar42 = (undefined1 *)(iVar45 + 0x27 + *(int *)(param_1[0xf] + 0x14));
    *puVar42 = (char)((uint)uVar19 >> 8);
    puVar42[2] = 0;
    puVar42[1] = (char)uVar19;
    puVar40 = puVar42 + 3;
    puVar22 = puVar42 + 5;
    if (param_1[0x34] == 1) {
      puVar42[5] = 0xff;
      puVar42[6] = 1;
      iVar20 = param_1[2];
      puVar42[7] = 0;
      puVar22 = puVar42 + 10;
      if (iVar20 == 0) {
        puVar42[8] = 1;
        puVar42[9] = 0;
        iVar20 = 5;
      }
      else {
        puVar42[8] = (char)(param_1[0x35] << 1) + '\x01';
        puVar42[9] = (char)(param_1[0x35] << 1);
        iVar20 = FUN_ram_4ff45158(puVar22,param_1 + 0x39,param_1[0x35]);
        iVar20 = FUN_ram_4ff45158(iVar20 + param_1[0x35],param_1 + 0x36);
        iVar20 = (iVar20 + param_1[0x35]) - (int)(puVar42 + 5);
        puVar22 = puVar40 + iVar20 + 2;
      }
    }
    pcVar41 = (char *)param_1[0xf];
    if (*pcVar41 == '\0') {
      local_d0 = 0;
    }
    else {
      *puVar22 = 0;
      puVar22[2] = 0;
      puVar22[1] = 1;
      puVar22[3] = 1;
      iVar26 = iVar20 + 7;
      iVar20 = iVar20 + 5;
      puVar22[4] = *(undefined1 *)param_1[0xf];
      pcVar41 = (char *)param_1[0xf];
      local_d0 = 5;
      puVar22 = puVar40 + iVar26;
    }
    iVar26 = FUN_ram_4816f1ea(*(undefined4 *)(pcVar41 + 0x10));
    iVar32 = param_1[0xf];
    if (iVar26 != 0) {
      iVar26 = FUN_ram_4816a4b0(*(undefined4 *)(iVar32 + 0x88),iVar26);
      iVar32 = param_1[0xf];
      if (iVar26 == 2) {
        if (*(int *)(iVar32 + 0x88) != 0) {
          iVar26 = iVar20 + 6;
          *puVar22 = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          puVar22[1] = 0x16;
          iVar20 = iVar20 + 4;
          puVar22 = puVar40 + iVar26;
        }
        goto LAB_ram_4816dc90;
      }
    }
    *(undefined4 *)(iVar32 + 0x88) = 0;
LAB_ram_4816dc90:
    iVar26 = param_1[0x10];
    if (*(char *)(iVar26 + 0xc) != '\0') {
      *puVar22 = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[1] = 0x17;
      iVar26 = param_1[0x10];
      puVar22 = puVar40 + iVar20 + 6;
      iVar20 = iVar20 + 4;
    }
    local_d0 = 0;
    if (*(char *)(iVar26 + 4) != '\0') {
      iVar26 = iVar20 + 6;
      *puVar22 = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[1] = 0x23;
      iVar20 = iVar20 + 4;
      puVar22 = puVar40 + iVar26;
      local_d0 = 4;
    }
    iVar26 = FUN_ram_4816f1ea(*(undefined4 *)(param_1[0xf] + 0x10));
    if (((iVar26 != 0) && (iVar26 = FUN_ram_4816f258(), iVar26 != 0)) &&
       (local_d0 = 0, (*(byte *)(param_1[0x10] + 1) & 1) != 0)) {
      iVar26 = iVar20 + 8;
      puVar22[4] = 1;
      *puVar22 = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[1] = 0xb;
      puVar22[3] = 2;
      iVar20 = iVar20 + 6;
      puVar22 = puVar40 + iVar26;
      local_d0 = 6;
    }
    iVar26 = FUN_ram_4816be60(param_1,puVar22,iVar45 + 0xffc,&local_d0);
    if (iVar26 == 0) {
      iVar20 = iVar20 + local_d0;
      if (iVar20 != 0) {
        puVar42[3] = (char)((uint)iVar20 >> 8);
        puVar40 = puVar40 + iVar20 + 2;
        puVar42[4] = (char)((uint)(iVar20 * 0x100) >> 8);
      }
      param_1[0x2e] = (int)puVar40 - iVar45;
      param_1[0x2d] = 0x16;
      *(undefined1 *)param_1[0x2c] = 2;
      iVar45 = FUN_ram_48170976(param_1,1);
      return iVar45;
    }
    return iVar26;
  }
  iVar20 = param_1[0x10];
  uStack_104 = 0;
  iVar45 = *(int *)(iVar20 + 0x10);
  uVar10 = (uint)*(byte *)(iVar45 + 10);
  if (10 < uVar10) {
    param_1[0x2e] = 4;
    puVar22 = (undefined1 *)param_1[0x2c];
LAB_ram_4816e5d0:
    param_1[0x2d] = 0x16;
    *puVar22 = 0xc;
    param_1[1] = param_1[1] + 1;
LAB_ram_4816e036:
    iVar45 = FUN_ram_48170976(param_1,1);
    return iVar45;
  }
  if ((0x6a2U >> (uVar10 & 0x1f) & 1) != 0) {
    iVar45 = 4;
    if (1 < uVar10 - 9) {
LAB_ram_4816de34:
      param_1[1] = iVar45 + 1;
      return 0;
    }
    iVar45 = *(int *)(iVar20 + 0xfc);
    if (((iVar45 == 0) && (iVar45 = *(int *)(*param_1 + 0x54), iVar45 == 0)) ||
       (*(int *)(iVar45 + 4) == 0)) {
      return -0x7600;
    }
    iVar45 = FUN_ram_48177194(*(int *)(iVar45 + 4),2);
    if (iVar45 == 0) {
      return -0x6d00;
    }
    iVar45 = param_1[0x10];
    if (((iVar45 != 0) && (iVar20 = *(int *)(iVar45 + 0xfc), iVar20 != 0)) ||
       (iVar20 = *(int *)(*param_1 + 0x54), iVar20 != 0)) {
      local_d0 = **(uint **)(iVar20 + 4);
      auStack_cc[0] = (*(uint **)(iVar20 + 4))[1];
      iVar20 = FUN_ram_481774c4(&local_d0);
      uVar10 = 0;
      if (iVar20 - 2U < 3) {
        uVar10 = auStack_cc[0];
      }
      iVar45 = FUN_ram_48172830(iVar45 + 0x4c,uVar10,0);
      if (iVar45 != 0) {
        return iVar45;
      }
      iVar45 = param_1[1];
      goto LAB_ram_4816de34;
    }
    local_d0 = uRam00000000;
    ebreak();
    iVar20 = extraout_a3;
    uVar10 = uRam00000000;
    puVar22 = puRam00000004;
LAB_ram_4816eae0:
    uVar29 = (ushort)uVar10;
    iVar45 = *(int *)(param_1[0x10] + 0x244);
    if (((iVar45 != 0) || (iVar45 = *(int *)(iVar20 + 0x88), iVar45 != 0)) ||
       ((iVar45 = *(int *)(param_1[0x10] + 0x104), iVar45 != 0 ||
        (iVar45 = *(int *)(iVar20 + 0x58), iVar45 != 0)))) {
      uVar10 = 0;
      while (*(int *)(iVar45 + 0x1c) != 0) {
        uVar29 = *(ushort *)(iVar45 + 0x48);
        uVar33 = (uint)uVar29;
        if (((undefined1 *)(unaff_s3 + 0x1000) < puVar22) ||
           ((uint)((unaff_s3 + 0x1000) - (int)puVar22) < uVar33 + 2)) break;
        *puVar22 = (char)(uVar29 >> 8);
        puVar22[1] = (char)uVar29;
        iVar20 = FUN_ram_4ff45158(puVar22 + 2,*(undefined4 *)(iVar45 + 0x4c),uVar33);
        iVar45 = *(int *)(iVar45 + 0x194);
        uVar10 = uVar10 + 2 + uVar33 & 0xffff;
        puVar22 = (undefined1 *)(iVar20 + uVar33);
        if (iVar45 == 0) break;
      }
      uVar29 = (ushort)((uVar10 & 0xff) << 8) | (ushort)(uVar10 >> 8);
    }
    goto LAB_ram_4816e98e;
  }
  param_1[0x2e] = 4;
  puVar22 = (undefined1 *)param_1[0x2c];
  iVar26 = param_1[0x27];
  if (uVar10 < 5) {
    if (2 < uVar10) goto LAB_ram_4816eba2;
    if (2 < uVar10 - 2) goto LAB_ram_4816e5d0;
    goto LAB_ram_4816eb84;
  }
  if (uVar10 != 8) goto LAB_ram_4816e5d0;
LAB_ram_4816eba2:
  psVar18 = *(short **)(iVar20 + 0xf8);
  psVar23 = *(short **)(*param_1 + 100);
  local_d0 = 0;
  if ((psVar23 == (short *)0x0) || (psVar18 == (short *)0x0)) {
    iVar20 = -0x5e80;
    goto LAB_ram_4816eb8a;
  }
  sVar25 = *psVar23;
  sVar3 = *psVar18;
  psVar36 = psVar18;
  if (sVar25 != 0) {
    psVar35 = psVar18;
    sVar30 = sVar3;
    if (sVar3 == 0) {
      do {
        psVar18 = psVar23 + 1;
        psVar23 = psVar23 + 1;
      } while (*psVar18 != 0);
    }
    else {
      do {
        do {
          psVar36 = psVar35;
          if (sVar30 == sVar25) goto LAB_ram_4816ebde;
          psVar2 = psVar35 + 1;
          psVar36 = psVar35 + 1;
          psVar35 = psVar36;
          sVar30 = *psVar2;
        } while (*psVar2 != 0);
        sVar25 = psVar23[1];
        psVar23 = psVar23 + 1;
        psVar35 = psVar18;
        sVar30 = sVar3;
      } while (sVar25 != 0);
    }
  }
LAB_ram_4816ebde:
  iVar20 = -0x6e00;
  if (*psVar36 == 0) goto LAB_ram_4816eb8a;
  uVar19 = FUN_ram_4816af3a();
  iVar20 = FUN_ram_481725d4(param_1[0x10] + 0x4c,uVar19);
  if (iVar20 == 0) {
    iVar20 = FUN_ram_48172696(param_1[0x10] + 0x4c,&local_d0,param_1[0x2e] + param_1[0x2c],
                              0x1000 - param_1[0x2e],*(undefined4 *)(*param_1 + 0x20),
                              *(undefined4 *)(*param_1 + 0x24));
    uVar10 = local_d0;
    if (iVar20 == 0) {
      iVar20 = param_1[0x2e];
      puVar40 = (undefined1 *)param_1[0x2c];
      param_1[0x2e] = iVar20 + local_d0;
      if (2 < *(byte *)(iVar45 + 10) - 2) {
LAB_ram_4816ed34:
        puVar22 = puVar40;
        if (uStack_104 != 0) {
          iVar45 = param_1[0x2e];
          param_1[0x2e] = iVar45 + 1;
          puVar40[iVar45] = (char)(uStack_104 >> 8);
          iVar45 = param_1[0x2e];
          param_1[0x2e] = iVar45 + 1;
          *(char *)(param_1[0x2c] + iVar45) = (char)uStack_104;
          param_1[0x2e] = param_1[0x2e] + uStack_104;
          puVar22 = (undefined1 *)param_1[0x2c];
        }
        goto LAB_ram_4816e5d0;
      }
      if (puVar40 + iVar20 != (undefined1 *)0x0) {
        auStack_100[0] = 0;
        iVar45 = FUN_ram_4816f208(iVar45);
        uVar19 = FUN_ram_4816ae48();
        uVar12 = FUN_ram_4816bb06(param_1,uVar19);
        iVar32 = FUN_ram_4816ae6c(uVar12);
        if ((iVar45 != 0) && (iVar32 != 0)) {
          iVar20 = FUN_ram_4816ba5a(param_1,&local_d0,auStack_100,puVar40 + iVar20,uVar10,iVar32);
          if (iVar20 == 0) {
            iVar46 = param_1[0x2e];
            iVar20 = param_1[0x2c];
            param_1[0x2e] = iVar46 + 1;
            uVar12 = FUN_ram_4816aeac(iVar32);
            *(undefined1 *)(iVar20 + iVar46) = uVar12;
            iVar46 = param_1[0x2e];
            iVar20 = param_1[0x2c];
            param_1[0x2e] = iVar46 + 1;
            uVar12 = FUN_ram_4816ae48(iVar45);
            *(undefined1 *)(iVar20 + iVar46) = uVar12;
            iVar45 = *param_1;
            if ((((param_1[0x10] == 0) || (iVar20 = *(int *)(param_1[0x10] + 0xfc), iVar20 == 0)) &&
                (iVar20 = *(int *)(iVar45 + 0x54), iVar20 == 0)) || (*(int *)(iVar20 + 4) == 0)) {
              iVar20 = -0x7600;
              goto LAB_ram_4816eb8a;
            }
            iVar20 = FUN_ram_481773f8(*(int *)(iVar20 + 4),iVar32,&local_d0,auStack_100[0],
                                      param_1[0x2e] + 2 + param_1[0x2c],
                                      (0x114b - param_1[0x2e]) - ((int)puVar22 - iVar26),&uStack_104
                                      ,*(undefined4 *)(iVar45 + 0x20),*(undefined4 *)(iVar45 + 0x24)
                                     );
            if (iVar20 == 0) {
              puVar40 = (undefined1 *)param_1[0x2c];
              goto LAB_ram_4816ed34;
            }
          }
          goto LAB_ram_4816e9ec;
        }
      }
LAB_ram_4816eb84:
      iVar20 = -0x6c00;
      goto LAB_ram_4816eb8a;
    }
  }
LAB_ram_4816e9ec:
  if (iVar20 == -0x6500) {
    return -0x6500;
  }
LAB_ram_4816eb8a:
  param_1[0x2e] = 0;
  return iVar20;
}



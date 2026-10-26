/* Firmware entry: 0x4816d716 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4816d716(int *param_1,undefined4 param_2,int *param_3)

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
  short *psVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  ushort *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 *puVar26;
  short *psVar27;
  undefined4 uVar28;
  short sVar29;
  int extraout_a3;
  uint uVar30;
  undefined4 uVar31;
  ushort uVar32;
  short sVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  short *psVar37;
  short *psVar38;
  undefined4 *puVar39;
  char cVar40;
  int *piVar41;
  uint uVar42;
  undefined1 *puVar43;
  char *pcVar44;
  undefined1 *puVar45;
  uint *puVar46;
  char *pcVar47;
  int iVar48;
  code *pcVar49;
  undefined8 uVar50;
  byte bStack_148;
  byte bStack_147;
  uint uStack_144;
  uint auStack_140 [12];
  undefined4 uStack_110;
  uint auStack_10c [5];
  undefined1 auStack_f8 [120];
  undefined4 auStack_80 [3];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = FUN_ram_4816f1ea(param_2);
  if (iVar14 == 0) {
    return -0x6c00;
  }
  if ((uint)param_1[4] < (uint)*(ushort *)(iVar14 + 0xc)) {
    return 0;
  }
  if ((uint)*(ushort *)(iVar14 + 0xe) < (uint)param_1[4]) {
    return 0;
  }
  iVar15 = FUN_ram_4816f258();
  if (iVar15 != 0) {
    if (*(short **)(param_1[0x10] + 0xf8) == (short *)0x0) {
      return 0;
    }
    if (**(short **)(param_1[0x10] + 0xf8) == 0) {
      return 0;
    }
  }
  iVar15 = FUN_ram_4816f208(iVar14);
  piVar41 = *(int **)(param_1[0x10] + 0x100);
  if (piVar41 == (int *)0x0) {
    if (iVar15 != 0) {
      piVar41 = *(int **)(*param_1 + 0x54);
      goto joined_r0x4816d828;
    }
LAB_ram_4816d80c:
    iVar15 = FUN_ram_4816f23a(iVar14);
    if (iVar15 != 0) {
      uVar19 = FUN_ram_4816ae48();
      iVar15 = FUN_ram_4816bb06(param_1,uVar19);
      if (iVar15 == 0) {
        return 0;
      }
    }
    *param_3 = iVar14;
    return 0;
  }
  if (iVar15 == 0) goto LAB_ram_4816d80c;
LAB_ram_4816d78e:
  uStack_3c = 0;
  iVar16 = FUN_ram_48177194(*piVar41 + 0xcc,iVar15);
  if ((iVar16 == 0) || (iVar16 = FUN_ram_4816bf3c(*piVar41,iVar14,0,0x303,&uStack_3c), iVar16 != 0))
  {
LAB_ram_4816d832:
    piVar41 = (int *)piVar41[2];
joined_r0x4816d828:
    if (piVar41 == (int *)0x0) {
      return 0;
    }
    goto LAB_ram_4816d78e;
  }
  if (iVar15 != 4) {
LAB_ram_4816d7fc:
    *(int **)(param_1[0x10] + 0xfc) = piVar41;
    goto LAB_ram_4816d80c;
  }
  uStack_38 = *(undefined4 *)(*piVar41 + 0xcc);
  piStack_34 = *(int **)(*piVar41 + 0xd0);
  psVar10 = *(short **)(param_1[0x10] + 0xf8);
  iVar16 = FUN_ram_481774c4(&uStack_38);
  piVar17 = (int *)(iVar16 - 2);
  if (piVar17 < (int *)0x3) {
    iVar16 = *piStack_34;
    sVar29 = *psVar10;
    while (sVar29 != 0) {
      iVar18 = FUN_ram_4816af3a();
      if (iVar18 == iVar16) goto LAB_ram_4816d7fc;
      psVar27 = psVar10 + 1;
      psVar10 = psVar10 + 1;
      sVar29 = *psVar27;
    }
    goto LAB_ram_4816d832;
  }
  ebreak();
  iVar14 = *(int *)(iVar16 + 2);
  if (iVar14 == 8) {
    iVar14 = *(int *)(*(int *)(iVar16 + 0x3e) + 0x10);
    iVar15 = FUN_ram_48170c76(piVar17,1);
    if (iVar15 != 0) {
      return iVar15;
    }
    pcVar44 = *(char **)(iVar16 + 0x72);
    iVar15 = *(int *)(iVar16 + 0x86);
    if ((*(int *)(iVar16 + 0x7a) != 0x16) || (*pcVar44 != '\x10')) {
      return -0x7700;
    }
    cVar40 = *(char *)(iVar14 + 10);
    if (((byte)(cVar40 - 3U) < 2) || ((byte)(cVar40 - 9U) < 2)) {
      iVar14 = FUN_ram_481729d4(*(int *)(iVar16 + 0x3e) + 0x4c,pcVar44 + 4,iVar15 + -4);
      if (iVar14 != 0) {
        return -0x7300;
      }
      iVar14 = *(int *)(iVar16 + 0x3e);
      iVar14 = FUN_ram_48172a1c(iVar14 + 0x4c,iVar14 + 0x238,iVar14 + 500,0x400,
                                *(undefined4 *)(*piVar17 + 0x20),*(undefined4 *)(*piVar17 + 0x24));
      if (iVar14 != 0) {
        return -0x7300;
      }
      goto LAB_ram_4816e1f6;
    }
    if (cVar40 != '\x01') {
      return -0x6c00;
    }
    iVar18 = *(int *)(iVar16 + 0x3e);
    uStack_110 = CONCAT22(uStack_110._2_2_,0xffff);
    uStack_144 = 0;
    iVar14 = *piVar17;
    if (iVar18 == 0) {
      piVar41 = *(int **)(iVar14 + 0x54);
      if (piVar41 != (int *)0x0) goto LAB_ram_4816e0c6;
      uVar11 = 0xffff8b80;
    }
    else {
      piVar41 = *(int **)(iVar18 + 0xfc);
      if ((piVar41 != (int *)0x0) || (piVar41 = *(int **)(iVar14 + 0x54), piVar41 != (int *)0x0)) {
LAB_ram_4816e0c6:
        if (*piVar41 != 0) {
          iVar34 = piVar41[1];
          iVar14 = FUN_ram_481774b6(*piVar41 + 0xcc);
          pcVar20 = pcVar44 + 6;
          uVar11 = iVar14 + 7U >> 3;
          if ((((pcVar44 + iVar15 < pcVar20) ||
               ((uint)(byte)pcVar44[4] != (iVar14 + 7U >> 0xb & 0xff))) ||
              ((uint)(byte)pcVar44[5] != (uVar11 & 0xff))) || (pcVar44 + iVar15 != pcVar20 + uVar11)
             ) {
            iVar14 = *piVar17;
            uVar11 = 0xffff8d00;
          }
          else {
            iVar15 = FUN_ram_48177194(iVar34,1);
            iVar14 = *piVar17;
            if (iVar15 == 0) {
              uVar11 = 0xffff8a00;
            }
            else {
              uVar11 = FUN_ram_48177472(iVar34,pcVar20,uVar11,&uStack_110,&uStack_144,0x30,
                                        *(undefined4 *)(iVar14 + 0x20),
                                        *(undefined4 *)(iVar14 + 0x24));
              iVar14 = *piVar17;
            }
          }
          goto LAB_ram_4816e148;
        }
      }
      iVar14 = *piVar17;
      uVar11 = 0xffff8b80;
    }
LAB_ram_4816e148:
    FUN_ram_48171448(&bStack_148,*(undefined1 *)(iVar14 + 9),
                     *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 4));
    uVar35 = uStack_144 ^ 0x30;
    bVar1 = (byte)uStack_110 ^ bStack_148;
    bVar4 = uStack_110._1_1_ ^ bStack_147;
    iVar14 = (**(code **)(*piVar17 + 0x20))(*(undefined4 *)(*piVar17 + 0x24),auStack_140,0x30);
    if (iVar14 != 0) {
      return iVar14;
    }
    *(undefined4 *)(*(int *)(iVar16 + 0x3e) + 0x238) = 0x30;
    FUN_ram_4817248c((int)(-(uint)bVar1 | -(uint)bVar4 | -uVar35 | -uVar11 | -(uVar11 >> 1) |
                           -(uVar35 >> 1) | -(uint)(bVar1 >> 1) | -(uint)(bVar4 >> 1)) >> 0x1f,
                     iVar18 + 500,auStack_140,&uStack_110,0x30);
LAB_ram_4816e1f6:
    iVar14 = FUN_ram_4816b0fa(piVar17);
    if (iVar14 == 0) {
      *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
      return 0;
    }
    return iVar14;
  }
  if (8 < iVar14) {
    if (iVar14 != 0xc) {
      if (0xc < iVar14) {
        if (iVar14 == 0xe) {
          *(undefined4 *)(iVar16 + 2) = 0xf;
          return 0;
        }
        if (iVar14 == 0xf) {
          FUN_ram_4816b758();
          return 0;
        }
        if (iVar14 == 0xd) {
          iVar14 = FUN_ram_4816b80a();
          return iVar14;
        }
        return -0x7100;
      }
      if (iVar14 == 10) {
        iVar14 = FUN_ram_48170fd4();
        return iVar14;
      }
      if (iVar14 == 0xb) {
        iVar14 = FUN_ram_4816b912();
        return iVar14;
      }
      bVar1 = *(byte *)(*(int *)(*(int *)(iVar16 + 0x3e) + 0x10) + 10);
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_ram_4816e2b0;
      }
      else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_4816e2b0;
      if (*(int *)(*(int *)(iVar16 + 0x3a) + 0x68) != 0) {
        iVar14 = FUN_ram_48170c76(piVar17,0);
        if (iVar14 != 0) {
          return iVar14;
        }
        *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
        if ((*(int *)(iVar16 + 0x7a) != 0x16) || (**(char **)(iVar16 + 0x72) != '\x0f')) {
          return -0x7700;
        }
        iVar14 = *(int *)(*(int *)(iVar16 + 0x3a) + 0x68);
        if (iVar14 == 0) {
          return -0x6c00;
        }
        iVar14 = iVar14 + 0xcc;
        if (*(uint *)(iVar16 + 0x86) < 6) {
          return -0x7300;
        }
        iVar15 = FUN_ram_4816ae6c((*(char **)(iVar16 + 0x72))[4]);
        if ((iVar15 != 0) &&
           (iVar18 = FUN_ram_4816b5b6(piVar17,*(undefined1 *)(*(int *)(iVar16 + 0x72) + 4)),
           iVar18 == 0)) {
          puVar12 = auStack_10c + 3;
          if (iVar15 != 5) {
            puVar12 = &uStack_110;
          }
          iVar18 = FUN_ram_4816ae5c(*(undefined1 *)(*(int *)(iVar16 + 0x72) + 5));
          if ((iVar18 != 0) && (iVar18 = FUN_ram_48177194(iVar14,iVar18), iVar18 != 0)) {
            uVar11 = *(uint *)(iVar16 + 0x86);
            if (uVar11 < 8) {
              return -0x7300;
            }
            puVar23 = (ushort *)(*(int *)(iVar16 + 0x72) + 6);
            uVar32 = *puVar23;
            uVar35 = (uVar32 & 0xff) << 8 | (uint)(uVar32 >> 8);
            if (uVar11 != uVar35 + 8) {
              return -0x7300;
            }
            pcVar49 = *(code **)(*(int *)(iVar16 + 0x3e) + 0x18);
            iVar18 = (*pcVar49)(piVar17,&uStack_110,auStack_140,*(undefined1 *)puVar23,uVar11,
                                pcVar49);
            if (iVar18 != 0) {
              return iVar18;
            }
            iVar14 = FUN_ram_4817720e(iVar14,iVar15,puVar12,0,*(int *)(iVar16 + 0x72) + 8,uVar35);
            if (iVar14 == 0) {
              iVar14 = FUN_ram_48170b9e(piVar17);
              return iVar14;
            }
            return iVar14;
          }
        }
        return -0x6600;
      }
LAB_ram_4816e2b0:
      *(undefined4 *)(iVar16 + 2) = 10;
      return 0;
    }
    if (*(char *)(*(int *)(iVar16 + 0x3e) + 4) == '\0') {
      iVar14 = FUN_ram_48170fb4();
      return iVar14;
    }
    *(undefined4 *)(iVar16 + 0xb2) = 0x16;
    **(undefined1 **)(iVar16 + 0xae) = 4;
    iVar14 = *(int *)(iVar16 + 0x3a);
    uVar50 = FUN_ram_4816f10a();
    iVar15 = *(int *)(iVar16 + 0xae);
    pcVar49 = *(code **)(*piVar17 + 0x44);
    uVar19 = *(undefined4 *)(*piVar17 + 0x4c);
    uVar28 = *(undefined4 *)(iVar16 + 0x3a);
    *(undefined8 *)(iVar14 + 0x80) = uVar50;
    iVar14 = (*pcVar49)(uVar19,uVar28,iVar15 + 10,iVar15 + 0x1000,auStack_140,&uStack_110,pcVar49);
    if (iVar14 == 0) {
      iVar14 = auStack_140[0] + 10;
      uVar32 = (ushort)((auStack_140[0] & 0xff) << 8) | (ushort)(auStack_140[0] >> 8) & 0xff;
    }
    else {
      auStack_140[0] = 0;
      iVar14 = 10;
      uVar32 = 0;
    }
    iVar15 = *(int *)(iVar16 + 0xae);
    uVar19 = __bswapsi2(uStack_110);
    *(char *)(iVar15 + 4) = (char)uVar19;
    *(char *)(iVar15 + 6) = (char)((uint)uVar19 >> 0x10);
    *(char *)(iVar15 + 5) = (char)((uint)uVar19 >> 8);
    *(char *)(iVar15 + 7) = (char)((uint)uVar19 >> 0x18);
    iVar15 = *(int *)(iVar16 + 0xae);
    *(char *)(iVar15 + 8) = (char)uVar32;
    *(char *)(iVar15 + 9) = (char)(uVar32 >> 8);
    *(int *)(iVar16 + 0xb6) = iVar14;
    *(undefined1 *)(*(int *)(iVar16 + 0x3e) + 4) = 0;
    goto LAB_ram_4816e036;
  }
  if (iVar14 != 4) {
    if (iVar14 < 5) {
      if (iVar14 == 2) {
        iVar14 = *(int *)(iVar16 + 0xae);
        FUN_ram_48171448(iVar14 + 4,*(undefined1 *)(*piVar17 + 9),*(undefined4 *)(iVar16 + 0xe));
        FUN_ram_4819b728(0);
        uVar11 = __bswapsi2();
        *(char *)(iVar14 + 6) = (char)uVar11;
        *(char *)(iVar14 + 7) = (char)(uVar11 >> 8);
        *(char *)(iVar14 + 8) = (char)(uVar11 >> 0x10);
        *(char *)(iVar14 + 9) = (char)(uVar11 >> 0x18);
        pcVar49 = *(code **)(*piVar17 + 0x20);
        iVar15 = (*pcVar49)(*(undefined4 *)(*piVar17 + 0x24),iVar14 + 10,0x14,uVar11 >> 8,pcVar49);
        if (iVar15 != 0) {
          return iVar15;
        }
        iVar15 = (**(code **)(*piVar17 + 0x20))(*(undefined4 *)(*piVar17 + 0x24),iVar14 + 0x1e,8);
        if (iVar15 != 0) {
          return iVar15;
        }
        FUN_ram_4ff45158(*(int *)(iVar16 + 0x3e) + 0x1d4,iVar14 + 6,0x20);
        cVar40 = **(char **)(iVar16 + 0x3e);
        if (cVar40 == '\x01') goto LAB_ram_4816de44;
        puVar8 = *(undefined4 **)(iVar16 + 0x3a);
        if (((puVar8[5] != 0) && (*(int *)(*piVar17 + 0x28) != 0)) && (*(int *)(iVar16 + 6) == 0)) {
          FUN_ram_4816a416(&uStack_110);
          pcVar49 = *(code **)(*piVar17 + 0x28);
          iVar15 = (*pcVar49)(*(undefined4 *)(*piVar17 + 0x30),puVar8 + 6,puVar8[5],&uStack_110,
                              pcVar49);
          if ((iVar15 == 0) && (puVar8[4] == auStack_10c[3])) {
            FUN_ram_4816abbc(puVar8);
            puVar39 = &uStack_110;
            do {
              uVar19 = *puVar39;
              uVar28 = puVar39[1];
              uVar31 = puVar39[2];
              puVar8[3] = puVar39[3];
              *puVar8 = uVar19;
              puVar8[1] = uVar28;
              puVar8[2] = uVar31;
              puVar39 = puVar39 + 4;
              puVar8 = puVar8 + 4;
            } while (puVar39 != auStack_80);
            memset(&uStack_110,0,0x90);
            **(undefined1 **)(iVar16 + 0x3e) = 1;
          }
          FUN_ram_4816abbc(&uStack_110);
          cVar40 = **(char **)(iVar16 + 0x3e);
        }
        if (cVar40 == '\0') {
          iVar15 = *(int *)(iVar16 + 0x3a);
          *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
          uVar50 = FUN_ram_4819b728(0);
          iVar18 = *(int *)(iVar16 + 0x3e);
          *(undefined8 *)(iVar15 + 8) = uVar50;
          iVar15 = *(int *)(iVar16 + 0x3a);
          if (*(char *)(iVar18 + 4) == '\0') {
            iVar18 = *piVar17;
            *(undefined4 *)(iVar15 + 0x14) = 0x20;
            iVar15 = (**(code **)(iVar18 + 0x20))(*(undefined4 *)(iVar18 + 0x24),iVar15 + 0x18);
            goto joined_r0x4816de52;
          }
          *(undefined4 *)(iVar15 + 0x14) = 0;
          memset((void *)(iVar15 + 0x18),0,0x20);
        }
        else {
LAB_ram_4816de44:
          *(undefined4 *)(iVar16 + 2) = 0xc;
          iVar15 = FUN_ram_4816b0fa(piVar17);
joined_r0x4816de52:
          if (iVar15 != 0) {
            return iVar15;
          }
        }
        iVar15 = 0;
        *(char *)(iVar14 + 0x26) = (char)*(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x14);
        FUN_ram_4ff45158(iVar14 + 0x27,*(int *)(iVar16 + 0x3a) + 0x18,
                         *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x14));
        uVar19 = *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x10);
        puVar45 = (undefined1 *)(iVar14 + 0x27 + *(int *)(*(int *)(iVar16 + 0x3a) + 0x14));
        *puVar45 = (char)((uint)uVar19 >> 8);
        puVar45[2] = 0;
        puVar45[1] = (char)uVar19;
        puVar43 = puVar45 + 3;
        puVar26 = puVar45 + 5;
        if (*(int *)(iVar16 + 0xce) == 1) {
          puVar45[5] = 0xff;
          puVar45[6] = 1;
          iVar15 = *(int *)(iVar16 + 6);
          puVar45[7] = 0;
          puVar26 = puVar45 + 10;
          if (iVar15 == 0) {
            puVar45[8] = 1;
            puVar45[9] = 0;
            iVar15 = 5;
          }
          else {
            puVar45[8] = (char)(*(int *)(iVar16 + 0xd2) << 1) + '\x01';
            puVar45[9] = (char)(*(int *)(iVar16 + 0xd2) << 1);
            iVar15 = FUN_ram_4ff45158(puVar26,iVar16 + 0xe2,*(undefined4 *)(iVar16 + 0xd2));
            iVar15 = FUN_ram_4ff45158(iVar15 + *(int *)(iVar16 + 0xd2),iVar16 + 0xd6);
            iVar15 = (iVar15 + *(int *)(iVar16 + 0xd2)) - (int)(puVar45 + 5);
            puVar26 = puVar43 + iVar15 + 2;
          }
        }
        pcVar44 = *(char **)(iVar16 + 0x3a);
        if (*pcVar44 == '\0') {
          uStack_110 = 0;
        }
        else {
          *puVar26 = 0;
          puVar26[2] = 0;
          puVar26[1] = 1;
          puVar26[3] = 1;
          iVar18 = iVar15 + 7;
          iVar15 = iVar15 + 5;
          puVar26[4] = **(undefined1 **)(iVar16 + 0x3a);
          pcVar44 = *(char **)(iVar16 + 0x3a);
          uStack_110 = 5;
          puVar26 = puVar43 + iVar18;
        }
        iVar18 = FUN_ram_4816f1ea(*(undefined4 *)(pcVar44 + 0x10));
        iVar34 = *(int *)(iVar16 + 0x3a);
        if (iVar18 != 0) {
          iVar18 = FUN_ram_4816a4b0(*(undefined4 *)(iVar34 + 0x88),iVar18);
          iVar34 = *(int *)(iVar16 + 0x3a);
          if (iVar18 == 2) {
            if (*(int *)(iVar34 + 0x88) != 0) {
              iVar18 = iVar15 + 6;
              *puVar26 = 0;
              puVar26[2] = 0;
              puVar26[3] = 0;
              puVar26[1] = 0x16;
              iVar15 = iVar15 + 4;
              puVar26 = puVar43 + iVar18;
            }
            goto LAB_ram_4816dc90;
          }
        }
        *(undefined4 *)(iVar34 + 0x88) = 0;
LAB_ram_4816dc90:
        iVar18 = *(int *)(iVar16 + 0x3e);
        if (*(char *)(iVar18 + 0xc) != '\0') {
          *puVar26 = 0;
          puVar26[2] = 0;
          puVar26[3] = 0;
          puVar26[1] = 0x17;
          iVar18 = *(int *)(iVar16 + 0x3e);
          puVar26 = puVar43 + iVar15 + 6;
          iVar15 = iVar15 + 4;
        }
        uStack_110 = 0;
        if (*(char *)(iVar18 + 4) != '\0') {
          iVar18 = iVar15 + 6;
          *puVar26 = 0;
          puVar26[2] = 0;
          puVar26[3] = 0;
          puVar26[1] = 0x23;
          iVar15 = iVar15 + 4;
          puVar26 = puVar43 + iVar18;
          uStack_110 = 4;
        }
        iVar18 = FUN_ram_4816f1ea(*(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x10));
        if (((iVar18 != 0) && (iVar18 = FUN_ram_4816f258(), iVar18 != 0)) &&
           (uStack_110 = 0, (*(byte *)(*(int *)(iVar16 + 0x3e) + 1) & 1) != 0)) {
          iVar18 = iVar15 + 8;
          puVar26[4] = 1;
          *puVar26 = 0;
          puVar26[2] = 0;
          puVar26[5] = 0;
          puVar26[1] = 0xb;
          puVar26[3] = 2;
          iVar15 = iVar15 + 6;
          puVar26 = puVar43 + iVar18;
          uStack_110 = 6;
        }
        iVar18 = FUN_ram_4816be60(piVar17,puVar26,iVar14 + 0xffc,&uStack_110);
        if (iVar18 == 0) {
          iVar15 = iVar15 + uStack_110;
          if (iVar15 != 0) {
            puVar45[3] = (char)((uint)iVar15 >> 8);
            puVar43 = puVar43 + iVar15 + 2;
            puVar45[4] = (char)((uint)(iVar15 * 0x100) >> 8);
          }
          *(int *)(iVar16 + 0xb6) = (int)puVar43 - iVar14;
          *(undefined4 *)(iVar16 + 0xb2) = 0x16;
          **(undefined1 **)(iVar16 + 0xae) = 2;
          iVar14 = FUN_ram_48170976(piVar17,1);
          return iVar14;
        }
        return iVar18;
      }
      if (iVar14 == 3) {
        iVar14 = FUN_ram_4816b5e8();
        return iVar14;
      }
      if (iVar14 == 0) {
        *(undefined4 *)(iVar16 + 2) = 1;
        return 0;
      }
      if (iVar14 != 1) {
        return -0x7100;
      }
      iVar14 = FUN_ram_48170c76(piVar17,0);
      if (iVar14 != 0) {
        return iVar14;
      }
      iVar14 = FUN_ram_48170b9e(piVar17);
      if (iVar14 != 0) {
        return iVar14;
      }
      pcVar44 = *(char **)(iVar16 + 0x72);
      if ((*(int *)(iVar16 + 0x7a) != 0x16) || (*pcVar44 != '\x01')) {
        return -0x7700;
      }
      pcVar20 = pcVar44 + 4;
      uVar11 = *(int *)(iVar16 + 0x86) - 4;
      if (uVar11 < 0x26) {
        return -0x7300;
      }
      iVar14 = FUN_ram_48171466(pcVar20,*(undefined1 *)(*piVar17 + 9));
      iVar18 = *(int *)(iVar16 + 0x3a);
      iVar15 = *piVar17;
      *(int *)(iVar16 + 0xe) = iVar14;
      *(int *)(iVar18 + 4) = iVar14;
      *(undefined1 *)(iVar18 + 2) = *(undefined1 *)(iVar15 + 8);
      if (iVar14 != 0x303) {
        FUN_ram_48170f7a(piVar17,2,0x46);
        return -0x6e80;
      }
      FUN_ram_4ff45158(*(int *)(iVar16 + 0x3e) + 0x1b4,pcVar44 + 6,0x20);
      uVar35 = (uint)(byte)pcVar44[0x26];
      if ((0x20 < uVar35) || (uVar11 < uVar35 + 0x24)) goto LAB_ram_4816ea1a;
      iVar14 = *(int *)(iVar16 + 0x3a);
      *(uint *)(iVar14 + 0x14) = uVar35;
      memset((void *)(iVar14 + 0x18),0,0x20);
      FUN_ram_4ff45158(*(int *)(iVar16 + 0x3a) + 0x18,pcVar44 + 0x27,
                       *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x14));
      uVar32 = *(ushort *)(pcVar20 + uVar35 + 0x23);
      uVar36 = (uVar32 & 0xff) << 8 | (uint)(uVar32 >> 8);
      if ((uVar36 < 2) ||
         ((iVar14 = uVar35 + 0x23 + uVar36, uVar11 < iVar14 + 3U || ((uVar32 & 0x100) != 0))))
      goto LAB_ram_4816ea1a;
      iVar14 = iVar14 + 2;
      if (0xf < (byte)pcVar20[iVar14] - 1) goto LAB_ram_4816ea1a;
      iVar14 = iVar14 + (uint)(byte)pcVar20[iVar14];
      uVar25 = iVar14 + 1;
      if (uVar11 < uVar25) goto LAB_ram_4816ea1a;
      if (uVar11 <= uVar25) {
        bVar7 = false;
        goto LAB_ram_4816ea82;
      }
      uVar30 = iVar14 + 3;
      if ((uVar11 < uVar30) ||
         (uVar25 = (*(ushort *)(pcVar20 + uVar25) & 0xff) << 8 |
                   (uint)(*(ushort *)(pcVar20 + uVar25) >> 8), uVar11 != uVar30 + uVar25))
      goto LAB_ram_4816ea1a;
      if (uVar25 != 0) {
        bVar7 = false;
        bVar6 = false;
        pcVar44 = pcVar20 + uVar30;
        goto LAB_ram_4816e456;
      }
      bVar7 = false;
      goto LAB_ram_4816ea82;
    }
    if (iVar14 == 6) {
      *(undefined4 *)(iVar16 + 0xb6) = 4;
      *(undefined4 *)(iVar16 + 0xb2) = 0x16;
      **(undefined1 **)(iVar16 + 0xae) = 0xe;
      *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
      goto LAB_ram_4816df66;
    }
    if (iVar14 == 7) {
      cVar40 = *(char *)(*(int *)(iVar16 + 0x3e) + 2);
      if (cVar40 == '\x03') {
        cVar40 = *(char *)(*piVar17 + 10);
      }
      uVar11 = (uint)*(byte *)(*(int *)(*(int *)(iVar16 + 0x3e) + 0x10) + 10);
      if ((10 < uVar11) || ((0x69eU >> (uVar11 & 0x1f) & 1) == 0)) {
        *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x6c) = 0;
        goto LAB_ram_4816c42e;
      }
      if (*(char *)(*piVar17 + 8) == '\x01') {
        if (uVar11 == 7) goto LAB_ram_4816c42e;
        if (cVar40 == '\0') {
          *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x6c) = 0x80;
          goto LAB_ram_4816c42e;
        }
      }
      iVar14 = FUN_ram_48170c76(piVar17,1);
      if (iVar14 != 0) {
        return iVar14;
      }
      iVar14 = *(int *)(iVar16 + 0x3a);
      if (((*(char *)(*piVar17 + 8) != '\0') && (*(int *)(iVar16 + 0x86) == 7)) &&
         ((*(int *)(iVar16 + 0x7a) == 0x16 &&
          ((((pcVar44 = *(char **)(iVar16 + 0x72), *pcVar44 == '\v' && (pcVar44[4] == '\0')) &&
            (pcVar44[5] == '\0')) && (pcVar44[6] == '\0')))))) {
        *(undefined4 *)(iVar14 + 0x6c) = 0x40;
        if (cVar40 != '\x01') {
          return -0x7480;
        }
        goto LAB_ram_4816c42e;
      }
      if (*(int *)(iVar14 + 0x68) != 0) {
        FUN_ram_48189290();
        thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar14 + 0x68));
        *(undefined4 *)(iVar14 + 0x68) = 0;
      }
      iVar14 = thunk_FUN_ram_4817b126(1,0x198);
      if (iVar14 == 0) {
        FUN_ram_48170f7a(piVar17,2,0x50);
        return -0x7f00;
      }
      FUN_ram_48189282();
      if ((*(int *)(iVar16 + 0x7a) != 0x16) ||
         (pcVar44 = *(char **)(iVar16 + 0x72), *pcVar44 != '\v')) {
        FUN_ram_48170f7a(piVar17,2,10);
        iVar15 = -0x7700;
        goto LAB_ram_4816c40c;
      }
      uVar11 = *(uint *)(iVar16 + 0x86);
      if (((uVar11 < 10) || (pcVar44[4] != '\0')) ||
         (uVar11 != ((uint)(*(ushort *)(pcVar44 + 5) >> 8) | (*(ushort *)(pcVar44 + 5) & 0xff) << 8)
                    + 7)) goto LAB_ram_4816c51e;
      uVar35 = 7;
      iVar18 = 0;
      goto LAB_ram_4816c38a;
    }
    iVar14 = *(int *)(*(int *)(iVar16 + 0x3e) + 0x10);
    *(undefined4 *)(iVar16 + 2) = 6;
    cVar40 = *(char *)(*(int *)(iVar16 + 0x3e) + 2);
    param_1 = *(int **)(iVar16 + 0xae);
    if (cVar40 == '\x03') {
      cVar40 = *(char *)(*piVar17 + 10);
    }
    bVar1 = *(byte *)(iVar14 + 10);
    if (bVar1 < 5) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else if (1 < (byte)(bVar1 - 9)) {
      return 0;
    }
    if (cVar40 == '\0') {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 5) = 1;
    *(undefined1 *)((int)param_1 + 6) = 0x40;
    *(undefined1 *)(param_1 + 1) = 2;
    puVar23 = *(ushort **)(*piVar17 + 0x60);
    if (puVar23 == (ushort *)0x0) {
      return -0x5e80;
    }
    uVar32 = *puVar23;
    uVar11 = (uint)uVar32;
    if (uVar11 == 0) {
      param_3 = (int *)0x9;
      iVar15 = 4;
    }
    else {
      uVar35 = 0;
      do {
        iVar14 = FUN_ram_4816b5b6(piVar17,uVar11 >> 8);
        uVar36 = uVar35;
        if (((iVar14 == 0) && (*(int *)(iVar16 + 0xe) == 0x303)) &&
           ((uVar32 = *puVar23, (uVar32 >> 8) - 1 < 6 && ((uVar32 & 0xfd) == 1)))) {
          uVar36 = uVar35 + 2;
          puVar26 = (undefined1 *)((int)param_1 + uVar35 + 9);
          puVar26[1] = (char)uVar32;
          *puVar26 = (char)(uVar32 >> 8);
        }
        uVar11 = (uint)puVar23[1];
        puVar23 = puVar23 + 1;
        uVar35 = uVar36;
      } while (uVar11 != 0);
      iVar15 = uVar36 + 4;
      uVar32 = (ushort)((uVar36 & 0xff) << 8) | (ushort)(uVar36 >> 8) & 0xff;
      param_3 = (int *)(uVar36 + 9);
    }
    *(char *)(param_1 + 2) = (char)(uVar32 >> 8);
    *(char *)((int)param_1 + 7) = (char)uVar32;
    iVar14 = *piVar17;
    piVar41 = (int *)((int)param_1 + iVar15 + 7);
    uVar32 = 0;
    uVar11 = 0;
    if (*(char *)(iVar14 + 0x11) == '\x01') {
LAB_ram_4816eae0:
      uVar32 = (ushort)uVar11;
      iVar15 = *(int *)(*(int *)(iVar16 + 0x3e) + 0x244);
      if ((((iVar15 != 0) || (iVar15 = *(int *)(iVar14 + 0x88), iVar15 != 0)) ||
          (iVar15 = *(int *)(*(int *)(iVar16 + 0x3e) + 0x104), iVar15 != 0)) ||
         (iVar15 = *(int *)(iVar14 + 0x58), iVar15 != 0)) {
        uVar11 = 0;
        while (*(int *)(iVar15 + 0x1c) != 0) {
          uVar32 = *(ushort *)(iVar15 + 0x48);
          uVar35 = (uint)uVar32;
          if ((param_1 + 0x400 < piVar41) ||
             ((uint)((int)(param_1 + 0x400) - (int)piVar41) < uVar35 + 2)) break;
          *(char *)piVar41 = (char)(uVar32 >> 8);
          *(char *)((int)piVar41 + 1) = (char)uVar32;
          iVar14 = FUN_ram_4ff45158((undefined1 *)((int)piVar41 + 2),*(undefined4 *)(iVar15 + 0x4c),
                                    uVar35);
          iVar15 = *(int *)(iVar15 + 0x194);
          uVar11 = uVar11 + 2 + uVar35 & 0xffff;
          piVar41 = (int *)(iVar14 + uVar35);
          if (iVar15 == 0) break;
        }
        uVar32 = (ushort)((uVar11 & 0xff) << 8) | (ushort)(uVar11 >> 8);
      }
    }
    *(int *)(iVar16 + 0xb6) = (int)piVar41 - (int)param_1;
    *(undefined4 *)(iVar16 + 0xb2) = 0x16;
    **(undefined1 **)(iVar16 + 0xae) = 0xd;
    puVar26 = (undefined1 *)(*(int *)(iVar16 + 0xae) + (int)param_3);
    *puVar26 = (char)uVar32;
    puVar26[1] = (char)(uVar32 >> 8);
LAB_ram_4816df66:
    iVar14 = FUN_ram_48170976(piVar17,1);
    return iVar14;
  }
  iVar15 = *(int *)(iVar16 + 0x3e);
  uStack_144 = 0;
  iVar14 = *(int *)(iVar15 + 0x10);
  uVar11 = (uint)*(byte *)(iVar14 + 10);
  if (10 < uVar11) {
    *(undefined4 *)(iVar16 + 0xb6) = 4;
    puVar26 = *(undefined1 **)(iVar16 + 0xae);
    goto LAB_ram_4816e5d0;
  }
  if ((0x6a2U >> (uVar11 & 0x1f) & 1) != 0) {
    iVar14 = 4;
    if (uVar11 - 9 < 2) {
      iVar14 = *(int *)(iVar15 + 0xfc);
      if (((iVar14 == 0) && (iVar14 = *(int *)(*piVar17 + 0x54), iVar14 == 0)) ||
         (*(int *)(iVar14 + 4) == 0)) {
        return -0x7600;
      }
      iVar14 = FUN_ram_48177194(*(int *)(iVar14 + 4),2);
      if (iVar14 == 0) {
        return -0x6d00;
      }
      iVar14 = *(int *)(iVar16 + 0x3e);
      if (((iVar14 == 0) || (iVar15 = *(int *)(iVar14 + 0xfc), iVar15 == 0)) &&
         (iVar15 = *(int *)(*piVar17 + 0x54), iVar15 == 0)) {
        uStack_110 = uRam00000000;
        ebreak();
        iVar14 = extraout_a3;
        uVar11 = uRam00000000;
        piVar41 = piRam00000004;
        goto LAB_ram_4816eae0;
      }
      uStack_110 = **(uint **)(iVar15 + 4);
      auStack_10c[0] = (*(uint **)(iVar15 + 4))[1];
      iVar15 = FUN_ram_481774c4(&uStack_110);
      uVar11 = 0;
      if (iVar15 - 2U < 3) {
        uVar11 = auStack_10c[0];
      }
      iVar14 = FUN_ram_48172830(iVar14 + 0x4c,uVar11,0);
      if (iVar14 != 0) {
        return iVar14;
      }
      iVar14 = *(int *)(iVar16 + 2);
    }
    *(int *)(iVar16 + 2) = iVar14 + 1;
    return 0;
  }
  *(undefined4 *)(iVar16 + 0xb6) = 4;
  puVar43 = *(undefined1 **)(iVar16 + 0xae);
  iVar18 = *(int *)(iVar16 + 0x9a);
  puVar26 = puVar43;
  if (uVar11 < 5) {
    if (uVar11 < 3) {
      if (uVar11 - 2 < 3) goto LAB_ram_4816eb84;
      goto LAB_ram_4816e5d0;
    }
  }
  else if (uVar11 != 8) goto LAB_ram_4816e5d0;
  psVar10 = *(short **)(iVar15 + 0xf8);
  psVar27 = *(short **)(*piVar17 + 100);
  uStack_110 = 0;
  if ((psVar27 == (short *)0x0) || (psVar10 == (short *)0x0)) {
    iVar15 = -0x5e80;
    goto LAB_ram_4816eb8a;
  }
  sVar29 = *psVar27;
  sVar3 = *psVar10;
  psVar38 = psVar10;
  if (sVar29 == 0) goto LAB_ram_4816ebde;
  psVar37 = psVar10;
  sVar33 = sVar3;
  if (sVar3 != 0) goto LAB_ram_4816ebca;
  do {
    psVar10 = psVar27 + 1;
    psVar27 = psVar27 + 1;
  } while (*psVar10 != 0);
  goto LAB_ram_4816ebde;
LAB_ram_4816c51e:
  FUN_ram_48170f7a(piVar17,2,0x32);
  iVar15 = -0x7300;
  goto LAB_ram_4816c40c;
LAB_ram_4816e456:
  do {
    if (uVar25 < 4) {
LAB_ram_4816ea1a:
      FUN_ram_48170f7a(piVar17,2,0x32);
      return -0x7300;
    }
    puVar5 = *(undefined **)pcVar44;
    uVar30 = (uint)(*(ushort *)(pcVar44 + 2) >> 8) | (*(ushort *)(pcVar44 + 2) & 0xff) << 8;
    uVar11 = uVar30 + 4;
    uVar32 = (short)puVar5 << 8 | (ushort)puVar5 >> 8;
    if (uVar25 < uVar11) goto LAB_ram_4816ea1a;
    if (puVar5 == (undefined *)0x1000) {
      iVar14 = FUN_ram_4816bd14(piVar17,pcVar44 + 4,pcVar44 + uVar11);
joined_r0x4816e91a:
      pcVar47 = pcVar44 + uVar11;
      if (iVar14 != 0) {
        return iVar14;
      }
    }
    else if (uVar32 < 0x11) {
      if (puVar5 == &mcycle) {
        if (uVar30 < 2) goto LAB_ram_4816ea1a;
        uVar32 = *(ushort *)(pcVar44 + 4);
        uVar24 = (uVar32 & 0xff) << 8 | (uint)(uVar32 >> 8);
        if ((uVar30 != uVar24 + 2) || ((uVar32 & 0x100) != 0)) goto LAB_ram_4816ea1a;
        if (*(int *)(*(int *)(iVar16 + 0x3e) + 0xf8) != 0) {
LAB_ram_4816efd6:
          FUN_ram_48170f7a(piVar17,2,0x2f);
          return -0x6600;
        }
        uVar42 = (uVar24 >> 1) + 1;
        if (0xe < uVar42) {
          uVar42 = 0xe;
        }
        puVar23 = (ushort *)thunk_FUN_ram_4817b126(uVar42,2);
        if (puVar23 == (ushort *)0x0) {
          FUN_ram_48170f7a(piVar17,2,0x50);
          return -0x7f00;
        }
        pcVar47 = pcVar44 + uVar11;
        iVar14 = uVar24 + 6;
        *(ushort **)(*(int *)(iVar16 + 0x3e) + 0xf8) = puVar23;
        if (uVar24 != 0) {
          while (uVar42 != 1) {
            while( true ) {
              uVar32 = *(ushort *)(pcVar44 + (iVar14 - uVar24)) >> 8 |
                       *(ushort *)(pcVar44 + (iVar14 - uVar24)) << 8;
              iVar15 = FUN_ram_4816af3a(uVar32);
              if (iVar15 != 0) break;
              uVar24 = uVar24 - 2;
              if (uVar24 == 0) goto LAB_ram_4816e4d6;
            }
            *puVar23 = uVar32;
            uVar24 = uVar24 - 2;
            puVar23 = puVar23 + 1;
            uVar42 = uVar42 - 1;
            if (uVar24 == 0) break;
          }
        }
      }
      else if (uVar32 < 0xb) {
        if (puVar5 == (undefined *)0x0) {
          iVar14 = FUN_ram_4816bc46(piVar17,pcVar44 + 4,pcVar44 + uVar11);
          goto joined_r0x4816e91a;
        }
        if (puVar5 != (undefined *)0x100) goto LAB_ram_4816e750;
        if ((uVar30 != 1) || (4 < (byte)pcVar44[4])) goto LAB_ram_4816efd6;
        pcVar47 = pcVar44 + 5;
        **(byte **)(iVar16 + 0x3a) = pcVar44[4];
      }
      else if (puVar5 == &DAT_csreg_0b00) {
        iVar14 = *(int *)(iVar16 + 0x3e);
        *(byte *)(iVar14 + 1) = *(byte *)(iVar14 + 1) | 1;
        if ((uVar30 == 0) || (uVar24 = (uint)(byte)pcVar44[4], uVar24 + 1 != uVar30))
        goto LAB_ram_4816ea1a;
        pbVar21 = (byte *)(pcVar44 + 5);
        pcVar47 = pcVar44 + uVar11;
        if (uVar24 != 0) {
          pbVar22 = pbVar21 + uVar24;
          do {
            if (*pbVar21 < 2) {
              *(byte *)(iVar14 + 0x4c) = *pbVar21;
              break;
            }
            pbVar21 = pbVar21 + 1;
          } while (pbVar21 != pbVar22);
        }
      }
      else {
        if (puVar5 != (undefined *)0xd00) goto LAB_ram_4816e750;
        pcVar47 = pcVar44 + uVar11;
        iVar14 = FUN_ram_4816afa8(piVar17,pcVar44 + 4,pcVar47);
        if (iVar14 != 0) {
          return iVar14;
        }
        bVar6 = true;
      }
    }
    else if (puVar5 == (undefined *)0x2300) {
      FUN_ram_4816a416(&uStack_110);
      iVar14 = *piVar17;
      pcVar49 = *(code **)(iVar14 + 0x48);
      if ((((pcVar49 != (code *)0x0) && (*(int *)(iVar14 + 0x44) != 0)) &&
          (*(undefined1 *)(*(int *)(iVar16 + 0x3e) + 4) = 1, uVar30 != 0)) &&
         (*(int *)(iVar16 + 6) == 0)) {
        iVar14 = (*pcVar49)(*(undefined4 *)(iVar14 + 0x4c),&uStack_110,pcVar44 + 4,uVar30);
        if (iVar14 != 0) {
          FUN_ram_4816abbc(&uStack_110);
          pcVar47 = pcVar44 + uVar11;
          goto LAB_ram_4816e4d6;
        }
        iVar14 = *(int *)(iVar16 + 0x3a);
        auStack_10c[4] = *(undefined4 *)(iVar14 + 0x14);
        FUN_ram_4ff45158(auStack_f8,iVar14 + 0x18);
        FUN_ram_4816abbc(iVar14);
        FUN_ram_4ff45158(*(undefined4 *)(iVar16 + 0x3a),&uStack_110,0x90);
        FUN_ram_48178af2(&uStack_110,0x90);
        puVar26 = *(undefined1 **)(iVar16 + 0x3e);
        puVar26[4] = 0;
        *puVar26 = 1;
      }
LAB_ram_4816e750:
      pcVar47 = pcVar44 + uVar11;
    }
    else if (uVar32 < 0x24) {
      if (puVar5 == (undefined *)0x1600) {
        if (uVar30 != 0) goto LAB_ram_4816ea1a;
        if (*(char *)(*piVar17 + 0xd) == '\x01') {
          pcVar47 = pcVar44 + 4;
          *(undefined4 *)(*(int *)(iVar16 + 0x3a) + 0x88) = 1;
        }
        else {
LAB_ram_4816e68c:
          pcVar47 = pcVar44 + 4;
        }
      }
      else {
        if (puVar5 != (undefined *)0x1700) goto LAB_ram_4816e750;
        if (uVar30 != 0) goto LAB_ram_4816ea1a;
        if (*(char *)(*piVar17 + 0xe) != '\x01') goto LAB_ram_4816e68c;
        pcVar47 = pcVar44 + 4;
        *(undefined1 *)(*(int *)(iVar16 + 0x3e) + 0xc) = 1;
      }
    }
    else {
      if (puVar5 != (undefined *)0x1ff) goto LAB_ram_4816e750;
      bVar7 = true;
      if (*(int *)(iVar16 + 6) == 0) {
        if ((uVar30 != 1) || (pcVar44[4] != '\0')) goto LAB_ram_4816edf2;
        *(undefined4 *)(iVar16 + 0xce) = 1;
        pcVar47 = pcVar44 + 5;
      }
      else {
        if (((uVar30 != *(uint *)(iVar16 + 0xd2) + 1) ||
            (*(uint *)(iVar16 + 0xd2) != (uint)(byte)pcVar44[4])) ||
           (iVar14 = FUN_ram_481723ca(pcVar44 + 5,iVar16 + 0xe2), iVar14 != 0))
        goto LAB_ram_4816edf2;
        pcVar47 = pcVar44 + uVar11;
      }
    }
LAB_ram_4816e4d6:
    uVar11 = uVar25 - 4;
    uVar25 = uVar11 - uVar30;
    pcVar44 = pcVar47;
  } while (uVar11 != uVar30);
  if (!bVar6) {
LAB_ram_4816ea82:
    iVar14 = *(int *)(iVar16 + 0x3e);
    auStack_10c[0] = auStack_10c[0] & 0xffff0000;
    uStack_110 = 0x2010203;
    *(undefined1 *)(iVar14 + 0x24) = 3;
    *(undefined1 *)(iVar14 + 0x28) = 0;
    *(undefined1 *)(iVar14 + 0x29) = 0;
    *(undefined1 *)(iVar14 + 0x25) = 2;
    *(undefined1 *)(iVar14 + 0x26) = 1;
    *(undefined1 *)(iVar14 + 0x27) = 2;
  }
  uVar11 = 0;
  puVar9 = (ushort *)(pcVar20 + uVar35 + 0x25);
  puVar23 = puVar9;
  do {
    if (((char)*puVar23 == '\0') && (*(char *)((int)puVar23 + 1) == -1)) {
      if (*(int *)(iVar16 + 6) == 1) goto LAB_ram_4816edf2;
      *(undefined4 *)(iVar16 + 0xce) = 1;
      goto LAB_ram_4816eef0;
    }
    uVar11 = uVar11 + 2;
    puVar23 = puVar23 + 1;
  } while (uVar11 < uVar36);
  if (*(int *)(iVar16 + 0xce) == 1) {
    if (*(int *)(iVar16 + 6) == 1) {
      if (!bVar7) goto LAB_ram_4816edf2;
      iVar14 = *piVar17;
    }
    else {
LAB_ram_4816eef0:
      iVar14 = *piVar17;
    }
  }
  else {
    iVar14 = *piVar17;
    if ((*(char *)(iVar14 + 0xb) == '\x02') ||
       (((*(int *)(iVar16 + 6) == 1 && (*(int *)(iVar16 + 0xce) == 0)) &&
        ((*(char *)(iVar14 + 0xb) == '\0' || (bVar7)))))) goto LAB_ram_4816edf2;
  }
  if (*(code **)(iVar14 + 0x84) != (code *)0x0) {
    iVar14 = (**(code **)(iVar14 + 0x84))(piVar17);
    if (iVar14 != 0) {
      return iVar14;
    }
    iVar14 = *piVar17;
  }
  iVar15 = *(int *)(iVar16 + 0x3e);
  puVar12 = *(uint **)(iVar14 + 0x14);
  *(undefined4 *)(iVar15 + 0x23c) = 0;
  *(undefined4 *)(iVar15 + 0x240) = 0;
  uStack_110 = 0;
  if (*(char *)(iVar14 + 0x12) == '\x01') {
    uVar11 = 0;
    do {
      iVar14 = 0;
      uVar35 = *puVar12;
      puVar46 = puVar12;
      while (uVar35 != 0) {
        puVar46 = puVar46 + 1;
        if (((uint)(*(ushort *)((int)puVar9 + uVar11) >> 8) |
            (*(ushort *)((int)puVar9 + uVar11) & 0xff) << 8) == uVar35) {
          iVar15 = FUN_ram_4816d716(piVar17,uVar35,&uStack_110);
          if (iVar15 != 0) {
            return -0x6c00;
          }
          if (uStack_110 != 0) goto LAB_ram_4816e5fc;
        }
        iVar14 = iVar14 + 1;
        uVar35 = *puVar46;
      }
      uVar11 = uVar11 + 2;
    } while (uVar11 < uVar36);
  }
  else {
    uVar11 = *puVar12;
    if (uVar11 != 0) {
      iVar14 = 0;
      puVar23 = puVar9;
      puVar46 = puVar12;
LAB_ram_4816e594:
      do {
        if (((uint)(*puVar23 >> 8) | (*puVar23 & 0xff) << 8) == uVar11) {
          iVar15 = FUN_ram_4816d716(piVar17,uVar11,&uStack_110);
          if (iVar15 != 0) {
            return -0x6c00;
          }
          if (uStack_110 != 0) {
LAB_ram_4816e5fc:
            iVar18 = *(int *)(iVar16 + 2);
            iVar15 = *(int *)(iVar16 + 0x3e);
            *(uint *)(*(int *)(iVar16 + 0x3a) + 0x10) = puVar12[iVar14];
            *(uint *)(iVar15 + 0x10) = uStack_110;
            *(int *)(iVar16 + 2) = iVar18 + 1;
            return 0;
          }
        }
        if (puVar23 != (ushort *)((uVar36 - 1 & 0xfffffffe) + (int)puVar9)) {
          uVar11 = *puVar46;
          puVar23 = puVar23 + 1;
          goto LAB_ram_4816e594;
        }
        uVar11 = puVar46[1];
        puVar46 = puVar46 + 1;
        iVar14 = iVar14 + 1;
        puVar23 = puVar9;
      } while (uVar11 != 0);
    }
  }
LAB_ram_4816edf2:
  FUN_ram_48170f7a(piVar17,2,0x28);
  return -0x6e00;
LAB_ram_4816c38a:
  do {
    uVar36 = uVar35 + 3;
    if (uVar11 < uVar36) goto LAB_ram_4816c51e;
    iVar15 = *(int *)(iVar16 + 0x72);
    if (*(char *)(uVar35 + iVar15) != '\0') {
      FUN_ram_48170f7a(piVar17,2,0x2b);
LAB_ram_4816c548:
      iVar15 = -0x7a00;
      goto LAB_ram_4816c40c;
    }
    uVar32 = *(ushort *)((char *)(uVar35 + iVar15) + 1);
    uVar25 = (uVar32 & 0xff) << 8 | (uint)(uVar32 >> 8);
    if ((uVar25 < 0x80) || (uVar35 = uVar36 + uVar25, uVar11 < uVar35)) goto LAB_ram_4816c51e;
    if (((iVar18 == 0) && (*(char *)(*piVar17 + 8) == '\0')) && (*(int *)(iVar16 + 6) == 1)) {
      iVar48 = *(int *)(iVar16 + 0x36);
      iVar34 = *(int *)(iVar48 + 0x68);
      if (((iVar34 == 0) || (uVar25 != *(uint *)(iVar34 + 8))) ||
         (iVar15 = FUN_ram_4ff4511a(*(undefined4 *)(iVar34 + 0xc),iVar15 + uVar36), iVar15 != 0)) {
        FUN_ram_48170f7a(piVar17,2,0x31);
        goto LAB_ram_4816c548;
      }
      FUN_ram_48189290(iVar34);
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar48 + 0x68));
      iVar15 = *(int *)(iVar16 + 0x72);
      *(undefined4 *)(iVar48 + 0x68) = 0;
    }
    iVar15 = FUN_ram_48189d0e(iVar14,iVar15 + uVar36,uVar25);
    if (iVar15 == -0x2580) {
      uVar19 = 0x2b;
LAB_ram_4816c3fa:
      FUN_ram_48170f7a(piVar17,2,uVar19);
      goto LAB_ram_4816c40c;
    }
    if (iVar15 < -0x257f) {
      if (iVar15 == -0x2880) {
        uVar19 = 0x50;
        goto LAB_ram_4816c3fa;
      }
      if (iVar15 != -0x262e) goto LAB_ram_4816c4b6;
    }
    else if (iVar15 != 0) {
LAB_ram_4816c4b6:
      uVar19 = 0x2a;
      goto LAB_ram_4816c3fa;
    }
    uVar11 = *(uint *)(iVar16 + 0x86);
    iVar18 = iVar18 + 1;
  } while (uVar35 < uVar11);
  iVar15 = FUN_ram_4816c054(piVar17,cVar40,iVar14,*(undefined4 *)(*(int *)(iVar16 + 0x3e) + 0x10),0)
  ;
  if (iVar15 == 0) {
    *(int *)(*(int *)(iVar16 + 0x3a) + 0x68) = iVar14;
LAB_ram_4816c42e:
    *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
    return 0;
  }
LAB_ram_4816c40c:
  FUN_ram_48189290(iVar14);
  thunk_FUN_ram_4ff209c6(iVar14);
  return iVar15;
  while( true ) {
    sVar29 = psVar27[1];
    psVar27 = psVar27 + 1;
    psVar37 = psVar10;
    sVar33 = sVar3;
    if (sVar29 == 0) break;
LAB_ram_4816ebca:
    do {
      psVar38 = psVar37;
      if (sVar33 == sVar29) goto LAB_ram_4816ebde;
      psVar2 = psVar37 + 1;
      psVar38 = psVar37 + 1;
      psVar37 = psVar38;
      sVar33 = *psVar2;
    } while (*psVar2 != 0);
  }
LAB_ram_4816ebde:
  iVar15 = -0x6e00;
  if (*psVar38 == 0) goto LAB_ram_4816eb8a;
  uVar19 = FUN_ram_4816af3a();
  iVar15 = FUN_ram_481725d4(*(int *)(iVar16 + 0x3e) + 0x4c,uVar19);
  if (iVar15 == 0) {
    iVar15 = FUN_ram_48172696(*(int *)(iVar16 + 0x3e) + 0x4c,&uStack_110,
                              *(int *)(iVar16 + 0xb6) + *(int *)(iVar16 + 0xae),
                              0x1000 - *(int *)(iVar16 + 0xb6),*(undefined4 *)(*piVar17 + 0x20),
                              *(undefined4 *)(*piVar17 + 0x24));
    uVar11 = uStack_110;
    if (iVar15 == 0) {
      iVar15 = *(int *)(iVar16 + 0xb6);
      puVar26 = *(undefined1 **)(iVar16 + 0xae);
      *(uint *)(iVar16 + 0xb6) = iVar15 + uStack_110;
      if (2 < *(byte *)(iVar14 + 10) - 2) {
LAB_ram_4816ed34:
        if (uStack_144 != 0) {
          iVar14 = *(int *)(iVar16 + 0xb6);
          *(int *)(iVar16 + 0xb6) = iVar14 + 1;
          puVar26[iVar14] = (char)(uStack_144 >> 8);
          iVar14 = *(int *)(iVar16 + 0xb6);
          *(int *)(iVar16 + 0xb6) = iVar14 + 1;
          *(char *)(*(int *)(iVar16 + 0xae) + iVar14) = (char)uStack_144;
          *(uint *)(iVar16 + 0xb6) = *(int *)(iVar16 + 0xb6) + uStack_144;
          puVar26 = *(undefined1 **)(iVar16 + 0xae);
        }
LAB_ram_4816e5d0:
        *(undefined4 *)(iVar16 + 0xb2) = 0x16;
        *puVar26 = 0xc;
        *(int *)(iVar16 + 2) = *(int *)(iVar16 + 2) + 1;
LAB_ram_4816e036:
        iVar14 = FUN_ram_48170976(piVar17,1);
        return iVar14;
      }
      if (puVar26 + iVar15 != (undefined1 *)0x0) {
        auStack_140[0] = 0;
        iVar14 = FUN_ram_4816f208(iVar14);
        uVar19 = FUN_ram_4816ae48();
        uVar13 = FUN_ram_4816bb06(piVar17,uVar19);
        iVar34 = FUN_ram_4816ae6c(uVar13);
        if ((iVar14 != 0) && (iVar34 != 0)) {
          iVar15 = FUN_ram_4816ba5a(piVar17,&uStack_110,auStack_140,puVar26 + iVar15,uVar11,iVar34);
          if (iVar15 == 0) {
            iVar48 = *(int *)(iVar16 + 0xb6);
            iVar15 = *(int *)(iVar16 + 0xae);
            *(int *)(iVar16 + 0xb6) = iVar48 + 1;
            uVar13 = FUN_ram_4816aeac(iVar34);
            *(undefined1 *)(iVar15 + iVar48) = uVar13;
            iVar48 = *(int *)(iVar16 + 0xb6);
            iVar15 = *(int *)(iVar16 + 0xae);
            *(int *)(iVar16 + 0xb6) = iVar48 + 1;
            uVar13 = FUN_ram_4816ae48(iVar14);
            *(undefined1 *)(iVar15 + iVar48) = uVar13;
            iVar14 = *piVar17;
            if ((((*(int *)(iVar16 + 0x3e) == 0) ||
                 (iVar15 = *(int *)(*(int *)(iVar16 + 0x3e) + 0xfc), iVar15 == 0)) &&
                (iVar15 = *(int *)(iVar14 + 0x54), iVar15 == 0)) || (*(int *)(iVar15 + 4) == 0)) {
              iVar15 = -0x7600;
              goto LAB_ram_4816eb8a;
            }
            iVar15 = FUN_ram_481773f8(*(int *)(iVar15 + 4),iVar34,&uStack_110,auStack_140[0],
                                      *(int *)(iVar16 + 0xb6) + 2 + *(int *)(iVar16 + 0xae),
                                      (0x114b - *(int *)(iVar16 + 0xb6)) - ((int)puVar43 - iVar18),
                                      &uStack_144,*(undefined4 *)(iVar14 + 0x20),
                                      *(undefined4 *)(iVar14 + 0x24));
            if (iVar15 == 0) {
              puVar26 = *(undefined1 **)(iVar16 + 0xae);
              goto LAB_ram_4816ed34;
            }
          }
          goto LAB_ram_4816e9ec;
        }
      }
LAB_ram_4816eb84:
      iVar15 = -0x6c00;
      goto LAB_ram_4816eb8a;
    }
  }
LAB_ram_4816e9ec:
  if (iVar15 == -0x6500) {
    return -0x6500;
  }
LAB_ram_4816eb8a:
  *(undefined4 *)(iVar16 + 0xb6) = 0;
  return iVar15;
}



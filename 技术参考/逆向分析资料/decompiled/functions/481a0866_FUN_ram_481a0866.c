/* Firmware entry: 0x481a0866 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_481a0866(undefined4 *param_1,int *param_2,byte *param_3,uint *param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  char cVar20;
  undefined4 *puVar21;
  size_t sVar22;
  int iVar23;
  int iVar24;
  short *psVar25;
  char *pcVar26;
  longlong *plVar27;
  undefined4 uVar28;
  ushort *puVar29;
  uint *puVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  char *pcVar35;
  int iVar36;
  char *pcVar37;
  int *piVar38;
  undefined2 *puVar39;
  undefined1 *puVar40;
  undefined1 uVar41;
  byte bVar42;
  char *__s;
  byte *pbVar43;
  byte *pbVar44;
  size_t sVar45;
  size_t sVar46;
  uint uVar47;
  byte *pbVar48;
  size_t sVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  longlong lVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  byte *pbStack_474;
  undefined4 uStack_470;
  byte *pbStack_46c;
  uint uStack_468;
  byte *pbStack_464;
  uint uStack_460;
  int iStack_458;
  size_t sStack_454;
  size_t sStack_450;
  int iStack_448;
  char *pcStack_440;
  char *pcStack_43c;
  uint *apuStack_3a4 [3];
  char cStack_395;
  undefined2 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  size_t sStack_388;
  undefined1 auStack_384 [4];
  char cStack_380;
  undefined1 uStack_37f;
  char local_37e [6];
  byte *pbStack_378;
  char local_373 [3];
  undefined4 uStack_370;
  int iStack_36c;
  int iStack_368;
  int local_364 [16];
  byte local_324 [98];
  byte abStack_2c2 [2];
  undefined4 auStack_2c0 [32];
  uint auStack_240 [131];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apuStack_3a4[0] = param_4;
  puVar21 = (undefined4 *)FUN_ram_4819be82();
  __s = (char *)*puVar21;
  sVar22 = strlen(__s);
  if (((*(ushort *)(param_2 + 3) & 0x80) != 0) && (param_2[4] == 0)) {
    iVar23 = FUN_ram_4ff450d0(param_1,0x40);
    *param_2 = iVar23;
    param_2[4] = iVar23;
    if (iVar23 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  piVar16 = local_364;
  uStack_370 = piVar16;
  iStack_368 = 0;
  iStack_36c = 0;
  uStack_38c = 0;
  auStack_2c0[0] = 0xffffffff;
  iStack_390 = 0;
  uVar52 = 0;
  lVar53 = 0;
  pcStack_43c = (char *)0x0;
  iStack_448 = 0;
  pbStack_464 = (byte *)0x0;
  sStack_450 = 0;
  pcStack_440 = (char *)0x0;
  iStack_458 = 0;
  iVar23 = 0;
  pbVar19 = param_3;
LAB_ram_481a092a:
  for (; (*param_3 != 0 && (*param_3 != 0x25)); param_3 = param_3 + 1) {
  }
  iVar17 = (int)param_3 - (int)pbVar19;
  if (param_3 != pbVar19) {
    *piVar16 = (int)pbVar19;
    piVar16[1] = iVar17;
    iStack_368 = iStack_368 + iVar17;
    piVar16 = piVar16 + 2;
    iStack_36c = iStack_36c + 1;
    if (7 < iStack_36c) {
      iVar24 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar24 != 0) goto LAB_ram_481a1260;
      piVar16 = local_364;
    }
    iStack_458 = iStack_458 + iVar17;
  }
  if (*param_3 != 0) {
    pbStack_474 = param_3 + 1;
    cStack_395 = '\0';
    sVar45 = 0xffffffff;
    uStack_460 = 0;
    bVar1 = false;
    uVar18 = 0;
    bVar11 = false;
    bVar10 = false;
    bVar5 = false;
    bVar3 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar4 = false;
    iVar17 = iVar23;
LAB_ram_481a0996:
    iVar24 = iStack_390;
    puVar30 = apuStack_3a4[0];
    uVar47 = (uint)*pbStack_474;
    pbStack_474 = pbStack_474 + 1;
    uVar50 = uStack_460;
LAB_ram_481a09a0:
    uStack_460 = uVar50;
    switch(uVar47) {
    case 0x20:
      if (cStack_395 == '\0') {
        cStack_395 = ' ';
        goto LAB_ram_481a0a68;
      }
      break;
    default:
      if (uVar47 != 0) {
        local_324[0] = (byte)uVar47;
        goto LAB_ram_481a0d06;
      }
      goto LAB_ram_481a2be8;
    case 0x23:
      bVar6 = true;
      break;
    case 0x27:
      iVar24 = FUN_ram_4819be82(param_1);
      pcStack_440 = *(char **)(iVar24 + 4);
      sStack_450 = strlen(pcStack_440);
      iVar24 = FUN_ram_4819be82(param_1);
      pbStack_464 = *(byte **)(iVar24 + 8);
      if (((sStack_450 != 0) && (pbStack_464 != (byte *)0x0)) && (*pbStack_464 != 0)) {
        bVar10 = true;
      }
      break;
    case 0x2a:
      uVar47 = (uint)*pbStack_474;
      if (9 < uVar47 - 0x30) {
        iVar36 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          uStack_460 = auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else {
          uStack_460 = *apuStack_3a4[0];
          if (iStack_390 < 0x20) {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uStack_460;
            iVar17 = iVar36;
          }
          else {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iVar17 = iVar36;
          }
        }
        goto LAB_ram_481a0b1c;
      }
      iVar24 = 0;
      pbVar44 = pbStack_474 + 1;
      do {
        pbVar43 = pbVar44 + 1;
        iVar24 = iVar24 * 10 + (uVar47 - 0x30);
        uVar47 = (uint)*pbVar44;
        pbVar44 = pbVar43;
      } while (uVar47 - 0x30 < 10);
      if (uVar47 == 0x24) goto code_r0x481a0aae;
LAB_ram_481a09c2:
      bVar1 = false;
      break;
    case 0x2b:
      cStack_395 = '+';
LAB_ram_481a0a68:
      break;
    case 0x2d:
      goto switchD_ram_481a09ba_caseD_2d;
    case 0x2e:
      uVar47 = (uint)*pbStack_474;
      pbVar44 = pbStack_474 + 1;
      if (uVar47 != 0x2a) {
        sVar45 = 0;
        while (uVar47 - 0x30 < 10) {
          bVar2 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          sVar45 = sVar45 * 10 + (uVar47 - 0x30);
          uVar47 = (uint)bVar2;
        }
        pbStack_474 = pbVar44;
        uVar50 = uStack_460;
        if ((int)sVar45 < 0) {
          sVar45 = 0xffffffff;
        }
        goto LAB_ram_481a09a0;
      }
      uVar47 = (uint)pbStack_474[1];
      if (uVar47 - 0x30 < 10) {
        iVar24 = 0;
        pbVar48 = pbStack_474 + 2;
        do {
          pbVar43 = pbVar48 + 1;
          iVar24 = iVar24 * 10 + (uVar47 - 0x30);
          uVar47 = (uint)*pbVar48;
          pbVar48 = pbVar43;
        } while (uVar47 - 0x30 < 10);
        pbStack_474 = pbVar44;
        if (uVar47 != 0x24) goto LAB_ram_481a09c2;
        if (0x20 < iVar24) goto LAB_ram_481a1260;
        iVar24 = iVar24 + -1;
        if (iVar24 < iStack_390) {
          sVar45 = auStack_240[iVar24 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_481a0446(iVar24,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          sVar45 = *puVar30;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        pbVar43 = pbVar44;
        if (iVar17 < iStack_390) {
          sVar45 = auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else if (iStack_390 < 0x20) {
          sVar45 = *apuStack_3a4[0];
          iStack_390 = iStack_390 + 1;
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          auStack_240[iVar24 * 4] = sVar45;
          iVar17 = iVar36;
        }
        else {
          sVar45 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar36;
        }
      }
      pbStack_474 = pbVar43;
      if ((int)sVar45 < 0) {
        sVar45 = 0xffffffff;
      }
      break;
    case 0x30:
      uVar18 = uVar18 | 0x80;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_ram_481a09ba_caseD_31;
    case 0x41:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      if (bVar3) {
        if (bVar1) {
          if (iStack_390 <= iVar23) {
            FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0,
                             &uStack_38c);
            puVar30 = apuStack_3a4[0];
          }
        }
        else {
          iVar23 = iVar17 + 1;
          bVar1 = iStack_390 <= iVar17;
          iVar17 = iVar23;
          if ((bVar1) && (puVar30 = apuStack_3a4[0] + 1, iStack_390 < 0x20)) {
            apuStack_3a4[0] = (uint *)*apuStack_3a4[0];
            uVar51 = apuStack_3a4[0][2];
            uVar50 = apuStack_3a4[0][1];
            uVar34 = apuStack_3a4[0][3];
            auStack_240[iStack_390 * 4] = *apuStack_3a4[0];
            auStack_240[iStack_390 * 4 + 1] = uVar50;
            auStack_240[iStack_390 * 4 + 2] = uVar51;
            auStack_240[iStack_390 * 4 + 3] = uVar34;
            iStack_390 = iStack_390 + 1;
          }
        }
        apuStack_3a4[0] = puVar30;
        lVar53 = __trunctfdf2();
      }
      else if (bVar1) {
        if (iVar23 < iStack_390) {
          lVar53 = CONCAT44(auStack_240[iVar23 * 4 + 1],auStack_240[iVar23 * 4]);
        }
        else {
          plVar27 = (longlong *)
                    FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0
                                     ,&uStack_38c);
          lVar53 = *plVar27;
        }
      }
      else {
        iVar24 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          iVar17 = iVar24;
          lVar53 = CONCAT44(auStack_240[iVar23 * 4 + 1],auStack_240[iVar23 * 4]);
        }
        else {
          puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
          apuStack_3a4[0] = puVar30 + 2;
          uVar50 = puVar30[1];
          lVar53 = *(longlong *)puVar30;
          lVar12 = *(longlong *)puVar30;
          iVar17 = iVar24;
          if (iStack_390 < 0x20) {
            auStack_240[iStack_390 * 4] = *puVar30;
            auStack_240[iStack_390 * 4 + 1] = uVar50;
            iStack_390 = iStack_390 + 1;
            lVar53 = lVar12;
          }
        }
      }
      uVar13 = DAT_ram_481f4cbc;
      uVar33 = DAT_ram_481f4cb8;
      uStack_468 = (uint)((ulonglong)lVar53 >> 0x20);
      uStack_470 = (undefined4)lVar53;
      iVar23 = __unorddf2(uStack_470,uStack_468 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((iVar23 == 0) &&
         (iVar23 = __ledf2(uStack_470,uStack_468 & 0x7fffffff,uVar33,uVar13), 0 < iVar23)) {
        iVar23 = __ltdf2(uStack_470,uStack_468,0,0);
        if (iVar23 < 0) {
          cStack_395 = '-';
        }
        if (uVar47 < 0x48) {
          pbVar19 = &UNK_ram_481e3058;
        }
        else {
          pbVar19 = &UNK_ram_481e305c;
        }
LAB_ram_481a11ee:
        uVar18 = uVar18 & 0xffffff7f;
        pbStack_46c = (byte *)0x0;
        sVar45 = 3;
        goto LAB_ram_481a11f6;
      }
      iVar23 = __unorddf2(uStack_470,uStack_468,uStack_470,uStack_468);
      if (iVar23 != 0) {
        if (lVar53 < 0) {
          cStack_395 = '-';
        }
        if (uVar47 < 0x48) {
          pbVar19 = &UNK_ram_481e3060;
        }
        else {
          pbVar19 = &UNK_ram_481e3064;
        }
        goto LAB_ram_481a11ee;
      }
      if (uVar47 == 0x61) {
        uVar41 = 0x78;
LAB_ram_481a1224:
        uStack_394 = CONCAT11(uVar41,0x30);
        bVar11 = true;
        if ((int)sVar45 < 100) {
          pbStack_46c = (byte *)0x0;
          pbVar19 = local_324;
        }
        else {
          pbVar19 = (byte *)FUN_ram_4ff450d0(param_1,sVar45 + 1);
          pbStack_46c = pbVar19;
          if (pbVar19 == (byte *)0x0) {
            *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
            goto LAB_ram_481a1260;
          }
        }
      }
      else {
        if (uVar47 == 0x41) {
          uVar41 = 0x58;
          goto LAB_ram_481a1224;
        }
        if (sVar45 == 0xffffffff) {
          pbStack_46c = (byte *)0x0;
          sVar45 = 6;
        }
        else {
          pbStack_46c = (byte *)0x0;
          if (((uVar47 & 0xffffffdf) == 0x47) && (sVar45 == 0)) {
            sVar45 = 1;
          }
        }
      }
      if (lVar53 < 0) {
        uStack_468 = uStack_468 ^ 0x80000000;
        sStack_454 = 0x2d;
      }
      else {
        sStack_454 = 0;
      }
      uVar50 = uVar47 & 0xffffffdf;
      if (uVar50 == 0x41) {
        uVar55 = FUN_ram_4819c0aa(uStack_470,uStack_468,&sStack_388);
        uVar55 = __muldf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),DAT_ram_481f4dc8,
                          DAT_ram_481f4dcc);
        iVar23 = __eqdf2((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),0,0);
        uVar13 = DAT_ram_481f4dd4;
        uVar33 = DAT_ram_481f4dd0;
        if (iVar23 == 0) {
          sStack_388 = 1;
        }
        pbVar44 = pbVar19;
        if (uVar47 == 0x61) {
          pcVar26 = "0123456789abcdef";
        }
        else {
          pcVar26 = "0123456789ABCDEF";
        }
        goto LAB_ram_481a134a;
      }
      if (uVar50 == 0x46) {
        uVar33 = 3;
        sVar46 = sVar45;
      }
      else {
        sVar46 = sVar45 + 1;
        if (uVar50 != 0x45) {
          sVar46 = sVar45;
        }
        uVar33 = 2;
      }
      pbVar19 = (byte *)FUN_ram_4819c440(param_1,uStack_470,uStack_468,uVar33,sVar46,&sStack_388,
                                         auStack_384,&pbStack_378);
      if (uVar50 == 0x47) {
        if (!bVar6) goto LAB_ram_481a178a;
        pbVar44 = pbVar19 + sVar46;
      }
      else {
        pbVar44 = pbVar19 + sVar46;
        if (uVar50 == 0x46) {
          if ((*pbVar19 == 0x30) && (iVar23 = __nedf2(uStack_470,uStack_468,0,0), iVar23 != 0)) {
            sStack_388 = 1 - sVar46;
          }
          pbVar44 = pbVar44 + sStack_388;
        }
      }
      iVar23 = __eqdf2(uStack_470,uStack_468,0,0);
      if (iVar23 == 0) {
        pbStack_378 = pbVar44;
      }
      while (pbVar43 = pbStack_378, pbStack_378 < pbVar44) {
        pbStack_378 = pbStack_378 + 1;
        *pbVar43 = 0x30;
      }
LAB_ram_481a178a:
      uVar52 = (int)pbStack_378 - (int)pbVar19;
      sVar46 = sStack_388;
      if (uVar50 == 0x47) {
        if ((-4 < (int)sStack_388) && ((int)sStack_388 <= (int)sVar45)) {
          if ((int)sStack_388 < (int)uVar52) {
            uVar47 = 0x67;
            sVar46 = uVar52 + sVar22;
            if ((int)sStack_388 < 1) {
              sVar46 = (sVar46 - sStack_388) + 1;
            }
          }
          else {
            if (bVar6) {
              sVar46 = sStack_388 + sVar22;
            }
            uVar47 = 0x67;
          }
          goto LAB_ram_481a1888;
        }
        uVar47 = uVar47 - 2;
        goto LAB_ram_481a1458;
      }
      if (uVar50 != 0x46) goto LAB_ram_481a1458;
      if ((int)sStack_388 < 1) {
        if (!bVar6 && sVar45 == 0) {
          uVar47 = 0x66;
          sVar46 = 1;
          goto LAB_ram_481a1888;
        }
        iVar23 = sVar22 + 1;
LAB_ram_481a183c:
        sVar46 = sVar45 + iVar23;
      }
      else if (bVar6 || sVar45 != 0) {
        iVar23 = sVar22 + sStack_388;
        goto LAB_ram_481a183c;
      }
      uVar47 = 0x66;
LAB_ram_481a1888:
      iVar36 = 0;
      sVar45 = sStack_388;
      iVar24 = 0;
      iVar23 = 0;
      if (bVar10) {
        iVar31 = 0;
        iVar24 = 0;
        iVar23 = iVar36;
        if (0 < (int)sStack_388) {
          while ((uVar50 = (uint)*pbStack_464, uVar50 != 0xff && ((int)uVar50 < (int)sVar45))) {
            if (pbStack_464[1] == 0) {
              iVar36 = iVar36 + 1;
              sVar45 = sVar45 - uVar50;
            }
            else {
              iVar31 = iVar31 + 1;
              pbStack_464 = pbStack_464 + 1;
              sVar45 = sVar45 - uVar50;
            }
          }
          sVar46 = sVar46 + (iVar31 + iVar36) * sStack_450;
          iVar24 = iVar31;
          iVar23 = iVar36;
        }
      }
      goto LAB_ram_481a1512;
    case 0x43:
    case 99:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          local_324[0] = (byte)auStack_240[iVar23 * 4];
        }
        else {
          pbVar19 = (byte *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          local_324[0] = *pbVar19;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          local_324[0] = (byte)auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else {
          uVar50 = *apuStack_3a4[0];
          local_324[0] = (byte)uVar50;
          if (iStack_390 < 0x20) {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar50;
            iVar17 = iVar36;
          }
          else {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iVar17 = iVar36;
          }
        }
      }
LAB_ram_481a0d06:
      cStack_395 = '\0';
      pbStack_46c = (byte *)0x0;
      sVar46 = 1;
      sVar49 = 0;
      iVar23 = 0;
      iVar24 = 0;
      sVar45 = 0;
      pbVar19 = local_324;
      goto LAB_ram_481a151c;
    case 0x44:
      bVar7 = true;
    case 100:
    case 0x69:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = puVar30 + 2;
              auStack_240[iVar24 * 4] = uVar50;
              auStack_240[iVar24 * 4 + 1] = uVar51;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = puVar30 + 2;
              iVar17 = iVar36;
            }
          }
        }
      }
      else {
        if (bVar7) {
LAB_ram_481a0e66:
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar50 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar50;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_481a0fc2:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(short)auStack_240[iVar23 * 4];
            }
            else {
              psVar25 = (short *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,
                                                  auStack_240,auStack_2c0,&uStack_38c);
              uVar50 = (uint)*psVar25;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar50 = (uint)(short)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar51 = *apuStack_3a4[0];
            uVar50 = (uint)(short)uVar51;
LAB_ram_481a0ee6:
            if (0x1f < iStack_390) goto LAB_ram_481a0fc2;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar51;
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (!bVar9) goto LAB_ram_481a0e66;
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(char)auStack_240[iVar23 * 4];
            }
            else {
              pcVar26 = (char *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = (uint)*pcVar26;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar51 = *apuStack_3a4[0];
              uVar50 = (uint)(char)uVar51;
              goto LAB_ram_481a0ee6;
            }
            uVar50 = (uint)(char)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        uVar51 = (int)uVar50 >> 0x1f;
      }
      iVar23 = 1;
      if ((int)uVar51 < 0) {
        uVar51 = -(uint)(uVar50 != 0) - uVar51;
        uVar50 = -uVar50;
        cStack_395 = '-';
      }
LAB_ram_481a0dc0:
      uVar55 = CONCAT44(uVar51,uVar50);
      if (-1 < (int)sVar45) {
        uVar18 = uVar18 & 0xffffff7f;
        if (uVar50 != 0 || uVar51 != 0) goto LAB_ram_481a2c08;
        if (sVar45 != 0) goto LAB_ram_481a0dde;
        pbVar19 = (byte *)auStack_2c0;
        if ((iVar23 == 0) && (bVar6)) {
          abStack_2c2[1] = '0';
LAB_ram_481a2306:
          pbVar19 = abStack_2c2 + 1;
        }
        goto LAB_ram_481a2c52;
      }
      if (uVar50 == 0 && uVar51 == 0) {
LAB_ram_481a0dde:
        if (iVar23 == 1) {
LAB_ram_481a22fe:
          abStack_2c2[1] = (char)uVar50 + '0';
          goto LAB_ram_481a2306;
        }
      }
      else {
LAB_ram_481a2c08:
        if (iVar23 == 1) {
          if ((uVar51 == 0) && (uVar50 < 10)) goto LAB_ram_481a22fe;
          uVar52 = 0;
          pbVar19 = (byte *)auStack_2c0;
          goto LAB_ram_481a2320;
        }
      }
      pbVar19 = (byte *)auStack_2c0;
      if (iVar23 == 2) {
        do {
          pbVar19 = pbVar19 + -1;
          *pbVar19 = pcStack_43c[uVar50 & 0xf];
          uVar50 = uVar51 << 0x1c | uVar50 >> 4;
          uVar51 = uVar51 >> 4;
        } while (uVar50 != 0 || uVar51 != 0);
      }
      else {
        do {
          pbVar44 = pbVar19;
          iVar23 = (uVar50 & 7) + 0x30;
          uVar50 = uVar51 << 0x1d | uVar50 >> 3;
          uVar51 = uVar51 >> 3;
          pbVar44[-1] = (byte)iVar23;
          pbVar19 = pbVar44 + -1;
        } while (uVar50 != 0 || uVar51 != 0);
        if ((bVar6) && (iVar23 != 0x30)) {
          pbVar44[-2] = 0x30;
          pbVar19 = pbVar44 + -2;
        }
      }
      goto LAB_ram_481a2c52;
    case 0x4c:
      bVar3 = true;
      break;
    case 0x4f:
      bVar7 = true;
    case 0x6f:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar50;
              auStack_240[iVar24 * 4 + 1] = uVar51;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = puVar30 + 2;
              iVar17 = iVar36;
            }
          }
        }
      }
      else {
        if (bVar7) {
          if (bVar1) {
LAB_ram_481a1bd6:
            if (iVar23 < iStack_390) {
              uVar50 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_481a1bf4:
            uVar50 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar50 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_481a1c1e:
              auStack_240[iVar24 * 4] = uVar50;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_481a1d10:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar50 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar51 = *apuStack_3a4[0];
            uVar50 = uVar51 & 0xffff;
LAB_ram_481a1c92:
            if (0x1f < iStack_390) goto LAB_ram_481a1d10;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar51;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar51 = *apuStack_3a4[0];
              uVar50 = uVar51 & 0xff;
              goto LAB_ram_481a1c92;
            }
            uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_481a1bd6;
          if (iVar17 < iStack_390) goto LAB_ram_481a1bf4;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar50 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_481a1c1e;
          }
          uVar50 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar51 = 0;
      }
      bVar11 = false;
      bVar10 = false;
      iVar23 = 0;
LAB_ram_481a1b52:
      cStack_395 = '\0';
      goto LAB_ram_481a0dc0;
    case 0x53:
    case 0x73:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          pbVar19 = (byte *)auStack_240[iVar23 * 4];
        }
        else {
          puVar21 = (undefined4 *)
                    FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0
                                     ,&uStack_38c);
          pbVar19 = (byte *)*puVar21;
        }
      }
      else {
        iVar24 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          pbVar19 = (byte *)auStack_240[iVar23 * 4];
          iVar17 = iVar24;
        }
        else if (iStack_390 < 0x20) {
          pbVar19 = (byte *)*apuStack_3a4[0];
          auStack_240[iStack_390 * 4] = (uint)pbVar19;
          iVar17 = iVar24;
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iStack_390 = iStack_390 + 1;
        }
        else {
          pbVar19 = (byte *)*apuStack_3a4[0];
          iVar17 = iVar24;
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
        }
      }
      cStack_395 = '\0';
      if ((int)sVar45 < 0) {
        sVar45 = strlen((char *)pbVar19);
LAB_ram_481a1e3a:
        pbStack_46c = (byte *)0x0;
      }
      else {
        pbStack_46c = memchr(pbVar19,0,sVar45);
        if (pbStack_46c != (byte *)0x0) {
          sVar45 = (int)pbStack_46c - (int)pbVar19;
          goto LAB_ram_481a1e3a;
        }
      }
LAB_ram_481a11f6:
      bVar11 = false;
      sVar49 = 0;
      sVar46 = sVar45;
      goto LAB_ram_481a2c60;
    case 0x55:
      bVar7 = true;
    case 0x75:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar50;
              auStack_240[iVar24 * 4 + 1] = uVar51;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = puVar30 + 2;
              iVar17 = iVar36;
            }
          }
        }
      }
      else {
        if (bVar7) {
          if (bVar1) {
LAB_ram_481a1f56:
            if (iVar23 < iStack_390) {
              uVar50 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_481a1f74:
            uVar50 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar50 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_481a1f9e:
              auStack_240[iVar24 * 4] = uVar50;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_481a2090:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar50 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar51 = *apuStack_3a4[0];
            uVar50 = uVar51 & 0xffff;
LAB_ram_481a2012:
            if (0x1f < iStack_390) goto LAB_ram_481a2090;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar51;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar51 = *apuStack_3a4[0];
              uVar50 = uVar51 & 0xff;
              goto LAB_ram_481a2012;
            }
            uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_481a1f56;
          if (iVar17 < iStack_390) goto LAB_ram_481a1f74;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar50 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_481a1f9e;
          }
          uVar50 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar51 = 0;
      }
      iVar23 = 1;
      goto LAB_ram_481a1b52;
    case 0x58:
      pcStack_43c = "0123456789ABCDEF";
      goto LAB_ram_481a09d0;
    case 0x68:
      if (*pbStack_474 == 0x68) {
        bVar9 = true;
        pbStack_474 = pbStack_474 + 1;
      }
      else {
        bVar8 = true;
      }
      break;
    case 0x6a:
    case 0x71:
      goto switchD_ram_481a09ba_caseD_6a;
    case 0x6c:
      if (*pbStack_474 == 0x6c) {
        pbStack_474 = pbStack_474 + 1;
switchD_ram_481a09ba_caseD_6a:
        bVar4 = true;
      }
      else {
        bVar7 = true;
      }
      break;
    case 0x6e:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            piVar38 = (int *)auStack_240[iVar23 * 4];
          }
          else {
            puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            piVar38 = (int *)*puVar30;
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            piVar38 = (int *)auStack_240[iVar23 * 4];
            iVar17 = iVar36;
          }
          else if (iStack_390 < 0x20) {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            piVar38 = (int *)*puVar30;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = (uint)piVar38;
            iVar17 = iVar36;
          }
          else {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            piVar38 = (int *)*puVar30;
            iVar17 = iVar36;
          }
        }
        *piVar38 = iStack_458;
        piVar38[1] = iStack_458 >> 0x1f;
        param_3 = pbStack_474;
        iVar23 = iVar17;
        pbVar19 = pbStack_474;
        goto LAB_ram_481a092a;
      }
      if (!bVar7) {
        if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              puVar39 = (undefined2 *)auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              puVar39 = (undefined2 *)*puVar30;
            }
          }
          else {
            iVar36 = iVar17 + 1;
            if (iVar17 < iStack_390) {
              puVar39 = (undefined2 *)auStack_240[iVar23 * 4];
              iVar17 = iVar36;
            }
            else if (iStack_390 < 0x20) {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              puVar39 = (undefined2 *)*puVar30;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = (uint)puVar39;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              puVar39 = (undefined2 *)*puVar30;
              iVar17 = iVar36;
            }
          }
          *puVar39 = (short)iStack_458;
          param_3 = pbStack_474;
          iVar23 = iVar17;
          pbVar19 = pbStack_474;
          goto LAB_ram_481a092a;
        }
        if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              puVar40 = (undefined1 *)auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              puVar40 = (undefined1 *)*puVar30;
            }
          }
          else {
            iVar36 = iVar17 + 1;
            if (iVar17 < iStack_390) {
              puVar40 = (undefined1 *)auStack_240[iVar23 * 4];
              iVar17 = iVar36;
            }
            else if (iStack_390 < 0x20) {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              puVar40 = (undefined1 *)*puVar30;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = (uint)puVar40;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              puVar40 = (undefined1 *)*puVar30;
              iVar17 = iVar36;
            }
          }
          *puVar40 = (char)iStack_458;
          param_3 = pbStack_474;
          iVar23 = iVar17;
          pbVar19 = pbStack_474;
          goto LAB_ram_481a092a;
        }
      }
      if (bVar1) {
        if (iVar23 < iStack_390) {
          piVar38 = (int *)auStack_240[iVar23 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          piVar38 = (int *)*puVar30;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          piVar38 = (int *)auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else if (iStack_390 < 0x20) {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iStack_390 = iStack_390 + 1;
          piVar38 = (int *)*puVar30;
          auStack_240[iVar24 * 4] = (uint)piVar38;
          iVar17 = iVar36;
        }
        else {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          piVar38 = (int *)*puVar30;
          iVar17 = iVar36;
        }
      }
      *piVar38 = iStack_458;
      param_3 = pbStack_474;
      iVar23 = iVar17;
      pbVar19 = pbStack_474;
      goto LAB_ram_481a092a;
    case 0x70:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          uVar50 = auStack_240[iVar23 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          uVar50 = *puVar30;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          uVar50 = auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else if (iStack_390 < 0x20) {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          uVar50 = *puVar30;
          iStack_390 = iStack_390 + 1;
          auStack_240[iVar24 * 4] = uVar50;
          iVar17 = iVar36;
        }
        else {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          uVar50 = *puVar30;
          iVar17 = iVar36;
        }
      }
      uStack_394 = 0x7830;
      pcStack_43c = "0123456789abcdef";
      uVar51 = 0;
      bVar11 = true;
      iVar23 = 2;
      uVar47 = 0x78;
      goto LAB_ram_481a1b52;
    case 0x74:
    case 0x7a:
      break;
    case 0x78:
      pcStack_43c = "0123456789abcdef";
LAB_ram_481a09d0:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar50 = auStack_240[iVar23 * 4];
            uVar51 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar50 = *puVar30;
            uVar51 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar50;
              auStack_240[iVar24 * 4 + 1] = uVar51;
              iVar17 = iVar36;
            }
            else {
              apuStack_3a4[0] = puVar30 + 2;
              iVar17 = iVar36;
            }
          }
        }
      }
      else {
        if (bVar7) {
          if (bVar1) {
LAB_ram_481a216c:
            if (iVar23 < iStack_390) {
              uVar50 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_481a218a:
            uVar50 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar50 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_481a21b4:
              auStack_240[iVar24 * 4] = uVar50;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_481a22a8:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar50 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar50 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar51 = *apuStack_3a4[0];
            uVar50 = uVar51 & 0xffff;
LAB_ram_481a222a:
            if (0x1f < iStack_390) goto LAB_ram_481a22a8;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar51;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_481a0446(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar50 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar51 = *apuStack_3a4[0];
              uVar50 = uVar51 & 0xff;
              goto LAB_ram_481a222a;
            }
            uVar50 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_481a216c;
          if (iVar17 < iStack_390) goto LAB_ram_481a218a;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar50 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_481a21b4;
          }
          uVar50 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar51 = 0;
      }
      if ((bVar6) && (uVar50 != 0 || uVar51 != 0)) {
        uStack_394 = CONCAT11((byte)uVar47,0x30);
        bVar11 = true;
      }
      bVar10 = false;
      iVar23 = 2;
      goto LAB_ram_481a1b52;
    }
    goto switchD_ram_481a09ba_caseD_74;
  }
LAB_ram_481a2be8:
  if (iStack_368 != 0) {
    FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
  }
  goto LAB_ram_481a1260;
  while ((uVar55 = __udivdi3(uVar50,iVar23,10,0), iVar23 != 0 || (9 < uVar50))) {
LAB_ram_481a2320:
    iVar23 = (int)((ulonglong)uVar55 >> 0x20);
    uVar50 = (uint)uVar55;
    cVar20 = __umoddi3(uVar50,iVar23,10,0);
    pbVar19[-1] = cVar20 + 0x30;
    pbVar19 = pbVar19 + -1;
    uVar52 = uVar52 + 1;
    if (((bVar10) && (uVar52 == *pbStack_464)) && (uVar52 != 0xff)) {
      if ((iVar23 == 0) && (uVar50 < 10)) break;
      pbVar19 = pbVar19 + -sStack_450;
      FUN_ram_4ff45594(pbVar19,pcStack_440,sStack_450);
      if (pbStack_464[1] != 0) {
        pbStack_464 = pbStack_464 + 1;
      }
      uVar55 = __udivdi3(uVar50,iVar23,10,0);
      uVar52 = 0;
      goto LAB_ram_481a2320;
    }
  }
LAB_ram_481a2c52:
  pbStack_46c = (byte *)0x0;
  sVar46 = (int)auStack_2c0 - (int)pbVar19;
  sVar49 = sVar45;
LAB_ram_481a2c60:
  bVar5 = false;
  iVar23 = 0;
  iVar24 = 0;
  sVar45 = 0;
  goto LAB_ram_481a151c;
LAB_ram_481a134a:
  sVar46 = sVar45;
  sVar45 = sVar46 - 1;
  pbVar43 = pbVar44 + 1;
  uVar55 = __muldf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),uVar33,uVar13);
  uVar52 = __fixdfsi();
  uVar54 = __floatsidf();
  uVar55 = __subdf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),(int)uVar54,
                    (int)((ulonglong)uVar54 >> 0x20));
  uVar15 = DAT_ram_481f4cc4;
  uVar14 = DAT_ram_481f4cc0;
  uVar32 = (undefined4)((ulonglong)uVar55 >> 0x20);
  uVar28 = (undefined4)uVar55;
  *pbVar44 = pcVar26[uVar52];
  pbVar44 = pbVar43;
  if (sVar45 != 0xffffffff) goto code_r0x481a13a0;
  iVar23 = __gtdf2(uVar28,uVar32,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
  if ((0 < iVar23) ||
     ((iVar23 = __eqdf2(uVar28,uVar32,uVar14,uVar15), iVar23 == 0 && ((uVar52 & 1) != 0)))) {
    bVar2 = pcVar26[0xf];
    pbStack_378 = pbVar43;
    while( true ) {
      pbVar44 = pbStack_378;
      pbStack_378 = pbStack_378 + -1;
      bVar42 = pbVar44[-1];
      if (bVar42 != bVar2) break;
      pbVar44[-1] = 0x30;
    }
    if (bVar42 == 0x39) {
      bVar42 = pcVar26[10];
    }
    else {
      bVar42 = bVar42 + 1;
    }
    pbVar44[-1] = bVar42;
    goto LAB_ram_481a1454;
  }
  goto LAB_ram_481a1728;
code_r0x481a13a0:
  iVar23 = __nedf2(uVar28,uVar32,0,0);
  if (iVar23 == 0) goto LAB_ram_481a1728;
  goto LAB_ram_481a134a;
LAB_ram_481a1728:
  for (; -1 < (int)(pbVar43 + (sVar45 - (int)pbVar44)); pbVar44 = pbVar44 + 1) {
    *pbVar44 = 0x30;
  }
  sVar49 = 0;
  if (-2 < (int)sVar45) {
    sVar49 = sVar46;
  }
  pbVar43 = pbVar43 + sVar49;
LAB_ram_481a1454:
  uVar52 = (int)pbVar43 - (int)pbVar19;
LAB_ram_481a1458:
  sVar45 = sStack_388;
  sVar46 = sStack_388 - 1;
  sStack_388 = sVar46;
  cStack_380 = (char)uVar47;
  bVar1 = (uVar47 & 0xffffffdf) == 0x41;
  if (bVar1) {
    cStack_380 = cStack_380 + '\x0f';
  }
  uStack_37f = 0x2b;
  if ((int)sVar46 < 0) {
    sVar46 = 1 - sVar45;
    uStack_37f = 0x2d;
  }
  if ((int)sVar46 < 10) {
    pcVar26 = local_37e;
    if (!bVar1) {
      local_37e[0] = '0';
      pcVar26 = local_37e + 1;
    }
    pcVar37 = pcVar26 + 1;
    *pcVar26 = (char)sVar46 + '0';
  }
  else {
    pcVar26 = local_373 + 2;
    do {
      pcVar37 = pcVar26;
      pcVar37[-1] = (char)((int)sVar46 % 10) + '0';
      sVar45 = (int)sVar46 / 10;
      bVar1 = 99 < (int)sVar46;
      pcVar26 = pcVar37 + -1;
      sVar46 = sVar45;
    } while (bVar1);
    pcVar37[-2] = (char)sVar45 + '0';
    pcVar26 = &cStack_380;
    for (pcVar35 = pcVar37 + -2; pcVar35 < local_373 + 2; pcVar35 = pcVar35 + 1) {
      pcVar26[2] = *pcVar35;
      pcVar26 = pcVar26 + 1;
    }
    iVar23 = 0;
    if (pcVar37 + -2 <= local_373 + 2) {
      iVar23 = (int)&uStack_370 + (1 - (int)pcVar37);
    }
    pcVar37 = local_37e + iVar23;
  }
  iStack_448 = (int)pcVar37 - (int)&cStack_380;
  sVar46 = uVar52 + iStack_448;
  if ((1 < (int)uVar52) || (bVar6)) {
    sVar46 = sVar46 + sVar22;
  }
  bVar10 = false;
  sVar45 = 0;
  iVar24 = 0;
  iVar23 = 0;
LAB_ram_481a1512:
  bVar5 = true;
  if (sStack_454 != 0) {
    cStack_395 = '-';
  }
  sVar49 = 0;
LAB_ram_481a151c:
  uStack_468 = (uint)((ulonglong)lVar53 >> 0x20);
  uStack_470 = (undefined4)lVar53;
  sStack_454 = sVar49;
  if ((int)sVar49 < (int)sVar46) {
    sStack_454 = sVar46;
  }
  sStack_454 = sStack_454 + (cStack_395 != '\0');
  if (bVar11) {
    sStack_454 = sStack_454 + 2;
  }
  if ((uVar18 == 0) && (iVar36 = uStack_460 - sStack_454, piVar38 = piVar16, 0 < iVar36)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823bcc0;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_481a2b9a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    piVar38[1] = iVar36;
    iStack_368 = iStack_368 + iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar36 != 0) {
LAB_ram_481a2b9a:
        if (pbStack_46c != (byte *)0x0) {
          FUN_ram_4ff450c2(param_1,pbStack_46c);
        }
LAB_ram_481a1260:
        if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
          return -1;
        }
        return iStack_458;
      }
      piVar16 = local_364;
    }
  }
  if (cStack_395 != '\0') {
    *piVar16 = (int)&cStack_395;
    iStack_368 = iStack_368 + 1;
    piVar16[1] = 1;
    iStack_36c = iStack_36c + 1;
    piVar16 = piVar16 + 2;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_481a2b9a;
      piVar16 = local_364;
    }
  }
  if (bVar11) {
    *piVar16 = (int)&uStack_394;
    iStack_368 = iStack_368 + 2;
    piVar16[1] = 2;
    iStack_36c = iStack_36c + 1;
    piVar16 = piVar16 + 2;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_481a2b9a;
      piVar16 = local_364;
    }
  }
  if ((uVar18 == 0x80) && (iVar36 = uStack_460 - sStack_454, piVar38 = piVar16, 0 < iVar36)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823bcb0;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_481a2b9a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    piVar38[1] = iVar36;
    iStack_368 = iStack_368 + iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_481a2b9a;
      piVar16 = local_364;
    }
  }
  iVar36 = sVar49 - sVar46;
  piVar38 = piVar16;
  if (0 < iVar36) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823bcb0;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_481a2b9a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    iStack_368 = iStack_368 + iVar36;
    piVar38[1] = iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_481a2b9a;
      piVar16 = local_364;
    }
  }
  iVar36 = iStack_368;
  if (bVar5) {
    if ((int)uVar47 < 0x66) {
      iStack_368 = iStack_368 + 1;
      iStack_36c = iStack_36c + 1;
      *piVar16 = (int)pbVar19;
      piVar16[1] = 1;
      piVar38 = piVar16 + 2;
      if ((1 < (int)uVar52) || (piVar16 = piVar38, bVar6)) {
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_481a2b9a;
          piVar38 = local_364;
        }
        *piVar38 = (int)__s;
        piVar16 = piVar38 + 2;
        piVar38[1] = sVar22;
        iStack_368 = iStack_368 + sVar22;
        iStack_36c = iStack_36c + 1;
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_481a2b9a;
          piVar16 = local_364;
        }
        iVar24 = uVar52 - 1;
        iVar23 = __nedf2(uStack_470,uStack_468,0,0);
        if (iVar23 != 0) {
          iStack_368 = iStack_368 + (uVar52 - 1);
          iStack_36c = iStack_36c + 1;
          *piVar16 = (int)(pbVar19 + 1);
          piVar16[1] = iVar24;
          piVar16 = piVar16 + 2;
          goto joined_r0x481a2aa6;
        }
        if (1 < (int)uVar52) {
          while( true ) {
            *piVar16 = (int)&DAT_ram_4823bcb0;
            iStack_36c = iStack_36c + 1;
            piVar38 = piVar16 + 2;
            if (iVar24 < 0x11) break;
            iStack_368 = iStack_368 + 0x10;
            piVar16[1] = 0x10;
            if (7 < iStack_36c) {
              iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
              if (iVar23 != 0) goto LAB_ram_481a2b9a;
              piVar38 = local_364;
            }
            iVar24 = iVar24 + -0x10;
            piVar16 = piVar38;
          }
          piVar16[1] = iVar24;
          iStack_368 = iStack_368 + iVar24;
          piVar16 = piVar38;
          goto joined_r0x481a2aa6;
        }
      }
      else {
joined_r0x481a2aa6:
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_481a2b9a;
          piVar16 = local_364;
        }
      }
      *piVar16 = (int)&cStack_380;
      piVar16[1] = iStack_448;
      iStack_368 = iStack_368 + iStack_448;
      goto joined_r0x481a2adc;
    }
    iVar31 = __eqdf2(uStack_470,uStack_468,0,0);
    if (iVar31 == 0) {
      *piVar16 = (int)"0";
      piVar16[1] = 1;
      iStack_368 = iVar36 + 1;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_481a2b9a;
        piVar38 = local_364;
      }
      if (((int)uVar52 <= (int)sStack_388) && (!bVar6)) goto LAB_ram_481a26a4;
      *piVar38 = (int)__s;
      piVar38[1] = sVar22;
      iStack_368 = iStack_368 + sVar22;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar38 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_481a2b9a;
        piVar38 = local_364;
      }
      iVar23 = uVar52 - 1;
      if (iVar23 < 1) goto LAB_ram_481a26a4;
      while( true ) {
        *piVar38 = (int)&DAT_ram_4823bcb0;
        iStack_36c = iStack_36c + 1;
        piVar16 = piVar38 + 2;
        if (iVar23 < 0x11) break;
        iStack_368 = iStack_368 + 0x10;
        piVar38[1] = 0x10;
        if (7 < iStack_36c) {
          iVar24 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
          if (iVar24 != 0) goto LAB_ram_481a2b9a;
          piVar16 = local_364;
        }
        iVar23 = iVar23 + -0x10;
        piVar38 = piVar16;
      }
LAB_ram_481a2562:
      piVar38[1] = iVar23;
      iStack_368 = iStack_368 + iVar23;
      piVar38 = piVar16;
    }
    else {
      if (0 < (int)sStack_388) {
        sVar46 = sVar45;
        if ((int)uVar52 < (int)sVar45) {
          sVar46 = uVar52;
        }
        if (0 < (int)sVar46) {
          *piVar16 = (int)pbVar19;
          iStack_36c = iStack_36c + 1;
          piVar16[1] = sVar46;
          iStack_368 = iVar36 + sVar46;
          piVar16 = piVar16 + 2;
          if (7 < iStack_36c) {
            iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar36 != 0) goto LAB_ram_481a2b9a;
            piVar16 = local_364;
          }
        }
        iVar36 = sVar45 - (sVar46 & (int)~sVar46 >> 0x1f);
        piVar38 = piVar16;
        if (0 < iVar36) {
          while( true ) {
            *piVar38 = (int)&DAT_ram_4823bcb0;
            iStack_36c = iStack_36c + 1;
            piVar16 = piVar38 + 2;
            if (iVar36 < 0x11) break;
            iStack_368 = iStack_368 + 0x10;
            piVar38[1] = 0x10;
            if (7 < iStack_36c) {
              iVar31 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
              if (iVar31 != 0) goto LAB_ram_481a2b9a;
              piVar16 = local_364;
            }
            iVar36 = iVar36 + -0x10;
            piVar38 = piVar16;
          }
          piVar38[1] = iVar36;
          iStack_368 = iStack_368 + iVar36;
          if (7 < iStack_36c) {
            iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar36 != 0) goto LAB_ram_481a2b9a;
            piVar16 = local_364;
          }
        }
        pbVar44 = pbVar19 + sVar45;
        if (bVar10) {
          do {
            if (iVar24 < 1) {
              if (iVar23 < 1) goto code_r0x481a27c0;
LAB_ram_481a28e0:
              iVar23 = iVar23 + -1;
            }
            else {
              if (0 < iVar23) goto LAB_ram_481a28e0;
              iVar24 = iVar24 + -1;
              pbStack_464 = pbStack_464 + -1;
            }
            *piVar16 = (int)pcStack_440;
            piVar16[1] = sStack_450;
            iStack_368 = iStack_368 + sStack_450;
            iStack_36c = iStack_36c + 1;
            piVar16 = piVar16 + 2;
            if (7 < iStack_36c) {
              iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
              if (iVar36 != 0) goto LAB_ram_481a2b9a;
              piVar16 = local_364;
            }
            pbVar43 = pbVar19 + (uVar52 - (int)pbVar44);
            if ((int)(uint)*pbStack_464 < (int)(pbVar19 + (uVar52 - (int)pbVar44))) {
              pbVar43 = (byte *)(uint)*pbStack_464;
            }
            if (0 < (int)pbVar43) {
              *piVar16 = (int)pbVar44;
              iStack_36c = iStack_36c + 1;
              piVar16[1] = (int)pbVar43;
              iStack_368 = iStack_368 + (int)pbVar43;
              piVar16 = piVar16 + 2;
              if (7 < iStack_36c) {
                iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
                if (iVar36 != 0) goto LAB_ram_481a2b9a;
                piVar16 = local_364;
              }
            }
            iVar36 = (uint)*pbStack_464 - ((uint)pbVar43 & (int)~(uint)pbVar43 >> 0x1f);
            piVar38 = piVar16;
            if (0 < iVar36) {
              while( true ) {
                *piVar38 = (int)&DAT_ram_4823bcb0;
                iStack_36c = iStack_36c + 1;
                piVar16 = piVar38 + 2;
                if (iVar36 < 0x11) break;
                iStack_368 = iStack_368 + 0x10;
                piVar38[1] = 0x10;
                if (7 < iStack_36c) {
                  iVar31 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
                  if (iVar31 != 0) goto LAB_ram_481a2b9a;
                  piVar16 = local_364;
                }
                iVar36 = iVar36 + -0x10;
                piVar38 = piVar16;
              }
              piVar38[1] = iVar36;
              iStack_368 = iStack_368 + iVar36;
              if (7 < iStack_36c) {
                iVar36 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
                if (iVar36 != 0) goto LAB_ram_481a2b9a;
                piVar16 = local_364;
              }
            }
            pbVar44 = pbVar44 + *pbStack_464;
          } while( true );
        }
LAB_ram_481a27ca:
        if (((int)sStack_388 < (int)uVar52) || (piVar38 = piVar16, bVar6)) {
          *piVar16 = (int)__s;
          piVar38 = piVar16 + 2;
          piVar16[1] = sVar22;
          iStack_368 = iStack_368 + sVar22;
          iStack_36c = iStack_36c + 1;
          if (7 < iStack_36c) {
            iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar23 != 0) goto LAB_ram_481a2b9a;
            piVar38 = local_364;
          }
        }
        pbVar43 = (byte *)(uVar52 - sStack_388);
        if ((int)(pbVar19 + (uVar52 - (int)pbVar44)) < (int)(uVar52 - sStack_388)) {
          pbVar43 = pbVar19 + (uVar52 - (int)pbVar44);
        }
        if (0 < (int)pbVar43) {
          *piVar38 = (int)pbVar44;
          piVar38[1] = (int)pbVar43;
          iStack_368 = iStack_368 + (int)pbVar43;
          piVar38 = piVar38 + 2;
          iStack_36c = iStack_36c + 1;
          if (7 < iStack_36c) {
            iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar23 != 0) goto LAB_ram_481a2b9a;
            piVar38 = local_364;
          }
        }
        iVar23 = (uVar52 - sStack_388) - ((uint)pbVar43 & (int)~(uint)pbVar43 >> 0x1f);
        if (iVar23 < 1) goto LAB_ram_481a26a4;
        while( true ) {
          *piVar38 = (int)&DAT_ram_4823bcb0;
          iStack_36c = iStack_36c + 1;
          piVar16 = piVar38 + 2;
          if (iVar23 < 0x11) break;
          iStack_368 = iStack_368 + 0x10;
          piVar38[1] = 0x10;
          if (7 < iStack_36c) {
            iVar24 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar24 != 0) goto LAB_ram_481a2b9a;
            piVar16 = local_364;
          }
          iVar23 = iVar23 + -0x10;
          piVar38 = piVar16;
        }
        goto LAB_ram_481a2562;
      }
      *piVar16 = (int)"0";
      piVar16[1] = 1;
      iStack_368 = iVar36 + 1;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_481a2b9a;
        piVar38 = local_364;
      }
      if ((uVar52 == 0 && sStack_388 == 0) && !bVar6) goto LAB_ram_481a26a4;
      piVar16 = piVar38 + 2;
      *piVar38 = (int)__s;
      piVar38[1] = sVar22;
      iStack_368 = iStack_368 + sVar22;
      iStack_36c = iStack_36c + 1;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_481a2b9a;
        piVar16 = local_364;
      }
      if ((int)sStack_388 < 0) {
        iVar23 = -sStack_388;
        piVar38 = piVar16;
        while( true ) {
          *piVar38 = (int)&DAT_ram_4823bcb0;
          iStack_36c = iStack_36c + 1;
          piVar16 = piVar38 + 2;
          if (iVar23 < 0x11) break;
          iStack_368 = iStack_368 + 0x10;
          piVar38[1] = 0x10;
          if (7 < iStack_36c) {
            iVar24 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
            if (iVar24 != 0) goto LAB_ram_481a2b9a;
            piVar16 = local_364;
          }
          iVar23 = iVar23 + -0x10;
          piVar38 = piVar16;
        }
        piVar38[1] = iVar23;
        iStack_368 = iStack_368 + iVar23;
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_481a2b9a;
          piVar16 = local_364;
        }
      }
      *piVar16 = (int)pbVar19;
      piVar16[1] = uVar52;
      iStack_368 = iStack_368 + uVar52;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
    }
  }
  else {
    *piVar16 = (int)pbVar19;
    piVar16[1] = sVar46;
    iStack_368 = iStack_368 + sVar46;
joined_r0x481a2adc:
    iStack_36c = iStack_36c + 1;
    piVar38 = piVar16 + 2;
  }
  if (7 < iStack_36c) {
    iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
    if (iVar23 != 0) goto LAB_ram_481a2b9a;
    piVar38 = local_364;
  }
LAB_ram_481a26a4:
  if (((uVar18 & 4) != 0) && (iVar23 = uStack_460 - sStack_454, 0 < iVar23)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823bcc0;
      iStack_36c = iStack_36c + 1;
      if (iVar23 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      piVar38 = piVar38 + 2;
      if (7 < iStack_36c) {
        iVar24 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370);
        if (iVar24 != 0) goto LAB_ram_481a2b9a;
        piVar38 = local_364;
      }
      iVar23 = iVar23 + -0x10;
    }
    iStack_368 = iStack_368 + iVar23;
    piVar38[1] = iVar23;
    if ((7 < iStack_36c) && (iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370), iVar23 != 0))
    goto LAB_ram_481a2b9a;
  }
  if ((int)uStack_460 < (int)sStack_454) {
    uStack_460 = sStack_454;
  }
  iStack_458 = uStack_460 + iStack_458;
  if ((iStack_368 != 0) && (iVar23 = FUN_ram_4819e6b0(param_1,param_2,&uStack_370), iVar23 != 0))
  goto LAB_ram_481a2b9a;
  iStack_36c = 0;
  if (pbStack_46c != (byte *)0x0) {
    FUN_ram_4ff450c2(param_1,pbStack_46c);
  }
  piVar16 = local_364;
  param_3 = pbStack_474;
  iVar23 = iVar17;
  pbVar19 = pbStack_474;
  goto LAB_ram_481a092a;
switchD_ram_481a09ba_caseD_31:
  uVar50 = 0;
  do {
    pbVar44 = pbStack_474 + 1;
    uVar50 = uVar50 * 10 + (uVar47 - 0x30);
    uVar47 = (uint)*pbStack_474;
    pbStack_474 = pbVar44;
  } while (uVar47 - 0x30 < 10);
  if (uVar47 == 0x24) goto code_r0x481a0c8c;
  goto LAB_ram_481a09a0;
code_r0x481a0c8c:
  if (0x20 < (int)uVar50) goto LAB_ram_481a1260;
  iVar23 = uVar50 - 1;
  bVar1 = true;
switchD_ram_481a09ba_caseD_74:
  goto LAB_ram_481a0996;
code_r0x481a0aae:
  if (0x20 < iVar24) goto LAB_ram_481a1260;
  iVar24 = iVar24 + -1;
  pbStack_474 = pbVar43;
  if (iVar24 < iStack_390) {
    uStack_460 = auStack_240[iVar24 * 4];
  }
  else {
    puVar30 = (uint *)FUN_ram_481a0446(iVar24,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                       auStack_2c0,&uStack_38c);
    uStack_460 = *puVar30;
  }
LAB_ram_481a0b1c:
  if (-1 < (int)uStack_460) goto switchD_ram_481a09ba_caseD_74;
  uStack_460 = -uStack_460;
switchD_ram_481a09ba_caseD_2d:
  uVar18 = uVar18 | 4;
  goto switchD_ram_481a09ba_caseD_74;
code_r0x481a27c0:
  if (pbVar19 + uVar52 < pbVar44) {
    pbVar44 = pbVar19 + uVar52;
  }
  goto LAB_ram_481a27ca;
}



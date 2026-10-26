/* Firmware entry: 0x48197a62 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_48197a62(int param_1,int param_2,byte *param_3,uint *param_4)

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
  size_t sVar44;
  size_t sVar45;
  uint uVar46;
  byte *pbVar47;
  uint uVar48;
  uint uVar49;
  byte *pbVar50;
  size_t sVar51;
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
  char *pcStack_448;
  int iStack_444;
  char *pcStack_3c8;
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
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_ram_4819a44c(param_1);
  }
  if (((*(uint *)(param_2 + 100) & 1) == 0) && ((*(ushort *)(param_2 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21846(*(undefined4 *)(param_2 + 0x58));
  }
  if ((((*(ushort *)(param_2 + 0xc) & 8) == 0) || (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar23 = __swsetup_r(param_1,param_2), iVar23 != 0)) {
    if (((*(uint *)(param_2 + 100) & 1) == 0) && ((*(ushort *)(param_2 + 0xc) & 0x200) == 0)) {
      FUN_ram_4ff21966(*(undefined4 *)(param_2 + 0x58));
    }
    return -1;
  }
  if (((*(ushort *)(param_2 + 0xc) & 0x1a) == 10) && (-1 < *(short *)(param_2 + 0xe))) {
    if (((*(uint *)(param_2 + 100) & 1) == 0) && ((*(ushort *)(param_2 + 0xc) & 0x200) == 0)) {
      FUN_ram_4ff21966(*(undefined4 *)(param_2 + 0x58));
    }
    iVar23 = FUN_ram_48199f04(param_1,param_2,param_3,apuStack_3a4[0]);
    return iVar23;
  }
  piVar16 = local_364;
  uStack_370 = piVar16;
  iStack_368 = 0;
  iStack_36c = 0;
  uStack_38c = 0;
  auStack_2c0[0] = 0xffffffff;
  iStack_390 = 0;
  uVar46 = 0;
  lVar53 = 0;
  pcStack_3c8 = (char *)0x0;
  iStack_444 = 0;
  pbStack_464 = (byte *)0x0;
  sStack_450 = 0;
  pcStack_448 = (char *)0x0;
  iStack_458 = 0;
  iVar23 = 0;
  pbVar19 = param_3;
LAB_ram_48197bda:
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
      iVar24 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar24 != 0) goto LAB_ram_48198510;
      piVar16 = local_364;
    }
    iStack_458 = iStack_458 + iVar17;
  }
  if (*param_3 != 0) {
    pbStack_474 = param_3 + 1;
    cStack_395 = '\0';
    sVar44 = 0xffffffff;
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
LAB_ram_48197c46:
    iVar24 = iStack_390;
    puVar30 = apuStack_3a4[0];
    uVar48 = (uint)*pbStack_474;
    pbStack_474 = pbStack_474 + 1;
    uVar49 = uStack_460;
LAB_ram_48197c50:
    uStack_460 = uVar49;
    switch(uVar48) {
    case 0x20:
      if (cStack_395 == '\0') {
        cStack_395 = ' ';
        goto LAB_ram_48197d18;
      }
      break;
    default:
      if (uVar48 != 0) {
        local_324[0] = (byte)uVar48;
        goto LAB_ram_48197fb6;
      }
      goto LAB_ram_48199e56;
    case 0x23:
      bVar6 = true;
      break;
    case 0x27:
      iVar24 = FUN_ram_4819be82(param_1);
      pcStack_448 = *(char **)(iVar24 + 4);
      sStack_450 = strlen(pcStack_448);
      iVar24 = FUN_ram_4819be82(param_1);
      pbStack_464 = *(byte **)(iVar24 + 8);
      if (((sStack_450 != 0) && (pbStack_464 != (byte *)0x0)) && (*pbStack_464 != 0)) {
        bVar10 = true;
      }
      break;
    case 0x2a:
      uVar48 = (uint)*pbStack_474;
      if (9 < uVar48 - 0x30) {
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
        goto LAB_ram_48197dcc;
      }
      iVar24 = 0;
      pbVar43 = pbStack_474 + 1;
      do {
        pbVar47 = pbVar43 + 1;
        iVar24 = iVar24 * 10 + (uVar48 - 0x30);
        uVar48 = (uint)*pbVar43;
        pbVar43 = pbVar47;
      } while (uVar48 - 0x30 < 10);
      if (uVar48 == 0x24) goto code_r0x48197d5e;
LAB_ram_48197c72:
      bVar1 = false;
      break;
    case 0x2b:
      cStack_395 = '+';
LAB_ram_48197d18:
      break;
    case 0x2d:
      goto switchD_ram_48197c6a_caseD_2d;
    case 0x2e:
      uVar48 = (uint)*pbStack_474;
      pbVar43 = pbStack_474 + 1;
      if (uVar48 != 0x2a) {
        sVar44 = 0;
        while (uVar48 - 0x30 < 10) {
          bVar2 = *pbVar43;
          pbVar43 = pbVar43 + 1;
          sVar44 = sVar44 * 10 + (uVar48 - 0x30);
          uVar48 = (uint)bVar2;
        }
        pbStack_474 = pbVar43;
        uVar49 = uStack_460;
        if ((int)sVar44 < 0) {
          sVar44 = 0xffffffff;
        }
        goto LAB_ram_48197c50;
      }
      uVar48 = (uint)pbStack_474[1];
      if (uVar48 - 0x30 < 10) {
        iVar24 = 0;
        pbVar50 = pbStack_474 + 2;
        do {
          pbVar47 = pbVar50 + 1;
          iVar24 = iVar24 * 10 + (uVar48 - 0x30);
          uVar48 = (uint)*pbVar50;
          pbVar50 = pbVar47;
        } while (uVar48 - 0x30 < 10);
        pbStack_474 = pbVar43;
        if (uVar48 != 0x24) goto LAB_ram_48197c72;
        if (0x20 < iVar24) goto LAB_ram_48198510;
        iVar24 = iVar24 + -1;
        if (iVar24 < iStack_390) {
          sVar44 = auStack_240[iVar24 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_48197642(iVar24,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          sVar44 = *puVar30;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        pbVar47 = pbVar43;
        if (iVar17 < iStack_390) {
          sVar44 = auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else if (iStack_390 < 0x20) {
          sVar44 = *apuStack_3a4[0];
          iStack_390 = iStack_390 + 1;
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          auStack_240[iVar24 * 4] = sVar44;
          iVar17 = iVar36;
        }
        else {
          sVar44 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar36;
        }
      }
      pbStack_474 = pbVar47;
      if ((int)sVar44 < 0) {
        sVar44 = 0xffffffff;
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
      goto switchD_ram_48197c6a_caseD_31;
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
            FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0,
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
            uVar52 = apuStack_3a4[0][2];
            uVar49 = apuStack_3a4[0][1];
            uVar34 = apuStack_3a4[0][3];
            auStack_240[iStack_390 * 4] = *apuStack_3a4[0];
            auStack_240[iStack_390 * 4 + 1] = uVar49;
            auStack_240[iStack_390 * 4 + 2] = uVar52;
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
                    FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0
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
          uVar49 = puVar30[1];
          lVar53 = *(longlong *)puVar30;
          lVar12 = *(longlong *)puVar30;
          iVar17 = iVar24;
          if (iStack_390 < 0x20) {
            auStack_240[iStack_390 * 4] = *puVar30;
            auStack_240[iStack_390 * 4 + 1] = uVar49;
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
        if (uVar48 < 0x48) {
          pbVar19 = &UNK_ram_481e3058;
        }
        else {
          pbVar19 = &UNK_ram_481e305c;
        }
LAB_ram_4819849e:
        uVar18 = uVar18 & 0xffffff7f;
        pbStack_46c = (byte *)0x0;
        sVar44 = 3;
        goto LAB_ram_481984a6;
      }
      iVar23 = __unorddf2(uStack_470,uStack_468,uStack_470,uStack_468);
      if (iVar23 != 0) {
        if (lVar53 < 0) {
          cStack_395 = '-';
        }
        if (uVar48 < 0x48) {
          pbVar19 = &UNK_ram_481e3060;
        }
        else {
          pbVar19 = &UNK_ram_481e3064;
        }
        goto LAB_ram_4819849e;
      }
      if (uVar48 == 0x61) {
        uVar41 = 0x78;
LAB_ram_481984d4:
        uStack_394 = CONCAT11(uVar41,0x30);
        bVar11 = true;
        if ((int)sVar44 < 100) {
          pbStack_46c = (byte *)0x0;
          pbVar19 = local_324;
        }
        else {
          pbVar19 = (byte *)FUN_ram_4ff450d0(param_1,sVar44 + 1);
          pbStack_46c = pbVar19;
          if (pbVar19 == (byte *)0x0) {
            *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
            goto LAB_ram_48198510;
          }
        }
      }
      else {
        if (uVar48 == 0x41) {
          uVar41 = 0x58;
          goto LAB_ram_481984d4;
        }
        if (sVar44 == 0xffffffff) {
          pbStack_46c = (byte *)0x0;
          sVar44 = 6;
        }
        else {
          pbStack_46c = (byte *)0x0;
          if (((uVar48 & 0xffffffdf) == 0x47) && (sVar44 == 0)) {
            sVar44 = 1;
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
      uVar49 = uVar48 & 0xffffffdf;
      if (uVar49 == 0x41) {
        uVar55 = FUN_ram_4819c0aa(uStack_470,uStack_468,&sStack_388);
        uVar55 = __muldf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),DAT_ram_481f4dc8,
                          DAT_ram_481f4dcc);
        iVar23 = __eqdf2((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),0,0);
        uVar13 = DAT_ram_481f4dd4;
        uVar33 = DAT_ram_481f4dd0;
        if (iVar23 == 0) {
          sStack_388 = 1;
        }
        pbVar43 = pbVar19;
        if (uVar48 == 0x61) {
          pcVar26 = "0123456789abcdef";
        }
        else {
          pcVar26 = "0123456789ABCDEF";
        }
        goto LAB_ram_481985e4;
      }
      if (uVar49 == 0x46) {
        uVar33 = 3;
        sVar45 = sVar44;
      }
      else {
        sVar45 = sVar44 + 1;
        if (uVar49 != 0x45) {
          sVar45 = sVar44;
        }
        uVar33 = 2;
      }
      pbVar19 = (byte *)FUN_ram_4819c440(param_1,uStack_470,uStack_468,uVar33,sVar45,&sStack_388,
                                         auStack_384,&pbStack_378);
      if (uVar49 == 0x47) {
        if (!bVar6) goto LAB_ram_48198a1c;
        pbVar43 = pbVar19 + sVar45;
      }
      else {
        pbVar43 = pbVar19 + sVar45;
        if (uVar49 == 0x46) {
          if ((*pbVar19 == 0x30) && (iVar23 = __nedf2(uStack_470,uStack_468,0,0), iVar23 != 0)) {
            sStack_388 = 1 - sVar45;
          }
          pbVar43 = pbVar43 + sStack_388;
        }
      }
      iVar23 = __eqdf2(uStack_470,uStack_468,0,0);
      if (iVar23 == 0) {
        pbStack_378 = pbVar43;
      }
      while (pbVar47 = pbStack_378, pbStack_378 < pbVar43) {
        pbStack_378 = pbStack_378 + 1;
        *pbVar47 = 0x30;
      }
LAB_ram_48198a1c:
      uVar46 = (int)pbStack_378 - (int)pbVar19;
      sVar45 = sStack_388;
      if (uVar49 == 0x47) {
        if ((-4 < (int)sStack_388) && ((int)sStack_388 <= (int)sVar44)) {
          if ((int)sStack_388 < (int)uVar46) {
            uVar48 = 0x67;
            sVar45 = uVar46 + sVar22;
            if ((int)sStack_388 < 1) {
              sVar45 = (sVar45 - sStack_388) + 1;
            }
          }
          else {
            if (bVar6) {
              sVar45 = sStack_388 + sVar22;
            }
            uVar48 = 0x67;
          }
          goto LAB_ram_48198b1a;
        }
        uVar48 = uVar48 - 2;
        goto LAB_ram_481986ea;
      }
      if (uVar49 != 0x46) goto LAB_ram_481986ea;
      if ((int)sStack_388 < 1) {
        if (!bVar6 && sVar44 == 0) {
          uVar48 = 0x66;
          sVar45 = 1;
          goto LAB_ram_48198b1a;
        }
        iVar23 = sVar22 + 1;
LAB_ram_48198ace:
        sVar45 = sVar44 + iVar23;
      }
      else if (bVar6 || sVar44 != 0) {
        iVar23 = sVar22 + sStack_388;
        goto LAB_ram_48198ace;
      }
      uVar48 = 0x66;
LAB_ram_48198b1a:
      iVar36 = 0;
      sVar44 = sStack_388;
      iVar24 = 0;
      iVar23 = 0;
      if (bVar10) {
        iVar31 = 0;
        iVar24 = 0;
        iVar23 = iVar36;
        if (0 < (int)sStack_388) {
          while ((uVar49 = (uint)*pbStack_464, uVar49 != 0xff && ((int)uVar49 < (int)sVar44))) {
            if (pbStack_464[1] == 0) {
              iVar36 = iVar36 + 1;
              sVar44 = sVar44 - uVar49;
            }
            else {
              iVar31 = iVar31 + 1;
              pbStack_464 = pbStack_464 + 1;
              sVar44 = sVar44 - uVar49;
            }
          }
          sVar45 = sVar45 + (iVar31 + iVar36) * sStack_450;
          iVar24 = iVar31;
          iVar23 = iVar36;
        }
      }
      goto LAB_ram_481987a4;
    case 0x43:
    case 99:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          local_324[0] = (byte)auStack_240[iVar23 * 4];
        }
        else {
          pbVar19 = (byte *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
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
          uVar49 = *apuStack_3a4[0];
          local_324[0] = (byte)uVar49;
          if (iStack_390 < 0x20) {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar49;
            iVar17 = iVar36;
          }
          else {
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iVar17 = iVar36;
          }
        }
      }
LAB_ram_48197fb6:
      cStack_395 = '\0';
      pbStack_46c = (byte *)0x0;
      sVar45 = 1;
      sVar51 = 0;
      iVar23 = 0;
      iVar24 = 0;
      sVar44 = 0;
      pbVar19 = local_324;
      goto LAB_ram_481987ae;
    case 0x44:
      bVar7 = true;
    case 100:
    case 0x69:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = puVar30 + 2;
              auStack_240[iVar24 * 4] = uVar49;
              auStack_240[iVar24 * 4 + 1] = uVar52;
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
LAB_ram_48198116:
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar49 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar49;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_48198272:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(short)auStack_240[iVar23 * 4];
            }
            else {
              psVar25 = (short *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,
                                                  auStack_240,auStack_2c0,&uStack_38c);
              uVar49 = (uint)*psVar25;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar49 = (uint)(short)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar52 = *apuStack_3a4[0];
            uVar49 = (uint)(short)uVar52;
LAB_ram_48198196:
            if (0x1f < iStack_390) goto LAB_ram_48198272;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar52;
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (!bVar9) goto LAB_ram_48198116;
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(char)auStack_240[iVar23 * 4];
            }
            else {
              pcVar26 = (char *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = (uint)*pcVar26;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar52 = *apuStack_3a4[0];
              uVar49 = (uint)(char)uVar52;
              goto LAB_ram_48198196;
            }
            uVar49 = (uint)(char)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        uVar52 = (int)uVar49 >> 0x1f;
      }
      iVar23 = 1;
      if ((int)uVar52 < 0) {
        uVar52 = -(uint)(uVar49 != 0) - uVar52;
        uVar49 = -uVar49;
        cStack_395 = '-';
      }
LAB_ram_48198070:
      uVar55 = CONCAT44(uVar52,uVar49);
      if (-1 < (int)sVar44) {
        uVar18 = uVar18 & 0xffffff7f;
        if (uVar49 != 0 || uVar52 != 0) goto LAB_ram_48199e7a;
        if (sVar44 != 0) goto LAB_ram_4819808e;
        pbVar19 = (byte *)auStack_2c0;
        if ((iVar23 == 0) && (bVar6)) {
          abStack_2c2[1] = '0';
LAB_ram_48199598:
          pbVar19 = abStack_2c2 + 1;
        }
        goto LAB_ram_48199ec4;
      }
      if (uVar49 == 0 && uVar52 == 0) {
LAB_ram_4819808e:
        if (iVar23 == 1) {
LAB_ram_48199590:
          abStack_2c2[1] = (char)uVar49 + '0';
          goto LAB_ram_48199598;
        }
      }
      else {
LAB_ram_48199e7a:
        if (iVar23 == 1) {
          if ((uVar52 == 0) && (uVar49 < 10)) goto LAB_ram_48199590;
          uVar46 = 0;
          pbVar19 = (byte *)auStack_2c0;
          goto LAB_ram_481995b2;
        }
      }
      pbVar19 = (byte *)auStack_2c0;
      if (iVar23 == 2) {
        do {
          pbVar19 = pbVar19 + -1;
          *pbVar19 = pcStack_3c8[uVar49 & 0xf];
          uVar49 = uVar52 << 0x1c | uVar49 >> 4;
          uVar52 = uVar52 >> 4;
        } while (uVar49 != 0 || uVar52 != 0);
      }
      else {
        do {
          pbVar43 = pbVar19;
          iVar23 = (uVar49 & 7) + 0x30;
          uVar49 = uVar52 << 0x1d | uVar49 >> 3;
          uVar52 = uVar52 >> 3;
          pbVar43[-1] = (byte)iVar23;
          pbVar19 = pbVar43 + -1;
        } while (uVar49 != 0 || uVar52 != 0);
        if ((bVar6) && (iVar23 != 0x30)) {
          pbVar43[-2] = 0x30;
          pbVar19 = pbVar43 + -2;
        }
      }
      goto LAB_ram_48199ec4;
    case 0x4c:
      bVar3 = true;
      break;
    case 0x4f:
      bVar7 = true;
    case 0x6f:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar49;
              auStack_240[iVar24 * 4 + 1] = uVar52;
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
LAB_ram_48198e68:
            if (iVar23 < iStack_390) {
              uVar49 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_48198e86:
            uVar49 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar49 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_48198eb0:
              auStack_240[iVar24 * 4] = uVar49;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_48198fa2:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar49 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar52 = *apuStack_3a4[0];
            uVar49 = uVar52 & 0xffff;
LAB_ram_48198f24:
            if (0x1f < iStack_390) goto LAB_ram_48198fa2;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar52;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar52 = *apuStack_3a4[0];
              uVar49 = uVar52 & 0xff;
              goto LAB_ram_48198f24;
            }
            uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_48198e68;
          if (iVar17 < iStack_390) goto LAB_ram_48198e86;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar49 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_48198eb0;
          }
          uVar49 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar52 = 0;
      }
      bVar11 = false;
      bVar10 = false;
      iVar23 = 0;
LAB_ram_48198de4:
      cStack_395 = '\0';
      goto LAB_ram_48198070;
    case 0x53:
    case 0x73:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          pbVar19 = (byte *)auStack_240[iVar23 * 4];
        }
        else {
          puVar21 = (undefined4 *)
                    FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,auStack_2c0
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
      if ((int)sVar44 < 0) {
        sVar44 = strlen((char *)pbVar19);
LAB_ram_481990cc:
        pbStack_46c = (byte *)0x0;
      }
      else {
        pbStack_46c = memchr(pbVar19,0,sVar44);
        if (pbStack_46c != (byte *)0x0) {
          sVar44 = (int)pbStack_46c - (int)pbVar19;
          goto LAB_ram_481990cc;
        }
      }
LAB_ram_481984a6:
      bVar11 = false;
      sVar51 = 0;
      sVar45 = sVar44;
      goto LAB_ram_48199ed2;
    case 0x55:
      bVar7 = true;
    case 0x75:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar49;
              auStack_240[iVar24 * 4 + 1] = uVar52;
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
LAB_ram_481991e8:
            if (iVar23 < iStack_390) {
              uVar49 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_48199206:
            uVar49 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar49 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_48199230:
              auStack_240[iVar24 * 4] = uVar49;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_48199322:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar49 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar52 = *apuStack_3a4[0];
            uVar49 = uVar52 & 0xffff;
LAB_ram_481992a4:
            if (0x1f < iStack_390) goto LAB_ram_48199322;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar52;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar52 = *apuStack_3a4[0];
              uVar49 = uVar52 & 0xff;
              goto LAB_ram_481992a4;
            }
            uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_481991e8;
          if (iVar17 < iStack_390) goto LAB_ram_48199206;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar49 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_48199230;
          }
          uVar49 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar52 = 0;
      }
      iVar23 = 1;
      goto LAB_ram_48198de4;
    case 0x58:
      pcStack_3c8 = "0123456789ABCDEF";
      goto LAB_ram_48197c80;
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
      goto switchD_ram_48197c6a_caseD_6a;
    case 0x6c:
      if (*pbStack_474 == 0x6c) {
        pbStack_474 = pbStack_474 + 1;
switchD_ram_48197c6a_caseD_6a:
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
            puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
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
        goto LAB_ram_48197bda;
      }
      if (!bVar7) {
        if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              puVar39 = (undefined2 *)auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
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
          goto LAB_ram_48197bda;
        }
        if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              puVar40 = (undefined1 *)auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
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
          goto LAB_ram_48197bda;
        }
      }
      if (bVar1) {
        if (iVar23 < iStack_390) {
          piVar38 = (int *)auStack_240[iVar23 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
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
      goto LAB_ram_48197bda;
    case 0x70:
      if (bVar1) {
        if (iVar23 < iStack_390) {
          uVar49 = auStack_240[iVar23 * 4];
        }
        else {
          puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                             auStack_2c0,&uStack_38c);
          uVar49 = *puVar30;
        }
      }
      else {
        iVar36 = iVar17 + 1;
        if (iVar17 < iStack_390) {
          uVar49 = auStack_240[iVar23 * 4];
          iVar17 = iVar36;
        }
        else if (iStack_390 < 0x20) {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          uVar49 = *puVar30;
          iStack_390 = iStack_390 + 1;
          auStack_240[iVar24 * 4] = uVar49;
          iVar17 = iVar36;
        }
        else {
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          uVar49 = *puVar30;
          iVar17 = iVar36;
        }
      }
      uStack_394 = 0x7830;
      pcStack_3c8 = "0123456789abcdef";
      uVar52 = 0;
      bVar11 = true;
      iVar23 = 2;
      uVar48 = 0x78;
      goto LAB_ram_48198de4;
    case 0x74:
    case 0x7a:
      break;
    case 0x78:
      pcStack_3c8 = "0123456789abcdef";
LAB_ram_48197c80:
      if (bVar4) {
        if (bVar1) {
          if (iVar23 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
          }
          else {
            puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                               auStack_2c0,&uStack_38c);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
          }
        }
        else {
          iVar36 = iVar17 + 1;
          if (iVar17 < iStack_390) {
            uVar49 = auStack_240[iVar23 * 4];
            uVar52 = auStack_240[iVar23 * 4 + 1];
            iVar17 = iVar36;
          }
          else {
            puVar30 = (uint *)((int)apuStack_3a4[0] + 7U & 0xfffffff8);
            uVar49 = *puVar30;
            uVar52 = puVar30[1];
            if (iStack_390 < 0x20) {
              apuStack_3a4[0] = puVar30 + 2;
              iStack_390 = iStack_390 + 1;
              auStack_240[iVar24 * 4] = uVar49;
              auStack_240[iVar24 * 4 + 1] = uVar52;
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
LAB_ram_481993fe:
            if (iVar23 < iStack_390) {
              uVar49 = auStack_240[iVar23 * 4];
            }
            else {
              puVar30 = (uint *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = *puVar30;
            }
          }
          else if (iVar17 < iStack_390) {
LAB_ram_4819941c:
            uVar49 = auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar49 = *apuStack_3a4[0];
            if (iStack_390 < 0x20) {
              iStack_390 = iStack_390 + 1;
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
LAB_ram_48199446:
              auStack_240[iVar24 * 4] = uVar49;
              iVar17 = iVar17 + 1;
            }
            else {
LAB_ram_4819953a:
              apuStack_3a4[0] = apuStack_3a4[0] + 1;
              iVar17 = iVar17 + 1;
            }
          }
        }
        else if (bVar8) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            }
            else {
              puVar29 = (ushort *)
                        FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                         auStack_2c0,&uStack_38c);
              uVar49 = (uint)*puVar29;
            }
          }
          else if (iVar17 < iStack_390) {
            uVar49 = (uint)(ushort)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
          else {
            uVar52 = *apuStack_3a4[0];
            uVar49 = uVar52 & 0xffff;
LAB_ram_481994bc:
            if (0x1f < iStack_390) goto LAB_ram_4819953a;
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            iStack_390 = iStack_390 + 1;
            auStack_240[iVar24 * 4] = uVar52;
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar9) {
          if (bVar1) {
            if (iVar23 < iStack_390) {
              uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            }
            else {
              pbVar19 = (byte *)FUN_ram_48197642(iVar23,param_3,apuStack_3a4,&iStack_390,auStack_240
                                                 ,auStack_2c0,&uStack_38c);
              uVar49 = (uint)*pbVar19;
            }
          }
          else {
            if (iStack_390 <= iVar17) {
              uVar52 = *apuStack_3a4[0];
              uVar49 = uVar52 & 0xff;
              goto LAB_ram_481994bc;
            }
            uVar49 = (uint)(byte)auStack_240[iVar23 * 4];
            iVar17 = iVar17 + 1;
          }
        }
        else {
          if (bVar1) goto LAB_ram_481993fe;
          if (iVar17 < iStack_390) goto LAB_ram_4819941c;
          if (iStack_390 < 0x20) {
            iStack_390 = iStack_390 + 1;
            uVar49 = *apuStack_3a4[0];
            apuStack_3a4[0] = apuStack_3a4[0] + 1;
            goto LAB_ram_48199446;
          }
          uVar49 = *apuStack_3a4[0];
          apuStack_3a4[0] = apuStack_3a4[0] + 1;
          iVar17 = iVar17 + 1;
        }
        uVar52 = 0;
      }
      if ((bVar6) && (uVar49 != 0 || uVar52 != 0)) {
        uStack_394 = CONCAT11((byte)uVar48,0x30);
        bVar11 = true;
      }
      bVar10 = false;
      iVar23 = 2;
      goto LAB_ram_48198de4;
    }
    goto switchD_ram_48197c6a_caseD_74;
  }
LAB_ram_48199e56:
  if ((iStack_368 == 0) || (iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370), iVar23 == 0)) {
    iStack_36c = 0;
  }
  goto LAB_ram_48198510;
  while ((uVar55 = __udivdi3(uVar49,iVar23,10,0), iVar23 != 0 || (9 < uVar49))) {
LAB_ram_481995b2:
    iVar23 = (int)((ulonglong)uVar55 >> 0x20);
    uVar49 = (uint)uVar55;
    cVar20 = __umoddi3(uVar49,iVar23,10,0);
    pbVar19[-1] = cVar20 + 0x30;
    pbVar19 = pbVar19 + -1;
    uVar46 = uVar46 + 1;
    if (((bVar10) && (uVar46 == *pbStack_464)) && (uVar46 != 0xff)) {
      if ((iVar23 == 0) && (uVar49 < 10)) break;
      pbVar19 = pbVar19 + -sStack_450;
      FUN_ram_4ff45594(pbVar19,pcStack_448,sStack_450);
      if (pbStack_464[1] != 0) {
        pbStack_464 = pbStack_464 + 1;
      }
      uVar55 = __udivdi3(uVar49,iVar23,10,0);
      uVar46 = 0;
      goto LAB_ram_481995b2;
    }
  }
LAB_ram_48199ec4:
  pbStack_46c = (byte *)0x0;
  sVar45 = (int)auStack_2c0 - (int)pbVar19;
  sVar51 = sVar44;
LAB_ram_48199ed2:
  bVar5 = false;
  iVar23 = 0;
  iVar24 = 0;
  sVar44 = 0;
  goto LAB_ram_481987ae;
LAB_ram_481985e4:
  sVar45 = sVar44;
  sVar44 = sVar45 - 1;
  pbVar47 = pbVar43 + 1;
  uVar55 = __muldf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),uVar33,uVar13);
  uVar46 = __fixdfsi();
  uVar54 = __floatsidf();
  uVar55 = __subdf3((int)uVar55,(int)((ulonglong)uVar55 >> 0x20),(int)uVar54,
                    (int)((ulonglong)uVar54 >> 0x20));
  uVar15 = DAT_ram_481f4cc4;
  uVar14 = DAT_ram_481f4cc0;
  uVar32 = (undefined4)((ulonglong)uVar55 >> 0x20);
  uVar28 = (undefined4)uVar55;
  *pbVar43 = pcVar26[uVar46];
  pbVar43 = pbVar47;
  if (sVar44 != 0xffffffff) goto code_r0x48198638;
  iVar23 = __gtdf2(uVar28,uVar32,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
  if ((0 < iVar23) ||
     ((iVar23 = __eqdf2(uVar28,uVar32,uVar14,uVar15), iVar23 == 0 && ((uVar46 & 1) != 0)))) {
    bVar2 = pcVar26[0xf];
    pbStack_378 = pbVar47;
    while( true ) {
      pbVar43 = pbStack_378;
      pbStack_378 = pbStack_378 + -1;
      bVar42 = pbVar43[-1];
      if (bVar42 != bVar2) break;
      pbVar43[-1] = 0x30;
    }
    if (bVar42 == 0x39) {
      bVar42 = pcVar26[10];
    }
    else {
      bVar42 = bVar42 + 1;
    }
    pbVar43[-1] = bVar42;
    goto LAB_ram_481986e6;
  }
  goto LAB_ram_481989ba;
code_r0x48198638:
  iVar23 = __nedf2(uVar28,uVar32,0,0);
  if (iVar23 == 0) goto LAB_ram_481989ba;
  goto LAB_ram_481985e4;
LAB_ram_481989ba:
  for (; -1 < (int)(pbVar47 + (sVar44 - (int)pbVar43)); pbVar43 = pbVar43 + 1) {
    *pbVar43 = 0x30;
  }
  sVar51 = 0;
  if (-2 < (int)sVar44) {
    sVar51 = sVar45;
  }
  pbVar47 = pbVar47 + sVar51;
LAB_ram_481986e6:
  uVar46 = (int)pbVar47 - (int)pbVar19;
LAB_ram_481986ea:
  sVar44 = sStack_388;
  sVar45 = sStack_388 - 1;
  sStack_388 = sVar45;
  cStack_380 = (char)uVar48;
  bVar1 = (uVar48 & 0xffffffdf) == 0x41;
  if (bVar1) {
    cStack_380 = cStack_380 + '\x0f';
  }
  uStack_37f = 0x2b;
  if ((int)sVar45 < 0) {
    sVar45 = 1 - sVar44;
    uStack_37f = 0x2d;
  }
  if ((int)sVar45 < 10) {
    pcVar26 = local_37e;
    if (!bVar1) {
      local_37e[0] = '0';
      pcVar26 = local_37e + 1;
    }
    pcVar37 = pcVar26 + 1;
    *pcVar26 = (char)sVar45 + '0';
  }
  else {
    pcVar26 = local_373 + 2;
    do {
      pcVar37 = pcVar26;
      pcVar37[-1] = (char)((int)sVar45 % 10) + '0';
      sVar44 = (int)sVar45 / 10;
      bVar1 = 99 < (int)sVar45;
      pcVar26 = pcVar37 + -1;
      sVar45 = sVar44;
    } while (bVar1);
    pcVar37[-2] = (char)sVar44 + '0';
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
  iStack_444 = (int)pcVar37 - (int)&cStack_380;
  sVar45 = uVar46 + iStack_444;
  if ((1 < (int)uVar46) || (bVar6)) {
    sVar45 = sVar45 + sVar22;
  }
  bVar10 = false;
  sVar44 = 0;
  iVar24 = 0;
  iVar23 = 0;
LAB_ram_481987a4:
  bVar5 = true;
  if (sStack_454 != 0) {
    cStack_395 = '-';
  }
  sVar51 = 0;
LAB_ram_481987ae:
  uStack_468 = (uint)((ulonglong)lVar53 >> 0x20);
  uStack_470 = (undefined4)lVar53;
  sStack_454 = sVar51;
  if ((int)sVar51 < (int)sVar45) {
    sStack_454 = sVar45;
  }
  sStack_454 = sStack_454 + (cStack_395 != '\0');
  if (bVar11) {
    sStack_454 = sStack_454 + 2;
  }
  if ((uVar18 == 0) && (iVar36 = uStack_460 - sStack_454, piVar38 = piVar16, 0 < iVar36)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823b260;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_48199e0a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    piVar38[1] = iVar36;
    iStack_368 = iStack_368 + iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar36 != 0) {
LAB_ram_48199e0a:
        if (pbStack_46c != (byte *)0x0) {
          FUN_ram_4ff450c2(param_1,pbStack_46c);
        }
LAB_ram_48198510:
        if (((*(uint *)(param_2 + 100) & 1) == 0) && ((*(ushort *)(param_2 + 0xc) & 0x200) == 0)) {
          FUN_ram_4ff21966(*(undefined4 *)(param_2 + 0x58));
        }
        if ((*(ushort *)(param_2 + 0xc) & 0x40) != 0) {
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
      iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_48199e0a;
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
      iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_48199e0a;
      piVar16 = local_364;
    }
  }
  if ((uVar18 == 0x80) && (iVar36 = uStack_460 - sStack_454, piVar38 = piVar16, 0 < iVar36)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823b250;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_48199e0a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    piVar38[1] = iVar36;
    iStack_368 = iStack_368 + iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_48199e0a;
      piVar16 = local_364;
    }
  }
  iVar36 = sVar51 - sVar45;
  piVar38 = piVar16;
  if (0 < iVar36) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823b250;
      iStack_36c = iStack_36c + 1;
      piVar16 = piVar38 + 2;
      if (iVar36 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      if (7 < iStack_36c) {
        iVar31 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar31 != 0) goto LAB_ram_48199e0a;
        piVar16 = local_364;
      }
      iVar36 = iVar36 + -0x10;
      piVar38 = piVar16;
    }
    iStack_368 = iStack_368 + iVar36;
    piVar38[1] = iVar36;
    if (7 < iStack_36c) {
      iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
      if (iVar36 != 0) goto LAB_ram_48199e0a;
      piVar16 = local_364;
    }
  }
  iVar36 = iStack_368;
  if (bVar5) {
    if ((int)uVar48 < 0x66) {
      iStack_368 = iStack_368 + 1;
      iStack_36c = iStack_36c + 1;
      *piVar16 = (int)pbVar19;
      piVar16[1] = 1;
      piVar38 = piVar16 + 2;
      if ((1 < (int)uVar46) || (piVar16 = piVar38, bVar6)) {
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_48199e0a;
          piVar38 = local_364;
        }
        *piVar38 = (int)__s;
        piVar16 = piVar38 + 2;
        piVar38[1] = sVar22;
        iStack_368 = iStack_368 + sVar22;
        iStack_36c = iStack_36c + 1;
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_48199e0a;
          piVar16 = local_364;
        }
        iVar24 = uVar46 - 1;
        iVar23 = __nedf2(uStack_470,uStack_468,0,0);
        if (iVar23 != 0) {
          iStack_368 = iStack_368 + (uVar46 - 1);
          iStack_36c = iStack_36c + 1;
          *piVar16 = (int)(pbVar19 + 1);
          piVar16[1] = iVar24;
          piVar16 = piVar16 + 2;
          goto joined_r0x48199d1c;
        }
        if (1 < (int)uVar46) {
          while( true ) {
            *piVar16 = (int)&DAT_ram_4823b250;
            iStack_36c = iStack_36c + 1;
            piVar38 = piVar16 + 2;
            if (iVar24 < 0x11) break;
            iStack_368 = iStack_368 + 0x10;
            piVar16[1] = 0x10;
            if (7 < iStack_36c) {
              iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
              if (iVar23 != 0) goto LAB_ram_48199e0a;
              piVar38 = local_364;
            }
            iVar24 = iVar24 + -0x10;
            piVar16 = piVar38;
          }
          piVar16[1] = iVar24;
          iStack_368 = iStack_368 + iVar24;
          piVar16 = piVar38;
          goto joined_r0x48199d1c;
        }
      }
      else {
joined_r0x48199d1c:
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_48199e0a;
          piVar16 = local_364;
        }
      }
      *piVar16 = (int)&cStack_380;
      piVar16[1] = iStack_444;
      iStack_368 = iStack_368 + iStack_444;
      goto joined_r0x48199d50;
    }
    iVar31 = __eqdf2(uStack_470,uStack_468,0,0);
    if (iVar31 == 0) {
      *piVar16 = (int)"0";
      piVar16[1] = 1;
      iStack_368 = iVar36 + 1;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_48199e0a;
        piVar38 = local_364;
      }
      if (((int)uVar46 <= (int)sStack_388) && (!bVar6)) goto LAB_ram_48199932;
      *piVar38 = (int)__s;
      piVar38[1] = sVar22;
      iStack_368 = iStack_368 + sVar22;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar38 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_48199e0a;
        piVar38 = local_364;
      }
      iVar23 = uVar46 - 1;
      if (iVar23 < 1) goto LAB_ram_48199932;
      while( true ) {
        *piVar38 = (int)&DAT_ram_4823b250;
        iStack_36c = iStack_36c + 1;
        piVar16 = piVar38 + 2;
        if (iVar23 < 0x11) break;
        iStack_368 = iStack_368 + 0x10;
        piVar38[1] = 0x10;
        if (7 < iStack_36c) {
          iVar24 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
          if (iVar24 != 0) goto LAB_ram_48199e0a;
          piVar16 = local_364;
        }
        iVar23 = iVar23 + -0x10;
        piVar38 = piVar16;
      }
LAB_ram_481997f6:
      piVar38[1] = iVar23;
      iStack_368 = iStack_368 + iVar23;
      piVar38 = piVar16;
    }
    else {
      if (0 < (int)sStack_388) {
        sVar45 = sVar44;
        if ((int)uVar46 < (int)sVar44) {
          sVar45 = uVar46;
        }
        if (0 < (int)sVar45) {
          *piVar16 = (int)pbVar19;
          iStack_36c = iStack_36c + 1;
          piVar16[1] = sVar45;
          iStack_368 = iVar36 + sVar45;
          piVar16 = piVar16 + 2;
          if (7 < iStack_36c) {
            iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar36 != 0) goto LAB_ram_48199e0a;
            piVar16 = local_364;
          }
        }
        iVar36 = sVar44 - (sVar45 & (int)~sVar45 >> 0x1f);
        piVar38 = piVar16;
        if (0 < iVar36) {
          while( true ) {
            *piVar38 = (int)&DAT_ram_4823b250;
            iStack_36c = iStack_36c + 1;
            piVar16 = piVar38 + 2;
            if (iVar36 < 0x11) break;
            iStack_368 = iStack_368 + 0x10;
            piVar38[1] = 0x10;
            if (7 < iStack_36c) {
              iVar31 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
              if (iVar31 != 0) goto LAB_ram_48199e0a;
              piVar16 = local_364;
            }
            iVar36 = iVar36 + -0x10;
            piVar38 = piVar16;
          }
          piVar38[1] = iVar36;
          iStack_368 = iStack_368 + iVar36;
          if (7 < iStack_36c) {
            iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar36 != 0) goto LAB_ram_48199e0a;
            piVar16 = local_364;
          }
        }
        pbVar43 = pbVar19 + sVar44;
        if (bVar10) {
          do {
            if (iVar24 < 1) {
              if (iVar23 < 1) goto code_r0x48199a46;
LAB_ram_48199b5e:
              iVar23 = iVar23 + -1;
            }
            else {
              if (0 < iVar23) goto LAB_ram_48199b5e;
              iVar24 = iVar24 + -1;
              pbStack_464 = pbStack_464 + -1;
            }
            *piVar16 = (int)pcStack_448;
            piVar16[1] = sStack_450;
            iStack_368 = iStack_368 + sStack_450;
            iStack_36c = iStack_36c + 1;
            piVar16 = piVar16 + 2;
            if (7 < iStack_36c) {
              iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
              if (iVar36 != 0) goto LAB_ram_48199e0a;
              piVar16 = local_364;
            }
            pbVar47 = pbVar19 + (uVar46 - (int)pbVar43);
            if ((int)(uint)*pbStack_464 < (int)(pbVar19 + (uVar46 - (int)pbVar43))) {
              pbVar47 = (byte *)(uint)*pbStack_464;
            }
            if (0 < (int)pbVar47) {
              *piVar16 = (int)pbVar43;
              iStack_36c = iStack_36c + 1;
              piVar16[1] = (int)pbVar47;
              iStack_368 = iStack_368 + (int)pbVar47;
              piVar16 = piVar16 + 2;
              if (7 < iStack_36c) {
                iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
                if (iVar36 != 0) goto LAB_ram_48199e0a;
                piVar16 = local_364;
              }
            }
            iVar36 = (uint)*pbStack_464 - ((uint)pbVar47 & (int)~(uint)pbVar47 >> 0x1f);
            piVar38 = piVar16;
            if (0 < iVar36) {
              while( true ) {
                *piVar38 = (int)&DAT_ram_4823b250;
                iStack_36c = iStack_36c + 1;
                piVar16 = piVar38 + 2;
                if (iVar36 < 0x11) break;
                iStack_368 = iStack_368 + 0x10;
                piVar38[1] = 0x10;
                if (7 < iStack_36c) {
                  iVar31 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
                  if (iVar31 != 0) goto LAB_ram_48199e0a;
                  piVar16 = local_364;
                }
                iVar36 = iVar36 + -0x10;
                piVar38 = piVar16;
              }
              piVar38[1] = iVar36;
              iStack_368 = iStack_368 + iVar36;
              if (7 < iStack_36c) {
                iVar36 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
                if (iVar36 != 0) goto LAB_ram_48199e0a;
                piVar16 = local_364;
              }
            }
            pbVar43 = pbVar43 + *pbStack_464;
          } while( true );
        }
LAB_ram_48199a50:
        if (((int)sStack_388 < (int)uVar46) || (piVar38 = piVar16, bVar6)) {
          *piVar16 = (int)__s;
          piVar38 = piVar16 + 2;
          piVar16[1] = sVar22;
          iStack_368 = iStack_368 + sVar22;
          iStack_36c = iStack_36c + 1;
          if (7 < iStack_36c) {
            iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar23 != 0) goto LAB_ram_48199e0a;
            piVar38 = local_364;
          }
        }
        pbVar47 = (byte *)(uVar46 - sStack_388);
        if ((int)(pbVar19 + (uVar46 - (int)pbVar43)) < (int)(uVar46 - sStack_388)) {
          pbVar47 = pbVar19 + (uVar46 - (int)pbVar43);
        }
        if (0 < (int)pbVar47) {
          *piVar38 = (int)pbVar43;
          piVar38[1] = (int)pbVar47;
          iStack_368 = iStack_368 + (int)pbVar47;
          piVar38 = piVar38 + 2;
          iStack_36c = iStack_36c + 1;
          if (7 < iStack_36c) {
            iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar23 != 0) goto LAB_ram_48199e0a;
            piVar38 = local_364;
          }
        }
        iVar23 = (uVar46 - sStack_388) - ((uint)pbVar47 & (int)~(uint)pbVar47 >> 0x1f);
        if (iVar23 < 1) goto LAB_ram_48199932;
        while( true ) {
          *piVar38 = (int)&DAT_ram_4823b250;
          iStack_36c = iStack_36c + 1;
          piVar16 = piVar38 + 2;
          if (iVar23 < 0x11) break;
          iStack_368 = iStack_368 + 0x10;
          piVar38[1] = 0x10;
          if (7 < iStack_36c) {
            iVar24 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar24 != 0) goto LAB_ram_48199e0a;
            piVar16 = local_364;
          }
          iVar23 = iVar23 + -0x10;
          piVar38 = piVar16;
        }
        goto LAB_ram_481997f6;
      }
      *piVar16 = (int)"0";
      piVar16[1] = 1;
      iStack_368 = iVar36 + 1;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_48199e0a;
        piVar38 = local_364;
      }
      if ((uVar46 == 0 && sStack_388 == 0) && !bVar6) goto LAB_ram_48199932;
      piVar16 = piVar38 + 2;
      *piVar38 = (int)__s;
      piVar38[1] = sVar22;
      iStack_368 = iStack_368 + sVar22;
      iStack_36c = iStack_36c + 1;
      if (7 < iStack_36c) {
        iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar23 != 0) goto LAB_ram_48199e0a;
        piVar16 = local_364;
      }
      if ((int)sStack_388 < 0) {
        iVar23 = -sStack_388;
        piVar38 = piVar16;
        while( true ) {
          *piVar38 = (int)&DAT_ram_4823b250;
          iStack_36c = iStack_36c + 1;
          piVar16 = piVar38 + 2;
          if (iVar23 < 0x11) break;
          iStack_368 = iStack_368 + 0x10;
          piVar38[1] = 0x10;
          if (7 < iStack_36c) {
            iVar24 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
            if (iVar24 != 0) goto LAB_ram_48199e0a;
            piVar16 = local_364;
          }
          iVar23 = iVar23 + -0x10;
          piVar38 = piVar16;
        }
        piVar38[1] = iVar23;
        iStack_368 = iStack_368 + iVar23;
        if (7 < iStack_36c) {
          iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
          if (iVar23 != 0) goto LAB_ram_48199e0a;
          piVar16 = local_364;
        }
      }
      *piVar16 = (int)pbVar19;
      piVar16[1] = uVar46;
      iStack_368 = iStack_368 + uVar46;
      iStack_36c = iStack_36c + 1;
      piVar38 = piVar16 + 2;
    }
  }
  else {
    *piVar16 = (int)pbVar19;
    piVar16[1] = sVar45;
    iStack_368 = iStack_368 + sVar45;
joined_r0x48199d50:
    iStack_36c = iStack_36c + 1;
    piVar38 = piVar16 + 2;
  }
  if (7 < iStack_36c) {
    iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
    if (iVar23 != 0) goto LAB_ram_48199e0a;
    piVar38 = local_364;
  }
LAB_ram_48199932:
  if (((uVar18 & 4) != 0) && (iVar23 = uStack_460 - sStack_454, 0 < iVar23)) {
    while( true ) {
      *piVar38 = (int)&DAT_ram_4823b260;
      iStack_36c = iStack_36c + 1;
      if (iVar23 < 0x11) break;
      iStack_368 = iStack_368 + 0x10;
      piVar38[1] = 0x10;
      piVar38 = piVar38 + 2;
      if (7 < iStack_36c) {
        iVar24 = FUN_ram_48199fae(param_1,param_2,&uStack_370);
        if (iVar24 != 0) goto LAB_ram_48199e0a;
        piVar38 = local_364;
      }
      iVar23 = iVar23 + -0x10;
    }
    iStack_368 = iStack_368 + iVar23;
    piVar38[1] = iVar23;
    if ((7 < iStack_36c) && (iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370), iVar23 != 0))
    goto LAB_ram_48199e0a;
  }
  if ((int)uStack_460 < (int)sStack_454) {
    uStack_460 = sStack_454;
  }
  iStack_458 = uStack_460 + iStack_458;
  if ((iStack_368 != 0) && (iVar23 = FUN_ram_48199fae(param_1,param_2,&uStack_370), iVar23 != 0))
  goto LAB_ram_48199e0a;
  iStack_36c = 0;
  if (pbStack_46c != (byte *)0x0) {
    FUN_ram_4ff450c2(param_1,pbStack_46c);
  }
  piVar16 = local_364;
  param_3 = pbStack_474;
  iVar23 = iVar17;
  pbVar19 = pbStack_474;
  goto LAB_ram_48197bda;
switchD_ram_48197c6a_caseD_31:
  uVar49 = 0;
  do {
    uVar49 = uVar49 * 10 + (uVar48 - 0x30);
    uVar48 = (uint)*pbStack_474;
    pbStack_474 = pbStack_474 + 1;
  } while (uVar48 - 0x30 < 10);
  if (uVar48 == 0x24) goto code_r0x48197f3c;
  goto LAB_ram_48197c50;
code_r0x48197f3c:
  if (0x20 < (int)uVar49) goto LAB_ram_48198510;
  iVar23 = uVar49 - 1;
  bVar1 = true;
switchD_ram_48197c6a_caseD_74:
  goto LAB_ram_48197c46;
code_r0x48197d5e:
  if (0x20 < iVar24) goto LAB_ram_48198510;
  iVar24 = iVar24 + -1;
  pbStack_474 = pbVar47;
  if (iVar24 < iStack_390) {
    uStack_460 = auStack_240[iVar24 * 4];
  }
  else {
    puVar30 = (uint *)FUN_ram_48197642(iVar24,param_3,apuStack_3a4,&iStack_390,auStack_240,
                                       auStack_2c0,&uStack_38c);
    uStack_460 = *puVar30;
  }
LAB_ram_48197dcc:
  if (-1 < (int)uStack_460) goto switchD_ram_48197c6a_caseD_74;
  uStack_460 = -uStack_460;
switchD_ram_48197c6a_caseD_2d:
  uVar18 = uVar18 | 4;
  goto switchD_ram_48197c6a_caseD_74;
code_r0x48199a46:
  if (pbVar19 + uVar46 < pbVar43) {
    pbVar43 = pbVar19 + uVar46;
  }
  goto LAB_ram_48199a50;
}



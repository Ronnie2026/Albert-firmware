/* Firmware entry: 0x4819c440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_4819c440(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       ,undefined4 *param_7,undefined4 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  char *pcVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 local_1a0;
  uint uStack_194;
  int iStack_190;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_170;
  undefined4 uStack_168;
  int iStack_48;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar11 = *(int **)(param_1 + 0x24);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)thunk_FUN_ram_4ff2070c(0x10);
    *(int **)(param_1 + 0x24) = piVar11;
    if (piVar11 == (int *)0x0) {
      pcVar17 = "REENT malloc succeeded";
      uVar14 = 0xef;
      goto LAB_ram_4819c4ac;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = 0;
    piVar11[3] = 0;
  }
  iVar15 = *piVar11;
  if (iVar15 != 0) {
    uVar19 = piVar11[1];
    *(int *)(iVar15 + 8) = 1 << (uVar19 & 0x1f);
    *(uint *)(iVar15 + 4) = uVar19;
    FUN_ram_4819db24(param_1);
    **(undefined4 **)(param_1 + 0x24) = 0;
  }
  if ((int)param_3 < 0) {
    *param_7 = 1;
    param_3 = param_3 & 0x7fffffff;
  }
  else {
    *param_7 = 0;
  }
  if ((param_3 & 0x7ff00000) == 0x7ff00000) {
    *param_6 = 9999;
    if ((param_3 & 0xfffff) == 0 && param_2 == 0) {
      pcVar17 = "Infinity";
      if (param_8 == (undefined4 *)0x0) {
        return pcVar17;
      }
      iVar15 = 0x7e8;
    }
    else {
      pcVar17 = "NaN";
      if (param_8 == (undefined4 *)0x0) {
        return pcVar17;
      }
      iVar15 = 0x7ef;
    }
    *param_8 = "obj_count" + iVar15 + 4;
    return pcVar17;
  }
  iVar15 = __eqdf2(param_2,param_3,0,0);
  if (iVar15 == 0) {
    *param_6 = 1;
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = "";
    }
    return "0";
  }
  local_1a0 = FUN_ram_4819e432(param_1,param_2,param_3,aiStack_44,&iStack_48);
  iVar15 = iStack_48;
  if (param_3 >> 0x14 == 0) {
    iVar5 = aiStack_44[0] + iStack_48;
    iVar12 = iVar5 + 0x432;
    if (iVar12 < 0x21) {
      uVar19 = param_2 << (0x20U - iVar12 & 0x1f);
    }
    else {
      uVar19 = param_3 << (0x40U - iVar12 & 0x1f) | param_2 >> (iVar5 + 0x412U & 0x1f);
    }
    uVar33 = __floatunsidf(uVar19);
    uVar19 = (uint)uVar33;
    uVar21 = (int)((ulonglong)uVar33 >> 0x20) + 0xfe100000;
    iVar5 = iVar5 + -1;
    bVar1 = true;
  }
  else {
    iVar5 = (param_3 >> 0x14) - 0x3ff;
    uVar21 = param_3 & 0xfffff | 0x3ff00000;
    bVar1 = false;
    uVar19 = param_2;
  }
  uVar33 = __subdf3(uVar19,uVar21,DAT_ram_481f4d38,DAT_ram_481f4d3c);
  uVar33 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),DAT_ram_481f4de0,DAT_ram_481f4de4);
  uVar33 = __adddf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),DAT_ram_481f4de8,DAT_ram_481f4dec);
  uVar34 = __floatsidf(iVar5);
  uVar34 = __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_ram_481f4df0,DAT_ram_481f4df4);
  uVar33 = __adddf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),(int)uVar34,
                    (int)((ulonglong)uVar34 >> 0x20));
  uVar14 = (undefined4)((ulonglong)uVar33 >> 0x20);
  uVar19 = __fixdfsi();
  iVar12 = __ltdf2((int)uVar33,uVar14,0,0);
  if (iVar12 < 0) {
    uVar34 = __floatsidf(uVar19);
    iVar12 = __nedf2((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar33,uVar14);
    uVar19 = uVar19 - (iVar12 != 0);
  }
  bVar2 = true;
  if (uVar19 < 0x17) {
    iVar12 = __ltdf2(param_2,param_3,*(undefined4 *)(&DAT_ram_4823b6b0 + uVar19 * 8),
                     *(undefined4 *)(&DAT_ram_4823b6b4 + uVar19 * 8));
    if (iVar12 < 0) {
      uVar19 = uVar19 - 1;
    }
    bVar2 = false;
  }
  iVar31 = (iVar15 - iVar5) + -1;
  iVar12 = 0;
  if (iVar31 < 0) {
    iVar12 = 1 - (iVar15 - iVar5);
    iVar31 = 0;
  }
  if ((int)uVar19 < 0) {
    iStack_190 = -uVar19;
    iVar12 = iVar12 - uVar19;
    uStack_170 = 0;
  }
  else {
    iVar31 = iVar31 + uVar19;
    iStack_190 = 0;
    uStack_170 = uVar19;
  }
  if (param_4 < 10) {
    bVar18 = (int)param_4 < 6;
    uStack_194 = param_4;
    if (!bVar18) {
      uStack_194 = param_4 - 4;
    }
    uStack_180 = param_5;
    if (uStack_194 == 4) {
      bVar3 = true;
LAB_ram_4819c75c:
      uVar21 = param_5;
      uVar28 = param_5;
      if ((int)param_5 < 1) {
        uStack_180 = 1;
        uVar21 = 1;
        param_5 = 1;
        uVar28 = 1;
      }
    }
    else {
      if (uStack_194 == 5) {
        bVar3 = true;
      }
      else {
        if (uStack_194 == 2) {
          bVar3 = false;
          goto LAB_ram_4819c75c;
        }
        bVar3 = false;
        if (uStack_194 != 3) goto LAB_ram_4819c6f8;
      }
      param_5 = uVar19 + param_5;
      uVar28 = param_5 + 1;
      uVar21 = uVar28;
      if ((int)uVar28 < 1) {
        uVar21 = 1;
      }
    }
  }
  else {
    bVar18 = true;
    uStack_194 = 0;
LAB_ram_4819c6f8:
    bVar3 = true;
    uStack_180 = 0;
    uVar21 = 0x12;
    param_5 = 0xffffffff;
    uVar28 = 0xffffffff;
  }
  iVar15 = 0;
  for (iVar5 = 4; iVar5 + 0x14U <= uVar21; iVar5 = iVar5 << 1) {
    iVar15 = iVar15 + 1;
  }
  *(int *)(*(int *)(param_1 + 0x24) + 4) = iVar15;
  pcVar17 = (char *)FUN_ram_4819da72(param_1);
  if (pcVar17 == (char *)0x0) {
    pcVar17 = "Balloc succeeded";
    uVar14 = 0x1af;
    goto LAB_ram_4819c4ac;
  }
  **(undefined4 **)(param_1 + 0x24) = pcVar17;
  uVar21 = uVar19;
  if ((uVar28 < 0xf) && (bVar18)) {
    if ((int)uVar19 < 1) {
      if (uVar19 == 0) {
        iVar15 = 2;
        uVar24 = param_2;
        uVar7 = param_3;
      }
      else {
        iVar5 = (-uVar19 & 0xf) * 8;
        uVar7 = (int)-uVar19 >> 4;
        puVar6 = &DAT_ram_4823b688;
        iVar15 = 2;
        uVar33 = __muldf3(param_2,param_3,*(undefined4 *)(&DAT_ram_4823b6b0 + iVar5),
                          *(undefined4 *)(&DAT_ram_4823b6b4 + iVar5));
        uVar4 = (ulonglong)uVar33 >> 0x20;
        uVar24 = (uint)uVar33;
        bVar18 = false;
        while( true ) {
          if (uVar7 == 0) break;
          if ((uVar7 & 1) != 0) {
            iVar15 = iVar15 + 1;
            uVar33 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),*puVar6,puVar6[1]);
            bVar18 = true;
          }
          uVar7 = (int)uVar7 >> 1;
          puVar6 = puVar6 + 2;
        }
        uVar7 = (uint)uVar4;
        if (bVar18) goto LAB_ram_4819c846;
      }
    }
    else {
      uVar24 = (int)uVar19 >> 4;
      uVar33 = *(undefined8 *)(&DAT_ram_4823b6b0 + (uVar19 & 0xf) * 8);
      uVar34 = *(undefined8 *)(&DAT_ram_4823b6b0 + (uVar19 & 0xf) * 8);
      puVar6 = &DAT_ram_4823b688;
      if ((uVar24 & 0x10) == 0) {
        iVar15 = 2;
        uVar7 = param_2;
        uVar8 = param_3;
      }
      else {
        uVar24 = uVar24 & 0xf;
        iVar15 = 3;
        uVar33 = __divdf3(param_2,param_3,DAT_ram_4823b6a8,DAT_ram_4823b6ac);
        uVar7 = (uint)uVar33;
        uVar8 = (uint)((ulonglong)uVar33 >> 0x20);
        uVar33 = uVar34;
      }
      while( true ) {
        uVar14 = (undefined4)((ulonglong)uVar33 >> 0x20);
        if (uVar24 == 0) break;
        if ((uVar24 & 1) != 0) {
          iVar15 = iVar15 + 1;
          uVar33 = __muldf3((int)uVar33,uVar14,*puVar6,puVar6[1]);
        }
        uVar24 = (int)uVar24 >> 1;
        puVar6 = puVar6 + 2;
      }
      uVar33 = __divdf3(uVar7,uVar8,(int)uVar33,uVar14);
LAB_ram_4819c846:
      uVar24 = (uint)uVar33;
      uVar7 = (uint)((ulonglong)uVar33 >> 0x20);
    }
    uVar8 = uVar28;
    uVar33 = CONCAT44(uVar7,uVar24);
    if ((bVar2) &&
       (iVar5 = __ltdf2(uVar24,uVar7,DAT_ram_481f4d28,DAT_ram_481f4d2c),
       uVar33 = CONCAT44(uVar7,uVar24), iVar5 < 0)) {
      if (uVar28 == 0) {
        uVar8 = 0;
        uVar33 = CONCAT44(uVar7,uVar24);
      }
      else {
        if ((int)param_5 < 1) goto LAB_ram_4819c9b0;
        iVar15 = iVar15 + 1;
        uVar33 = __muldf3(uVar24,uVar7,DAT_ram_481f4d80,DAT_ram_481f4d84);
        uVar8 = param_5;
        uVar21 = uVar19 - 1;
      }
    }
    uVar29 = (undefined4)((ulonglong)uVar33 >> 0x20);
    uVar34 = __floatsidf(iVar15);
    uVar34 = __muldf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),(int)uVar33,uVar29);
    uVar34 = __adddf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),DAT_ram_481f4df8,DAT_ram_481f4dfc
                     );
    uVar14 = (undefined4)uVar34;
    uVar24 = (int)((ulonglong)uVar34 >> 0x20) + 0xfcc00000;
    if (uVar8 != 0) {
      iVar15 = (uVar8 - 1) * 8;
      if (bVar3) {
        uVar34 = __divdf3(DAT_ram_481f4cc0,DAT_ram_481f4cc4,
                          *(undefined4 *)(&DAT_ram_4823b6b0 + iVar15),
                          *(undefined4 *)(&DAT_ram_4823b6b4 + iVar15));
        uVar34 = __subdf3((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),uVar14,uVar24);
        uVar27 = DAT_ram_481f4d84;
        uVar26 = DAT_ram_481f4d80;
        uVar29 = DAT_ram_481f4d2c;
        uVar14 = DAT_ram_481f4d28;
        pcVar22 = pcVar17;
        while( true ) {
          uVar30 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar25 = (undefined4)((ulonglong)uVar34 >> 0x20);
          uStack_168 = (undefined4)uVar34;
          pcVar23 = pcVar22 + 1;
          cVar9 = __fixdfsi((int)uVar33,uVar30);
          uVar34 = __floatsidf();
          uVar33 = __subdf3((int)uVar33,uVar30,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
          uVar16 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar30 = (undefined4)uVar33;
          *pcVar22 = cVar9 + '0';
          iVar15 = __ltdf2(uVar30,uVar16,uStack_168,uVar25);
          if (iVar15 < 0) break;
          uVar33 = __subdf3(uVar14,uVar29,uVar30,uVar16);
          iVar15 = __ltdf2((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uStack_168,uVar25);
          pcVar22 = pcVar23;
          if (iVar15 < 0) goto LAB_ram_4819cdd6;
          if (pcVar23 == pcVar17 + uVar8) goto LAB_ram_4819c9b0;
          uVar34 = __muldf3(uStack_168,uVar25,uVar26,uVar27);
          uVar33 = __muldf3(uVar30,uVar16,uVar26,uVar27);
        }
        goto LAB_ram_4819cdae;
      }
      uVar34 = __muldf3(*(undefined4 *)(&DAT_ram_4823b6b0 + iVar15),
                        *(undefined4 *)(&DAT_ram_4823b6b4 + iVar15),uVar14,uVar24);
      uVar29 = DAT_ram_481f4d84;
      uVar14 = DAT_ram_481f4d80;
      uVar26 = (undefined4)((ulonglong)uVar34 >> 0x20);
      pcVar22 = pcVar17;
      while( true ) {
        uVar27 = (undefined4)((ulonglong)uVar33 >> 0x20);
        cVar9 = __fixdfsi((int)uVar33,uVar27);
        uVar35 = __floatsidf();
        uVar33 = __subdf3((int)uVar33,uVar27,(int)uVar35,(int)((ulonglong)uVar35 >> 0x20));
        uVar30 = (undefined4)((ulonglong)uVar33 >> 0x20);
        uVar27 = (undefined4)uVar33;
        *pcVar22 = cVar9 + '0';
        if (pcVar22 + 1 == pcVar17 + uVar8) break;
        uVar33 = __muldf3(uVar27,uVar30,uVar14,uVar29);
        pcVar22 = pcVar22 + 1;
      }
      uVar33 = __adddf3((int)uVar34,uVar26,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
      iVar15 = __gtdf2(uVar27,uVar30,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
      pcVar22 = pcVar17 + uVar8;
      if (0 < iVar15) {
LAB_ram_4819cdd6:
        do {
          pcVar23 = pcVar22;
          cVar9 = pcVar23[-1];
          pcVar22 = pcVar23 + -1;
          if (cVar9 != '9') goto LAB_ram_4819cdec;
        } while (pcVar17 != pcVar22);
        uVar21 = uVar21 + 1;
        cVar9 = '0';
LAB_ram_4819cdec:
        *pcVar22 = cVar9 + '\x01';
        goto LAB_ram_4819cdae;
      }
      uVar33 = __subdf3(DAT_ram_481f4cc0,DAT_ram_481f4cc4,(int)uVar34,uVar26);
      iVar15 = __ltdf2(uVar27,uVar30,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
      if (iVar15 < 0) {
        do {
          pcVar23 = pcVar22;
          pcVar22 = pcVar23 + -1;
        } while (pcVar23[-1] == '0');
        goto LAB_ram_4819cdae;
      }
      goto LAB_ram_4819c9b0;
    }
    uVar33 = __subdf3((int)uVar33,uVar29,DAT_ram_481f4e00,_DAT_ram_481f4e04);
    uVar29 = (undefined4)((ulonglong)uVar33 >> 0x20);
    iVar15 = __gtdf2((int)uVar33,uVar29,uVar14,uVar24);
    if (iVar15 < 1) {
      iVar15 = __ltdf2((int)uVar33,uVar29,uVar14,uVar24 ^ 0x80000000);
      if (-1 < iVar15) goto LAB_ram_4819c9b0;
      goto LAB_ram_4819ca1e;
    }
LAB_ram_4819d020:
    uVar19 = uVar21;
    iVar15 = 0;
    iVar5 = 0;
LAB_ram_4819d00e:
    pcVar23 = pcVar17 + 1;
    *pcVar17 = '1';
    uVar19 = uVar19 + 1;
LAB_ram_4819ca2a:
    iVar31 = 0;
  }
  else {
LAB_ram_4819c9b0:
    uVar29 = DAT_ram_481f4d84;
    uVar14 = DAT_ram_481f4d80;
    if ((-1 < aiStack_44[0]) && ((int)uVar19 < 0xf)) {
      uVar26 = *(undefined4 *)(&DAT_ram_4823b6b0 + uVar19 * 8);
      uVar27 = *(undefined4 *)(&DAT_ram_4823b6b4 + uVar19 * 8);
      if ((-1 < (int)uStack_180) || (0 < (int)uVar28)) {
        pcVar22 = pcVar17;
        uStack_17c = param_3;
        uStack_178 = param_2;
        do {
          pcVar23 = pcVar22 + 1;
          __divdf3(uStack_178,uStack_17c,uVar26,uVar27);
          bVar10 = __fixdfsi();
          uVar33 = __floatsidf();
          uVar33 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uVar26,uVar27);
          uVar33 = __subdf3(uStack_178,uStack_17c,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
          uVar16 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar30 = (undefined4)uVar33;
          *pcVar22 = bVar10 + 0x30;
          if (pcVar17 + uVar28 == pcVar23) {
            uVar33 = __adddf3(uVar30,uVar16,uVar30,uVar16);
            uVar14 = (undefined4)((ulonglong)uVar33 >> 0x20);
            iVar15 = __gtdf2((int)uVar33,uVar14,uVar26,uVar27);
            pcVar22 = pcVar23;
            uVar21 = uVar19;
            if ((0 < iVar15) ||
               ((iVar15 = __eqdf2((int)uVar33,uVar14,uVar26,uVar27), iVar15 == 0 &&
                ((bVar10 & 1) != 0)))) goto LAB_ram_4819cdd6;
            break;
          }
          uVar33 = __muldf3(uVar30,uVar16,uVar14,uVar29);
          uStack_17c = (uint)((ulonglong)uVar33 >> 0x20);
          uStack_178 = (uint)uVar33;
          iVar15 = __eqdf2(uStack_178,uStack_17c,0,0);
          uVar21 = uVar19;
          pcVar22 = pcVar23;
        } while (iVar15 != 0);
        goto LAB_ram_4819cdae;
      }
      if (uVar28 == 0) {
        uVar33 = __muldf3(uVar26,uVar27,DAT_ram_481f4e00,_DAT_ram_481f4e04);
        iVar15 = __ledf2(param_2,param_3,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
        uVar21 = uVar19;
        if (0 < iVar15) goto LAB_ram_4819d020;
      }
LAB_ram_4819ca1e:
      iVar15 = 0;
      iVar5 = 0;
LAB_ram_4819ca22:
      uVar19 = ~uStack_180;
      pcVar23 = pcVar17;
      goto LAB_ram_4819ca2a;
    }
    iVar15 = iStack_190;
    if (bVar3) {
      iVar13 = iVar12;
      if ((int)uStack_194 < 2) {
        uVar21 = aiStack_44[0] + 0x433;
        if (!bVar1) {
          uVar21 = 0x36 - iStack_48;
        }
      }
      else {
        iVar5 = uVar28 - 1;
        uVar21 = uVar28;
        if (iStack_190 < iVar5) {
          uStack_170 = (iVar5 - iStack_190) + uStack_170;
          iVar15 = 0;
          iStack_190 = iVar5;
        }
        else {
          iVar15 = iStack_190 - iVar5;
          if ((int)uVar28 < 0) {
            uVar21 = 0;
            iVar13 = iVar12 - uVar28;
          }
        }
      }
      iVar32 = iVar12 + uVar21;
      iVar31 = iVar31 + uVar21;
      iVar5 = FUN_ram_4819ddc8(param_1,1);
      iVar12 = iVar13;
    }
    else {
      iVar5 = 0;
      iVar32 = iVar12;
    }
    if ((iVar12 != 0) && (0 < iVar31)) {
      iVar13 = iVar12;
      if (iVar31 < iVar12) {
        iVar13 = iVar31;
      }
      iVar32 = iVar32 - iVar13;
      iVar12 = iVar12 - iVar13;
      iVar31 = iVar31 - iVar13;
    }
    if (iStack_190 != 0) {
      uVar14 = local_1a0;
      if ((bVar3) && (iVar15 != 0)) {
        iVar5 = FUN_ram_4819df86(param_1,iVar5,iVar15);
        uVar14 = FUN_ram_4819de04(param_1,iVar5,local_1a0);
        FUN_ram_4819db24(param_1,local_1a0);
        iStack_190 = iStack_190 - iVar15;
        local_1a0 = uVar14;
        if (iStack_190 == 0) goto LAB_ram_4819ceae;
      }
      local_1a0 = FUN_ram_4819df86(param_1,uVar14,iStack_190);
    }
LAB_ram_4819ceae:
    iVar15 = FUN_ram_4819ddc8(param_1,1);
    if (uStack_170 == 0) {
      iVar13 = 1;
      bVar1 = false;
      if ((int)uStack_194 < 2) goto LAB_ram_4819ced4;
    }
    else {
      bVar1 = false;
      iVar15 = FUN_ram_4819df86(param_1,iVar15,uStack_170);
      if ((int)uStack_194 < 2) {
LAB_ram_4819ced4:
        bVar1 = false;
        if (((param_2 == 0) && ((param_3 & 0xfffff) == 0)) && ((param_3 >> 0x14 & 0x7ff) != 0)) {
          iVar32 = iVar32 + 1;
          iVar31 = iVar31 + 1;
          bVar1 = true;
        }
        iVar13 = 1;
        if (uStack_170 == 0) goto LAB_ram_4819cf10;
      }
      iVar13 = FUN_ram_4819dd18(*(undefined4 *)((*(int *)(iVar15 + 0x10) + 3) * 4 + iVar15 + 4));
      iVar13 = 0x20 - iVar13;
    }
LAB_ram_4819cf10:
    uVar21 = iVar13 + iVar31 & 0x1f;
    if (uVar21 == 0) {
      iVar13 = 0;
LAB_ram_4819cf26:
      iVar13 = iVar13 + 0x1c;
      iVar32 = iVar32 + iVar13;
      iVar12 = iVar12 + iVar13;
      iVar31 = iVar31 + iVar13;
    }
    else {
      iVar13 = 0x20 - uVar21;
      if (4 < iVar13) {
        iVar13 = -uVar21;
        goto LAB_ram_4819cf26;
      }
      if (iVar13 != 4) goto LAB_ram_4819cf26;
    }
    if (0 < iVar32) {
      local_1a0 = FUN_ram_4819e070(param_1,local_1a0,iVar32);
    }
    if (0 < iVar31) {
      iVar15 = FUN_ram_4819e070(param_1,iVar15,iVar31);
    }
    if ((bVar2) && (iVar31 = FUN_ram_4819e178(local_1a0,iVar15), iVar31 < 0)) {
      local_1a0 = FUN_ram_4819db8c(param_1,local_1a0,10,0);
      uVar19 = uVar19 - 1;
      uVar28 = param_5;
      if (!bVar3) {
        if ((int)param_5 < 1) goto LAB_ram_4819cfe8;
        goto LAB_ram_4819d26e;
      }
      iVar5 = FUN_ram_4819db8c(param_1,iVar5,10,0);
      if (((int)param_5 < 1) && (2 < (int)uStack_194)) goto LAB_ram_4819cff0;
LAB_ram_4819d02c:
      iVar31 = iVar5;
      if (0 < iVar12) {
        iVar31 = FUN_ram_4819e070(param_1,iVar5,iVar12);
      }
      iVar5 = iVar31;
      if (bVar1) {
        iVar5 = FUN_ram_4819da72(param_1,*(undefined4 *)(iVar31 + 4));
        if (iVar5 == 0) {
          pcVar17 = "Balloc succeeded";
          uVar14 = 0x2ef;
LAB_ram_4819c4ac:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/dtoa.c"
                           ,uVar14,0,pcVar17);
        }
        FUN_ram_4ff45158(iVar5 + 0xc,iVar31 + 0xc,(*(int *)(iVar31 + 0x10) + 2) * 4);
        iVar5 = FUN_ram_4819e070(param_1,iVar5,1);
      }
      pcVar22 = pcVar17;
LAB_ram_4819d090:
      pcVar23 = pcVar22 + 1;
      iVar12 = FUN_ram_4819c30c(local_1a0,iVar15);
      uVar21 = iVar12 + 0x30;
      iVar32 = FUN_ram_4819e178(local_1a0,iVar31);
      iVar13 = FUN_ram_4819e1ae(param_1,iVar15,iVar5);
      iVar20 = 1;
      if (*(int *)(iVar13 + 0xc) == 0) {
        iVar20 = FUN_ram_4819e178(local_1a0,iVar13);
      }
      FUN_ram_4819db24(param_1,iVar13);
      if ((iVar20 == 0 && uStack_194 == 0) && (param_2 & 1) == 0) {
        if (uVar21 == 0x39) {
LAB_ram_4819d134:
          *pcVar22 = '9';
          pcVar22 = pcVar23;
          goto LAB_ram_4819d142;
        }
        if (0 < iVar32) {
LAB_ram_4819d0ee:
          uVar21 = iVar12 + 0x31;
        }
LAB_ram_4819d0f2:
        *pcVar22 = (char)uVar21;
        goto LAB_ram_4819ca2e;
      }
      if ((iVar32 < 0) || ((iVar32 == 0 && uStack_194 == 0) && (param_2 & 1) == 0)) {
        if (0 < iVar20) {
          local_1a0 = FUN_ram_4819e070(param_1,local_1a0,1);
          iVar32 = FUN_ram_4819e178(local_1a0,iVar15);
          if ((0 < iVar32) || ((iVar32 == 0 && ((uVar21 & 1) != 0)))) {
            if (uVar21 != 0x39) goto LAB_ram_4819d0ee;
            goto LAB_ram_4819d134;
          }
        }
        goto LAB_ram_4819d0f2;
      }
      if (0 < iVar20) {
        if (uVar21 == 0x39) goto LAB_ram_4819d134;
        *pcVar22 = (char)uVar21 + '\x01';
        goto LAB_ram_4819ca2e;
      }
      *pcVar22 = (char)uVar21;
      if (pcVar23 != pcVar17 + param_5) {
        local_1a0 = FUN_ram_4819db8c(param_1,local_1a0,10,0);
        pcVar22 = pcVar23;
        if (iVar31 == iVar5) {
          iVar31 = FUN_ram_4819db8c(param_1,iVar31,10,0);
          iVar5 = iVar31;
        }
        else {
          iVar31 = FUN_ram_4819db8c(param_1,iVar31,10,0);
          iVar5 = FUN_ram_4819db8c(param_1,iVar5,10,0);
        }
        goto LAB_ram_4819d090;
      }
    }
    else {
      if ((int)uVar28 < 1) {
LAB_ram_4819cfe8:
        if (2 < (int)uStack_194) {
LAB_ram_4819cff0:
          if (uVar28 == 0) {
            iVar15 = FUN_ram_4819db8c(param_1,iVar15,5,0);
            iVar12 = FUN_ram_4819e178(local_1a0,iVar15);
            if (0 < iVar12) goto LAB_ram_4819d00e;
          }
          goto LAB_ram_4819ca22;
        }
      }
      param_5 = uVar28;
      if (bVar3) goto LAB_ram_4819d02c;
LAB_ram_4819d26e:
      iVar12 = 0;
      while( true ) {
        iVar31 = FUN_ram_4819c30c(local_1a0,iVar15);
        uVar21 = iVar31 + 0x30;
        pcVar17[iVar12] = (char)uVar21;
        iVar12 = iVar12 + 1;
        if ((int)uVar28 <= iVar12) break;
        local_1a0 = FUN_ram_4819db8c(param_1,local_1a0,10,0);
      }
      iVar12 = 0;
      if (0 < (int)uVar28) {
        iVar12 = uVar28 - 1;
      }
      pcVar23 = pcVar17 + iVar12 + 1;
      iVar31 = 0;
    }
    local_1a0 = FUN_ram_4819e070(param_1,local_1a0,1);
    iVar12 = FUN_ram_4819e178(local_1a0,iVar15);
    pcVar22 = pcVar23;
    if ((iVar12 < 1) && ((iVar12 != 0 || ((uVar21 & 1) == 0)))) {
      do {
        pcVar23 = pcVar22;
        pcVar22 = pcVar23 + -1;
      } while (pcVar23[-1] == '0');
    }
    else {
LAB_ram_4819d142:
      do {
        pcVar23 = pcVar22;
        pcVar22 = pcVar23 + -1;
        if (pcVar23[-1] != '9') {
          *pcVar22 = pcVar23[-1] + '\x01';
          goto LAB_ram_4819ca2e;
        }
      } while (pcVar17 != pcVar22);
      uVar19 = uVar19 + 1;
      *pcVar17 = '1';
    }
  }
LAB_ram_4819ca2e:
  FUN_ram_4819db24(param_1,iVar15);
  uVar21 = uVar19;
  if (iVar5 != 0) {
    if ((iVar31 != 0) && (iVar31 != iVar5)) {
      FUN_ram_4819db24(param_1,iVar31);
    }
    FUN_ram_4819db24(param_1,iVar5);
  }
LAB_ram_4819cdae:
  FUN_ram_4819db24(param_1,local_1a0);
  *pcVar23 = '\0';
  *param_6 = uVar21 + 1;
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = pcVar23;
  }
  return pcVar17;
}



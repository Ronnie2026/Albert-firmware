/* Firmware entry: 0x481484f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481484f0(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = *(undefined4 **)(param_1 + 4);
  uVar8 = FUN_ram_48137fd6(*puVar6);
  if (uVar8 >> 0x1c != 6) goto LAB_ram_48148572;
  iVar9 = FUN_ram_4814df8e(param_1,param_2);
  if (iVar9 != 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 10) < 0x28) ||
     (uVar1 = *(ushort *)(param_1 + 8), iVar9 = FUN_ram_48137fc8(*(undefined2 *)(puVar6 + 1)),
     (int)(uVar1 - 0x27) <= iVar9)) {
    FUN_ram_48137fc8(*(undefined2 *)(puVar6 + 1));
    goto LAB_ram_48148572;
  }
  sVar7 = FUN_ram_48137fc8(*(undefined2 *)(puVar6 + 1));
  FUN_ram_4813af5e(param_1,sVar7 + 0x28);
  uVar17 = puVar6[6];
  iVar9 = puVar6[7];
  iVar2 = puVar6[8];
  iVar3 = puVar6[9];
  DAT_ram_4ff6cddc = (byte)(uVar8 >> 0x1c);
  DAT_ram_4ff6cdf0 = '\0';
  uVar8 = puVar6[2];
  iVar18 = puVar6[3];
  iVar4 = puVar6[4];
  iVar5 = puVar6[5];
  DAT_ram_4ff6cdd8 = '\0';
  piVar16 = param_2;
  DAT_ram_4ff6cdc8 = uVar8;
  DAT_ram_4ff6cdcc = iVar18;
  DAT_ram_4ff6cdd0 = iVar4;
  DAT_ram_4ff6cdd4 = iVar5;
  _DAT_ram_4ff6cde0 = uVar17;
  DAT_ram_4ff6cde4 = iVar9;
  DAT_ram_4ff6cde8 = iVar2;
  DAT_ram_4ff6cdec = iVar3;
  DAT_ram_4ff6cdf4 = DAT_ram_4ff6cddc;
  if (uVar17 == 0) {
    if (iVar9 == 0) {
      if (iVar2 == -0x10000) goto LAB_ram_48148572;
      if (uVar8 != 0) goto LAB_ram_48148ad8;
      if (iVar18 != 0) goto LAB_ram_48148bf6;
      if (iVar4 == -0x10000) goto LAB_ram_48148572;
      uVar14 = 0;
      DAT_ram_4ff6cdf0 = '\0';
      goto LAB_ram_4814889c;
    }
    if (uVar8 != 0) {
LAB_ram_48148ad8:
      if ((uVar8 & 0xff) == 0xff) {
LAB_ram_48148572:
        FUN_ram_4813ac74(param_1);
        return 0;
      }
      uVar12 = uVar8 & 0xc0ff;
      if (uVar12 != 0x80fe) {
        DAT_ram_4ff6cdb4 = param_2;
        DAT_ram_4ff6cdb8 = param_2;
        DAT_ram_4ff6cdc0 = puVar6;
        if ((*(byte *)((int)param_2 + 0xe7) & 1) != 0) {
          uVar14 = 0;
          goto LAB_ram_48148704;
        }
        goto LAB_ram_48148a4a;
      }
      DAT_ram_4ff6cdd8 = *(char *)((int)param_2 + 0xea) + '\x01';
      uVar14 = 0;
      goto LAB_ram_48148a32;
    }
    if (iVar18 == 0) {
      if (iVar4 == -0x10000) goto LAB_ram_48148572;
LAB_ram_48148bf6:
      uVar14 = 0;
      uVar12 = 0;
      DAT_ram_4ff6cdd8 = '\0';
      goto LAB_ram_481488c0;
    }
    DAT_ram_4ff6cdb4 = param_2;
    DAT_ram_4ff6cdb8 = param_2;
    DAT_ram_4ff6cdc0 = puVar6;
    if ((*(byte *)((int)param_2 + 0xe7) & 1) != 0) {
      uVar14 = 0;
      uVar12 = 0;
      goto LAB_ram_48148704;
    }
LAB_ram_48148a4a:
    if (((uVar17 == 0 && iVar9 == 0) && iVar2 == 0) && (iVar3 == 0x1000000)) goto LAB_ram_4814894c;
    piVar16 = DAT_ram_4ff6e1ac;
    if ((uVar8 == 0) && (iVar18 == 0 && iVar4 == 0)) {
      if (iVar5 == 0x1000000) goto LAB_ram_4814894c;
      if (DAT_ram_4ff6e1ac == (int *)0x0) {
        if (iVar5 != 0) goto LAB_ram_4814894c;
        piVar16 = (int *)0x0;
        goto LAB_ram_48148928;
      }
    }
    else if (DAT_ram_4ff6e1ac == (int *)0x0) goto LAB_ram_4814894c;
    do {
      if (((param_2 != piVar16) && ((*(byte *)((int)piVar16 + 0xe7) & 1) != 0)) &&
         (iVar9 = FUN_ram_48148014(piVar16), iVar9 != 0)) break;
      piVar16 = (int *)*piVar16;
    } while (piVar16 != (int *)0x0);
LAB_ram_48148912:
    if (((uVar8 == 0 && iVar18 == 0) && DAT_ram_4ff6cdd0 == 0) && (DAT_ram_4ff6cdd4 == 0))
    goto LAB_ram_48148928;
LAB_ram_481489e8:
    if (piVar16 == (int *)0x0) goto LAB_ram_4814894c;
  }
  else {
    if (uVar8 == 0) {
      if ((iVar18 == 0) && (iVar4 == -0x10000)) goto LAB_ram_48148572;
      if ((uVar17 & 0xc0ff) == 0x80fe) {
        uVar14 = 0x80fe;
        DAT_ram_4ff6cdf0 = *(char *)((int)param_2 + 0xea) + '\x01';
        DAT_ram_4ff6cdd8 = '\0';
        uVar12 = 0;
        goto LAB_ram_481488c0;
      }
LAB_ram_48148bba:
      uVar14 = uVar17 & 0xc0ff;
      if (((uVar17 & 0x8fff) - 0x1ff & 0xfffffeff) != 0) {
        DAT_ram_4ff6cdf0 = '\0';
        goto LAB_ram_4814889c;
      }
    }
    else {
      if ((uVar8 & 0xff) == 0xff) goto LAB_ram_48148572;
      if ((uVar17 & 0xc0ff) != 0x80fe) goto LAB_ram_48148bba;
    }
    uVar14 = uVar17 & 0xc0ff;
    DAT_ram_4ff6cdf0 = *(char *)((int)param_2 + 0xea) + '\x01';
LAB_ram_4814889c:
    uVar12 = uVar8 & 0xc0ff;
    DAT_ram_4ff6cdd8 = '\0';
    if (uVar12 == 0x80fe) {
      DAT_ram_4ff6cdd8 = *(char *)((int)param_2 + 0xea) + '\x01';
    }
LAB_ram_481488c0:
    if ((uVar17 & 0xff) == 0xff) {
      if ((((uVar17 - 0x1ff & 0xfffffeff) == 0 && (iVar9 == 0 && iVar2 == 0)) &&
          (DAT_ram_4ff6cdb4 = param_2, DAT_ram_4ff6cdb8 = param_2, DAT_ram_4ff6cdc0 = puVar6,
          iVar3 == 0x1000000)) ||
         (DAT_ram_4ff6cdb4 = param_2, DAT_ram_4ff6cdb8 = param_2, DAT_ram_4ff6cdc0 = puVar6,
         iVar9 = FUN_ram_48149c74(param_2,&DAT_ram_4ff6cde0), uVar8 = DAT_ram_4ff6cdc8,
         iVar18 = DAT_ram_4ff6cdcc, iVar9 != 0)) goto LAB_ram_48148912;
      if (((DAT_ram_4ff6cdcc != 0 || DAT_ram_4ff6cdc8 != 0) || DAT_ram_4ff6cdd0 != 0) ||
          DAT_ram_4ff6cdd4 != 0) goto LAB_ram_4814894c;
      piVar16 = (int *)0x0;
LAB_ram_48148928:
      if (((_DAT_ram_4ff6cde0 != 0x2ff) || (DAT_ram_4ff6cde8 != 0x1000000)) ||
         ((char)DAT_ram_4ff6cdec != -1)) goto LAB_ram_4814894c;
      goto LAB_ram_481489e8;
    }
LAB_ram_48148a32:
    DAT_ram_4ff6cdb4 = param_2;
    DAT_ram_4ff6cdb8 = param_2;
    DAT_ram_4ff6cdc0 = puVar6;
    if ((*(byte *)((int)param_2 + 0xe7) & 1) == 0) {
LAB_ram_48148a3c:
      if (uVar14 != 0x80fe) {
        if (uVar12 == 0x80fe) goto LAB_ram_4814894c;
        goto LAB_ram_48148a4a;
      }
      if (((uVar8 != 0 || iVar18 != 0) || iVar4 != 0) || iVar5 != 0) goto LAB_ram_4814894c;
      piVar16 = (int *)0x0;
      goto LAB_ram_48148928;
    }
LAB_ram_48148704:
    DAT_ram_4ff6cdb4 = param_2;
    DAT_ram_4ff6cdb8 = param_2;
    DAT_ram_4ff6cdc0 = puVar6;
    iVar10 = FUN_ram_48148014(param_2);
    if (iVar10 == 0) goto LAB_ram_48148a3c;
    if (((uVar8 == 0 && iVar18 == 0) && iVar4 == 0) && (iVar5 == 0)) goto LAB_ram_48148928;
  }
  DAT_ram_4ff6cdb4 = piVar16;
  FUN_ram_4813ab98(param_1,0x28);
  bVar13 = *(byte *)((int)puVar6 + 6);
  pbVar15 = (byte *)((int)puVar6 + 6);
  if (bVar13 == 0x3b) {
    uVar8 = 0x28;
LAB_ram_48148b14:
    DAT_ram_4ff6cdc4 = (undefined2)uVar8;
    FUN_ram_4813ab24(param_1,uVar8);
    iVar9 = FUN_ram_4813b660(param_1,param_2);
    if (iVar9 == 1) {
      DAT_ram_4ff6cdb4 = (int *)0x0;
      DAT_ram_4ff6cdb8 = (int *)0x0;
      DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
      DAT_ram_4ff6cdc4 = 0;
      DAT_ram_4ff6cdc8 = 0;
      DAT_ram_4ff6cdcc = 0;
      DAT_ram_4ff6cdd0 = 0;
      DAT_ram_4ff6cdd4 = 0;
      DAT_ram_4ff6cdd8 = 0;
      _DAT_ram_4ff6cde0 = 0;
      DAT_ram_4ff6cde4 = 0;
      DAT_ram_4ff6cde8 = 0;
      DAT_ram_4ff6cdec = 0;
      DAT_ram_4ff6cdf0 = 0;
      return 0;
    }
    FUN_ram_4813ab98(param_1,uVar8);
    bVar13 = *pbVar15;
    if (bVar13 == 0x3a) {
      FUN_ram_48147d96(param_1,param_2);
      DAT_ram_4ff6cdb4 = (int *)0x0;
      DAT_ram_4ff6cdb8 = (int *)0x0;
      DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
      DAT_ram_4ff6cdc4 = 0;
      DAT_ram_4ff6cdc8 = 0;
      DAT_ram_4ff6cdcc = 0;
      DAT_ram_4ff6cdd0 = 0;
      DAT_ram_4ff6cdd4 = 0;
      DAT_ram_4ff6cdd8 = 0;
      _DAT_ram_4ff6cde0 = 0;
      DAT_ram_4ff6cde4 = 0;
      DAT_ram_4ff6cde8 = 0;
      DAT_ram_4ff6cdec = 0;
      DAT_ram_4ff6cdf0 = 0;
      return 0;
    }
    if (bVar13 < 0x3b) {
      if (bVar13 == 6) {
        FUN_ram_4813f5d0(param_1,param_2);
        DAT_ram_4ff6cdb4 = (int *)0x0;
        DAT_ram_4ff6cdb8 = (int *)0x0;
        DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
        DAT_ram_4ff6cdc4 = 0;
        DAT_ram_4ff6cdc8 = 0;
        DAT_ram_4ff6cdcc = 0;
        DAT_ram_4ff6cdd0 = 0;
        DAT_ram_4ff6cdd4 = 0;
        DAT_ram_4ff6cdd8 = 0;
        _DAT_ram_4ff6cde0 = 0;
        DAT_ram_4ff6cde4 = 0;
        DAT_ram_4ff6cde8 = 0;
        DAT_ram_4ff6cdec = 0;
        DAT_ram_4ff6cdf0 = 0;
        return 0;
      }
      if (bVar13 == 0x11) {
        FUN_ram_48142854(param_1,param_2);
        DAT_ram_4ff6cdb4 = (int *)0x0;
        DAT_ram_4ff6cdb8 = (int *)0x0;
        DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
        DAT_ram_4ff6cdc4 = 0;
        DAT_ram_4ff6cdc8 = 0;
        DAT_ram_4ff6cdcc = 0;
        DAT_ram_4ff6cdd0 = 0;
        DAT_ram_4ff6cdd4 = 0;
        DAT_ram_4ff6cdd8 = 0;
        _DAT_ram_4ff6cde0 = 0;
        DAT_ram_4ff6cde4 = 0;
        DAT_ram_4ff6cde8 = 0;
        DAT_ram_4ff6cdec = 0;
        DAT_ram_4ff6cdf0 = 0;
        return 0;
      }
    }
    else if (bVar13 == 0x3b) goto LAB_ram_4814894c;
    if (iVar9 != 2) {
      FUN_ram_4813ab24(param_1,uVar8);
      if ((DAT_ram_4ff6cde0 != -1) && (*(char *)((int)puVar6 + 6) != ':')) {
        FUN_ram_48147f7e(param_1,1,pbVar15);
      }
    }
LAB_ram_4814894c:
    FUN_ram_4813ac74(param_1);
    DAT_ram_4ff6cdf0 = 0;
    DAT_ram_4ff6cdec = 0;
    DAT_ram_4ff6cde8 = 0;
    DAT_ram_4ff6cde4 = 0;
    _DAT_ram_4ff6cde0 = 0;
    DAT_ram_4ff6cdd8 = 0;
    DAT_ram_4ff6cdd4 = 0;
    DAT_ram_4ff6cdd0 = 0;
    DAT_ram_4ff6cdcc = 0;
    DAT_ram_4ff6cdc8 = 0;
    DAT_ram_4ff6cdc4 = 0;
    DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
    DAT_ram_4ff6cdb8 = (int *)0x0;
    DAT_ram_4ff6cdb4 = (int *)0x0;
    return 0;
  }
  if (bVar13 == 0x2c) {
    uVar8 = 0x28;
    goto LAB_ram_48148b62;
  }
  if (0x2c < bVar13) {
    uVar8 = 0x28;
    goto LAB_ram_48148812;
  }
  if (bVar13 != 0) {
    uVar8 = 0x28;
    goto LAB_ram_481487a4;
  }
  pbVar15 = *(byte **)(param_1 + 4);
  uVar17 = (pbVar15[1] + 1) * 8;
  if ((*(ushort *)(param_1 + 10) < 8) || (*(ushort *)(param_1 + 10) < uVar17))
  goto LAB_ram_4814894c;
  iVar9 = 2;
LAB_ram_48148776:
  bVar13 = pbVar15[iVar9];
  if (bVar13 != 5) {
    if (bVar13 < 6) {
      uVar8 = 0xffffffff;
      if (bVar13 != 0) goto LAB_ram_4814878a;
      goto LAB_ram_4814878e;
    }
    if (bVar13 == 0xc2) goto LAB_ram_4814878a;
    bVar13 = bVar13 >> 6;
    if (bVar13 == 2) goto LAB_ram_48148abe;
    if (bVar13 == 3) {
      bVar13 = 2;
      if (DAT_ram_4ff6cde0 != -1) {
LAB_ram_48148abe:
        FUN_ram_48147f7e(param_1,bVar13);
      }
      goto LAB_ram_4814894c;
    }
    if (bVar13 == 1) goto LAB_ram_4814894c;
  }
LAB_ram_4814878a:
  uVar8 = (uint)(pbVar15 + iVar9)[1];
LAB_ram_4814878e:
  iVar9 = iVar9 + 2 + uVar8;
  if ((int)uVar17 <= iVar9) goto code_r0x48148796;
  goto LAB_ram_48148776;
code_r0x48148796:
  uVar8 = uVar17 + 0x28;
  FUN_ram_4813ab98(param_1,uVar17);
LAB_ram_481487f6:
  do {
    bVar13 = *pbVar15;
    if (bVar13 == 0) {
      FUN_ram_48147f7e(param_1,1,pbVar15);
      FUN_ram_4813ac74(param_1);
      DAT_ram_4ff6cdb4 = (int *)0x0;
      DAT_ram_4ff6cdb8 = (int *)0x0;
      DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
      DAT_ram_4ff6cdc4 = 0;
      DAT_ram_4ff6cdc8 = 0;
      DAT_ram_4ff6cdcc = 0;
      DAT_ram_4ff6cdd0 = 0;
      DAT_ram_4ff6cdd4 = 0;
      DAT_ram_4ff6cdd8 = 0;
      _DAT_ram_4ff6cde0 = 0;
      DAT_ram_4ff6cde4 = 0;
      DAT_ram_4ff6cde8 = 0;
      DAT_ram_4ff6cdec = 0;
      DAT_ram_4ff6cdf0 = 0;
      return 0;
    }
    if (bVar13 == 0x3b) goto LAB_ram_48148b14;
    if (bVar13 == 0x2c) {
LAB_ram_48148b62:
      pbVar15 = *(byte **)(param_1 + 4);
      if (*(ushort *)(param_1 + 10) < 8) goto LAB_ram_4814894c;
      uVar17 = FUN_ram_48137fc8(*(undefined2 *)(pbVar15 + 2));
      uVar8 = uVar8 + 8 & 0xffff;
      if (((uVar17 & 1) != 0) &&
         (uVar17 = FUN_ram_48137fc8(*(undefined2 *)(puVar6 + 1)), (uVar17 & 7) != 0)) {
        pbVar11 = (byte *)(puVar6 + 1);
LAB_ram_48148c18:
        FUN_ram_48147f7e(param_1,0,pbVar11);
        FUN_ram_4813ac74(param_1);
        DAT_ram_4ff6cdb4 = (int *)0x0;
        DAT_ram_4ff6cdb8 = (int *)0x0;
        DAT_ram_4ff6cdc0 = (undefined4 *)0x0;
        DAT_ram_4ff6cdc4 = 0;
        DAT_ram_4ff6cdc8 = 0;
        DAT_ram_4ff6cdcc = 0;
        DAT_ram_4ff6cdd0 = 0;
        DAT_ram_4ff6cdd4 = 0;
        DAT_ram_4ff6cdd8 = 0;
        _DAT_ram_4ff6cde0 = 0;
        DAT_ram_4ff6cde4 = 0;
        DAT_ram_4ff6cde8 = 0;
        DAT_ram_4ff6cdec = 0;
        DAT_ram_4ff6cdf0 = 0;
        return 0;
      }
      if ((*(ushort *)(pbVar15 + 2) & 63999) != 0) goto LAB_ram_4814894c;
      uVar17 = 8;
    }
    else {
      if (0x2c < bVar13) {
LAB_ram_48148812:
        if (bVar13 == 0x3c) {
          pbVar15 = *(byte **)(param_1 + 4);
          uVar17 = (pbVar15[1] + 1) * 8;
          if ((7 < *(ushort *)(param_1 + 10)) && (uVar17 <= *(ushort *)(param_1 + 10))) {
            iVar9 = 2;
LAB_ram_48148840:
            bVar13 = pbVar15[iVar9];
            if (bVar13 != 5) {
              if (bVar13 < 6) {
                uVar14 = 0xffffffff;
                if (bVar13 != 0) goto LAB_ram_48148854;
                goto LAB_ram_48148858;
              }
              if ((bVar13 != 0xc2) && (bVar13 != 0xc9)) {
                bVar13 = bVar13 >> 6;
                if (bVar13 != 2) {
                  if (bVar13 == 3) {
                    if ((_DAT_ram_4ff6cde0 & 0xff) != 0xff) {
                      FUN_ram_48147f7e(param_1,2);
                    }
                  }
                  else if (bVar13 != 1) goto LAB_ram_48148854;
                  goto LAB_ram_4814894c;
                }
                goto LAB_ram_48148abe;
              }
            }
LAB_ram_48148854:
            uVar14 = (uint)(pbVar15 + iVar9)[1];
LAB_ram_48148858:
            iVar9 = iVar9 + 2 + uVar14;
            if ((int)uVar17 <= iVar9) break;
            goto LAB_ram_48148840;
          }
          goto LAB_ram_4814894c;
        }
        goto LAB_ram_48148b14;
      }
LAB_ram_481487a4:
      if (bVar13 != 0x2b) goto LAB_ram_48148b14;
      pbVar15 = *(byte **)(param_1 + 4);
      uVar17 = (pbVar15[1] + 1) * 8;
      if ((*(ushort *)(param_1 + 10) < 8) || (*(ushort *)(param_1 + 10) < uVar17))
      goto LAB_ram_4814894c;
      uVar8 = uVar8 + uVar17 & 0xffff;
      if ((pbVar15[3] != 0) &&
         ((pbVar11 = pbVar15 + 1, (pbVar15[1] & 1) != 0 ||
          (pbVar11 = pbVar15 + 2, 1 < pbVar15[2] - 2)))) goto LAB_ram_48148c18;
    }
    FUN_ram_4813ab98(param_1,uVar17);
  } while( true );
  uVar8 = uVar8 + uVar17 & 0xffff;
  FUN_ram_4813ab98(param_1);
  goto LAB_ram_481487f6;
}



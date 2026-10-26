/* Firmware entry: 0x4814c1ae */

int FUN_ram_4814c1ae(uint param_1,int *param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar11 = (uint)DAT_ram_4ff6e233;
  if (9 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/nd6.c",0x8a0,"nd6_get_next_hop_entry",
                     "sane cache index");
  }
  piVar19 = &DAT_ram_4ff6d11c;
  puVar1 = &DAT_ram_4ff6d11c + uVar11 * 0xc;
  uVar20 = *param_3;
  if ((((uVar20 != *puVar1) || (param_3[1] != (&DAT_ram_4ff6d120)[uVar11 * 0xc])) ||
      (param_3[2] != (&DAT_ram_4ff6d124)[uVar11 * 0xc])) ||
     ((param_3[3] != (&DAT_ram_4ff6d128)[uVar11 * 0xc] ||
      ((char)param_3[4] != (&DAT_ram_4ff6d12c)[uVar11 * 0x30])))) {
    iVar2 = FUN_ram_4814a1fa(param_3);
    if (iVar2 == -1) {
      iVar2 = 0;
      do {
        if (((*piVar19 == 0) && (piVar19[1] == 0)) && ((piVar19[2] == 0 && (piVar19[3] == 0)))) {
          iVar10 = (int)(short)iVar2;
          goto LAB_ram_4814c3e6;
        }
        piVar19 = piVar19 + 0xc;
        iVar2 = iVar2 + 1;
      } while (piVar19 != &DAT_ram_4ff6d2fc);
      piVar19 = &DAT_ram_4ff6d148;
      iVar2 = 9;
      iVar13 = 0;
      do {
        if (*piVar19 != 0) {
          iVar2 = iVar13;
        }
        uVar11 = iVar13 + 1;
        piVar19 = piVar19 + 0xc;
        iVar13 = (int)(uVar11 * 0x10000) >> 0x10;
        iVar10 = iVar2;
      } while ((uVar11 & 0xffff) != 10);
LAB_ram_4814c3e6:
      puVar1 = &DAT_ram_4ff6d11c + iVar2 * 0xc;
      *puVar1 = uVar20;
      uVar18 = param_3[1];
      DAT_ram_4ff6e233 = (byte)iVar10;
      (&DAT_ram_4ff6d120)[iVar2 * 0xc] = uVar18;
      uVar16 = param_3[2];
      (&DAT_ram_4ff6d124)[iVar2 * 0xc] = uVar16;
      uVar17 = param_3[3];
      (&DAT_ram_4ff6d128)[iVar2 * 0xc] = uVar17;
      cVar5 = (char)param_3[4];
      (&DAT_ram_4ff6d12c)[iVar2 * 0x30] = cVar5;
      uVar11 = *param_3;
      if ((uVar11 & 0xc0ff) == 0x80fe) {
LAB_ram_4814c4e2:
        *(undefined2 *)(&DAT_ram_4ff6d144 + iVar2 * 0x30) = *(undefined2 *)(param_1 + 0xde);
        (&DAT_ram_4ff6d130)[iVar2 * 0xc] = uVar20;
        (&DAT_ram_4ff6d134)[iVar2 * 0xc] = uVar18;
        (&DAT_ram_4ff6d138)[iVar2 * 0xc] = uVar16;
        (&DAT_ram_4ff6d13c)[iVar2 * 0xc] = uVar17;
      }
      else {
        puVar14 = &DAT_ram_4ff6d090;
        do {
          if ((((param_1 == puVar14[5]) && (puVar14[6] != 0)) && (uVar11 == *puVar14)) &&
             ((param_3[1] == puVar14[1] && ((char)puVar14[4] == cVar5)))) goto LAB_ram_4814c4e2;
          puVar14 = puVar14 + 7;
        } while (puVar14 != &DAT_ram_4ff6d11c);
        pbVar15 = (byte *)(param_1 + 0x94);
        piVar19 = (int *)(param_1 + 0x98);
        puVar14 = (uint *)(param_1 + 0x4c);
        do {
          if ((((*pbVar15 & 0x10) != 0) && (*piVar19 == 0)) &&
             ((uVar11 == *puVar14 && ((param_3[1] == puVar14[1] && ((char)puVar14[4] == cVar5))))))
          goto LAB_ram_4814c4e2;
          pbVar15 = pbVar15 + 1;
          piVar19 = piVar19 + 1;
          puVar14 = puVar14 + 6;
        } while (pbVar15 != (byte *)(param_1 + 0x97));
        iVar10 = FUN_ram_4814ac3a(param_1);
        if (iVar10 < 0) {
          (&DAT_ram_4ff6d12c)[iVar2 * 0x30] = 0;
          (&DAT_ram_4ff6d11c)[iVar2 * 0xc] = 0;
          (&DAT_ram_4ff6d120)[iVar2 * 0xc] = 0;
          (&DAT_ram_4ff6d124)[iVar2 * 0xc] = 0;
          (&DAT_ram_4ff6d128)[iVar2 * 0xc] = 0;
          return -4;
        }
        puVar3 = (undefined4 *)(&DAT_ram_4ff6d06c)[iVar10 * 3];
        uVar6 = puVar3[1];
        uVar4 = *puVar3;
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        *(undefined2 *)(&DAT_ram_4ff6d144 + iVar2 * 0x30) = *(undefined2 *)(param_1 + 0xde);
        (&DAT_ram_4ff6d130)[iVar2 * 0xc] = uVar4;
        (&DAT_ram_4ff6d134)[iVar2 * 0xc] = uVar6;
        (&DAT_ram_4ff6d138)[iVar2 * 0xc] = uVar7;
        (&DAT_ram_4ff6d13c)[iVar2 * 0xc] = uVar8;
        cVar5 = *(char *)(puVar3 + 4);
      }
      (&DAT_ram_4ff6d140)[iVar2 * 0x30] = cVar5;
    }
    else {
      DAT_ram_4ff6e233 = (byte)iVar2;
      puVar1 = &DAT_ram_4ff6d11c + iVar2 * 0xc;
    }
  }
  uVar11 = (uint)*(byte *)((int)puVar1 + 0x2a);
  iVar2 = uVar11 * 0x2c;
  if ((((puVar1[5] == (&DAT_ram_4ff6d2fc)[uVar11 * 0xb]) &&
       (puVar1[6] == *(uint *)(&DAT_ram_4ff6d300 + iVar2))) &&
      (puVar1[7] == *(uint *)(&DAT_ram_4ff6d304 + iVar2))) &&
     ((puVar1[8] == *(uint *)(&DAT_ram_4ff6d308 + iVar2) &&
      ((char)puVar1[9] == (&DAT_ram_4ff6d30c)[iVar2])))) {
LAB_ram_4814c56c:
    puVar1[0xb] = 0;
    if ((char)uVar11 < 0) {
      return (int)(char)uVar11;
    }
  }
  else {
    uVar20 = FUN_ram_4814a19c(puVar1 + 5);
    if (uVar20 == 0xffffffff) {
      iVar2 = FUN_ram_4814aa92();
      if (iVar2 == -1) {
        return -1;
      }
      iVar10 = iVar2 * 0x2c;
      uVar11 = puVar1[8];
      uVar18 = puVar1[6];
      uVar20 = puVar1[7];
      *(char *)((int)puVar1 + 0x2a) = (char)iVar2;
      (&DAT_ram_4ff6d2fc)[iVar2 * 0xb] = puVar1[5];
      *(uint *)(&DAT_ram_4ff6d300 + iVar10) = uVar18;
      *(uint *)(&DAT_ram_4ff6d304 + iVar10) = uVar20;
      *(uint *)(&DAT_ram_4ff6d308 + iVar10) = uVar11;
      uVar11 = puVar1[9];
      (&DAT_ram_4ff6d310)[iVar2 * 0xb] = param_1;
      (&DAT_ram_4ff6d30c)[iVar10] = (char)uVar11;
      *(undefined2 *)(&DAT_ram_4ff6d320 + iVar10) = 1;
      (&DAT_ram_4ff6d324)[iVar2 * 0xb] = 1;
      FUN_ram_4814a5e8(param_1);
      uVar11 = (uint)*(byte *)((int)puVar1 + 0x2a);
      goto LAB_ram_4814c56c;
    }
    uVar11 = uVar20 & 0xff;
    *(char *)((int)puVar1 + 0x2a) = (char)uVar20;
    puVar1[0xb] = 0;
  }
  cVar5 = (&DAT_ram_4ff6d320)[uVar11 * 0x2c];
  if (cVar5 == '\x03') {
    (&DAT_ram_4ff6d320)[uVar11 * 0x2c] = 4;
    (&DAT_ram_4ff6d324)[uVar11 * 0xb] = 5;
LAB_ram_4814c338:
    *param_4 = uVar11 * 0x2c + 0x4ff6d314;
    return 0;
  }
  if ((cVar5 == '\x02') || ((byte)(cVar5 - 4U) < 2)) goto LAB_ram_4814c338;
  *param_4 = 0;
  if (4 < uVar11) {
    return -0x10;
  }
  piVar19 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_ram_4813b0e6(0);
    return -1;
  }
  do {
    if ((*(byte *)(piVar19 + 3) & 0x40) != 0) {
      piVar19 = (int *)FUN_ram_4813b5b8(0xe,0x280,param_2);
      if (piVar19 == (int *)0x0) {
        FUN_ram_4813ac74(param_2);
        return -1;
      }
      goto LAB_ram_4814c2a4;
    }
    piVar19 = (int *)*piVar19;
  } while (piVar19 != (int *)0x0);
  FUN_ram_4813b0e6(param_2);
  piVar19 = param_2;
LAB_ram_4814c2a4:
  if (DAT_ram_4ff6e234 < 3) {
    puVar3 = (undefined4 *)FUN_ram_4813956e(0xe);
    DAT_ram_4ff6e234 = DAT_ram_4ff6e234 + 1;
    if (puVar3 != (undefined4 *)0x0) goto LAB_ram_4814c2e4;
  }
  puVar3 = (undefined4 *)(&DAT_ram_4ff6d31c)[uVar11 * 0xb];
  if (puVar3 != (undefined4 *)0x0) {
    (&DAT_ram_4ff6d31c)[uVar11 * 0xb] = *puVar3;
    *puVar3 = 0;
    FUN_ram_4814a992();
    puVar3 = (undefined4 *)FUN_ram_4813956e(0xe);
    DAT_ram_4ff6e234 = DAT_ram_4ff6e234 + 1;
    if (puVar3 != (undefined4 *)0x0) {
LAB_ram_4814c2e4:
      *puVar3 = 0;
      puVar3[1] = piVar19;
      puVar9 = (undefined4 *)(&DAT_ram_4ff6d31c)[uVar11 * 0xb];
      if (puVar9 == (undefined4 *)0x0) {
        (&DAT_ram_4ff6d31c)[uVar11 * 0xb] = puVar3;
        return 0;
      }
      if ((undefined4 *)*puVar9 != (undefined4 *)0x0) {
        uVar11 = 1;
        puVar9 = (undefined4 *)*puVar9;
        do {
          puVar12 = puVar9;
          uVar11 = uVar11 + 1;
          puVar9 = (undefined4 *)*puVar12;
        } while ((undefined4 *)*puVar12 != (undefined4 *)0x0);
        *puVar12 = puVar3;
        if (uVar11 < 3) {
          return 0;
        }
        *puVar12 = 0;
        FUN_ram_4813ac74(piVar19);
        FUN_ram_48139604(0xe,puVar3);
        return -1;
      }
      *puVar9 = puVar3;
      return 0;
    }
  }
  FUN_ram_4813ac74(piVar19);
  return -1;
}



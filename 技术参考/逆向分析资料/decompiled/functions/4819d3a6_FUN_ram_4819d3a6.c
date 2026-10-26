/* Firmware entry: 0x4819d3a6 */

byte FUN_ram_4819d3a6(undefined4 param_1,int *param_2,uint *param_3,uint *param_4,int *param_5,
                     uint param_6)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint *puVar18;
  uint uVar19;
  byte *pbVar20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar17 = (byte *)(*param_2 + 2);
  do {
    pbVar11 = pbVar17;
    pbVar17 = pbVar11 + 1;
  } while (*pbVar11 == 0x30);
  pbVar3 = pbVar11 + (-2 - *param_2);
  iVar5 = FUN_ram_4819d364();
  pbVar17 = pbVar11;
  if (iVar5 == 0) {
    iVar5 = FUN_ram_4ff45520(pbVar11,&DAT_ram_481e304c,1);
    if (iVar5 == 0) {
      pbVar16 = pbVar11 + 1;
      bVar1 = true;
      iVar5 = FUN_ram_4819d364(pbVar11[1]);
      uVar4 = 0;
      pbVar17 = pbVar16;
      if (iVar5 != 0) {
        for (; *pbVar17 == 0x30; pbVar17 = pbVar17 + 1) {
        }
        iVar5 = FUN_ram_4819d364();
        bVar1 = iVar5 == 0;
        pbVar3 = (byte *)0x1;
        pbVar11 = pbVar17;
        goto LAB_ram_4819d43c;
      }
    }
    else {
      uVar4 = 0;
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
    pbVar16 = (byte *)0x0;
LAB_ram_4819d43c:
    while (iVar5 = FUN_ram_4819d364(*pbVar17), iVar5 != 0) {
      pbVar17 = pbVar17 + 1;
    }
    iVar5 = FUN_ram_4ff45520(pbVar17,&DAT_ram_481e304c,1);
    if (iVar5 == 0) {
      if (pbVar16 == (byte *)0x0) {
        pbVar16 = pbVar17 + 1;
        pbVar17 = pbVar16;
        while (iVar5 = FUN_ram_4819d364(*pbVar17), iVar5 != 0) {
          pbVar17 = pbVar17 + 1;
        }
      }
    }
    else {
      uVar4 = 0;
      if (pbVar16 == (byte *)0x0) goto LAB_ram_4819d488;
    }
    uVar4 = ((int)pbVar16 - (int)pbVar17) * 4;
  }
LAB_ram_4819d488:
  pbVar16 = pbVar17;
  if ((*pbVar17 & 0xdf) == 0x50) {
    if (pbVar17[1] == 0x2b) {
      bVar2 = false;
LAB_ram_4819d4dc:
      pbVar20 = pbVar17 + 2;
    }
    else {
      if (pbVar17[1] == 0x2d) {
        bVar2 = true;
        goto LAB_ram_4819d4dc;
      }
      pbVar20 = pbVar17 + 1;
      bVar2 = false;
    }
    iVar5 = FUN_ram_4819d364(*pbVar20);
    if ((iVar5 - 1U & 0xff) < 0x19) {
      while( true ) {
        iVar14 = iVar5 + -0x10;
        pbVar16 = pbVar20 + 1;
        pbVar20 = pbVar20 + 1;
        iVar5 = FUN_ram_4819d364(*pbVar16);
        if (0x18 < (iVar5 - 1U & 0xff)) break;
        iVar5 = iVar14 * 10 + iVar5;
      }
      if (bVar2) {
        iVar14 = -iVar14;
      }
      uVar4 = uVar4 + iVar14;
      pbVar16 = pbVar20;
    }
  }
  *param_2 = (int)pbVar16;
  if (bVar1) {
    return -(pbVar3 == (byte *)0x0) & 6;
  }
  iVar5 = 0;
  for (pbVar3 = pbVar17 + (-1 - (int)pbVar11); 7 < (int)pbVar3; pbVar3 = (byte *)((int)pbVar3 >> 1))
  {
    iVar5 = iVar5 + 1;
  }
  iVar5 = FUN_ram_4819da72(param_1,iVar5);
  if (iVar5 == 0) {
    uVar6 = 0xe4;
    goto LAB_ram_4819d56a;
  }
  puVar15 = (uint *)(iVar5 + 0x14);
  uVar19 = 0;
  uVar13 = 0;
  puVar18 = puVar15;
  while (pbVar11 < pbVar17) {
    pbVar3 = pbVar17 + -1;
    pbVar17 = pbVar17 + -1;
    if (((*pbVar3 != 0x2e) || (pbVar17 < pbVar11)) ||
       (iVar14 = FUN_ram_4ff45520(pbVar17,&DAT_ram_481e304c,1), iVar14 != 0)) {
      if (uVar19 == 0x20) {
        *puVar18 = uVar13;
        uVar19 = 0;
        puVar18 = puVar18 + 1;
        uVar13 = 0;
      }
      uVar8 = FUN_ram_4819d364(*pbVar17);
      uVar13 = uVar13 | (uVar8 & 0xf) << (uVar19 & 0x1f);
      uVar19 = uVar19 + 4;
    }
  }
  *puVar18 = uVar13;
  iVar12 = (int)puVar18 + (4 - (int)puVar15) >> 2;
  *(int *)(iVar5 + 0x10) = iVar12;
  iVar14 = FUN_ram_4819dd18(uVar13);
  uVar13 = *param_3;
  iVar14 = iVar12 * 0x20 - iVar14;
  if ((int)uVar13 < iVar14) {
    iVar14 = iVar14 - uVar13;
    iVar12 = FUN_ram_4819e5ea(iVar5,iVar14);
    uVar19 = 0;
    if (iVar12 != 0) {
      uVar8 = iVar14 - 1;
      uVar19 = 1;
      if ((puVar15[(int)uVar8 >> 5] & 1 << (uVar8 & 0x1f)) != 0) {
        if (((int)uVar8 < 2) || (iVar12 = FUN_ram_4819e5ea(iVar5,iVar14 + -2), iVar12 == 0)) {
          uVar19 = 2;
        }
        else {
          uVar19 = 3;
        }
      }
    }
    FUN_ram_4819d2ba(iVar5,iVar14);
    uVar4 = uVar4 + iVar14;
  }
  else {
    uVar19 = 0;
    if (iVar14 < (int)uVar13) {
      iVar5 = FUN_ram_4819e070(param_1,iVar5,uVar13 - iVar14);
      uVar4 = uVar4 - (uVar13 - iVar14);
      puVar15 = (uint *)(iVar5 + 0x14);
      uVar19 = 0;
    }
  }
  iVar14 = iVar5;
  if ((int)param_3[2] < (int)uVar4) goto LAB_ram_4819d5f8;
  if ((int)uVar4 < (int)param_3[1]) {
    uVar4 = param_3[1] - uVar4;
    if ((int)uVar13 <= (int)uVar4) {
      uVar19 = param_3[3];
      if (uVar19 == 2) {
        if (param_6 != 0) goto LAB_ram_4819d6da;
      }
      else {
        if (uVar19 != 3) {
          if ((uVar19 != 1) || (uVar13 != uVar4)) goto LAB_ram_4819d6da;
          if (uVar13 == 1) goto LAB_ram_4819d6b4;
          param_6 = FUN_ram_4819e5ea(iVar5,uVar13 - 1);
        }
        if (param_6 == 0) {
LAB_ram_4819d6da:
          FUN_ram_4819db24(param_1,iVar5);
          *param_5 = 0;
          return 0x50;
        }
      }
LAB_ram_4819d6b4:
      *param_4 = param_3[1];
      *(undefined4 *)(iVar5 + 0x10) = 1;
      *puVar15 = 1;
      *param_5 = iVar5;
      return 0x62;
    }
    uVar8 = uVar4 - 1;
    if (uVar19 == 0) {
      if (uVar8 != 0) {
        uVar19 = FUN_ram_4819e5ea(iVar5,uVar8);
      }
    }
    else {
      uVar19 = 1;
    }
    if ((1 << (uVar8 & 0x1f) & puVar15[(int)uVar8 >> 5]) != 0) {
      uVar19 = uVar19 | 2;
    }
    uVar13 = uVar13 - uVar4;
    FUN_ram_4819d2ba(iVar5,uVar4);
    uVar4 = param_3[1];
    bVar10 = 2;
  }
  else {
    bVar10 = 1;
  }
  if (uVar19 == 0) goto LAB_ram_4819d7c6;
  uVar8 = param_3[3];
  if (uVar8 == 2) {
    param_6 = 1 - param_6;
joined_r0x4819d77a:
    if (param_6 != 0) {
      iVar12 = *(int *)(iVar5 + 0x10);
      piVar9 = (int *)(iVar5 + 0x14);
      piVar7 = piVar9 + iVar12;
      do {
        if (*piVar9 != -1) {
          *piVar9 = *piVar9 + 1;
          goto LAB_ram_4819d79a;
        }
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      } while (piVar9 < piVar7);
      if (*(int *)(iVar5 + 8) <= iVar12) {
        iVar14 = FUN_ram_4819da72(param_1,*(int *)(iVar5 + 4) + 1);
        if (iVar14 == 0) {
          uVar6 = 0x84;
LAB_ram_4819d56a:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/gdtoa-gethex.c"
                           ,uVar6,0,"Balloc succeeded");
        }
        FUN_ram_4ff45158(iVar14 + 0xc,iVar5 + 0xc,(*(int *)(iVar5 + 0x10) + 2) * 4);
        FUN_ram_4819db24(param_1,iVar5);
      }
      iVar5 = *(int *)(iVar14 + 0x10);
      *(int *)(iVar14 + 0x10) = iVar5 + 1;
      *(undefined4 *)((iVar5 + 4) * 4 + iVar14 + 4) = 1;
LAB_ram_4819d79a:
      if (bVar10 == 2) {
        bVar10 = 2;
        if ((*param_3 - 1 == uVar13) &&
           ((*(uint *)(iVar14 + 0x14 + ((int)uVar13 >> 5) * 4) & 1 << (uVar13 & 0x1f)) != 0))
        goto LAB_ram_4819d844;
      }
      else {
        if ((iVar12 < *(int *)(iVar14 + 0x10)) ||
           (((uVar13 & 0x1f) != 0 &&
            (iVar5 = FUN_ram_4819dd18(*(undefined4 *)(iVar14 + 0x14 + iVar12 * 4 + -4)),
            iVar5 < (int)(0x20 - (uVar13 & 0x1f)))))) {
          FUN_ram_4819d2ba(iVar14,1);
          uVar4 = uVar4 + 1;
          if ((int)param_3[2] < (int)uVar4) {
LAB_ram_4819d5f8:
            FUN_ram_4819db24(param_1,iVar14);
            *param_5 = 0;
            return 0xa3;
          }
        }
LAB_ram_4819d844:
        bVar10 = 1;
      }
      bVar10 = bVar10 | 0x20;
      goto LAB_ram_4819d7c6;
    }
  }
  else {
    if (uVar8 == 3) goto joined_r0x4819d77a;
    if ((uVar8 == 1) && ((uVar19 & 2) != 0)) {
      param_6 = (uVar19 | *puVar15) & 1;
      goto joined_r0x4819d77a;
    }
  }
  bVar10 = bVar10 | 0x10;
LAB_ram_4819d7c6:
  *param_5 = iVar14;
  *param_4 = uVar4;
  return bVar10;
}



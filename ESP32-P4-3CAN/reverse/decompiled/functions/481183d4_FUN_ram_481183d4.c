/* Firmware entry: 0x481183d4 */

void FUN_ram_481183d4(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = (int)param_2 - (int)param_1;
  if (iVar9 < 0x81) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar11 = (iVar9 >> 4) + -1;
      puVar6 = param_1 + iVar11 * 2;
      iVar12 = (int)((iVar9 >> 3) - 1U) >> 1;
      uVar10 = *puVar6;
      uVar8 = puVar6[1];
      uVar14 = iVar9 >> 3 & 1;
      iVar9 = iVar11;
      puVar7 = puVar6;
      iVar15 = iVar11;
      if (iVar12 <= iVar11) goto LAB_ram_4811856a;
LAB_ram_481184c8:
      do {
        iVar3 = (iVar9 + 1) * 2;
        iVar4 = (*param_4)(param_1 + (iVar9 + 1) * 4,param_1 + (iVar3 + 0x1fffffff) * 2);
        iVar3 = iVar3 - iVar4;
        iVar4 = iVar3 * 8;
        puVar6 = param_1 + iVar3 * 2;
        param_1[iVar9 * 2] = *puVar6;
        (param_1 + iVar9 * 2)[1] = puVar6[1];
        iVar9 = iVar3;
      } while (iVar3 < iVar12);
      iVar9 = iVar15;
      if ((uVar14 == 0) && (iVar15 = iVar3, iVar11 == iVar3)) goto LAB_ram_481187a0;
      do {
        iVar15 = iVar3 + -1 >> 1;
        uStack_48 = uVar10;
        uStack_44 = uVar8;
        if (iVar3 <= iVar9) goto LAB_ram_48118572;
        do {
          puVar2 = param_1 + iVar15 * 2;
          iVar3 = (*param_4)(puVar2,&uStack_48);
          puVar6 = (undefined4 *)((int)param_1 + iVar4);
          if (iVar3 == 0) break;
          iVar4 = iVar15 << 3;
          *puVar6 = *puVar2;
          puVar6[1] = puVar2[1];
          bVar1 = iVar9 < iVar15;
          puVar6 = puVar2;
          iVar15 = (iVar15 + -1) / 2;
        } while (bVar1);
        *puVar6 = uStack_48;
        puVar6[1] = uStack_44;
        if (iVar9 == 0) {
          iVar9 = (int)param_2 - (int)param_1;
          goto joined_r0x481185ac;
        }
        while( true ) {
          puVar6 = puVar7 + -2;
          iVar9 = iVar9 + -1;
          uVar10 = *puVar6;
          uVar8 = puVar7[-1];
          puVar7 = puVar6;
          iVar15 = iVar9;
          if (iVar9 < iVar12) goto LAB_ram_481184c8;
LAB_ram_4811856a:
          puVar7 = puVar6;
          uStack_48 = uVar10;
          uStack_44 = uVar8;
          if ((uVar14 == 0) && (iVar15 = iVar11, iVar11 == iVar9)) break;
LAB_ram_48118572:
          *puVar6 = uStack_48;
          puVar6[1] = uStack_44;
        }
LAB_ram_481187a0:
        iVar3 = (iVar15 + 1) * 2 + -1;
        *puVar6 = param_1[(iVar15 + 1) * 4 + -2];
        iVar4 = iVar3 * 8;
        puVar6[1] = (param_1 + (iVar15 + 1) * 4 + -2)[1];
        puVar6 = param_1 + iVar3 * 2;
      } while( true );
    }
    puVar2 = param_1 + (iVar9 >> 4) * 2;
    puVar7 = param_1 + 2;
    puVar13 = param_2 + -2;
    iVar9 = (*param_4)(puVar7,puVar2);
    param_3 = param_3 + -1;
    puVar6 = param_2;
    if (iVar9 == 0) {
      iVar9 = (*param_4)(puVar7,puVar13);
      if (iVar9 == 0) {
        iVar9 = (*param_4)(puVar2,puVar13);
        uVar8 = *param_1;
        uVar10 = param_1[1];
        if (iVar9 != 0) goto LAB_ram_481186b0;
        uVar5 = *puVar2;
        goto LAB_ram_48118436;
      }
      uVar8 = param_1[2];
      uVar10 = param_1[3];
      param_1[2] = *param_1;
      *param_1 = uVar8;
      param_1[3] = param_1[1];
      param_1[1] = uVar10;
    }
    else {
      iVar9 = (*param_4)(puVar2,puVar13);
      if (iVar9 == 0) {
        iVar9 = (*param_4)(puVar7,puVar13);
        uVar8 = *param_1;
        uVar10 = param_1[1];
        if (iVar9 == 0) {
          uVar5 = param_1[2];
          param_1[2] = uVar8;
          *param_1 = uVar5;
          param_1[1] = param_1[3];
          param_1[3] = uVar10;
        }
        else {
LAB_ram_481186b0:
          *param_1 = param_2[-2];
          param_1[1] = param_2[-1];
          param_2[-2] = uVar8;
          param_2[-1] = uVar10;
        }
      }
      else {
        uVar5 = *puVar2;
        uVar8 = *param_1;
        uVar10 = param_1[1];
LAB_ram_48118436:
        *param_1 = uVar5;
        param_1[1] = puVar2[1];
        *puVar2 = uVar8;
        puVar2[1] = uVar10;
      }
    }
    while( true ) {
      while (iVar9 = (*param_4)(puVar7,param_1), iVar9 != 0) {
        puVar7 = puVar7 + 2;
      }
      do {
        puVar2 = puVar6;
        puVar6 = puVar2 + -2;
        iVar9 = (*param_4)(param_1,puVar6);
      } while (iVar9 != 0);
      if (puVar6 <= puVar7) break;
      uVar8 = *puVar7;
      uVar10 = puVar7[1];
      *puVar7 = *puVar6;
      puVar7[1] = puVar2[-1];
      *puVar6 = uVar8;
      puVar2[-1] = uVar10;
      puVar7 = puVar7 + 2;
    }
    FUN_ram_481183d4(puVar7,param_2,param_3,param_4);
    iVar9 = (int)puVar7 - (int)param_1;
    param_2 = puVar7;
    if (iVar9 < 0x81) {
      return;
    }
  } while( true );
joined_r0x481185ac:
  if (iVar9 < 9) {
    return;
  }
  while( true ) {
    puVar7 = param_2 + -2;
    iVar9 = (int)puVar7 - (int)param_1;
    uVar10 = *puVar7;
    *puVar7 = *param_1;
    uVar14 = iVar9 >> 3;
    uVar8 = param_2[-1];
    param_2[-1] = param_1[1];
    param_2 = puVar7;
    if (iVar9 < 0x11) break;
    iVar11 = 0;
    do {
      iVar15 = (iVar11 + 1) * 2;
      iVar12 = (*param_4)(param_1 + (iVar11 + 1) * 4,param_1 + (iVar15 + 0x1fffffff) * 2);
      iVar15 = iVar15 - iVar12;
      iVar12 = iVar15 * 8;
      puVar7 = param_1 + iVar15 * 2;
      param_1[iVar11 * 2] = *puVar7;
      (param_1 + iVar11 * 2)[1] = puVar7[1];
      iVar11 = iVar15;
    } while (iVar15 < (int)(uVar14 - 1) / 2);
    if ((uVar14 & 1) == 0) goto LAB_ram_48118700;
    iVar11 = (iVar15 + -1) / 2;
    uStack_48 = uVar10;
    uStack_44 = uVar8;
    if (iVar15 != 0) goto LAB_ram_48118658;
    *puVar7 = uVar10;
    puVar7[1] = uVar8;
  }
  if ((uVar14 & 1) == 0) {
    iVar15 = 0;
    puVar7 = param_1;
LAB_ram_48118700:
    if ((int)(uVar14 - 2) / 2 == iVar15) {
      iVar15 = (iVar15 + 1) * 2;
      *puVar7 = param_1[(iVar15 + 0x1fffffff) * 2];
      iVar12 = (iVar15 + -1) * 8;
      puVar7[1] = (param_1 + (iVar15 + 0x1fffffff) * 2)[1];
      iVar11 = (iVar15 >> 1) + -1;
      uStack_48 = uVar10;
      uStack_44 = uVar8;
    }
    else {
      uStack_48 = uVar10;
      uStack_44 = uVar8;
      if (iVar15 == 0) {
LAB_ram_48118674:
        puVar7[1] = uStack_44;
        *puVar7 = uStack_48;
        goto joined_r0x481185ac;
      }
      iVar12 = iVar15 << 3;
      iVar11 = (iVar15 + -1) / 2;
    }
LAB_ram_48118658:
    do {
      puVar6 = param_1 + iVar11 * 2;
      iVar15 = (*param_4)(puVar6,&uStack_48);
      puVar7 = (undefined4 *)((int)param_1 + iVar12);
      if (iVar15 == 0) goto LAB_ram_48118674;
      iVar12 = iVar11 << 3;
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      bVar1 = iVar11 != 0;
      iVar11 = (iVar11 + -1) / 2;
    } while (bVar1);
    puVar6[1] = uStack_44;
    *puVar6 = uStack_48;
    goto joined_r0x481185ac;
  }
  param_1[1] = uVar8;
  *param_1 = uVar10;
  uStack_48 = uVar10;
  uStack_44 = uVar8;
  goto joined_r0x481185ac;
}



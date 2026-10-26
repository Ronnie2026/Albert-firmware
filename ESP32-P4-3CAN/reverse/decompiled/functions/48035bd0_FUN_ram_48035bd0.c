/* Firmware entry: 0x48035bd0 */

void FUN_ram_48035bd0(ushort *param_1,ushort *param_2,int param_3,undefined4 *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  int iVar22;
  int *local_40;
  int iStack_3c;
  byte *pbStack_38;
  int *piStack_2c;
  int iStack_28;
  byte *pbStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = (int)param_2 - (int)param_1;
joined_r0x48035bde:
  if (0x20 < iVar14) {
    if (param_3 != 0) {
      pbVar10 = (byte *)param_4[2];
      uVar2 = param_1[iVar14 >> 2];
      uVar7 = (uint)uVar2;
      uVar11 = (uint)param_1[1];
      iVar21 = param_4[1];
      iVar12 = *(int *)*param_4;
      iVar15 = (uint)*pbVar10 * 0x800;
      iVar19 = *(int *)(uVar11 * 4 + iVar12);
      uVar5 = *(int *)(uVar7 * 4 + iVar12) - *(int *)((iVar15 + uVar7) * 4 + iVar21);
      param_3 = param_3 + -1;
      uVar9 = iVar19 - *(int *)((iVar15 + uVar11) * 4 + iVar21);
      bVar4 = uVar11 < uVar7;
      if (uVar9 != uVar5) {
        bVar4 = uVar5 < uVar9;
      }
      uVar3 = param_2[-1];
      uVar18 = (uint)uVar3;
      uVar16 = *(int *)(uVar18 * 4 + iVar12) - *(int *)((iVar15 + uVar18) * 4 + iVar21);
      puVar13 = param_2;
      puVar8 = param_1;
      if (bVar4) {
        bVar4 = uVar7 < uVar18;
        if (uVar5 != uVar16) {
          bVar4 = uVar16 < uVar5;
        }
        uVar20 = *param_1;
        if (bVar4) {
LAB_ram_48035f06:
          *param_1 = uVar2;
          param_1[iVar14 >> 2] = uVar20;
          uVar11 = (uint)*param_1;
          iVar19 = *(int *)(uVar11 * 4 + iVar12);
          goto LAB_ram_48035caa;
        }
        if (uVar9 == uVar16) {
          if (uVar11 < uVar18) {
            *param_1 = uVar3;
            param_2[-1] = uVar20;
            uVar11 = (uint)*param_1;
            iVar19 = *(int *)(uVar11 * 4 + iVar12);
            goto LAB_ram_48035caa;
          }
        }
        else if (uVar16 < uVar9) goto LAB_ram_48035d54;
      }
      else {
        bVar4 = uVar11 < uVar18;
        if (uVar9 != uVar16) {
          bVar4 = uVar16 < uVar9;
        }
        uVar20 = *param_1;
        if (!bVar4) {
          bVar4 = uVar7 < uVar18;
          if (uVar5 != uVar16) {
            bVar4 = uVar16 < uVar5;
          }
          if (bVar4) {
LAB_ram_48035d54:
            *param_1 = uVar3;
            param_2[-1] = uVar20;
            uVar11 = (uint)*param_1;
            iVar19 = *(int *)(uVar11 * 4 + iVar12);
            goto LAB_ram_48035caa;
          }
          goto LAB_ram_48035f06;
        }
      }
      *param_1 = param_1[1];
      param_1[1] = uVar20;
LAB_ram_48035caa:
      do {
        puVar8 = puVar8 + 1;
        iVar14 = (uint)*pbVar10 * 0x800;
        uVar5 = iVar19 - *(int *)((iVar14 + uVar11) * 4 + iVar21);
        while( true ) {
          while( true ) {
            uVar2 = *puVar8;
            uVar7 = (uint)uVar2;
            uVar9 = *(int *)(uVar7 * 4 + iVar12) - *(int *)((iVar14 + uVar7) * 4 + iVar21);
            if (uVar9 == uVar5) break;
            if (uVar9 <= uVar5) goto LAB_ram_48035ce4;
            puVar8 = puVar8 + 1;
          }
          if (uVar11 <= uVar7) break;
          puVar8 = puVar8 + 1;
        }
LAB_ram_48035ce4:
        do {
          puVar1 = puVar13 + -1;
          uVar7 = (uint)*puVar1;
          puVar13 = puVar13 + -1;
          uVar9 = *(int *)(uVar7 * 4 + iVar12) - *(int *)((iVar14 + uVar7) * 4 + iVar21);
          if (uVar5 == uVar9) {
            if (uVar7 <= uVar11) break;
            goto LAB_ram_48035ce4;
          }
        } while (uVar9 < uVar5);
        if (puVar13 <= puVar8) goto LAB_ram_48035d74;
        *puVar8 = *puVar1;
        *puVar13 = uVar2;
        uVar11 = (uint)*param_1;
        iVar19 = *(int *)(uVar11 * 4 + iVar12);
      } while( true );
    }
    local_40 = (int *)*param_4;
    iStack_3c = param_4[1];
    pbStack_38 = (byte *)param_4[2];
    iVar19 = (iVar14 >> 2) + -1;
    puVar13 = param_1 + iVar19;
    iVar15 = (int)((iVar14 >> 1) - 1U) >> 1;
    iVar21 = *local_40;
    uVar5 = (uint)*puVar13;
    uVar7 = iVar14 >> 1 & 1;
    iVar14 = iVar19;
    puVar8 = puVar13;
    iVar12 = iVar19;
    if (iVar15 <= iVar19) goto LAB_ram_48035ef8;
LAB_ram_48035de2:
    do {
      iVar17 = (iVar14 + 1) * 2;
      uVar11 = (uint)param_1[(iVar14 + 1) * 2];
      uVar18 = (uint)param_1[iVar17 + 0x7fffffff];
      uVar16 = *(int *)(uVar11 * 4 + iVar21) -
               *(int *)(((uint)*pbStack_38 * 0x800 + uVar11) * 4 + iStack_3c);
      uVar9 = *(int *)(uVar18 * 4 + iVar21) -
              *(int *)(((uint)*pbStack_38 * 0x800 + uVar18) * 4 + iStack_3c);
      bVar4 = uVar11 < uVar18;
      if (uVar9 != uVar16) {
        bVar4 = uVar9 < uVar16;
      }
      iVar17 = iVar17 - (uint)bVar4;
      iVar22 = iVar17 * 2;
      puVar13 = param_1 + iVar17;
      param_1[iVar14] = *puVar13;
      iVar14 = iVar17;
    } while (iVar17 < iVar15);
    iVar14 = iVar12;
    if ((uVar7 == 0) && (iVar12 = iVar17, iVar19 == iVar17)) goto LAB_ram_48035f70;
    while( true ) {
      iVar12 = iVar17 + -1;
      if (iVar17 <= iVar14) goto LAB_ram_48035f00;
      iVar17 = *(int *)(uVar5 * 4 + iVar21);
      while( true ) {
        iVar6 = iVar12 >> 1;
        uVar2 = param_1[iVar6];
        uVar9 = (uint)uVar2;
        bVar4 = uVar9 < uVar5;
        uVar11 = iVar17 - *(int *)(((uint)*pbStack_38 * 0x800 + uVar5) * 4 + iStack_3c);
        uVar9 = *(int *)(uVar9 * 4 + iVar21) -
                *(int *)(((uint)*pbStack_38 * 0x800 + uVar9) * 4 + iStack_3c);
        if (uVar9 != uVar11) {
          bVar4 = uVar11 < uVar9;
        }
        iVar12 = (iVar6 + -1) - (iVar6 + -1 >> 0x1f);
        puVar13 = (ushort *)(iVar22 + (int)param_1);
        if ((!bVar4) ||
           (*(ushort *)(iVar22 + (int)param_1) = uVar2, puVar13 = param_1 + iVar6, iVar6 <= iVar14))
        break;
        iVar22 = iVar6 << 1;
      }
      *puVar13 = (ushort)uVar5;
      if (iVar14 == 0) break;
      while( true ) {
        puVar13 = puVar8 + -1;
        iVar14 = iVar14 + -1;
        uVar5 = (uint)*puVar13;
        puVar8 = puVar13;
        iVar12 = iVar14;
        if (iVar14 < iVar15) goto LAB_ram_48035de2;
LAB_ram_48035ef8:
        puVar8 = puVar13;
        if ((uVar7 == 0) && (iVar12 = iVar19, iVar19 == iVar14)) break;
LAB_ram_48035f00:
        *puVar13 = (ushort)uVar5;
      }
LAB_ram_48035f70:
      iVar17 = (iVar12 + 1) * 2 + -1;
      iVar22 = iVar17 * 2;
      *puVar13 = param_1[(iVar12 + 1) * 2 + -1];
      puVar13 = param_1 + iVar17;
    }
    iVar14 = (int)param_2 - (int)param_1;
    while (2 < iVar14) {
      uVar2 = param_2[-1];
      param_2 = param_2 + -1;
      iVar14 = (int)param_2 - (int)param_1;
      *param_2 = *param_1;
      piStack_2c = local_40;
      iStack_28 = iStack_3c;
      pbStack_24 = pbStack_38;
      FUN_ram_4803281a(param_1,0,iVar14 >> 1,uVar2,&local_40);
      local_40 = piStack_2c;
      iStack_3c = iStack_28;
      pbStack_38 = pbStack_24;
    }
  }
  return;
LAB_ram_48035d74:
  pbStack_38 = (byte *)param_4[2];
  local_40 = (int *)*param_4;
  iStack_3c = param_4[1];
  FUN_ram_48035bd0(puVar8,param_2,param_3,&local_40);
  iVar14 = (int)puVar8 - (int)param_1;
  param_2 = puVar8;
  goto joined_r0x48035bde;
}



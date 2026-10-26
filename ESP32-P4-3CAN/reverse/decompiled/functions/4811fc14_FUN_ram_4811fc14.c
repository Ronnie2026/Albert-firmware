/* Firmware entry: 0x4811fc14 */

/* WARNING: Removing unreachable block (ram,0x481200aa) */

void FUN_ram_4811fc14(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  
  iVar27 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 1) {
    DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
    return;
  }
  puVar25 = &DAT_ram_4ff50cf8;
  if (DAT_ram_4ff50e94 == 0) {
    return;
  }
  FUN_ram_4ff3ebfe();
  if (DAT_ram_4ff509f0 == 0) {
    DAT_ram_4ff509f0 = iVar27;
    FUN_ram_4ff3ec08();
    FUN_ram_4811f626();
    fence();
    uVar28 = (uint)(DAT_ram_4ff4d818 == 0);
    puVar6 = &DAT_ram_4ff4d81c + uVar28;
    uVar12 = *puVar6;
    *puVar6 = uVar12 | 0x80000000;
    if (uVar12 == 0) {
      iVar27 = 0;
      if (uVar28 != 0) {
        iVar27 = 0x17b8;
      }
      puVar24 = (undefined4 *)((int)&DAT_ram_4ff4d850 + iVar27);
      puVar19 = puVar24;
      do {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      } while ((undefined4 *)((int)&DAT_ram_4ff4dad0 + iVar27) != puVar19);
      puVar30 = (undefined4 *)((int)&DAT_ram_4ff4e4f0 + iVar27);
      puVar19 = puVar30;
      do {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      } while (puVar19 != (undefined4 *)((int)&DAT_ram_4ff4e670 + iVar27));
      if (((&DAT_ram_4ff4e670)[uVar28 * 0x5ee] == 0) && (DAT_ram_4ff50e9c != 2)) {
        iVar18 = DAT_ram_4ff50e9c * 0x304;
        puVar21 = &DAT_ram_501092a4 + DAT_ram_4ff50e9c * 0xc1;
        puVar19 = (undefined4 *)((int)&DAT_ram_4ff4e674 + iVar27);
        do {
          uVar10 = *puVar21;
          puVar21 = puVar21 + 1;
          *puVar19 = uVar10;
          puVar19 = puVar19 + 1;
        } while (puVar21 != (undefined4 *)(&DAT_ram_501095a8 + iVar18));
        (&DAT_ram_4ff4e670)[uVar28 * 0x5ee] = 1;
      }
      if (DAT_ram_4ff50ea8 == 0) {
        puVar19 = (undefined4 *)((int)&DAT_ram_4ff4e978 + iVar27);
        do {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        } while (puVar19 != (undefined4 *)((int)&DAT_ram_4ff4ec80 + iVar27));
      }
      else if ((((&DAT_ram_4ff4e978)[uVar28 * 0x5ee] == 0) ||
               ((&DAT_ram_4ff4e984)[uVar28 * 0x5ee] != DAT_ram_4ff50ed4)) ||
              ((&DAT_ram_4ff4e988)[uVar28 * 0x5ee] != DAT_ram_4ff50e98)) {
        puVar21 = &DAT_ram_501092a4 + DAT_ram_4ff50ea0 * 0xc1;
        puVar19 = (undefined4 *)((int)&DAT_ram_4ff4e97c + iVar27);
        do {
          uVar10 = *puVar21;
          puVar23 = puVar19 + 1;
          puVar21 = puVar21 + 1;
          *puVar19 = uVar10;
          puVar19 = puVar23;
        } while (puVar23 != (undefined4 *)((int)&DAT_ram_4ff4ec80 + iVar27));
        (&DAT_ram_4ff4e978)[uVar28 * 0x5ee] = 1;
      }
      uVar7 = FUN_ram_4ff3ebfe();
      iVar18 = cycle;
      FUN_ram_4ff29c0e();
      uVar12 = DAT_ram_4ff50f84;
      (&DAT_ram_4ff4d828)[uVar28 * 0x5ee] = DAT_ram_4ff50f88;
      (&DAT_ram_4ff4d824)[uVar28 * 0x5ee] = uVar12;
      uVar9 = DAT_ram_4ff50fa0;
      uVar3 = DAT_ram_4ff50f9c;
      uVar8 = DAT_ram_4ff50f94;
      uVar2 = DAT_ram_4ff50f90;
      uVar1 = DAT_ram_4ff50f8c;
      uVar10 = DAT_ram_4ff50f7c;
      uVar11 = uVar12;
      if (0x10 < uVar12) {
        uVar11 = 0x10;
      }
      (&DAT_ram_4ff4d840)[uVar28 * 0x5ee] = DAT_ram_4ff50f98;
      uVar13 = DAT_ram_4ff50fa4;
      (&DAT_ram_4ff4d83c)[uVar28 * 0x5ee] = uVar8;
      iVar22 = DAT_ram_4ff50f80;
      (&DAT_ram_4ff4d844)[uVar28 * 0x5ee] = uVar3;
      (&DAT_ram_4ff4d82c)[uVar28 * 0x5ee] = uVar11;
      (&DAT_ram_4ff4d830)[uVar28 * 0x5ee] = uVar10;
      (&DAT_ram_4ff4d834)[uVar28 * 0x5ee] = uVar1;
      (&DAT_ram_4ff4d838)[uVar28 * 0x5ee] = uVar2;
      (&DAT_ram_4ff4d848)[uVar28 * 0x5ee] = uVar9;
      (&DAT_ram_4ff4d84c)[uVar28 * 0x5ee] = uVar13;
      uVar8 = 0;
      if (uVar12 != 0) {
        do {
          iVar20 = ((iVar22 - uVar11) + uVar8 & 0xf) * 0x28;
          puVar21 = (undefined4 *)(&DAT_ram_4ff511e8 + iVar20);
          puVar19 = puVar24;
          do {
            uVar10 = *puVar21;
            puVar21 = puVar21 + 1;
            *puVar19 = uVar10;
            puVar19 = puVar19 + 1;
          } while (puVar21 != (undefined4 *)(iVar20 + 0x4ff51210));
          uVar8 = uVar8 + 1;
          puVar24 = puVar24 + 10;
        } while (uVar8 < (uint)(&DAT_ram_4ff4d82c)[uVar28 * 0x5ee]);
      }
      puVar24 = &DAT_ram_4ff51468;
      puVar19 = (undefined4 *)((int)&DAT_ram_4ff4dad0 + iVar27);
      do {
        uVar10 = *puVar24;
        puVar24 = puVar24 + 1;
        *puVar19 = uVar10;
        puVar19 = puVar19 + 1;
      } while (puVar24 != &DAT_ram_4ff516d8);
      puVar19 = &DAT_ram_4ff516d8;
      puVar24 = (undefined4 *)((int)&DAT_ram_4ff4dd40 + iVar27);
      do {
        uVar10 = *puVar19;
        puVar19 = puVar19 + 1;
        *puVar24 = uVar10;
        uVar10 = DAT_ram_4ff51948;
        puVar24 = puVar24 + 1;
      } while (puVar19 != &DAT_ram_4ff51948);
      uVar12 = -uVar28 & 0x17b8;
      *(undefined4 *)(&DAT_ram_4ff4dfb4 + uVar12) = DAT_ram_4ff5194c;
      *(undefined4 *)(&DAT_ram_4ff4dfb0 + uVar12) = uVar10;
      puVar24 = &DAT_ram_4ff51950;
      puVar19 = (undefined4 *)((int)&DAT_ram_4ff4dfb8 + iVar27);
      do {
        uVar10 = *puVar24;
        puVar24 = puVar24 + 1;
        *puVar19 = uVar10;
        puVar19 = puVar19 + 1;
      } while (puVar24 != &DAT_ram_4ff51bc0);
      puVar19 = &DAT_ram_4ff51bc0;
      puVar24 = (undefined4 *)((int)&DAT_ram_4ff4e228 + iVar27);
      do {
        uVar10 = *puVar19;
        puVar19 = puVar19 + 1;
        *puVar24 = uVar10;
        puVar24 = puVar24 + 1;
      } while (puVar19 != (undefined4 *)&DAT_ram_4ff51e30);
      DAT_ram_4ff50e8c = 0;
      uVar12 = 0;
      puVar14 = puVar25;
      do {
        DAT_ram_4ff50e88 = *(int *)(puVar14 + 0x234) + uVar12;
        if (DAT_ram_4ff50e88 < uVar12) {
          DAT_ram_4ff50e88 = 0xffffffff;
        }
        puVar26 = (uint *)(puVar14 + 0x238);
        puVar14 = puVar14 + 0x18;
        if (DAT_ram_4ff50e8c < *puVar26) {
          DAT_ram_4ff50e8c = *puVar26;
        }
        uVar12 = DAT_ram_4ff50e88;
      } while (puVar14 != &DAT_ram_4ff50d40);
      (&DAT_ram_4ff4ecc4)[uVar28 * 0x5ee] = 0x40;
      fence();
      (&DAT_ram_4ff4ecc8)[uVar28 * 0x5ee] = DAT_ram_4ff509ec;
      iVar22 = DAT_ram_4ff50ec8;
      uVar3 = DAT_ram_4ff50eac;
      uVar2 = DAT_ram_4ff50e90;
      uVar8 = DAT_ram_4ff50e8c;
      uVar12 = DAT_ram_4ff50e88;
      uVar1 = DAT_ram_4ff50e84;
      uVar10 = DAT_ram_4ff50e80;
      uVar11 = 0;
      uVar13 = 0;
      uVar29 = 0;
      do {
        uVar15 = *(int *)(puVar25 + 0x240) + uVar29;
        if (uVar15 < uVar29) {
          uVar15 = 0xffffffff;
        }
        uVar16 = *(int *)(puVar25 + 0x244) + uVar11;
        if (uVar16 < uVar11) {
          uVar16 = 0xffffffff;
        }
        uVar17 = *(int *)(puVar25 + 0x248) + uVar13;
        if (uVar17 < uVar13) {
          uVar17 = 0xffffffff;
        }
        puVar25 = puVar25 + 0x18;
        uVar11 = uVar16;
        uVar13 = uVar17;
        uVar29 = uVar15;
      } while (puVar25 != &DAT_ram_4ff50d40);
      (&DAT_ram_4ff4ecd4)[uVar28 * 0x5ee] = uVar17;
      uVar4 = DAT_ram_4ff50eb0;
      uVar9 = DAT_ram_4ff50ea4;
      (&DAT_ram_4ff4e4c0)[uVar28 * 0x5ee] = uVar1;
      iVar20 = DAT_ram_4ff50e7c;
      (&DAT_ram_4ff4eccc)[uVar28 * 0x5ee] = uVar15;
      (&DAT_ram_4ff4ecd0)[uVar28 * 0x5ee] = uVar16;
      (&DAT_ram_4ff4e4bc)[uVar28 * 0x5ee] = uVar10;
      (&DAT_ram_4ff4e4c4)[uVar28 * 0x5ee] = uVar12;
      (&DAT_ram_4ff4e4c8)[uVar28 * 0x5ee] = uVar8;
      (&DAT_ram_4ff4e4cc)[uVar28 * 0x5ee] = uVar2;
      (&DAT_ram_4ff4e4d0)[uVar28 * 0x5ee] = uVar3;
      (&DAT_ram_4ff4e4d4)[uVar28 * 0x5ee] = uVar4;
      (&DAT_ram_4ff4e4b8)[uVar28 * 0x5ee] = iVar20;
      (&DAT_ram_4ff4eca8)[uVar28 * 0x5ee] = uVar9;
      (&DAT_ram_4ff4ecb0)[uVar28 * 0x5ee] = iVar22;
      uVar3 = DAT_ram_4ff50ed8;
      iVar5 = DAT_ram_4ff50ed4;
      uVar2 = DAT_ram_4ff50ed0;
      uVar1 = DAT_ram_4ff50ecc;
      uVar10 = DAT_ram_4ff50eb8;
      uVar9 = 0;
      if (iVar22 != 0) {
        uVar9 = DAT_ram_4ff509fc;
      }
      uVar12 = -uVar28 & 0x17b8;
      (&DAT_ram_4ff4ecac)[uVar28 * 0x5ee] = uVar9;
      uVar9 = DAT_ram_4ff50eb4;
      (&DAT_ram_4ff4ecc0)[uVar28 * 0x5ee] = uVar2;
      (&DAT_ram_4ff4ecb4)[uVar28 * 0x5ee] = iVar5;
      (&DAT_ram_4ff4ecb8)[uVar28 * 0x5ee] = uVar3;
      (&DAT_ram_4ff4ecbc)[uVar28 * 0x5ee] = uVar1;
      *(undefined4 *)(&DAT_ram_4ff4e4d8 + uVar12) = uVar9;
      *(undefined4 *)(&DAT_ram_4ff4e4dc + uVar12) = uVar10;
      uVar10 = DAT_ram_4ff50ec0;
      uVar12 = DAT_ram_4ff50e78;
      (&DAT_ram_4ff4e4e0)[uVar28 * 0x5ee] = 0x608;
      (&DAT_ram_4ff4e4e4)[uVar28 * 0x5ee] = 0x588;
      (&DAT_ram_4ff4e4e8)[uVar28 * 0x5ee] = uVar10;
      uVar8 = uVar12 - iVar20;
      if (iVar20 != 0) {
        do {
          iVar22 = (uVar8 & 0xf) * 0x18;
          puVar24 = (undefined4 *)(&DAT_ram_4ff50cf8 + iVar22);
          puVar19 = puVar30;
          do {
            uVar10 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar19 = uVar10;
            puVar19 = puVar19 + 1;
          } while ((undefined4 *)(iVar22 + 0x4ff50d10) != puVar24);
          uVar8 = uVar8 + 1;
          puVar30 = puVar30 + 6;
        } while (uVar8 != uVar12);
      }
      puVar26 = (uint *)((int)&DAT_ram_4ff4ecd8 + iVar27);
      (&DAT_ram_4ff4e4ec)[uVar28 * 0x5ee] = DAT_ram_4ff50ec4;
      FUN_ram_4ff2a348(puVar26,&DAT_ram_4ff50f04,4,iVar18);
      uVar12 = cycle - iVar18;
      if (DAT_ram_4ff4d80c < uVar12) {
        DAT_ram_4ff4d80c = uVar12;
      }
      if (DAT_ram_4ff50fa4 < uVar12) {
        DAT_ram_4ff50fa4 = uVar12;
      }
      if (DAT_ram_4ff50f94 < uVar12) {
        DAT_ram_4ff50f94 = uVar12;
      }
      uVar12 = DAT_ram_4ff50f94;
      DAT_ram_4ff509f0 = 0;
      (&DAT_ram_4ff4d84c)[uVar28 * 0x5ee] = DAT_ram_4ff50fa4;
      (&DAT_ram_4ff4d83c)[uVar28 * 0x5ee] = uVar12;
      FUN_ram_4ff3ec08(uVar7);
      iVar18 = DAT_ram_4ff4d810;
      uVar12 = DAT_ram_4ff4d80c;
      uVar8 = 0x811c9dc5;
      do {
        uVar11 = *puVar26;
        puVar26 = puVar26 + 1;
        uVar8 = ((uVar11 >> 0x10 & 0xff ^
                 (uVar11 >> 8 & 0xff ^ (uVar11 & 0xff ^ uVar8) * 0x1000193) * 0x1000193) * 0x1000193
                ^ uVar11 >> 0x18) * 0x1000193;
      } while (puVar26 != (uint *)((int)&DAT_ram_4ff4efd4 + iVar27));
      DAT_ram_4ff4d814 = DAT_ram_4ff4d814 + 1;
      (&DAT_ram_4ff4efd4)[uVar28 * 0x5ee] = uVar8;
      (&DAT_ram_4ff4e49c)[uVar28 * 0x5ee] = DAT_ram_4ff4d814;
      (&DAT_ram_4ff4e4b4)[uVar28 * 0x5ee] = uVar12;
      (&DAT_ram_4ff4e4a0)[uVar28 * 0x5ee] = param_1;
      (&DAT_ram_4ff4e4a4)[uVar28 * 0x5ee] = 0;
      (&DAT_ram_4ff4efd8)[uVar28 * 0x5ee] = 0x43414e31;
      (&DAT_ram_4ff4e4b0)[uVar28 * 0x5ee] = iVar18;
      (&DAT_ram_4ff4e498)[uVar28 * 0x5ee] = 1;
      (&DAT_ram_4ff4e4a8)[uVar28 * 0x5ee] = 1;
      (&DAT_ram_4ff4e4ac)[uVar28 * 0x5ee] = 1;
      puVar24 = (undefined4 *)((int)&DAT_ram_4ff4e498 + iVar27);
      puVar19 = (undefined4 *)((int)&DAT_ram_4ff4ec80 + iVar27);
      do {
        uVar10 = *puVar24;
        puVar30 = puVar19 + 1;
        puVar24 = puVar24 + 1;
        *puVar19 = uVar10;
        puVar19 = puVar30;
      } while (puVar30 != (undefined4 *)((int)&DAT_ram_4ff4eca0 + iVar27));
      (&DAT_ram_4ff4eca0)[uVar28 * 0x5ee] = DAT_ram_4ff507a0;
      (&DAT_ram_4ff4eca4)[uVar28 * 0x5ee] = DAT_ram_4ff5079c;
      *puVar6 = *puVar6 & 0x7fffffff;
      fence();
      DAT_ram_4ff4d818 = uVar28;
      return;
    }
    *puVar6 = *puVar6 & 0x7fffffff;
    if (DAT_ram_4ff4d810 != -1) {
      DAT_ram_4ff4d810 = DAT_ram_4ff4d810 + 1;
    }
    FUN_ram_4ff3ebfe();
    DAT_ram_4ff509f0 = 0;
  }
  FUN_ram_4ff3ec08();
  return;
}



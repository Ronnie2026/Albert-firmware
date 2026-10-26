/* Firmware entry: 0x4ff29ce8 */

void FUN_ram_4ff29ce8(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[0xc0] = 0;
  fence();
  *param_1 = 2;
  param_1[1] = 0x304;
  param_1[2] = param_4;
  uVar5 = DAT_ram_4ff50e98 & 0xff;
  uVar21 = DAT_ram_4ff50e98 >> 8;
  uVar13 = DAT_ram_4ff50e98 >> 0x10;
  uVar17 = DAT_ram_4ff50e98 >> 0x18;
  param_1[3] = DAT_ram_4ff50e98;
  param_1[4] = 3;
  param_1[5] = param_2;
  param_1[6] = param_3;
  puVar6 = (uint *)&DAT_ram_4ff50ee4;
  uVar5 = ((param_3 >> 0x10 & 0xff ^
           ((((param_2 >> 0x10 & 0xff ^
              (((((uVar13 & 0xff ^
                  ((((param_4 >> 0x10 & 0xff ^
                     ((param_4 & 0xff ^ 0x54d9e6ae) * 0x1000193 ^ param_4 >> 8 & 0xff) * 0x1000193)
                     * 0x1000193 ^ param_4 >> 0x18) * 0x1000193 ^ uVar5) * 0x1000193 ^ uVar21 & 0xff
                  ) * 0x1000193) * 0x1000193 ^ uVar17) * 0x1000193 ^ 3) * 0x502c3f11 ^
               param_2 & 0xff) * 0x1000193 ^ param_2 >> 8 & 0xff) * 0x1000193) * 0x1000193 ^
             param_2 >> 0x18) * 0x1000193 ^ param_3 & 0xff) * 0x1000193 ^ param_3 >> 8 & 0xff) *
           0x1000193) * 0x1000193 ^ param_3 >> 0x18) * 0x1000193;
  puVar14 = param_1 + 7;
  do {
    uVar13 = *puVar6;
    puVar12 = puVar14 + 1;
    puVar6 = puVar6 + 1;
    *puVar14 = uVar13;
    uVar5 = ((uVar13 >> 0x10 & 0xff ^
             ((uVar13 & 0xff ^ uVar5) * 0x1000193 ^ uVar13 >> 8 & 0xff) * 0x1000193) * 0x1000193 ^
            uVar13 >> 0x18) * 0x1000193;
    puVar14 = puVar12;
  } while (puVar12 != param_1 + 0xf);
  puVar14 = &DAT_ram_4ff50f04;
  do {
    uVar9 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar12 = uVar9;
    uVar21 = DAT_ram_4ff50f7c;
    uVar17 = DAT_ram_4ff50f78;
    uVar13 = DAT_ram_4ff50e7c;
    uVar5 = ((uVar9 >> 0x10 & 0xff ^
             ((uVar9 & 0xff ^ uVar5) * 0x1000193 ^ uVar9 >> 8 & 0xff) * 0x1000193) * 0x1000193 ^
            uVar9 >> 0x18) * 0x1000193;
    puVar12 = puVar12 + 1;
  } while (puVar14 != &DAT_ram_4ff50f2c);
  uVar9 = DAT_ram_4ff50f78;
  if (0xc < DAT_ram_4ff50f78) {
    uVar9 = 0xc;
  }
  uVar8 = DAT_ram_4ff50e7c;
  if (8 < DAT_ram_4ff50e7c) {
    uVar8 = 8;
  }
  uVar10 = DAT_ram_4ff50f7c & 0xff;
  uVar23 = DAT_ram_4ff50f7c >> 8;
  uVar22 = DAT_ram_4ff50f7c >> 0x10;
  uVar4 = DAT_ram_4ff50f7c >> 0x18;
  uVar11 = DAT_ram_4ff50f78 - uVar9;
  param_1[0x19] = uVar9;
  param_1[0x1a] = uVar21;
  param_1[0x1b] = uVar11;
  param_1[0x1c] = uVar8;
  uVar21 = DAT_ram_4ff50e80;
  uVar20 = DAT_ram_4ff50e80 & 0xff;
  uVar19 = DAT_ram_4ff50e80 >> 8;
  param_1[0x1d] = DAT_ram_4ff50e80;
  uVar1 = DAT_ram_4ff50e84;
  param_1[0x1e] = DAT_ram_4ff50e84;
  uVar18 = DAT_ram_4ff50e7c - uVar8;
  param_1[0x1f] = uVar18;
  param_1[0x20] = 1;
  uVar2 = DAT_ram_4ff50e88;
  param_1[0x21] = DAT_ram_4ff50e88;
  uVar3 = DAT_ram_4ff50e8c;
  param_1[0x22] = DAT_ram_4ff50e8c;
  iVar7 = DAT_ram_4ff50f74 - uVar9;
  puVar14 = param_1 + 0x23;
  uVar5 = ((uVar3 >> 0x10 & 0xff ^
           (((((((((uVar18 >> 0x10 & 0xff ^
                   ((((uVar1 >> 0x10 & 0xff ^
                      ((((uVar21 >> 0x10 & 0xff ^
                         (((((uVar11 >> 0x10 & 0xff ^
                             ((((uVar22 & 0xff ^
                                (((uVar5 ^ uVar9) * 0x502c3f11 ^ uVar10) * 0x1000193 ^ uVar23 & 0xff
                                ) * 0x1000193) * 0x1000193 ^ uVar4) * 0x1000193 ^ uVar11 & 0xff) *
                              0x1000193 ^ uVar11 >> 8 & 0xff) * 0x1000193) * 0x1000193 ^
                            uVar11 >> 0x18) * 0x1000193 ^ uVar8) * 0x502c3f11 ^ uVar20) * 0x1000193
                         ^ uVar19 & 0xff) * 0x1000193) * 0x1000193 ^ uVar21 >> 0x18) * 0x1000193 ^
                       uVar1 & 0xff) * 0x1000193 ^ uVar1 >> 8 & 0xff) * 0x1000193) * 0x1000193 ^
                     uVar1 >> 0x18) * 0x1000193 ^ uVar18 & 0xff) * 0x1000193 ^ uVar18 >> 8 & 0xff) *
                   0x1000193) * 0x1000193 ^ uVar18 >> 0x18) * 0x1000193 ^ 1) * 0x502c3f11 ^
                uVar2 & 0xff) * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^ uVar2 >> 0x10 & 0xff) *
              0x1000193 ^ uVar2 >> 0x18) * 0x1000193 ^ uVar3 & 0xff) * 0x1000193 ^ uVar3 >> 8 & 0xff
           ) * 0x1000193) * 0x1000193 ^ uVar3 >> 0x18) * 0x1000193;
  if (uVar17 == 0) {
    uVar17 = 0x6c;
LAB_ram_4ff2a15e:
    puVar6 = puVar14 + uVar17;
    do {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
      uVar5 = uVar5 * 0x502c3f11;
    } while (puVar6 != puVar14);
  }
  else {
    uVar17 = 0;
    puVar6 = puVar14;
    do {
      iVar15 = (iVar7 + uVar17 & 0xf) * 0x24;
      puVar16 = (uint *)(&DAT_ram_4ff50fa8 + iVar15);
      puVar12 = puVar6;
      do {
        uVar21 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar12 = uVar21;
        uVar5 = ((uVar21 >> 0x10 & 0xff ^
                 ((uVar21 & 0xff ^ uVar5) * 0x1000193 ^ uVar21 >> 8 & 0xff) * 0x1000193) * 0x1000193
                ^ uVar21 >> 0x18) * 0x1000193;
        puVar12 = puVar12 + 1;
      } while ((uint *)(&DAT_ram_4ff50fcc + iVar15) != puVar16);
      uVar17 = uVar17 + 1;
      puVar6 = puVar6 + 9;
    } while (uVar17 < uVar9);
    uVar17 = uVar9 * -0x24 + 0x1b0 >> 2;
    puVar14 = puVar14 + uVar9 * 9;
    puVar6 = puVar14;
    if (uVar17 != 0) goto LAB_ram_4ff2a15e;
  }
  iVar7 = DAT_ram_4ff50e78 - uVar8;
  if (uVar13 == 0) {
    uVar13 = 0x30;
  }
  else {
    uVar13 = 0;
    puVar14 = puVar6;
    do {
      iVar15 = (iVar7 + uVar13 & 0xf) * 0x18;
      puVar16 = (uint *)(&DAT_ram_4ff50cf8 + iVar15);
      puVar12 = puVar14;
      do {
        uVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar12 = uVar17;
        uVar5 = ((uVar17 >> 0x10 & 0xff ^
                 ((uVar17 & 0xff ^ uVar5) * 0x1000193 ^ uVar17 >> 8 & 0xff) * 0x1000193) * 0x1000193
                ^ uVar17 >> 0x18) * 0x1000193;
        puVar12 = puVar12 + 1;
      } while (puVar16 != (uint *)(iVar15 + 0x4ff50d10));
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 6;
    } while (uVar13 < uVar8);
    uVar17 = uVar8 * -0x18 + 0xc0;
    uVar13 = uVar17 >> 2;
    puVar6 = puVar6 + uVar8 * 6;
    if (uVar17 == 0) goto LAB_ram_4ff2a22c;
  }
  puVar14 = puVar6 + uVar13;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    uVar5 = uVar5 * 0x502c3f11;
  } while (puVar6 != puVar14);
LAB_ram_4ff2a22c:
  *puVar6 = uVar5;
  fence();
  param_1[0xc0] = 0x43414e31;
  return;
}



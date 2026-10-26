/* Firmware entry: 0x48060580 */

void FUN_ram_48060580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                     uint param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 local_1e8 [19];
  undefined4 uStack_19c;
  undefined4 auStack_80 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(local_1e8,0,0x1c8);
  uStack_19c = 0xffffffff;
  puVar7 = local_1e8;
  do {
    puVar7[0x1d] = 0xffffffff;
    puVar7 = puVar7 + 10;
  } while (auStack_80 != puVar7);
  FUN_ram_4806019e(param_2,param_4,param_5,param_6,local_1e8,1);
  puVar7 = local_1e8;
  do {
    uVar18 = *puVar7;
    uVar16 = puVar7[1];
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    uVar10 = puVar7[4];
    param_3[5] = puVar7[5];
    *param_3 = uVar18;
    param_3[1] = uVar16;
    param_3[2] = uVar2;
    param_3[3] = uVar4;
    param_3[4] = uVar10;
    puVar7 = puVar7 + 6;
    param_3 = param_3 + 6;
  } while (puVar7 != (undefined4 *)&stack0xffffffe0);
  uVar1 = 0;
  iVar3 = 0;
  iVar11 = 0;
  iVar13 = 0;
  do {
    piVar6 = param_2 + iVar13 * 0xf9;
    uVar12 = piVar6[7];
    uVar5 = piVar6[3];
    if (((((uVar12 != 0) && (uVar12 == piVar6[7])) && (uVar12 == piVar6[7])) &&
        ((piVar6[8] == ~uVar12 && (*piVar6 == 0x50313134)))) &&
       ((piVar6[1] == 2 && (piVar6[2] == 0x3e4)))) {
      uVar8 = 0xf37eae88;
      uVar14 = 0;
      do {
        uVar9 = uVar14 & 0x1f;
        uVar14 = uVar14 + 8;
        uVar8 = (uVar5 >> uVar9 & 0xff ^ uVar8) * 0x1000193;
      } while (uVar14 != 0x20);
      uVar14 = 0;
      do {
        uVar9 = uVar14 & 0x1f;
        uVar14 = uVar14 + 8;
        uVar8 = ((uint)piVar6[4] >> uVar9 & 0xff ^ uVar8) * 0x1000193;
      } while (uVar14 != 0x20);
      uVar14 = 0;
      do {
        uVar9 = uVar14 & 0x1f;
        uVar14 = uVar14 + 8;
        uVar8 = ((uint)piVar6[5] >> uVar9 & 0xff ^ uVar8) * 0x1000193;
      } while (uVar14 != 0x20);
      uVar14 = 0;
      do {
        uVar9 = uVar8;
        uVar17 = (uint)piVar6[6] >> (uVar14 & 0x1f) & 0xff;
        uVar14 = uVar14 + 8;
        uVar8 = (uVar17 ^ uVar9) * 0x1000193;
      } while (uVar14 != 0x20);
      if (uVar17 == uVar9) {
        uVar8 = 0xffffffff;
      }
      if (uVar12 == uVar8) {
        if ((iVar11 == 0) || (0 < (int)(uVar5 - uVar1))) {
          iVar3 = iVar13;
          uVar1 = uVar5;
        }
        iVar11 = 1;
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 4);
  if (iVar11 == 0) {
    uVar5 = 0;
    puVar7 = param_2;
  }
  else {
    uVar5 = iVar3 + 1U & 3;
    puVar7 = param_2 + uVar5 * 0xf9;
  }
  param_1[0x6e] = uVar5;
  puVar15 = puVar7 + 0xf9;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  } while (puVar15 != puVar7);
  fence();
  uVar5 = (-iVar11 & uVar1) + 1;
  uVar1 = 0xf37eae88;
  uVar12 = 0;
  do {
    uVar8 = uVar12 & 0x1f;
    uVar12 = uVar12 + 8;
    uVar1 = (uVar5 >> uVar8 & 0xff ^ uVar1) * 0x1000193;
  } while (uVar12 != 0x20);
  uVar12 = 0;
  do {
    uVar8 = uVar12 & 0x1f;
    uVar12 = uVar12 + 8;
    uVar1 = (param_4 >> uVar8 & 0xff ^ uVar1) * 0x1000193;
  } while (uVar12 != 0x20);
  uVar12 = 0;
  do {
    uVar8 = uVar12 & 0x1f;
    uVar12 = uVar12 + 8;
    uVar1 = (param_5 >> uVar8 & 0xff ^ uVar1) * 0x1000193;
  } while (uVar12 != 0x20);
  uVar12 = 0;
  do {
    uVar8 = uVar1;
    uVar14 = param_6 >> (uVar12 & 0x1f) & 0xff;
    uVar12 = uVar12 + 8;
    uVar1 = (uVar14 ^ uVar8) * 0x1000193;
  } while (uVar12 != 0x20);
  uVar12 = ~uVar1;
  if (uVar14 == uVar8) {
    uVar12 = 0;
    uVar1 = 0xffffffff;
  }
  param_2 = param_2 + param_1[0x6e] * 0xf9;
  param_2[7] = 0;
  param_2[8] = 0;
  fence();
  *param_2 = 0x50313134;
  param_2[1] = 2;
  param_2[2] = 0x3e4;
  param_2[3] = uVar5;
  param_2[4] = param_4;
  param_2[5] = param_5;
  param_2[6] = param_6;
  fence();
  param_2[8] = uVar12;
  param_2[7] = uVar1;
  fence();
  puVar7 = param_1 + 100;
  puVar15 = param_1;
  do {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0xffffffff;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    *puVar7 = 0;
    puVar15 = puVar15 + 10;
    puVar7 = puVar7 + 1;
  } while (param_1 + 100 != puVar15);
  *(undefined1 *)(param_1 + 0x6f) = 1;
  return;
}



/* Firmware entry: 0x48061530 */

undefined4 FUN_ram_48061530(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uStack_80;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar9 = *(char *)((int)param_1 + 0x5d1);
  if ((cVar9 != '\0') && ((int)(param_2 - param_1[0x14b]) < 0)) {
    if ((char)param_1[0x12] != '\0') {
      param_1[0x150] = param_1[0x17];
      *(undefined1 *)((int)param_1 + 0x5dd) = 1;
      if ((char)param_1[0x1e] == '\0') {
        *(undefined1 *)(param_1 + 0x1e) = 1;
        *param_1 = *param_1 + 1;
      }
    }
    param_1[0x15c] = 0;
    param_1[0x15a] = 0;
    param_1[0x158] = 0;
    *(undefined1 *)(param_1 + 0x18a) = 0;
    *(undefined1 *)((int)param_1 + 0x629) = 0;
    *(undefined1 *)((int)param_1 + 0x62a) = 0;
    *(undefined1 *)((int)param_1 + 0x62b) = 0;
    *(undefined1 *)(param_1 + 0x18b) = 0;
    *(undefined1 *)((int)param_1 + 0x62d) = 0;
    *(undefined1 *)((int)param_1 + 0x62e) = 0;
    *(undefined1 *)((int)param_1 + 0x62f) = 0;
    *(undefined1 *)(param_1 + 0x18c) = 0;
    *(undefined1 *)((int)param_1 + 0x631) = 0;
    *(undefined1 *)((int)param_1 + 0x632) = 0;
    *(undefined1 *)((int)param_1 + 0x633) = 0;
    *(undefined1 *)(param_1 + 0x18d) = 0;
    *(undefined1 *)((int)param_1 + 0x635) = 0;
    *(undefined1 *)((int)param_1 + 0x636) = 0;
    *(undefined1 *)((int)param_1 + 0x637) = 0;
    *(undefined1 *)(param_1 + 0x18e) = 0;
    *(undefined1 *)((int)param_1 + 0x639) = 0;
    param_1[0x163] = 0;
    param_1[0x15d] = 0;
    param_1[0x15b] = 0;
    param_1[0x159] = 0;
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    param_1[0x155] = 0;
    param_1[0x16a] = 0;
    param_1[0x16b] = 0;
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 0;
    *(undefined1 *)((int)param_1 + 0x5d1) = 0;
    *(undefined2 *)((int)param_1 + 0x5d2) = 0;
    param_1[0x175] = 0;
    *(undefined2 *)(param_1 + 0x176) = 0;
    param_1[0x162] = 0;
    param_1[0x172] = 0;
    param_1[0x173] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x16c] = 0;
    param_1[0x16d] = 0;
    *(undefined1 *)(param_1 + 0x280) = 3;
    return 0;
  }
  if ((char)param_1[0x174] == '\0') {
    FUN_ram_48031ea8(param_1,param_2);
    cVar9 = *(char *)((int)param_1 + 0x5d1);
  }
  else {
    uVar5 = param_2 - param_1[0x160];
    if ((int)uVar5 < 0) {
      uVar5 = param_1[0x160] - param_2;
      if (uVar5 < 0x3e9) {
        uVar7 = param_1[0x15e];
        if ((param_1[0x15f] != 0) || (uVar5 <= uVar7)) {
          param_1[0x15f] = param_1[0x15f] - (uint)(uVar7 < uVar7 - uVar5);
          param_1[0x15e] = uVar7 - uVar5;
          param_1[0x160] = param_2;
          goto LAB_ram_48061580;
        }
      }
      iVar6 = 0;
      param_1[0x161] = param_1[0x161] + 1;
      uVar5 = param_2;
    }
    else {
      iVar6 = (uint)(param_1[0x15e] + uVar5 < uVar5) + param_1[0x15f];
      uVar5 = param_1[0x15e] + uVar5;
    }
    param_1[0x15e] = uVar5;
    param_1[0x15f] = iVar6;
    param_1[0x160] = param_2;
  }
LAB_ram_48061580:
  if (cVar9 == '\0') {
    param_1[0x14b] = param_2;
    *(undefined1 *)((int)param_1 + 0x5d1) = 1;
    return 1;
  }
  uVar5 = param_1[0x14b];
  cVar9 = *(char *)((int)param_1 + 0x5d3);
  uVar7 = param_2 - uVar5;
  if (param_2 == uVar5) goto LAB_ram_4806172c;
  iVar6 = param_1[0x153];
  cVar1 = *(char *)((int)param_1 + 0x5d6);
  uVar13 = uVar5 - iVar6;
  if (cVar9 == '\0') {
    if ((cVar1 == '\0') || (199 < uVar13)) {
      uVar15 = 0;
      uVar16 = 0;
      uVar5 = 0;
      uVar10 = 0;
      uVar7 = 0;
      uVar14 = 0;
    }
    else {
      uVar5 = (iVar6 + 200) - uVar5;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      uVar16 = __floatunsidf(uVar5);
      uVar15 = 0;
      uVar10 = 0;
      uVar7 = 0;
      uVar14 = 0;
    }
  }
  else {
    if (uVar5 - param_1[0x151] < 0x5dc) {
      uVar11 = (param_1[0x151] + 0x5dc) - uVar5;
      uVar10 = uVar7;
      if (uVar11 <= uVar7) {
        uVar10 = uVar11;
      }
      if ((cVar1 != '\0') && (uVar13 < 200)) {
        uVar5 = (iVar6 + 200) - uVar5;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        uVar7 = uVar10;
        if (uVar5 < uVar10) {
          uVar7 = uVar5;
        }
        uVar15 = __floatunsidf(uVar7);
        goto LAB_ram_4806197c;
      }
      uVar15 = 0;
      uVar16 = 0;
      uVar5 = 0;
    }
    else if ((cVar1 == '\0') || (199 < uVar13)) {
      uVar15 = 0;
      uVar16 = 0;
      uVar5 = 0;
      uVar10 = 0;
    }
    else {
      uVar5 = (iVar6 + 200) - uVar5;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      uVar15 = 0;
      uVar10 = 0;
LAB_ram_4806197c:
      uVar16 = __floatunsidf(uVar5);
    }
    uVar7 = uVar10;
    uVar14 = uVar15;
    if ((char)param_1[0x175] == '\0') {
      uVar7 = 0;
      uVar14 = 0;
    }
  }
  uStack_80 = (undefined4)uVar16;
  iVar6 = param_1[0x164];
  iVar3 = param_1[0x165];
  param_1[0x156] = param_1[0x156] + uVar7;
  param_1[0x155] = param_1[0x155] + uVar10;
  param_1[0x157] = uVar5 + param_1[0x157];
  uVar14 = __muldf3(iVar6,iVar3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar16 = __muldf3(iVar6,iVar3,uStack_80,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = __adddf3(param_1[0x166],param_1[0x167],(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  *(undefined8 *)(param_1 + 0x166) = uVar16;
  uVar15 = __muldf3(iVar6,iVar3,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar15 = __adddf3(param_1[0x168],param_1[0x169],(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  *(undefined8 *)(param_1 + 0x168) = uVar15;
  uVar15 = __adddf3(param_1[0x16a],param_1[0x16b],(int)uVar14,uVar8);
  *(undefined8 *)(param_1 + 0x16a) = uVar15;
  if (*(char *)((int)param_1 + 0x5d9) != '\0') {
    uVar15 = __adddf3(param_1[0x16c],param_1[0x16d],(int)uVar14,uVar8);
    *(undefined8 *)(param_1 + 0x16c) = uVar15;
  }
LAB_ram_4806172c:
  param_1[0x14b] = param_2;
  if ((cVar9 != '\0') && (0x5dc < param_2 - param_1[0x151])) {
    if (*(char *)((int)param_1 + 0x5d9) != '\0') {
      if (param_1[0x162] == 1) {
        iVar6 = param_1[0x16c];
        iVar3 = param_1[0x16d];
        param_1[0x16e] = iVar6;
        param_1[0x16f] = iVar3;
      }
      else {
        iVar4 = param_1[0x16c];
        iVar12 = param_1[0x170];
        iVar3 = param_1[0x171];
        iVar2 = param_1[0x16d];
        iVar6 = __ltdf2(iVar12,iVar3,iVar4,iVar2);
        if (-1 < iVar6) {
          iVar2 = iVar3;
          iVar4 = iVar12;
        }
        iVar6 = param_1[0x16c];
        iVar3 = param_1[0x16d];
        param_1[0x170] = iVar4;
        param_1[0x171] = iVar2;
      }
      param_1[0x172] = iVar6;
      param_1[0x173] = iVar3;
      *(undefined1 *)((int)param_1 + 0x5d9) = 0;
      param_1[0x16c] = 0;
      param_1[0x16d] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x5d3) = 0;
    *(undefined1 *)(param_1 + 0x175) = 0;
  }
  return 1;
}



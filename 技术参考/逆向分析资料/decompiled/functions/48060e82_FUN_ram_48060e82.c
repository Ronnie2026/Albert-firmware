/* Firmware entry: 0x48060e82 */

void FUN_ram_48060e82(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return;
  }
  if ((char)param_1[0x174] == '\0') {
    cVar2 = (char)param_1[0x12];
    uVar13 = param_1[0x161];
    uVar12 = 0;
  }
  else {
    uVar12 = param_3 - param_1[0x160];
    if ((int)uVar12 < 0) {
      param_3 = param_1[0x160] - param_3;
      if (0x240c8400 < param_3) {
        return;
      }
      uVar12 = param_1[0x15e];
      if ((param_1[0x15f] == 0) && (uVar12 < param_3)) {
        return;
      }
      param_3 = uVar12 - param_3;
      uVar12 = param_1[0x15f] - (uint)(uVar12 < param_3);
    }
    else {
      if (0x240c8400 < uVar12) {
        return;
      }
      param_3 = param_1[0x15e] + uVar12;
      uVar12 = (uint)(param_3 < uVar12) + param_1[0x15f];
    }
    cVar2 = (char)param_1[0x12];
    uVar13 = param_1[0x161];
  }
  cVar14 = '\0';
  if ((cVar2 != '\0') && (cVar14 = (char)param_1[0x17c], cVar14 != '\0')) {
    if (uVar13 == param_1[0x17a]) {
      uVar7 = param_1[0x179];
      if ((uVar7 <= uVar12) &&
         ((((uVar7 != uVar12 || ((uint)param_1[0x178] <= param_3)) &&
           (uVar5 = param_3 - param_1[0x178], uVar12 - uVar7 == (uint)(param_3 < uVar5))) &&
          (uVar5 < 0x240c8401)))) {
        uVar7 = __udivdi3(uVar5,0,1000,0);
        iVar9 = 0;
        if (uVar7 <= param_2) {
          iVar9 = param_2 - uVar7;
        }
        if (param_1[0x15] != iVar9) {
          param_1[0x15] = iVar9;
          goto LAB_ram_48060ee4;
        }
      }
    }
    cVar14 = '\0';
  }
LAB_ram_48060ee4:
  iVar9 = param_1[0x182];
  if (((char)iVar9 != '\0') && (uVar13 == param_1[0x180])) {
    uVar7 = param_1[0x17f];
    if ((((uVar7 <= uVar12) && ((uVar7 != uVar12 || ((uint)param_1[0x17e] <= param_3)))) &&
        (uVar5 = param_3 - param_1[0x17e], uVar12 - uVar7 == (uint)(param_3 < uVar5))) &&
       (uVar5 < 0x240c8401)) {
      uVar7 = __udivdi3(uVar5,0,1000,0);
      iVar8 = 0;
      if (uVar7 <= param_2) {
        iVar8 = param_2 - uVar7;
      }
      if (param_1[2] != iVar8) {
        param_1[2] = iVar8;
        cVar14 = (char)iVar9;
      }
    }
  }
  iVar9 = param_1[0x188];
  if (((char)iVar9 == '\0') || (uVar13 != param_1[0x186])) {
LAB_ram_48060ff8:
    if ((*(char *)((int)param_1 + 0x5d2) == '\0') || ((char)param_1[0x18e] == '\0')) {
LAB_ram_48060ffe:
      uVar7 = (uint)*(byte *)(param_1 + 0x22);
    }
    else {
LAB_ram_480610f2:
      if (uVar13 != param_1[0x18c]) goto LAB_ram_48060ffe;
      uVar7 = param_1[0x18b];
      if (((uVar12 < uVar7) || ((uVar7 == uVar12 && (param_3 < (uint)param_1[0x18a])))) ||
         ((uVar5 = param_3 - param_1[0x18a], uVar12 - uVar7 != (uint)(param_3 < uVar5) ||
          (0x240c8400 < uVar5)))) goto LAB_ram_48060ffe;
      uVar7 = __udivdi3(uVar5,0,1000,0);
      iVar9 = 0;
      if (uVar7 <= param_2) {
        iVar9 = param_2 - uVar7;
      }
      uVar7 = (uint)*(byte *)(param_1 + 0x22);
      if (param_1[0x14e] != iVar9) {
        param_1[0x14e] = iVar9;
        if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x50d) != '\0')) {
          param_1[0x145] = iVar9;
        }
        if (uVar7 == 0) goto LAB_ram_4806116a;
        cVar14 = '\x01';
        goto LAB_ram_48061008;
      }
    }
    if (uVar7 != 0) goto LAB_ram_48061008;
  }
  else {
    uVar7 = param_1[0x185];
    if (((uVar12 < uVar7) ||
        (((uVar7 == uVar12 && (param_3 < (uint)param_1[0x184])) ||
         (uVar5 = param_3 - param_1[0x184], uVar12 - uVar7 != (uint)(param_3 < uVar5))))) ||
       (0x240c8400 < uVar5)) goto LAB_ram_48060ff8;
    uVar7 = __udivdi3(uVar5,0,1000,0);
    iVar8 = 0;
    if (uVar7 <= param_2) {
      iVar8 = param_2 - uVar7;
    }
    if (param_1[10] == iVar8) goto LAB_ram_48060ff8;
    param_1[10] = iVar8;
    if (*(char *)((int)param_1 + 0x5d2) != '\0') {
      cVar14 = (char)param_1[0x18e];
      if (cVar14 == '\0') {
        bVar1 = *(byte *)(param_1 + 0x22);
        cVar14 = *(char *)((int)param_1 + 0x5d2);
        goto joined_r0x48061240;
      }
      goto LAB_ram_480610f2;
    }
    bVar1 = *(byte *)(param_1 + 0x22);
    cVar14 = (char)iVar9;
joined_r0x48061240:
    uVar7 = (uint)bVar1;
    if (uVar7 == 0) goto LAB_ram_4806116a;
LAB_ram_48061008:
    puVar4 = (uint *)(param_1 + 400);
    piVar11 = param_1 + 0x25;
    uVar5 = 0;
    do {
      uVar3 = puVar4[4];
      if (((char)uVar3 != '\0') && (uVar13 == puVar4[2])) {
        uVar10 = puVar4[1];
        if (((uVar10 <= uVar12) &&
            (((uVar10 != uVar12 || (*puVar4 <= param_3)) &&
             (uVar6 = param_3 - *puVar4, uVar12 - uVar10 == (uint)(param_3 < uVar6))))) &&
           (uVar6 < 0x240c8401)) {
          uVar10 = __udivdi3(uVar6,0,1000,0);
          iVar9 = 0;
          if (uVar10 <= param_2) {
            iVar9 = param_2 - uVar10;
          }
          if (*piVar11 != iVar9) {
            *piVar11 = iVar9;
            cVar14 = (char)uVar3;
          }
        }
      }
      uVar3 = puVar4[0x7c];
      if (((char)uVar3 != '\0') && (uVar13 == puVar4[0x7a])) {
        uVar10 = puVar4[0x79];
        if (((uVar10 <= uVar12) && ((uVar10 != uVar12 || (puVar4[0x78] <= param_3)))) &&
           ((uVar6 = param_3 - puVar4[0x78], uVar12 - uVar10 == (uint)(param_3 < uVar6) &&
            (uVar6 < 0x240c8401)))) {
          uVar10 = __udivdi3(uVar6,0,1000,0);
          iVar9 = 0;
          if (uVar10 <= param_2) {
            iVar9 = param_2 - uVar10;
          }
          if (piVar11[1] != iVar9) {
            piVar11[1] = iVar9;
            cVar14 = (char)uVar3;
          }
        }
      }
      uVar5 = uVar5 + 1;
      if (uVar7 <= uVar5) break;
      puVar4 = puVar4 + 6;
      piVar11 = piVar11 + 0xe;
    } while (uVar5 != 0x14);
  }
  if (cVar14 == '\0') {
    return;
  }
LAB_ram_4806116a:
  *param_1 = *param_1 + 1;
  return;
}



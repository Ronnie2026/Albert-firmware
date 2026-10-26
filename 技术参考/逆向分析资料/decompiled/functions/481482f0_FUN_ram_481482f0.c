/* Firmware entry: 0x481482f0 */

uint * FUN_ram_481482f0(int param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar10 = *param_2;
  uVar14 = 0xe;
  if ((uVar10 & 0xe0) != 0x20) {
    uVar14 = 2;
    if ((uVar10 & 0xc0ff) != 0x80fe) {
      if (uVar10 == 0) {
        uVar14 = 0xe;
        if (((param_2[1] == 0) && (param_2[2] == 0)) && (uVar14 = 2, param_2[3] != 0x1000000)) {
          uVar14 = 0xe;
        }
      }
      else {
        uVar14 = 8;
        if ((uVar10 & 0xfe) != 0xfc) {
          if ((uVar10 & 0xff) == 0xff) {
            uVar14 = FUN_ram_48137fd6(uVar10);
            uVar14 = uVar14 >> 0x10 & 0xf;
          }
          else {
            uVar14 = 5;
            if ((uVar10 & 0xc0ff) != 0xc0fe) {
              uVar14 = 0xe;
            }
          }
        }
      }
    }
  }
  puVar9 = (uint *)(param_1 + 0x4c);
  iVar11 = 0;
  puVar5 = (uint *)0x0;
  uVar10 = 0;
  uVar13 = 0;
  bVar3 = false;
  do {
    while( true ) {
      bVar1 = *(byte *)(param_1 + iVar11 + 0x94);
      puVar6 = puVar5;
      uVar12 = uVar10;
      uVar8 = uVar13;
      bVar4 = bVar3;
      if ((bVar1 & 0x10) == 0) goto LAB_ram_481483b0;
      uVar8 = *puVar9;
      bVar2 = bVar1 == 0x30;
      puVar6 = puVar9;
      bVar4 = bVar2;
      if ((uVar8 & 0xe0) != 0x20) break;
      uVar7 = 0xe;
LAB_ram_481483c6:
      uVar15 = 0;
      if ((uVar8 == *param_2) && (puVar9[1] == param_2[1])) {
        uVar15 = 1;
        if ((puVar9[2] == param_2[2]) && (uVar15 = 1, puVar9[3] == param_2[3])) {
LAB_ram_48148400:
          return (uint *)(iVar11 * 0x18 + 0x4c + param_1);
        }
      }
      uVar12 = uVar7;
      uVar8 = uVar15;
      if (puVar5 != (uint *)0x0) {
        if (uVar7 < uVar10) {
          puVar6 = puVar5;
          uVar12 = uVar10;
          uVar8 = uVar13;
          bVar4 = bVar3;
          if (uVar14 <= uVar7) {
            puVar6 = puVar9;
            uVar12 = uVar7;
            uVar8 = uVar15;
            bVar4 = bVar2;
          }
        }
        else {
LAB_ram_48148420:
          if (uVar10 < uVar7) {
LAB_ram_48148444:
            puVar6 = puVar5;
            uVar12 = uVar10;
            uVar8 = uVar13;
            bVar4 = bVar3;
            if (uVar10 < uVar14) {
              puVar6 = puVar9;
              uVar12 = uVar7;
              uVar8 = uVar15;
              bVar4 = bVar2;
            }
          }
          else if (bVar3 < bVar2) {
            uVar12 = uVar7;
            uVar8 = uVar15;
            bVar4 = true;
          }
          else {
            puVar6 = puVar5;
            uVar12 = uVar10;
            uVar8 = uVar13;
            bVar4 = bVar3;
            if ((bVar3 == bVar2) && (uVar13 < uVar15)) {
              puVar6 = puVar9;
              uVar12 = uVar7;
              uVar8 = 1;
              bVar4 = bVar2;
            }
          }
        }
      }
LAB_ram_481483b0:
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 6;
      puVar5 = puVar6;
      uVar10 = uVar12;
      uVar13 = uVar8;
      bVar3 = bVar4;
      if (iVar11 == 3) {
        return puVar6;
      }
    }
    if ((uVar8 & 0xc0ff) == 0x80fe) {
      uVar7 = 2;
      goto LAB_ram_481483c6;
    }
    if ((uVar8 & 0xfe) == 0xfc) {
      uVar7 = 8;
      goto LAB_ram_481483c6;
    }
    if ((uVar8 & 0xc0ff) == 0xc0fe) {
      uVar7 = 5;
      goto LAB_ram_481483c6;
    }
    if (uVar8 == *param_2) {
      if (puVar9[1] == param_2[1]) {
        if ((puVar9[2] == param_2[2]) && (puVar9[3] == param_2[3])) goto LAB_ram_48148400;
        uVar15 = 1;
        uVar7 = 0xf;
        uVar12 = uVar7;
        uVar8 = uVar15;
        if (puVar5 == (uint *)0x0) goto LAB_ram_481483b0;
        goto LAB_ram_48148420;
      }
      if (puVar5 == (uint *)0x0) goto LAB_ram_4814849e;
      uVar7 = 0xf;
      if (uVar10 == 0xf) goto LAB_ram_481484c6;
      uVar15 = 0;
      goto LAB_ram_48148444;
    }
    if (puVar5 == (uint *)0x0) {
LAB_ram_4814849e:
      uVar12 = 0xf;
      uVar8 = 0;
      goto LAB_ram_481483b0;
    }
    if (uVar10 == 0xf) {
LAB_ram_481484c6:
      if (bVar2 <= bVar3) goto LAB_ram_481484ba;
      uVar8 = 0;
      bVar4 = true;
      goto LAB_ram_481483b0;
    }
    if (uVar10 < uVar14) {
      uVar12 = 0xf;
      uVar8 = 0;
      goto LAB_ram_481483b0;
    }
LAB_ram_481484ba:
    iVar11 = iVar11 + 1;
    puVar9 = puVar9 + 6;
    if (iVar11 == 3) {
      return puVar5;
    }
  } while( true );
}



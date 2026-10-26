/* Firmware entry: 0x4811f7b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4811f7b4(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar9 = FUN_ram_4ff3ebfe();
  if (DAT_ram_4ff50e94 != 0) goto LAB_ram_4811f952;
  puVar16 = &DAT_ram_4ff4d478;
  do {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  } while (puVar16 != &DAT_ram_4ff4d7dc);
  pbVar14 = &DAT_ram_50109b38;
  if (_DAT_ram_50109b68 == 0) {
LAB_ram_4811f808:
    if ((((_DAT_ram_50109e94 == 0x43414631) && (_DAT_ram_50109b38 == 1)) &&
        (_DAT_ram_50109b3c == 0x360)) &&
       (((_DAT_ram_50109b48 < 2 && (_DAT_ram_50109b4c == 1)) &&
        ((_DAT_ram_50109b50 < 3 &&
         ((_DAT_ram_50109b68 < 2 &&
          ((uint)(_DAT_ram_50109b50 != 0) != ((_DAT_ram_50109b68 ^ 1) & 1))))))))) {
      if (_DAT_ram_50109b68 == 0) {
LAB_ram_4811fb68:
        uVar15 = 0x811c9dc5;
        pbVar13 = pbVar14;
        do {
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          uVar15 = (bVar4 ^ uVar15) * 0x1000193;
        } while (pbVar13 != &DAT_ram_50109e90);
        if (_DAT_ram_50109e90 == uVar15) {
          puVar16 = &DAT_ram_4ff4d47c;
          do {
            uVar12 = *(undefined4 *)pbVar14;
            pbVar14 = pbVar14 + 4;
            *puVar16 = uVar12;
            puVar16 = puVar16 + 1;
          } while (pbVar14 != (byte *)0x50109e98);
          DAT_ram_4ff4d478 = 1;
        }
      }
      else if ((((_DAT_ram_50109e8c == 0x43414e31) && (_DAT_ram_50109b8c - 1U < 2)) &&
               (_DAT_ram_50109b90 == 0x304)) &&
              (((_DAT_ram_50109bf0 < 0xd && (_DAT_ram_50109bfc < 9)) && (_DAT_ram_50109c0c == 1))))
      {
        uVar15 = 0x811c9dc5;
        puVar17 = (uint *)&DAT_ram_50109b8c;
        do {
          uVar7 = *puVar17;
          puVar17 = puVar17 + 1;
          uVar15 = ((uVar7 >> 0x10 & 0xff ^
                    (uVar7 >> 8 & 0xff ^ (uVar7 & 0xff ^ uVar15) * 0x1000193) * 0x1000193) *
                    0x1000193 ^ uVar7 >> 0x18) * 0x1000193;
        } while (puVar17 != (uint *)&DAT_ram_50109e88);
        if (_DAT_ram_50109e88 == uVar15) goto LAB_ram_4811fb68;
      }
    }
  }
  else if (_DAT_ram_50109b98 == _DAT_ram_50109b40) {
    pcVar18 = &DAT_ram_50109b6c;
    do {
      pcVar2 = pcVar18 + 0x3c;
      cVar3 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      if (*pcVar2 != cVar3) goto LAB_ram_4811f818;
    } while (pcVar18 != &DAT_ram_50109b8c);
    goto LAB_ram_4811f808;
  }
LAB_ram_4811f818:
  DAT_ram_4ff4d7fc = param_1;
  if (param_2 != (undefined4 *)0x0) {
    if (((uint)param_2 & 3) == 0) {
      puVar16 = param_2;
      puVar20 = &DAT_ram_4ff4d7dc;
      do {
        uVar12 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar20 = uVar12;
        puVar20 = puVar20 + 1;
      } while (puVar16 != param_2 + 8);
    }
    else {
      puVar16 = param_2;
      puVar20 = &DAT_ram_4ff4d7dc;
      do {
        puVar19 = (undefined4 *)((int)puVar20 + 1);
        *(undefined1 *)puVar20 = *(undefined1 *)puVar16;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
        puVar20 = puVar19;
      } while (puVar19 != &DAT_ram_4ff4d7fc);
    }
  }
  DAT_ram_4ff50e9c = 2;
  puVar17 = &DAT_ram_501092a4;
  bVar5 = false;
  iVar10 = 2;
  iVar21 = 0;
  iVar22 = DAT_ram_4ff50eb4;
  do {
    iVar11 = iVar10;
    iVar6 = DAT_ram_4ff50e9c;
    if (puVar17[0xc0] == 0x43414e31) {
      if (((*puVar17 - 1 < 2) && (puVar17[1] == 0x304)) &&
         ((puVar17[0x19] < 0xd && ((puVar17[0x1c] < 9 && (puVar17[0x20] == 1)))))) {
        uVar15 = 0x811c9dc5;
        puVar8 = puVar17;
        do {
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          uVar15 = ((uVar7 >> 0x10 & 0xff ^
                    (uVar7 >> 8 & 0xff ^ (uVar7 & 0xff ^ uVar15) * 0x1000193) * 0x1000193) *
                    0x1000193 ^ uVar7 >> 0x18) * 0x1000193;
        } while (puVar8 != puVar17 + 0xbf);
        if (puVar17[0xbf] == uVar15) {
          iVar11 = iVar21;
          iVar6 = iVar21;
          if ((iVar10 != 2) && ((int)(puVar17[2] - *(int *)(iVar10 * 0x304 + 0x501092ac)) < 1)) {
            iVar11 = iVar10;
            iVar6 = DAT_ram_4ff50e9c;
          }
          goto LAB_ram_4811f886;
        }
      }
LAB_ram_4811f9a0:
      iVar22 = iVar22 + 1;
      bVar5 = true;
    }
    else if (((puVar17[0xc0] != 0) || (*puVar17 != 0)) || (puVar17[1] != 0)) goto LAB_ram_4811f9a0;
LAB_ram_4811f886:
    DAT_ram_4ff50e9c = iVar6;
    puVar17 = puVar17 + 0xc1;
    bVar1 = iVar21 != 1;
    iVar10 = iVar11;
    iVar21 = 1;
  } while (bVar1);
  if (bVar5) {
    DAT_ram_4ff50eb4 = iVar22;
  }
  if (iVar11 == 0) {
    DAT_ram_4ff50ea0 = 1;
LAB_ram_4811f8a6:
    DAT_ram_4ff50ea4 = *(undefined4 *)(iVar11 * 0x304 + 0x501092ac);
  }
  else {
    DAT_ram_4ff50ea0 = 0;
    if (iVar11 != 2) goto LAB_ram_4811f8a6;
  }
  DAT_ram_4ff50e98 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    if (((uint)param_2 & 3) == 0) {
      puVar20 = param_2 + 8;
      puVar16 = (undefined4 *)&DAT_ram_4ff50ee4;
      do {
        uVar12 = *param_2;
        param_2 = param_2 + 1;
        *puVar16 = uVar12;
        puVar16 = puVar16 + 1;
      } while (param_2 != puVar20);
    }
    else {
      puVar16 = (undefined4 *)&DAT_ram_4ff50ee4;
      do {
        puVar20 = (undefined4 *)((int)puVar16 + 1);
        *(undefined1 *)puVar16 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar16 = puVar20;
      } while (puVar20 != &DAT_ram_4ff50f04);
    }
  }
  puVar16 = &DAT_ram_4ff4e670;
  do {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  } while (puVar16 != &DAT_ram_4ff4e978);
  puVar16 = &DAT_ram_4ff4e978;
  do {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  } while (puVar16 != &DAT_ram_4ff4ec80);
  puVar16 = &DAT_ram_4ff4fe28;
  do {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  } while (puVar16 != (undefined4 *)0x4ff50130);
  puVar16 = (undefined4 *)0x4ff50130;
  do {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  } while (puVar16 != (undefined4 *)0x4ff50438);
  DAT_ram_4ff50e94 = 1;
  fence();
  DAT_ram_4ff4d800 = 1;
LAB_ram_4811f952:
  FUN_ram_4ff3ec08(uVar9);
  return;
}



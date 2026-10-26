/* Firmware entry: 0x48058f6e */

byte FUN_ram_48058f6e(int param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  undefined4 uVar22;
  undefined4 local_360 [99];
  uint uStack_1d4;
  char local_1c8;
  char cStack_1c7;
  undefined4 uStack_40;
  char cStack_3c;
  undefined1 uStack_3b;
  char cStack_3a;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x3a3b) == '\0') {
    iVar17 = *(int *)(param_1 + 0x33e8);
    if (iVar17 != 0) {
      FUN_ram_4ff3ec14(iVar17 + 0xc,0xffffffff);
      sVar2 = *(short *)(iVar17 + 0x3bf8);
      FUN_ram_4ff3ee10(iVar17 + 0xc);
      if (sVar2 != 0) {
        return 0;
      }
    }
    pcVar6 = &DAT_ram_4ff47e48;
    do {
      cVar1 = *pcVar6;
      if (cVar1 == '\x02') {
        iVar11 = 0x1228;
        iVar17 = 1;
LAB_ram_48059020:
        pcVar7 = &local_1c8;
        iVar10 = iVar17 * 0x1228 + param_1;
        puVar9 = (undefined4 *)(iVar10 + 0x4ac0);
        do {
          uVar20 = puVar9[1];
          uVar19 = puVar9[2];
          uVar22 = puVar9[3];
          uVar16 = puVar9[4];
          uVar15 = puVar9[5];
          *(undefined4 *)pcVar7 = *puVar9;
          *(undefined4 *)(pcVar7 + 4) = uVar20;
          *(undefined4 *)(pcVar7 + 8) = uVar19;
          *(undefined4 *)(pcVar7 + 0xc) = uVar22;
          *(undefined4 *)(pcVar7 + 0x10) = uVar16;
          *(undefined4 *)(pcVar7 + 0x14) = uVar15;
          puVar9 = puVar9 + 6;
          pcVar7 = pcVar7 + 0x18;
        } while (puVar9 != (undefined4 *)(iVar10 + 0x4c58));
        iVar11 = iVar11 + 0x3a40 + param_1;
        iVar17 = param_1 + iVar17 * 0x1228;
        local_1c8 = *(char *)(iVar17 + 0x4ac0);
        cStack_3a = *(char *)(iVar17 + 0x4c4e);
        pcVar12 = (char *)(iVar11 + 0x38);
        pcVar7 = (char *)(iVar11 + 0xeb8);
        cStack_1c7 = *(char *)(iVar17 + 0x4ac1);
        cStack_3c = *(char *)(iVar17 + 0x4c4c);
        do {
          while( true ) {
            cVar8 = cStack_3c + '\x01';
            cVar4 = local_1c8;
            pcVar13 = (char *)(param_1 + 0x70b8);
            if (pcVar12[0xae] != '\0') break;
LAB_ram_480590b4:
            local_1c8 = cVar4;
            pcVar12 = pcVar12 + 0xe8;
            if (pcVar7 == pcVar12) goto joined_r0x480590e8;
          }
          cVar21 = cStack_1c7 + '\x01';
          cStack_3c = cVar8;
          if ((pcVar12[0xae] != '\x01') || (cVar4 = local_1c8 + '\x01', *pcVar12 == '\0'))
          goto LAB_ram_480590b4;
          pcVar12 = pcVar12 + 0xe8;
          cStack_1c7 = cVar21;
        } while (pcVar7 != pcVar12);
joined_r0x480590e8:
        for (; pcVar13 != (char *)(param_1 + 0x79b8); pcVar13 = pcVar13 + 0x120) {
          while ((*pcVar13 != cVar1 || (pcVar13[0x11e] != '\x01'))) {
            pcVar13 = pcVar13 + 0x120;
            if (pcVar13 == (char *)(param_1 + 0x79b8)) goto LAB_ram_48059116;
          }
          cStack_3a = cStack_3a + '\x01';
        }
LAB_ram_48059116:
        uStack_40 = *(undefined4 *)(iVar17 + 0x4c58);
        uStack_3b = *(undefined1 *)(iVar17 + 0x4c61);
        pcVar7 = &local_1c8;
        puVar9 = local_360;
        do {
          uVar15 = *(undefined4 *)pcVar7;
          uVar22 = *(undefined4 *)(pcVar7 + 4);
          uVar20 = *(undefined4 *)(pcVar7 + 8);
          uVar16 = *(undefined4 *)(pcVar7 + 0xc);
          uVar19 = *(undefined4 *)(pcVar7 + 0x10);
          puVar9[5] = *(undefined4 *)(pcVar7 + 0x14);
          *puVar9 = uVar15;
          puVar9[1] = uVar22;
          puVar9[2] = uVar20;
          puVar9[3] = uVar16;
          puVar9[4] = uVar19;
          pcVar7 = pcVar7 + 0x18;
          puVar9 = puVar9 + 6;
        } while (pcVar7 != &stack0xffffffd0);
        if ((uStack_1d4 & 0xffffff) != 0) {
          return 0;
        }
      }
      else {
        if (cVar1 == '\x04') {
          iVar11 = 0x2450;
          iVar17 = 2;
          goto LAB_ram_48059020;
        }
        if (cVar1 == '\x01') {
          iVar11 = 0;
          iVar17 = 0;
          goto LAB_ram_48059020;
        }
      }
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 != &DAT_ram_4ff47e4b);
    FUN_ram_4ff3ec14(param_1 + 0x33c0,0xffffffff);
    pcVar6 = (char *)(param_1 + 0x2968);
    bVar3 = false;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 0xf0;
      bVar3 = (bool)(bVar3 | cVar1 != '\0');
    } while (pcVar6 != (char *)(param_1 + 0x34a8));
    FUN_ram_4ff3ee10(param_1 + 0x33c0);
    if ((((!bVar3) && (*(char *)(param_1 + 0x3a4) == '\0')) && (*(char *)(param_1 + 0x3a5) == '\0'))
       && (*(char *)(param_1 + 0x3fc) == '\0')) {
      psVar14 = (short *)(param_1 + 0x9f8);
      do {
        if (*psVar14 != 0) {
          return 0;
        }
        if ((char)psVar14[1] != '\0') {
          if (*(char *)((int)psVar14 + 3) != '\0') {
            return 0;
          }
          if ((char)psVar14[2] != '\0') {
            return 0;
          }
        }
        psVar14 = psVar14 + 0x14;
      } while ((short *)(param_1 + 0xb38) != psVar14);
      iVar17 = param_1 + 0x2864;
      FUN_ram_4ff3ec14(iVar17,0xffffffff);
      piVar18 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar17);
      if ((piVar18 == (int *)0x0) ||
         ((iVar11 = (**(code **)(*piVar18 + 0x104))(piVar18), iVar11 == 0 &&
          (iVar11 = (**(code **)(*piVar18 + 0x10c))(piVar18), iVar11 == 0)))) {
        FUN_ram_4ff3ec14(iVar17,0xffffffff);
        if (param_1 + 0x1e20 != param_1 + 0x2820) {
          pcVar6 = (char *)(param_1 + 0x1e31);
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 0x14;
            if (cVar1 != '\0') {
              FUN_ram_4ff3ee10(iVar17);
              return 0;
            }
          } while ((char *)(param_1 + 0x2831) != pcVar6);
        }
        FUN_ram_4ff3ee10(iVar17);
        if (piVar18 != (int *)0x0) {
          bVar5 = (**(code **)(*piVar18 + 0x104))(piVar18);
          return bVar5 ^ 1;
        }
        return 1;
      }
    }
  }
  return 0;
}



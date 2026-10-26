/* Firmware entry: 0x480e4fac */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_480e4fac(int *param_1)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  code *pcVar12;
  short sVar13;
  undefined4 *puVar14;
  char cVar15;
  int *piVar16;
  uint uVar17;
  short *psVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  undefined4 local_168 [14];
  undefined4 local_130;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  char cStack_126;
  char cStack_125;
  char cStack_124;
  char cStack_123;
  undefined2 uStack_122;
  undefined4 local_120 [2];
  undefined1 uStack_118;
  byte bStack_117;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [68];
  undefined1 uStack_c8;
  undefined1 uStack_9e;
  undefined1 uStack_97;
  undefined1 uStack_7c;
  undefined1 uStack_6f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *param_1;
  psVar18 = *(short **)(iVar6 + 0x33ec);
  if ((psVar18 == (short *)0x0) || ((char)psVar18[8] == '\0')) {
    piVar16 = param_1 + 0x2d4;
    piVar4 = param_1 + 4;
    puVar10 = local_168;
    puVar14 = &DAT_ram_48222eb8;
    do {
      do {
        puVar11 = puVar10;
        uVar7 = puVar14[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        *puVar11 = *puVar14;
        puVar11[1] = uVar7;
        puVar11[2] = uVar8;
        puVar11[3] = uVar9;
        puVar14 = puVar14 + 4;
        puVar10 = puVar11 + 4;
      } while (puVar14 != &DAT_ram_48222ee8);
      puVar11[5] = DAT_ram_48222eec;
      puVar11[4] = DAT_ram_48222ee8;
      FUN_ram_4ff3ec14(piVar16,0xffffffff);
      if ((char)piVar4[0x3a] == '\x04') {
        FUN_ram_4ff45158(local_168,piVar4 + 0x2a,0x35);
        memset(auStack_10c,0,0xcc);
        bStack_117 = bStack_117 & 0xfc;
        uStack_12c = 8;
        uStack_7c = 8;
        uStack_116 = 1;
        uStack_9e = 1;
        local_130 = 0;
        uStack_12b = 0;
        uStack_12a = 0;
        uStack_129 = 0;
        uStack_128 = 0;
        uStack_127 = 0;
        cStack_126 = '\0';
        cStack_125 = '\0';
        cStack_124 = '\0';
        cStack_123 = '\0';
        uStack_122 = 0;
        local_120[0] = 0;
        local_120[1] = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_c8 = 0xff;
        uStack_97 = 0xff;
        uStack_6f = 0xff;
        FUN_ram_4ff45158(piVar4,&local_130,0xea);
        FUN_ram_4ff3ee10(piVar16);
        FUN_ram_480dc4f2(*param_1,local_168);
      }
      else {
        FUN_ram_4ff3ee10(piVar16);
      }
      piVar4 = piVar4 + 0x3c;
      puVar10 = local_168;
      puVar14 = &DAT_ram_48222eb8;
    } while (piVar16 != piVar4);
    iVar6 = *param_1;
    psVar18 = *(short **)(iVar6 + 0x33ec);
  }
  piVar16 = param_1 + 2;
  piVar4 = param_1 + 0x2d4;
  cVar15 = '\f';
  do {
    if (psVar18 != (short *)0x0) {
      sVar13 = *psVar18;
      if (sVar13 == 0) goto LAB_ram_480e50a2;
      if (*(code **)(psVar18 + 2) != (code *)0x0) {
        iVar5 = (**(code **)(psVar18 + 2))();
        iVar6 = *param_1;
        if (*(uint *)(psVar18 + 6) <= (uint)(iVar5 - *(int *)(psVar18 + 4))) {
          psVar18 = *(short **)(iVar6 + 0x33ec);
          break;
        }
        sVar13 = *psVar18;
      }
      *psVar18 = sVar13 + -1;
    }
    uVar17 = (uint)*(byte *)((int)param_1 + 0xb71);
    *(char *)((int)param_1 + 0xb71) = (char)((uVar17 + 1) % 0xc);
    if ((*(int *)((uVar17 + 0x1302) * 8 + iVar6 + 0xc) != 0) && (uVar17 < 0xc)) {
      FUN_ram_4ff3ec14(piVar4,0xffffffff);
      if ((byte)((char)param_1[uVar17 * 0x3c + 0x3e] - 1U) < 2) {
        iVar6 = piVar16[uVar17 * 0x3c + 0x22];
        iVar5 = piVar16[uVar17 * 0x3c + 0x1f];
        cVar1 = (char)piVar16[uVar17 * 0x3c + 0x1e];
        uVar21 = (uint)*(byte *)((int)piVar16 + uVar17 * 0xf0 + 0x7a);
        FUN_ram_4ff3ee10(piVar4);
        iVar20 = *param_1;
        FUN_ram_4ff3ec14(iVar20 + 0xb18,0xffffffff);
        puVar14 = (undefined4 *)(iVar20 + 0xb38);
        puVar10 = &local_130;
        do {
          uVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          *puVar10 = *puVar14;
          puVar10[1] = uVar7;
          puVar10[2] = uVar8;
          puVar10[3] = uVar9;
          puVar14 = puVar14 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar14 != (undefined4 *)(iVar20 + 0xbd8));
        *puVar10 = *puVar14;
        FUN_ram_4ff3ee10(iVar20 + 0xb18);
        if (((*(int *)((uVar17 + 0x1302) * 8 + *param_1 + 0xc) == iVar5) &&
            (fence(), *(char *)(*param_1 + 0x9789) == '\0')) && (cStack_126 != '\0')) {
          cVar3 = cStack_125;
          if ((cVar1 != '\x01') && (cVar3 = cStack_124, cVar1 != '\x02')) {
            cVar3 = cStack_123;
          }
          if ((cVar3 == '\0') || (iVar20 = FUN_ram_48045922(*param_1 + 0x1e08,cVar1,0), iVar20 == 0)
             ) goto LAB_ram_480e5410;
          pcVar12 = *(code **)(*param_1 + 0x987c);
          if (pcVar12 != (code *)0x0) {
            iVar20 = (*pcVar12)(*(undefined4 *)(*param_1 + 0x9880),uVar17,iVar5);
          }
        }
        else {
LAB_ram_480e5410:
          iVar20 = 0;
        }
        if (uVar21 < 0xc) {
          FUN_ram_4ff3ec14(piVar4,0xffffffff);
          if ((((byte)((char)param_1[uVar21 * 0x3c + 0x3e] - 1U) < 2) &&
              (param_1[uVar21 * 0x3c + 0x21] == iVar5)) && (iVar6 == param_1[uVar21 * 0x3c + 0x24]))
          {
            if (iVar20 == 0) {
              FUN_ram_48047a40(piVar16,piVar16 + uVar21 * 0x3c + 2,0xc,4);
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0x2da);
              puVar14 = (undefined4 *)param_1[0x2d6];
              *(undefined1 *)(param_1 + uVar21 * 0x3c + 0x3e) = 2;
              puVar10 = puVar14 + 0x297;
              *(ushort *)(param_1 + 0x2da) = uVar2 | (ushort)(1 << (uVar21 & 0x1f));
              *(undefined1 *)((int)param_1 + uVar21 * 0xf0 + 0x9e) = 1;
              FUN_ram_4ff3ec14(puVar10,0xffffffff);
              piVar19 = (int *)*puVar14;
              FUN_ram_4ff3ee10(puVar10);
              if (piVar19 != (int *)0x0) {
                (**(code **)(*piVar19 + 0xa8))(piVar19,piVar16 + uVar21 * 0x3c + 0x1e);
              }
            }
          }
          goto LAB_ram_480e51b6;
        }
      }
      else {
LAB_ram_480e51b6:
        FUN_ram_4ff3ee10(piVar4);
      }
      iVar6 = *param_1;
    }
    cVar15 = cVar15 + -1;
    psVar18 = *(short **)(iVar6 + 0x33ec);
  } while (cVar15 != '\0');
  if (psVar18 != (short *)0x0) {
LAB_ram_480e50a2:
    if ((char)psVar18[8] != '\0') {
      return;
    }
  }
  piVar16 = param_1 + 0x2d4;
  piVar4 = param_1 + 4;
  puVar10 = local_168;
  puVar14 = &DAT_ram_48222eb8;
  do {
    do {
      puVar11 = puVar10;
      uVar7 = puVar14[1];
      uVar8 = puVar14[2];
      uVar9 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar7;
      puVar11[2] = uVar8;
      puVar11[3] = uVar9;
      puVar14 = puVar14 + 4;
      puVar10 = puVar11 + 4;
    } while (puVar14 != &DAT_ram_48222ee8);
    puVar11[5] = DAT_ram_48222eec;
    puVar11[4] = DAT_ram_48222ee8;
    FUN_ram_4ff3ec14(piVar16,0xffffffff);
    if ((char)piVar4[0x3a] == '\x04') {
      FUN_ram_4ff45158(local_168,piVar4 + 0x2a,0x35);
      memset(auStack_10c,0,0xcc);
      bStack_117 = bStack_117 & 0xfc;
      uStack_12c = 8;
      uStack_7c = 8;
      uStack_116 = 1;
      uStack_9e = 1;
      local_130 = 0;
      uStack_12b = 0;
      uStack_12a = 0;
      uStack_129 = 0;
      uStack_128 = 0;
      uStack_127 = 0;
      cStack_126 = '\0';
      cStack_125 = '\0';
      cStack_124 = '\0';
      cStack_123 = '\0';
      uStack_122 = 0;
      local_120[0] = 0;
      local_120[1] = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_c8 = 0xff;
      uStack_97 = 0xff;
      uStack_6f = 0xff;
      FUN_ram_4ff45158(piVar4,&local_130,0xea);
      FUN_ram_4ff3ee10(piVar16);
      FUN_ram_480dc4f2(*param_1,local_168);
    }
    else {
      FUN_ram_4ff3ee10(piVar16);
    }
    piVar4 = piVar4 + 0x3c;
    puVar10 = local_168;
    puVar14 = &DAT_ram_48222eb8;
  } while (piVar16 != piVar4);
  return;
}



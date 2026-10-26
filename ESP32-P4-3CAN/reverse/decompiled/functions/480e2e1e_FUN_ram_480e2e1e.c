/* Firmware entry: 0x480e2e1e */

void FUN_ram_480e2e1e(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  int *piVar6;
  short *psVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  short sVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 local_68 [14];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar5 = (byte *)(param_1 + 0x9d8);
  do {
    if ((pbVar5[0x10] == param_2) && (pbVar5[0x22] != 0)) {
      pbVar5[0x26] = 4;
      pbVar5[0x22] = 0;
      pbVar5[0x23] = 0;
      pbVar5[0x25] = 2;
      if ((*pbVar5 < 8) && (*(int *)(pbVar5 + 8) != 0 || *(int *)(pbVar5 + 0xc) != 0)) {
        iVar16 = (uint)*pbVar5 * 0x120;
        iVar13 = param_1 + iVar16;
        if ((((*(char *)(iVar13 + 0x70d6) != '\0') &&
             (*(int *)(iVar13 + 0x70c8) == *(int *)(pbVar5 + 8))) &&
            (*(int *)(iVar13 + 0x70cc) == *(int *)(pbVar5 + 0xc))) &&
           (*(char *)(iVar13 + 0x70d8) == '\0')) {
          *(undefined1 *)(iVar13 + 0x70d7) = 0;
          iVar13 = iVar16 + 0x3678 + param_1 + 0x3a40;
          *(undefined2 *)(param_1 + iVar16 + 0x70d8) = 0x201;
          if ((*(int *)(iVar13 + 0x30) != 0 || *(int *)(iVar13 + 0x34) != 0) &&
             (uVar11 = (uint)*(byte *)(iVar13 + 0x29), uVar11 != 0xff)) {
            cVar1 = *(char *)(iVar13 + 0x28);
            iVar16 = 2;
            if (cVar1 == '\x02') {
              iVar16 = 1;
            }
            else if ((cVar1 != '\x04') && (iVar16 = 0, cVar1 != '\x01')) goto LAB_ram_480e2e46;
            if (uVar11 < 0x18) {
              if (uVar11 < 0x10) {
                iVar16 = uVar11 * 0xe8 + iVar16 * 0x1228;
              }
              else {
                iVar16 = (uVar11 - 0x10) * 0x120;
                iVar19 = param_1 + iVar16;
                if ((*(char *)(iVar19 + 0x70d6) == '\0') || (*(char *)(iVar19 + 0x70b8) != cVar1))
                goto LAB_ram_480e2e46;
                iVar16 = iVar16 + 14000;
              }
              iVar16 = iVar16 + param_1 + 0x3a40;
              if (((*(int *)(iVar16 + 0xd8) == *(int *)(iVar13 + 0x30)) &&
                  (*(int *)(iVar16 + 0xdc) == *(int *)(iVar13 + 0x34))) &&
                 (*(char *)(iVar16 + 0xe6) == '\x01')) {
                FUN_ram_4804691a();
              }
            }
          }
        }
      }
    }
LAB_ram_480e2e46:
    pbVar5 = pbVar5 + 0x28;
  } while (pbVar5 != (byte *)(param_1 + 0xb18));
  iVar13 = 2;
  if (param_2 == 2) {
    iVar16 = *(int *)(param_1 + 0x5e80);
    if (iVar16 == 0) {
      FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
      piVar6 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(param_1 + 0x2864);
      if (piVar6 != (int *)0x0) goto LAB_ram_480e2fa2;
      iVar16 = 1;
      iVar13 = 1;
    }
    else {
      iVar13 = 1;
    }
  }
  else if (param_2 == 4) {
    iVar16 = *(int *)(param_1 + 0x70a8);
    if (iVar16 == 0) {
      FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
      piVar6 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(param_1 + 0x2864);
      if (piVar6 != (int *)0x0) goto LAB_ram_480e2fa2;
      iVar16 = 1;
      iVar13 = 2;
    }
  }
  else if (param_2 == 1) {
    iVar16 = *(int *)(param_1 + 0x4c58);
    if (iVar16 == 0) {
      FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
      piVar6 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(param_1 + 0x2864);
      if (piVar6 != (int *)0x0) goto LAB_ram_480e2fa2;
      iVar13 = 0;
      iVar16 = 1;
    }
    else {
      iVar13 = 0;
    }
  }
  else {
    FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
    piVar6 = *(int **)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(param_1 + 0x2864);
    if (piVar6 == (int *)0x0) goto LAB_ram_480e2fce;
LAB_ram_480e2fa2:
    iVar16 = (**(code **)(*piVar6 + 0x154))(piVar6,param_2);
    if (iVar16 == 0) {
      iVar16 = 1;
    }
    if (param_2 == 2) {
      iVar13 = 1;
    }
    else if (param_2 == 4) {
      iVar13 = 2;
    }
    else {
      if (param_2 != 1) goto LAB_ram_480e2fce;
      iVar13 = 0;
    }
  }
  iVar20 = param_1 + 0x5ef0;
  pbVar5 = (byte *)(param_1 + 0x5eb8);
  iVar19 = param_1 + iVar13 * 0x1228;
  iVar21 = 0;
  bVar4 = 0;
LAB_ram_480e30c6:
  if (param_2 == 2) goto LAB_ram_480e3330;
LAB_ram_480e30ce:
  do {
    if (param_2 == 4) {
      iVar18 = 2;
LAB_ram_480e32f4:
      if (bVar4 < 0x10) goto LAB_ram_480e3338;
      do {
        if (((pbVar5[0x1e] != 0) && (*pbVar5 == param_2)) && (*(char *)(iVar20 + 0xe6) == '\x01'))
        goto LAB_ram_480e335e;
        while( true ) {
          bVar4 = bVar4 + 1;
          iVar20 = iVar20 + 0x120;
          iVar21 = iVar21 + 0xe8;
          pbVar5 = pbVar5 + 0x120;
          if (bVar4 == 0x18) goto LAB_ram_480e30f2;
          if (param_2 != 2) goto LAB_ram_480e30ce;
LAB_ram_480e3330:
          iVar18 = 1;
          if (0xf < bVar4) break;
LAB_ram_480e3338:
          if (*(char *)(iVar18 * 0x1228 + param_1 + 0x3a40 + iVar21 + 0xe6) != '\x01') {
            bVar4 = bVar4 + 1;
            iVar20 = iVar20 + 0x120;
            iVar21 = iVar21 + 0xe8;
            pbVar5 = pbVar5 + 0x120;
            goto LAB_ram_480e30c6;
          }
LAB_ram_480e335e:
          iVar18 = FUN_ram_4804691a(param_1 + 0x3a40,param_2,bVar4,5,10,0);
          if ((iVar18 != 0) && (iVar18 = *(int *)(iVar19 + 0x4c30), iVar18 != -1)) {
            *(int *)(iVar19 + 0x4c30) = iVar18 + 1;
          }
        }
      } while( true );
    }
    bVar10 = bVar4 + 1;
    if (param_2 == 1) {
      iVar18 = 0;
      goto LAB_ram_480e32f4;
    }
    iVar20 = iVar20 + 0x120;
    iVar21 = iVar21 + 0xe8;
    pbVar5 = pbVar5 + 0x120;
    bVar4 = bVar10;
  } while (bVar10 != 0x18);
LAB_ram_480e30f2:
  *(int *)(param_1 + iVar13 * 0x1228 + 0x4c58) = iVar16;
LAB_ram_480e2fce:
  puVar2 = local_68;
  puVar3 = &DAT_ram_48222eb8;
  do {
    puVar17 = puVar3;
    puVar14 = puVar2;
    uVar8 = puVar17[1];
    uVar9 = puVar17[2];
    uVar12 = puVar17[3];
    *puVar14 = *puVar17;
    puVar14[1] = uVar8;
    puVar14[2] = uVar9;
    puVar14[3] = uVar12;
    puVar2 = puVar14 + 4;
    puVar3 = puVar17 + 4;
  } while (puVar17 + 4 != &DAT_ram_48222ee8);
  uVar8 = puVar17[5];
  puVar14[4] = DAT_ram_48222ee8;
  puVar14[5] = uVar8;
  do {
    psVar7 = *(short **)(param_1 + 0x33ec);
    if (psVar7 != (short *)0x0) {
      sVar15 = *psVar7;
      if (sVar15 == 0) goto LAB_ram_480e3046;
      if (*(code **)(psVar7 + 2) != (code *)0x0) {
        iVar13 = (**(code **)(psVar7 + 2))();
        if (*(uint *)(psVar7 + 6) <= (uint)(iVar13 - *(int *)(psVar7 + 4))) {
LAB_ram_480e3046:
          FUN_ram_480df3bc(param_1 + 0x84a8,param_2);
          FUN_ram_480dd734(param_1 + 0x7cd0,param_2);
          if ((param_2 - 1 & 0xff) < 2) {
            iVar13 = *(int *)(param_1 + 0x92b0) + 1;
            if (iVar13 == 0) {
              *(undefined4 *)(param_1 + 0x92b0) = 1;
              cVar1 = *(char *)(param_1 + 0x9301);
              *(undefined1 *)(param_1 + 0x9300) = 0;
              *(undefined2 *)(param_1 + 0x92ec) = 0;
              *(undefined2 *)(param_1 + 0x92e6) = 0;
            }
            else {
              *(int *)(param_1 + 0x92b0) = iVar13;
              cVar1 = *(char *)(param_1 + 0x9301);
              *(undefined1 *)(param_1 + 0x9300) = 0;
              *(undefined2 *)(param_1 + 0x92ec) = 0;
              *(undefined2 *)(param_1 + 0x92e6) = 0;
            }
            if (cVar1 == '\0') {
              *(undefined1 *)(param_1 + 0x929c) = 0;
              *(undefined1 *)(param_1 + 0x929e) = 0;
              *(undefined1 *)(param_1 + 0x929f) = 0;
              *(undefined1 *)(param_1 + 0x92a0) = 0;
              *(undefined1 *)(param_1 + 0x92a1) = 0;
              *(undefined1 *)(param_1 + 0x92a4) = 0;
              *(undefined1 *)(param_1 + 0x92a5) = 0;
              *(undefined1 *)(param_1 + 0x92a6) = 0;
              *(undefined1 *)(param_1 + 0x92a7) = 0;
              *(undefined1 *)(param_1 + 0x92a8) = 0;
              *(undefined1 *)(param_1 + 0x92a9) = 0;
              *(undefined1 *)(param_1 + 0x92aa) = 0;
              *(undefined1 *)(param_1 + 0x92ab) = 0;
              *(undefined1 *)(param_1 + 0x92ac) = 0;
              *(undefined1 *)(param_1 + 0x92ad) = 0;
            }
            *(undefined1 *)(param_1 + 0x9306) = 0;
            *(undefined1 *)(param_1 + 0x9305) = 0;
            *(undefined1 *)(param_1 + 0x9309) = 0;
            *(undefined1 *)(param_1 + 0x930a) = 0;
            *(undefined2 *)(param_1 + 0x92f8) = 0;
            *(undefined1 *)(param_1 + 0x92f5) = 0;
            *(undefined2 *)(param_1 + 0x92ee) = 0;
            *(undefined4 *)(param_1 + 0x92f0) = 0;
            *(undefined2 *)(param_1 + 0x93d6) = 0;
            *(undefined1 *)(param_1 + 0x93b9) = 0;
            *(undefined1 *)(param_1 + 0x93dd) = 0;
            *(undefined1 *)(param_1 + 0x93d5) = 0;
            *(undefined4 *)(param_1 + 0x92fc) = 0x1000000;
            *(undefined1 *)(param_1 + 0x92f6) = 1;
          }
          return;
        }
        sVar15 = *psVar7;
      }
      *psVar7 = sVar15 + -1;
    }
    iVar13 = FUN_ram_4804628e(param_1 + 0x3a40,param_2,local_68);
    if (iVar13 == 0) goto LAB_ram_480e3046;
    FUN_ram_480dc4f2(param_1,local_68);
  } while( true );
}



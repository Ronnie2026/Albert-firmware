/* Firmware entry: 0x48088676 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_48088676(byte *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  ulong uVar4;
  char *******pppppppcVar5;
  char *pcVar6;
  uint *puVar7;
  undefined1 *puVar8;
  byte bVar9;
  char *pcVar10;
  char ******ppppppcVar11;
  byte bVar12;
  undefined2 uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  char **__endptr;
  uint uVar17;
  int iVar18;
  char **ppcVar19;
  int iVar20;
  char **ppcVar21;
  char *******pppppppcStack_138;
  int iStack_118;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char *pcStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 auStack_e0 [4];
  uint auStack_d0 [4];
  char *******apppppppcStack_c0 [2];
  int iStack_b8;
  byte bStack_b1;
  char *local_b0 [11];
  undefined *puStack_84;
  undefined *puStack_80;
  undefined *puStack_7c;
  uint local_78 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *******local_5c;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  pbVar14 = param_1 + 0xe;
  do {
    pbVar14[-10] = 1;
    pbVar14[-0xffffffff00000006] = 0;
    pbVar14[-0xffffffff00000005] = 0;
    pbVar14[-0xffffffff00000004] = 0;
    pbVar14[-0xffffffff00000003] = 0;
    pbVar14[-0xffffffff00000002] = 0;
    pbVar14[-0xffffffff00000001] = 0;
    pvVar2 = memset(pbVar14,0,0x20);
    *(undefined1 *)((int)pvVar2 + 0x20) = 0;
    *(undefined4 *)((int)pvVar2 + 0x22) = 100;
    *(undefined1 *)((int)pvVar2 + 0x26) = 0;
    *(undefined1 *)((int)pvVar2 + 0x3a) = 0;
    *(undefined4 *)((int)pvVar2 + 0x3e) = 0;
    *(undefined1 *)((int)pvVar2 + 0x42) = 0xff;
    *(undefined1 *)((int)pvVar2 + 0x27) = 0;
    *(undefined1 *)((int)pvVar2 + 0x28) = 0;
    *(undefined1 *)((int)pvVar2 + 0x29) = 0;
    *(undefined1 *)((int)pvVar2 + 0x2a) = 0;
    *(undefined1 *)((int)pvVar2 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar2 + 0x2c) = 0;
    *(undefined1 *)((int)pvVar2 + 0x2d) = 0;
    *(undefined1 *)((int)pvVar2 + 0x2e) = 0xff;
    *(undefined1 *)((int)pvVar2 + 0x2f) = 0;
    *(undefined1 *)((int)pvVar2 + 0x30) = 0;
    *(undefined1 *)((int)pvVar2 + 0x31) = 0;
    *(undefined1 *)((int)pvVar2 + 0x32) = 0;
    *(undefined1 *)((int)pvVar2 + 0x33) = 0;
    *(undefined1 *)((int)pvVar2 + 0x34) = 0x1d;
    *(undefined1 *)((int)pvVar2 + 0x35) = 0xff;
    *(undefined1 *)((int)pvVar2 + 0x36) = 0;
    *(undefined1 *)((int)pvVar2 + 0x37) = 0;
    *(undefined1 *)((int)pvVar2 + 0x38) = 0;
    *(undefined1 *)((int)pvVar2 + 0x39) = 0;
    pbVar14 = (byte *)((int)pvVar2 + 0x50);
  } while (param_1 + 0x14e != pbVar14);
  *param_2 = 0;
  uStack_108 = 0;
  FUN_ram_4802a8a8(&local_5c,"ruleCount");
  iStack_118 = FUN_ram_48088252(&local_5c,4,&uStack_108,10,0,0);
  uVar17 = uStack_108;
  if ((iStack_118 == 0) || (uStack_108 == 0)) {
    FUN_ram_4802a59e(&local_5c);
    *param_2 = 1;
LAB_ram_4808892a:
    iStack_118 = 0;
  }
  else {
    FUN_ram_4802a59e(&local_5c);
    *param_1 = (byte)uVar17;
    if ((uVar17 & 0xff) != 0) {
      pbVar14 = param_1 + 0x26;
      bVar9 = 0;
LAB_ram_48088798:
      FUN_ram_4802a928(auStack_f0,bVar9,10);
      FUN_ram_4802a8a8(local_78,"id");
      uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
      iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
      iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
      if (*(int *)(iVar18 + 0x1cc4) == 0) {
LAB_ram_48088954:
        FUN_ram_4802a59e(local_78);
        *param_2 = 3;
        goto LAB_ram_48088962;
      }
      puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
      uVar17 = 0;
      while( true ) {
        uVar17 = uVar17 + 1;
        iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
        if (iVar15 != 0) break;
        puVar1 = puVar1 + 2;
        if (*(uint *)(iVar18 + 0x1cc4) <= uVar17) goto LAB_ram_48088954;
      }
      FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
      if (-1 < (int)uStack_50) {
        if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
        goto LAB_ram_4808881c;
LAB_ram_4808894e:
        FUN_ram_4802a59e(&local_5c);
        goto LAB_ram_48088954;
      }
      if ((uStack_50 & 0x7f000000) == 0) goto LAB_ram_4808894e;
      pppppppcVar5 = (char *******)&local_5c;
LAB_ram_4808881c:
      __endptr = local_b0 + 7;
      local_b0[7] = (char *)0x0;
      uVar4 = strtoul((char *)pppppppcVar5,__endptr,0x10);
      if (((local_b0[7] == (char *)0x0) || (*local_b0[7] != '\0')) || (0x7ff < uVar4))
      goto LAB_ram_4808894e;
      FUN_ram_4802a59e(&local_5c);
      FUN_ram_4802a59e(local_78);
      *(ulong *)(pbVar14 + -0x1e) = uVar4;
      FUN_ram_4802a8a8(local_78,"buses");
      uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
      iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
      iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
      if (*(int *)(iVar18 + 0x1cc4) != 0) {
        puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
        uVar17 = 0;
        while( true ) {
          uVar17 = uVar17 + 1;
          iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
          if (iVar15 != 0) break;
          puVar1 = puVar1 + 2;
          if (*(uint *)(iVar18 + 0x1cc4) <= uVar17) goto LAB_ram_48088906;
        }
        FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
        if (-1 < (int)uStack_50) {
          if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
          goto LAB_ram_480888d2;
LAB_ram_48088e32:
          FUN_ram_4802a59e(&local_5c);
          goto LAB_ram_48088906;
        }
        if ((uStack_50 & 0x7f000000) == 0) goto LAB_ram_48088e32;
        pppppppcVar5 = (char *******)&local_5c;
LAB_ram_480888d2:
        local_b0[7] = (char *)0x0;
        uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
        if (((local_b0[7] == (char *)0x0) || (*local_b0[7] != '\0')) || (7 < uVar4))
        goto LAB_ram_48088e32;
        FUN_ram_4802a59e(&local_5c);
        if (uVar4 == 0) goto LAB_ram_48088906;
        FUN_ram_4802a59e(local_78);
        pbVar14[-0x1a] = (byte)uVar4;
        FUN_ram_4802a8a8(local_78,&DAT_ram_481caf98);
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
LAB_ram_48088a1a:
                  local_b0[7] = (char *)0x0;
                  uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                  if (((local_b0[7] != (char *)0x0) && (*local_b0[7] == '\0')) && (uVar4 < 9)) {
                    FUN_ram_4802a59e(&local_5c);
                    FUN_ram_4802a59e(local_78);
                    bVar12 = (byte)uVar4;
                    goto LAB_ram_48088a4e;
                  }
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              goto LAB_ram_48088a1a;
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              goto LAB_ram_48088f30;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        bVar12 = 0;
LAB_ram_48088a4e:
        pbVar14[-0x19] = bVar12;
        FUN_ram_4802a8a8(local_78,"mode");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) == 0) goto LAB_ram_48088d24;
                pppppppcVar5 = (char *******)&local_5c;
              }
              else if ((local_5c == (char *******)0x0) || (pppppppcVar5 = local_5c, iStack_54 == 0))
              goto LAB_ram_48088d24;
              local_b0[7] = (char *)0x0;
              uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
              if (((local_b0[7] == (char *)0x0) || (*local_b0[7] != '\0')) || (2 < uVar4))
              goto LAB_ram_48088d24;
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              bVar12 = (byte)uVar4;
              goto LAB_ram_48088b04;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        bVar12 = 0;
LAB_ram_48088b04:
        pbVar14[8] = bVar12;
        FUN_ram_4802a8a8(local_78,"period");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
                  goto LAB_ram_48088b7e;
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              {
LAB_ram_48088b7e:
                local_b0[7] = (char *)0x0;
                uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                if ((local_b0[7] != (char *)0x0) && ((*local_b0[7] == '\0' && (uVar4 < 0xea61)))) {
                  FUN_ram_4802a59e(&local_5c);
                  FUN_ram_4802a59e(local_78);
                  uVar13 = (undefined2)uVar4;
                  goto LAB_ram_48088bb8;
                }
              }
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              *param_2 = 6;
              goto LAB_ram_48088962;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        uVar13 = 100;
LAB_ram_48088bb8:
        *(undefined2 *)(pbVar14 + 10) = uVar13;
        FUN_ram_4802a8a8(local_78,"timeout");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
                  goto LAB_ram_48088c2e;
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              {
LAB_ram_48088c2e:
                local_b0[7] = (char *)0x0;
                uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                if ((local_b0[7] != (char *)0x0) && ((*local_b0[7] == '\0' && (uVar4 < 0x1389)))) {
                  FUN_ram_4802a59e(&local_5c);
                  FUN_ram_4802a59e(local_78);
                  uVar13 = (undefined2)uVar4;
                  goto LAB_ram_48088d68;
                }
              }
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              *param_2 = 7;
              goto LAB_ram_48088962;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        uVar13 = 0;
LAB_ram_48088d68:
        *(undefined2 *)(pbVar14 + 0xc) = uVar13;
        FUN_ram_4802a8a8(local_78,"delayUs");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
                  goto LAB_ram_48088ddc;
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              {
LAB_ram_48088ddc:
                local_b0[7] = (char *)0x0;
                uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                if ((local_b0[7] != (char *)0x0) && ((*local_b0[7] == '\0' && (uVar4 < 0x4c4b41))))
                {
                  FUN_ram_4802a59e(&local_5c);
                  FUN_ram_4802a59e(local_78);
                  goto LAB_ram_48088e42;
                }
              }
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              *param_2 = 0x18;
              goto LAB_ram_48088962;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        uVar4 = 0;
LAB_ram_48088e42:
        *(ulong *)(pbVar14 + 0x26) = uVar4;
        FUN_ram_4802a8a8(local_78,"priority");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
                  goto LAB_ram_48088eb8;
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              {
LAB_ram_48088eb8:
                local_b0[7] = (char *)0x0;
                uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                if ((local_b0[7] != (char *)0x0) && ((*local_b0[7] == '\0' && (uVar4 < 0x100)))) {
                  FUN_ram_4802a59e(&local_5c);
                  if (uVar4 != 0xff) {
                    if (uVar4 - 1 < 3) {
                      FUN_ram_4802a59e(local_78);
                      bVar12 = (byte)uVar4;
                      goto LAB_ram_48088c8e;
                    }
                    FUN_ram_4802a59e(local_78);
                    *param_2 = 0x19;
                    goto LAB_ram_48088962;
                  }
                  break;
                }
              }
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              *param_2 = 0x19;
              goto LAB_ram_48088962;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        bVar12 = 0xff;
LAB_ram_48088c8e:
        pbVar14[0x2a] = bVar12;
        FUN_ram_4802a8a8(local_78,"takeover");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) == 0) goto LAB_ram_48088d24;
                pppppppcVar5 = (char *******)&local_5c;
              }
              else if ((local_5c == (char *******)0x0) || (pppppppcVar5 = local_5c, iStack_54 == 0))
              goto LAB_ram_48088d24;
              local_b0[7] = (char *)0x0;
              uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
              if ((local_b0[7] == (char *)0x0) || ((*local_b0[7] != '\0' || (1 < uVar4))))
              goto LAB_ram_48088d24;
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              bVar12 = (byte)uVar4 & 1;
              goto LAB_ram_48088f4a;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        bVar12 = 0;
LAB_ram_48088f4a:
        pbVar14[0x22] = bVar12;
        iVar15 = DAT_ram_4ff6ded8;
        FUN_ram_4802a8a8(__endptr,"strict");
        uVar3 = FUN_ram_4802afda(__endptr,auStack_f0);
        iVar18 = *(int *)(iVar15 + 0x4c);
        iVar15 = *(int *)(iVar15 + 0x40) * 0x1d40;
        iVar20 = iVar18 + iVar15;
        if (*(int *)(iVar20 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(iVar18 + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar18 = FUN_ram_4802b18e(uVar3,*puVar1);
            iVar15 = DAT_ram_4ff6ded8;
            if (iVar18 != 0) {
              FUN_ram_4802a8a8(local_78,"strict");
              uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
              FUN_ram_4806562c(&local_5c,iVar15,uVar3);
              bVar12 = FUN_ram_4802b18e(&local_5c,"1");
              pbVar14[0xe] = bVar12;
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              goto LAB_ram_48088fe8;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar20 + 0x1cc4));
        }
        pbVar14[0xe] = 0;
LAB_ram_48088fe8:
        FUN_ram_4802a59e(__endptr);
        FUN_ram_4802a8a8(local_b0,"matchMask");
        uVar3 = FUN_ram_4802afda(local_b0,auStack_f0);
        iVar15 = FUN_ram_48088408(uVar3,pbVar14 + -0x18);
        if (iVar15 == 0) {
LAB_ram_480897d2:
          FUN_ram_4802a59e(local_b0);
LAB_ram_48088f30:
          *param_2 = 4;
          goto LAB_ram_48088962;
        }
        FUN_ram_4802a8a8(__endptr,"matchValue");
        uVar3 = FUN_ram_4802afda(__endptr,auStack_f0);
        iVar15 = FUN_ram_48088408(uVar3,pbVar14 + -0x10);
        if (iVar15 == 0) {
          FUN_ram_4802a59e(__endptr);
          goto LAB_ram_480897d2;
        }
        FUN_ram_4802a8a8(local_78,"editMask");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = FUN_ram_48088408(uVar3,pbVar14 + -8);
        if (iVar15 == 0) {
          FUN_ram_4802a59e(local_78);
          FUN_ram_4802a59e(__endptr);
          FUN_ram_4802a59e(local_b0);
          goto LAB_ram_48088f30;
        }
        FUN_ram_4802a8a8(&local_5c,"editValue");
        uVar3 = FUN_ram_4802afda(&local_5c,auStack_f0);
        iVar15 = FUN_ram_48088408(uVar3,pbVar14);
        FUN_ram_4802a59e(&local_5c);
        FUN_ram_4802a59e(local_78);
        FUN_ram_4802a59e(__endptr);
        FUN_ram_4802a59e(local_b0);
        if (iVar15 == 0) goto LAB_ram_48088f30;
        FUN_ram_4802a8a8(local_78,"counterMode");
        uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
        if (*(int *)(iVar18 + 0x1cc4) != 0) {
          puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
          uVar17 = 0;
          do {
            uVar17 = uVar17 + 1;
            iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
            if (iVar15 != 0) {
              FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
              if ((int)uStack_50 < 0) {
                if ((uStack_50 & 0x7f000000) != 0) {
                  pppppppcVar5 = (char *******)&local_5c;
                  goto LAB_ram_48089104;
                }
              }
              else if ((local_5c != (char *******)0x0) && (pppppppcVar5 = local_5c, iStack_54 != 0))
              {
LAB_ram_48089104:
                local_b0[7] = (char *)0x0;
                uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
                if ((local_b0[7] != (char *)0x0) && ((*local_b0[7] == '\0' && (uVar4 < 3)))) {
                  FUN_ram_4802a59e(&local_5c);
                  FUN_ram_4802a59e(local_78);
                  pbVar14[0xf] = (byte)uVar4;
                  if (uVar4 == 0) goto LAB_ram_480893e4;
                  local_b0[7] = PTR_s_counterByte_ram_481cc4e0_ram_48223a44;
                  local_b0[9] = PTR_s_counterWidth_ram_481cc4f8_ram_48223a4c;
                  local_b0[10] = PTR_s_counterStep_ram_481cc508_ram_48223a50;
                  puStack_84 = PTR_s_counterInitial_ram_481cc514_ram_48223a54;
                  puStack_80 = PTR_s_counterMin_ram_481cc524_ram_48223a58;
                  puStack_7c = PTR_s_counterMax_ram_481cc530_ram_48223a5c;
                  local_78[0] = DAT_ram_48223a60;
                  local_78[1] = DAT_ram_48223a64;
                  local_78[2] = DAT_ram_48223a68;
                  local_78[3] = DAT_ram_48223a6c;
                  local_b0[0] = (char *)0x0;
                  local_b0[1] = (char *)0x0;
                  local_b0[2] = (char *)0x0;
                  local_b0[3] = (char *)0x0;
                  local_b0[4] = (char *)0x0;
                  local_b0[5] = (char *)0x0;
                  local_b0[6] = (char *)0x0;
                  local_b0[8] = PTR_s_counterBit_ram_481cc4ec_ram_48223a48;
                  uStack_68 = DAT_ram_48223a70;
                  pppppppcStack_138 = (char *******)&local_5c;
                  uStack_64 = DAT_ram_48223a74;
                  uStack_60 = DAT_ram_48223a78;
                  local_5c = DAT_ram_48223a7c;
                  uStack_58 = DAT_ram_48223a80;
                  iStack_54 = DAT_ram_48223a84;
                  uStack_50 = DAT_ram_48223a88;
                  uStack_4c = DAT_ram_48223a8c;
                  uStack_48 = DAT_ram_48223a90;
                  uStack_44 = DAT_ram_48223a94;
                  puVar7 = local_78;
                  ppcVar19 = local_b0;
                  ppcVar21 = __endptr;
                  goto LAB_ram_480891f2;
                }
              }
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              *param_2 = 8;
              goto LAB_ram_48088962;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
        }
        FUN_ram_4802a59e(local_78);
        pbVar14[0xf] = 0;
        goto LAB_ram_480893e4;
      }
LAB_ram_48088906:
      FUN_ram_4802a59e(local_78);
      *param_2 = 2;
      FUN_ram_4802a59e(auStack_f0);
      goto LAB_ram_4808892a;
    }
  }
  return iStack_118;
LAB_ram_48088d24:
  FUN_ram_4802a59e(&local_5c);
  FUN_ram_4802a59e(local_78);
  *param_2 = 0x10;
  goto LAB_ram_48088962;
  while( true ) {
    uVar17 = uVar17 + 1;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar15 + 0x1cc4) <= uVar17) break;
LAB_ram_48089788:
    iVar16 = FUN_ram_4802b18e(uVar3,*puVar1);
    if (iVar16 != 0) {
      FUN_ram_4802a8a8(apppppppcStack_c0,
                       *(undefined4 *)((iVar20 * 0x3a8 + uVar17) * 8 + iVar18 + 0xcc8));
      goto joined_r0x480897ba;
    }
  }
LAB_ram_480898e6:
  FUN_ram_4802a8a8(apppppppcStack_c0,&DAT_ram_481df390);
joined_r0x480897ba:
  if ((char)bStack_b1 < '\0') {
    pppppppcVar5 = (char *******)apppppppcStack_c0;
    if ((bStack_b1 & 0x7f) != 0) goto LAB_ram_480892b2;
  }
  else if ((apppppppcStack_c0[0] != (char *******)0x0) &&
          (pppppppcVar5 = apppppppcStack_c0[0], iStack_b8 != 0)) {
LAB_ram_480892b2:
    pcStack_f4 = (char *)0x0;
    pcVar6 = (char *)strtoul((char *)pppppppcVar5,&pcStack_f4,10);
    if ((pcStack_f4 != (char *)0x0) && ((*pcStack_f4 == '\0' && (pcVar6 <= pcVar10)))) {
      *ppcVar19 = pcVar6;
      FUN_ram_4802a59e(apppppppcStack_c0);
      FUN_ram_4802a59e(auStack_d0);
      FUN_ram_4802a59e(auStack_e0);
      while( true ) {
        ppcVar19 = ppcVar19 + 1;
        ppcVar21 = ppcVar21 + 1;
        pppppppcStack_138 = pppppppcStack_138 + 1;
        puVar7 = puVar7 + 1;
        if (__endptr == ppcVar19) break;
LAB_ram_480891f2:
        uVar17 = 0;
        FUN_ram_4802a8a8(auStack_e0,*ppcVar21);
        FUN_ram_4802a8ec(auStack_d0,auStack_e0);
        uVar3 = FUN_ram_4802afda(auStack_d0,auStack_f0);
        pcVar10 = (char *)*puVar7;
        iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
        ppppppcVar11 = *pppppppcStack_138;
        iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar18;
        puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar18 + 0xcc4);
        if (*(int *)(iVar15 + 0x1cc4) != 0) {
          do {
            uVar17 = uVar17 + 1;
            iVar20 = FUN_ram_4802b18e(uVar3,*puVar1);
            iVar18 = DAT_ram_4ff6ded8;
            if (iVar20 != 0) {
              iVar15 = FUN_ram_4802b18e(uVar3,"plain");
              if ((iVar15 == 0) ||
                 (iVar15 = *(int *)(iVar18 + 0x4c) + *(int *)(iVar18 + 0x40) * 0x1d40,
                 *(char *)(iVar15 + 0xcc2) == '\0')) {
                iVar20 = *(int *)(iVar18 + 0x40);
                iVar18 = *(int *)(iVar18 + 0x4c);
                iVar16 = iVar20 * 0x1d40;
                iVar15 = iVar18 + iVar16;
                if (*(int *)(iVar15 + 0x1cc4) == 0) goto LAB_ram_480898e6;
                uVar17 = 0;
                puVar1 = (undefined4 *)(iVar18 + iVar16 + 0xcc4);
                goto LAB_ram_48089788;
              }
              puVar8 = *(undefined1 **)(iVar15 + 0x43c);
              if (puVar8 == (undefined1 *)0x0) {
                puVar8 = &DAT_ram_481df390;
              }
              FUN_ram_4802a888(apppppppcStack_c0,puVar8,*(undefined4 *)(iVar15 + 0x438));
              goto joined_r0x480897ba;
            }
            puVar1 = puVar1 + 2;
          } while (uVar17 < *(uint *)(iVar15 + 0x1cc4));
        }
        *ppcVar19 = (char *)ppppppcVar11;
        FUN_ram_4802a59e(auStack_d0);
        FUN_ram_4802a59e(auStack_e0);
      }
      pbVar14[0x15] = (byte)local_b0[5];
      pbVar14[0x16] = (byte)local_b0[6];
      pbVar14[0x10] = (byte)local_b0[0];
      pbVar14[0x11] = (byte)local_b0[1];
      pbVar14[0x12] = (byte)local_b0[2];
      pbVar14[0x13] = (byte)local_b0[3];
      pbVar14[0x14] = (byte)local_b0[4];
      iVar15 = DAT_ram_4ff6ded8;
      FUN_ram_4802a8a8(auStack_e0,"counterOffset");
      uVar3 = FUN_ram_4802afda(auStack_e0,auStack_f0);
      iVar18 = *(int *)(iVar15 + 0x40) * 0x1d40;
      iVar20 = *(int *)(iVar15 + 0x4c);
      iVar15 = iVar20 + iVar18;
      if (*(int *)(iVar15 + 0x1cc4) != 0) {
        puVar1 = (undefined4 *)(iVar20 + iVar18 + 0xcc4);
        uVar17 = 0;
        do {
          uVar17 = uVar17 + 1;
          iVar20 = FUN_ram_4802b18e(uVar3,*puVar1);
          iVar18 = DAT_ram_4ff6ded8;
          if (iVar20 != 0) {
            FUN_ram_4802a8a8(auStack_d0,"counterOffset");
            uVar3 = FUN_ram_4802afda(auStack_d0,auStack_f0);
            FUN_ram_4806562c(apppppppcStack_c0,iVar18,uVar3);
            iVar15 = FUN_ram_4802b91c(apppppppcStack_c0);
            FUN_ram_4802a59e(apppppppcStack_c0);
            FUN_ram_4802a59e(auStack_d0);
            FUN_ram_4802a59e(auStack_e0);
            if (0xff < iVar15 + 0x80U) goto LAB_ram_48089734;
            bVar12 = (byte)iVar15;
            goto LAB_ram_480893d8;
          }
          puVar1 = puVar1 + 2;
        } while (uVar17 < *(uint *)(iVar15 + 0x1cc4));
      }
      FUN_ram_4802a59e(auStack_e0);
      bVar12 = 0;
LAB_ram_480893d8:
      pbVar14[0x17] = bVar12;
LAB_ram_480893e4:
      FUN_ram_4802a8a8(local_78,"checksumMode");
      uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
      iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
      iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15;
      if (*(int *)(iVar18 + 0x1cc4) != 0) {
        puVar1 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar15 + 0xcc4);
        uVar17 = 0;
        do {
          uVar17 = uVar17 + 1;
          iVar15 = FUN_ram_4802b18e(uVar3,*puVar1);
          if (iVar15 != 0) {
            FUN_ram_4806562c(&local_5c,DAT_ram_4ff6ded8,uVar3);
            if ((int)uStack_50 < 0) {
              if ((uStack_50 & 0x7f000000) != 0) {
                pppppppcVar5 = (char *******)&local_5c;
                goto LAB_ram_4808945a;
              }
LAB_ram_48089704:
              FUN_ram_4802a59e(&local_5c);
              puVar7 = local_78;
LAB_ram_480896e0:
              FUN_ram_4802a59e(puVar7);
            }
            else {
              if ((local_5c == (char *******)0x0) || (pppppppcVar5 = local_5c, iStack_54 == 0))
              goto LAB_ram_48089704;
LAB_ram_4808945a:
              local_b0[7] = (char *)0x0;
              uVar4 = strtoul((char *)pppppppcVar5,__endptr,10);
              if ((local_b0[7] == (char *)0x0) || ((*local_b0[7] != '\0' || (3 < uVar4))))
              goto LAB_ram_48089704;
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              pbVar14[0x18] = (byte)uVar4;
              if (uVar4 == 0) goto LAB_ram_480896a2;
              puVar7 = auStack_d0;
              uStack_104 = 0;
              uStack_100 = 0;
              uStack_fc = 0;
              auStack_e0[0] = 0;
              uStack_f8 = 0x1d;
              pcStack_f4 = (char *)0xff;
              FUN_ram_4802a8a8(puVar7,"checksumBytes");
              uVar3 = FUN_ram_4802afda(puVar7,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,0xff,&uStack_104,0x10,0,0);
              if (iVar15 == 0) goto LAB_ram_480896e0;
              FUN_ram_4802a8a8(apppppppcStack_c0,"checksumOutput");
              uVar3 = FUN_ram_4802afda(apppppppcStack_c0,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,7,&uStack_100,10,0,0);
              if (iVar15 == 0) {
LAB_ram_480896d8:
                FUN_ram_4802a59e(apppppppcStack_c0);
                goto LAB_ram_480896e0;
              }
              FUN_ram_4802a8a8(local_b0,"checksumAdd");
              uVar3 = FUN_ram_4802afda(local_b0,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,0xff,&uStack_fc,0x10,1,0);
              if (iVar15 == 0) {
LAB_ram_480896d2:
                FUN_ram_4802a59e(local_b0);
                goto LAB_ram_480896d8;
              }
              FUN_ram_4802a8a8(__endptr,"crcPoly");
              uVar3 = FUN_ram_4802afda(__endptr,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,0xff,&uStack_f8,0x10,1,0x1d);
              if (iVar15 == 0) {
                FUN_ram_4802a59e(__endptr);
                goto LAB_ram_480896d2;
              }
              FUN_ram_4802a8a8(local_78,"crcInitial");
              uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,0xff,&pcStack_f4,0x10,1,0xff);
              if (iVar15 == 0) {
                FUN_ram_4802a59e(local_78);
                FUN_ram_4802a59e(__endptr);
                goto LAB_ram_480896d2;
              }
              FUN_ram_4802a8a8(&local_5c,"checksumXor");
              uVar3 = FUN_ram_4802afda(&local_5c,auStack_f0);
              iVar15 = FUN_ram_48088252(uVar3,0xff,auStack_e0,0x10,1,0);
              FUN_ram_4802a59e(&local_5c);
              FUN_ram_4802a59e(local_78);
              FUN_ram_4802a59e(__endptr);
              FUN_ram_4802a59e(local_b0);
              FUN_ram_4802a59e(apppppppcStack_c0);
              FUN_ram_4802a59e(puVar7);
              if (iVar15 != 0) {
                pbVar14[0x1a] = (byte)uStack_100;
                pbVar14[0x1c] = (byte)uStack_f8;
                pbVar14[0x1d] = (byte)pcStack_f4;
                pbVar14[0x1e] = (byte)auStack_e0[0];
                pbVar14[0x1b] = (byte)uStack_fc;
                pbVar14[0x19] = (byte)uStack_104;
                iVar15 = DAT_ram_4ff6ded8;
                FUN_ram_4802a8a8(local_78,"crcRefIn");
                uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
                FUN_ram_4806562c(&local_5c,iVar15,uVar3);
                bVar12 = FUN_ram_4802b18e(&local_5c,"1");
                pbVar14[0x1f] = bVar12;
                FUN_ram_4802a59e(&local_5c);
                FUN_ram_4802a59e(local_78);
                iVar15 = DAT_ram_4ff6ded8;
                FUN_ram_4802a8a8(local_78,"crcRefOut");
                uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
                FUN_ram_4806562c(&local_5c,iVar15,uVar3);
                bVar12 = FUN_ram_4802b18e(&local_5c,"1");
                pbVar14[0x20] = bVar12;
                FUN_ram_4802a59e(&local_5c);
                FUN_ram_4802a59e(local_78);
                iVar15 = DAT_ram_4ff6ded8;
                FUN_ram_4802a8a8(local_78,"crcIncludeId");
                uVar3 = FUN_ram_4802afda(local_78,auStack_f0);
                FUN_ram_4806562c(&local_5c,iVar15,uVar3);
                bVar12 = FUN_ram_4802b18e(&local_5c,"1");
                pbVar14[0x21] = bVar12;
                FUN_ram_4802a59e(&local_5c);
                FUN_ram_4802a59e(local_78);
                goto LAB_ram_480896a2;
              }
            }
            *param_2 = 9;
            goto LAB_ram_48088962;
          }
          puVar1 = puVar1 + 2;
        } while (uVar17 < *(uint *)(iVar18 + 0x1cc4));
      }
      FUN_ram_4802a59e(local_78);
      pbVar14[0x18] = 0;
LAB_ram_480896a2:
      FUN_ram_4802a59e(auStack_f0);
      pbVar14 = pbVar14 + 0x50;
      bVar9 = bVar9 + 1;
      if (*param_1 <= bVar9) {
        return iStack_118;
      }
      goto LAB_ram_48088798;
    }
  }
  FUN_ram_4802a59e(apppppppcStack_c0);
  FUN_ram_4802a59e(auStack_d0);
  FUN_ram_4802a59e(auStack_e0);
LAB_ram_48089734:
  *param_2 = 8;
LAB_ram_48088962:
  FUN_ram_4802a59e(auStack_f0);
  goto LAB_ram_4808892a;
}



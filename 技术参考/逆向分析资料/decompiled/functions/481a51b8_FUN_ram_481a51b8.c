/* Firmware entry: 0x481a51b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481a51b8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iStack_60;
  undefined *puStack_58;
  int aiStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar5,
                     &DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x54);
    return 0x102;
  }
  uVar2 = -(*(byte *)(param_2 + 2) & 1) & 3;
  if (param_2[1] == 0) {
    puVar12 = (undefined4 *)FUN_ram_4ff2091a(1,0x38,0x804);
    uVar2 = uVar2 | 2;
    puVar11 = (undefined4 *)0x0;
    if (puVar12 == (undefined4 *)0x0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): no mem for gdma tx channel\n",uVar5,
                       &DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x5c);
      return 0x101;
    }
  }
  else {
    puVar11 = (undefined4 *)0x0;
    puVar12 = (undefined4 *)0x0;
    if (param_2[1] == 1) {
      uVar2 = uVar2 | 1;
      puVar11 = (undefined4 *)FUN_ram_4ff2091a(1,0x38,0x804);
      if (puVar11 == (undefined4 *)0x0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): no mem for gdma rx channel\n",
                         uVar5,&DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x60);
        return 0x101;
      }
    }
  }
  puVar7 = (undefined4 *)*param_2;
  if (puVar7 == (undefined4 *)0x0) {
    iStack_60 = param_1[1];
    iVar3 = param_1[2];
    uVar6 = param_1[3];
    if (iStack_60 < iVar3) {
      puStack_58 = &DAT_ram_4ff4bad0 + iStack_60 * 4;
      do {
        if (uVar2 == 0) goto LAB_ram_481a5856;
        pcVar9 = (code *)param_1[5];
        piVar4 = (int *)FUN_ram_4ff2091a(1,0x8c,0x804);
        if (piVar4 == (int *)0x0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): no mem for group(%d)\n",uVar5,
                           &DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x74,iStack_60);
          uVar5 = 0x101;
          if (puVar12 == (undefined4 *)0x0) {
            if (puVar11 == (undefined4 *)0x0) {
              return 0x101;
            }
            thunk_FUN_ram_4ff209c6(puVar11);
            return 0x101;
          }
          goto LAB_ram_481a550c;
        }
        FUN_ram_4ff3ec14(&DAT_ram_4ff4bad0,0xffffffff);
        piVar13 = *(int **)(puStack_58 + 8);
        if (piVar13 == (int *)0x0) {
          *(int *)(puStack_58 + 0x10) = *(int *)(puStack_58 + 0x10) + 1;
          *(int **)(puStack_58 + 8) = piVar4;
          FUN_ram_4ff3ee10(&DAT_ram_4ff4bad0);
          piVar4[0x19] = -0x4cc00001;
          *piVar4 = iStack_60;
          piVar4[0x1a] = 0;
          FUN_ram_4ff3122a();
          if (iStack_60 == 0) {
            _DAT_ram_500e6018 = _DAT_ram_500e6018 | 8;
            _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xfffffffd;
          }
          else {
            _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x10;
            _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xfffffffb;
          }
          FUN_ram_4ff31240();
          aiStack_44[0] = iStack_60;
          (*pcVar9)(piVar4 + 2,aiStack_44);
        }
        else {
          *(int *)(puStack_58 + 0x10) = *(int *)(puStack_58 + 0x10) + 1;
          FUN_ram_4ff3ee10(&DAT_ram_4ff4bad0);
          thunk_FUN_ram_4ff209c6(piVar4);
          piVar4 = piVar13;
        }
        piVar4[1] = *param_1;
        if (0 < (int)uVar6) {
          piVar13 = piVar4 + 0x20;
          uVar10 = 0;
          piVar14 = piVar4 + 0x19;
          do {
            if (((*(byte *)(param_2 + 2) & 1) == 0) || ((1 << (uVar10 & 0x1f) & param_1[4]) != 0)) {
              piVar15 = (int *)FUN_ram_4ff2091a(1,0x1c,0x804);
              if (piVar15 == (int *)0x0) {
                uVar5 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): no mem for pair(%d,%d)\n",
                                 uVar5,&DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x7f,iStack_60,
                                 uVar10);
                if (puVar12 != (undefined4 *)0x0) {
                  thunk_FUN_ram_4ff209c6(puVar12);
                }
                if (puVar11 != (undefined4 *)0x0) {
                  thunk_FUN_ram_4ff209c6(puVar11);
                }
                FUN_ram_481a4f08(piVar4);
                return 0x101;
              }
              FUN_ram_4ff3ec14(piVar14,0xffffffff);
              piVar16 = (int *)piVar13[-3];
              if (piVar16 == (int *)0x0) {
                *piVar13 = *piVar13 + 1;
                piVar13[-3] = (int)piVar15;
                FUN_ram_4ff3ee10(piVar14);
                piVar15[5] = -0x4cc00001;
                *piVar15 = (int)piVar4;
                piVar15[1] = uVar10;
                piVar15[6] = 0;
                FUN_ram_4ff3ec14(&DAT_ram_4ff4bad0,0xffffffff);
                *(int *)(&DAT_ram_4ff4bad0 + (*piVar4 + 4) * 4) =
                     *(int *)(&DAT_ram_4ff4bad0 + (*piVar4 + 4) * 4) + 1;
                FUN_ram_4ff3ee10(&DAT_ram_4ff4bad0);
              }
              else {
                *piVar13 = *piVar13 + 1;
                FUN_ram_4ff3ee10(piVar14);
                thunk_FUN_ram_4ff209c6(piVar15);
                piVar15 = piVar16;
              }
              piVar16 = piVar15 + 5;
              FUN_ram_4ff3ec14(piVar16,0xffffffff);
              if ((piVar15[4] & uVar2) == 0) {
                piVar15[4] = piVar15[4] | uVar2;
                FUN_ram_4ff3ee10(piVar16);
                FUN_ram_4ff3ec14(piVar14,0xffffffff);
                piVar4[piVar15[1] + 0x20] = piVar4[piVar15[1] + 0x20] + 1;
                FUN_ram_4ff3ee10(piVar14);
                FUN_ram_481a4fd6(piVar15);
                FUN_ram_481a4f08(piVar4);
                goto LAB_ram_481a523e;
              }
              FUN_ram_4ff3ee10(piVar16);
              FUN_ram_481a4fd6(piVar15);
            }
            uVar10 = uVar10 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar6 != uVar10);
        }
        FUN_ram_481a4f08(piVar4);
        puStack_58 = puStack_58 + 4;
        iStack_60 = iStack_60 + 1;
      } while (iVar3 != iStack_60);
    }
    else if (uVar2 == 0) {
LAB_ram_481a5856:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("gdma.c",0x96,"do_allocate_gdma_channel","pair && group");
    }
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,
                     "E (%lu) %s: %s(%d): no free gdma channel, search code=%d\n",uVar5,
                     &DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x95,uVar2);
    uVar5 = 0x105;
    if (puVar12 != (undefined4 *)0x0) {
LAB_ram_481a550c:
      thunk_FUN_ram_4ff209c6(puVar12);
    }
    if (puVar11 != (undefined4 *)0x0) {
      thunk_FUN_ram_4ff209c6(puVar11);
    }
  }
  else {
    piVar15 = (int *)*puVar7;
    if (piVar15 == (int *)0x0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid sibling channel\n",uVar5,
                       &DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x65);
      if (puVar12 != (undefined4 *)0x0) {
        thunk_FUN_ram_4ff209c6(puVar12);
      }
      if (puVar11 != (undefined4 *)0x0) {
        thunk_FUN_ram_4ff209c6(puVar11);
      }
    }
    else {
      if (puVar7[4] != param_2[1]) {
        iVar3 = *piVar15;
        iVar8 = iVar3 + 100;
        FUN_ram_4ff3ec14(iVar8,0xffffffff);
        iVar3 = iVar3 + piVar15[1] * 4;
        *(int *)(iVar3 + 0x80) = *(int *)(iVar3 + 0x80) + 1;
        FUN_ram_4ff3ee10(iVar8);
LAB_ram_481a523e:
        if (puVar12 != (undefined4 *)0x0) {
          uVar5 = param_2[2];
          bVar1 = *(byte *)(puVar12 + 9);
          piVar15[2] = (int)puVar12;
          *puVar12 = piVar15;
          puVar12[4] = 0;
          *(byte *)(puVar12 + 9) = bVar1 & 0xfd | (byte)uVar5 & 2;
          puVar12[8] = FUN_ram_481a5116;
          puVar12[5] = 0x3f;
          *param_3 = puVar12;
        }
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)*param_3;
        }
        else {
          uVar5 = param_2[2];
          bVar1 = *(byte *)(puVar11 + 9);
          piVar15[3] = (int)puVar11;
          *puVar11 = piVar15;
          *(byte *)(puVar11 + 9) = bVar1 & 0xfd | (byte)uVar5 & 2;
          puVar11[8] = &LAB_ram_481a5074;
          puVar11[4] = 1;
          puVar11[5] = 0x3f;
          *param_3 = puVar11;
        }
        puVar11[3] = 0;
        puVar11[2] = 0xb33fffff;
        return 0;
      }
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,
                       "E (%lu) %s: %s(%d): sibling channel should have a different direction\n",
                       uVar5,&DAT_ram_481e0c8c,"do_allocate_gdma_channel",0x66);
      if (puVar12 != (undefined4 *)0x0) {
        thunk_FUN_ram_4ff209c6(puVar12);
      }
      if (puVar11 != (undefined4 *)0x0) {
        thunk_FUN_ram_4ff209c6(puVar11);
      }
      FUN_ram_481a4fd6(piVar15);
    }
    uVar5 = 0x102;
  }
  return uVar5;
}



/* Firmware entry: 0x4816f274 */

int FUN_ram_4816f274(int *param_1)

{
  short sVar1;
  bool bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  short *psVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined1 *puStack_4c;
  int iStack_48;
  uint auStack_44 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar12 = param_1[0xf];
  if (iVar12 == 0) {
    return -0x6c00;
  }
  pcVar4 = (char *)param_1[0x10];
  if (param_1[2] == 0) {
    if (*pcVar4 == '\0') {
      iVar10 = param_1[4];
      *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(*param_1 + 4);
    }
    else {
      iVar10 = *(int *)(iVar12 + 4);
      param_1[4] = iVar10;
      *(int *)(pcVar4 + 8) = iVar10;
    }
    if (iVar10 != 0x303) goto LAB_ram_4816f2ac;
LAB_ram_4816f32a:
    FUN_ram_4819b728(0,pcVar4 + 0x1b4,0x20);
    uVar16 = __bswapsi2();
    pcVar4[0x1b4] = (char)uVar16;
    pcVar4[0x1b5] = (char)(uVar16 >> 8);
    pcVar4[0x1b6] = (char)(uVar16 >> 0x10);
    pcVar4[0x1b7] = (char)(uVar16 >> 0x18);
    pcVar9 = *(code **)(*param_1 + 0x20);
    iVar10 = (*pcVar9)(*(undefined4 *)(*param_1 + 0x24),pcVar4 + 0x1b8,0x1c,uVar16 >> 8,pcVar9);
  }
  else {
    iVar10 = param_1[4];
    *(int *)(pcVar4 + 8) = iVar10;
    if (iVar10 == 0x303) goto LAB_ram_4816f32a;
LAB_ram_4816f2ac:
    iVar10 = (**(code **)(*param_1 + 0x20))(*(undefined4 *)(*param_1 + 0x24));
  }
  if (iVar10 != 0) {
    return iVar10;
  }
  if (param_1[4] != 0x303) goto LAB_ram_4816f2c0;
  iVar10 = *(int *)(iVar12 + 0x14);
  if (iVar10 - 0x10U < 0x11) {
    if (param_1[2] != 0) {
LAB_ram_4816f63e:
      *(undefined4 *)(iVar12 + 0x14) = 0;
      goto LAB_ram_4816f2c0;
    }
    if (*(char *)param_1[0x10] == '\0') {
      if (*(int *)(iVar12 + 0x70) == 0) goto LAB_ram_4816f63e;
      if (*(int *)(iVar12 + 0x74) == 0) {
        *(undefined4 *)(iVar12 + 0x14) = 0;
        goto LAB_ram_4816f2c0;
      }
    }
    else if ((*(int *)(iVar12 + 0x70) == 0) || (*(int *)(iVar12 + 0x74) == 0))
    goto LAB_ram_4816f2c0;
    if (iVar10 == 0x20) goto LAB_ram_4816f2c0;
  }
  else if (((param_1[2] != 0) || (*(int *)(iVar12 + 0x70) == 0)) || (*(int *)(iVar12 + 0x74) == 0))
  {
    if (iVar10 == 0) goto LAB_ram_4816f2c0;
    goto LAB_ram_4816f63e;
  }
  iVar11 = *param_1;
  *(undefined4 *)(iVar12 + 0x14) = 0x20;
  pcVar9 = *(code **)(iVar11 + 0x20);
  iVar12 = (*pcVar9)(*(undefined4 *)(iVar11 + 0x24),iVar12 + 0x18,0x20,iVar10 - 0x10U,pcVar9);
  if (iVar12 != 0) {
    return iVar12;
  }
LAB_ram_4816f2c0:
  iVar10 = FUN_ram_48170728(param_1,1,&puStack_4c,&iStack_48);
  iVar12 = iStack_48;
  puVar3 = puStack_4c;
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = param_1[0x10];
  puVar15 = puStack_4c + iStack_48;
  bVar2 = false;
  if (*(uint *)(iVar10 + 8) < 0x304) {
    bVar2 = 0x302 < (uint)param_1[4];
  }
  if ((puStack_4c <= puVar15) && (1 < iStack_48)) {
    FUN_ram_48171448(puStack_4c,*(undefined1 *)(*param_1 + 9),0x303);
    if ((puVar3 + 2 <= puVar15) &&
       (((0x1f < iVar12 - 2U &&
         (FUN_ram_4ff45158(puVar3 + 2,iVar10 + 0x1b4,0x20), puVar3 + 0x22 <= puVar15)) &&
        (*(int *)(param_1[0xf] + 0x14) + 1U <= iVar12 - 0x22U)))) {
      puVar3[0x22] = (char)*(int *)(param_1[0xf] + 0x14);
      FUN_ram_4ff45158(puVar3 + 0x23,param_1[0xf] + 0x18,*(undefined4 *)(param_1[0xf] + 0x14));
      auStack_44[0] = 0;
      puVar17 = puVar3 + 0x23 + *(int *)(param_1[0xf] + 0x14);
      if ((puVar17 <= puVar15) && (1 < (int)puVar15 - (int)puVar17)) {
        piVar20 = *(int **)(*param_1 + 0x14);
        puVar13 = puVar17 + 2;
        iVar12 = *piVar20;
        puVar14 = puVar13;
        if (iVar12 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            piVar20 = piVar20 + 1;
            uVar5 = FUN_ram_4816f1ea(iVar12);
            iVar10 = FUN_ram_4816bb3a(param_1,uVar5,*(undefined4 *)(param_1[0x10] + 8),param_1[4]);
            if (iVar10 == 0) {
              uVar6 = FUN_ram_4816f258(uVar5);
              if (puVar15 < puVar14) {
                return -0x6a00;
              }
              if ((int)puVar15 - (int)puVar14 < 2) {
                return -0x6a00;
              }
              *puVar14 = (char)((uint)iVar12 >> 8);
              puVar14[1] = (char)iVar12;
              uVar16 = uVar16 | uVar6;
              puVar14 = puVar14 + 2;
            }
            iVar12 = *piVar20;
          } while (iVar12 != 0);
        }
        if (param_1[2] == 0) {
          if (puVar15 < puVar14) {
            return -0x6a00;
          }
          if ((int)puVar15 - (int)puVar14 < 2) {
            return -0x6a00;
          }
          *puVar14 = 0;
          puVar14[1] = 0xff;
          puVar14 = puVar14 + 2;
        }
        *puVar17 = (char)((uint)((int)puVar14 - (int)puVar13) >> 8);
        auStack_44[0] = (int)puVar14 - (int)puVar17;
        puVar17[1] = (char)((uint)(((int)puVar14 - (int)puVar13) * 0x100) >> 8);
        if ((puVar14 <= puVar15) && (1 < (int)puVar15 - (int)puVar14)) {
          *puVar14 = 1;
          puVar14[1] = 0;
          puVar17 = puVar14 + 2;
          if ((puVar17 <= puVar15) && (1 < (int)puVar15 - (int)puVar17)) {
            pcVar4 = (char *)FUN_ram_4816a508(param_1);
            auStack_44[0] = 0;
            puVar13 = puVar14 + 4;
            if (pcVar4 == (char *)0x0) {
              uVar6 = 0;
            }
            else {
              if (puVar15 < puVar13) {
                return -0x6a00;
              }
              sVar7 = strlen(pcVar4);
              uVar6 = sVar7 + 9;
              if ((uint)((int)puVar15 - (int)puVar13) < uVar6) {
                return -0x6a00;
              }
              uVar8 = sVar7 & 0xffff;
              puVar14[0xc] = (char)uVar8;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[10] = 0;
              puVar14[6] = (char)(uVar8 + 5 >> 8);
              puVar14[7] = (char)((uVar8 + 5) * 0x100 >> 8);
              puVar14[8] = (char)(uVar8 + 3 >> 8);
              puVar14[9] = (char)((uVar8 + 3) * 0x100 >> 8);
              puVar14[0xb] = (char)(uVar8 >> 8);
              FUN_ram_4ff45158(puVar14 + 0xd,pcVar4,sVar7);
            }
            puVar13 = puVar13 + uVar6;
            if (*(int *)(*param_1 + 0x68) != 0) {
              if (puVar15 < puVar13) {
                return -0x6a00;
              }
              if ((int)puVar15 - (int)puVar13 < 6) {
                return -0x6a00;
              }
              *puVar13 = 0;
              puVar13[1] = 0x10;
              puVar18 = puVar13 + 6;
              for (puVar21 = *(undefined4 **)(*param_1 + 0x68); (char *)*puVar21 != (char *)0x0;
                  puVar21 = puVar21 + 1) {
                if (puVar15 < puVar18) {
                  return -0x6a00;
                }
                sVar7 = strlen((char *)*puVar21);
                puVar22 = puVar18 + 1;
                if ((uint)((int)puVar15 - (int)puVar18) < sVar7 + 1) {
                  return -0x6a00;
                }
                *puVar18 = (char)sVar7;
                puVar18 = puVar22 + sVar7;
                FUN_ram_4ff45158(puVar22,*puVar21,sVar7);
              }
              auStack_44[0] = (int)puVar18 - (int)puVar13;
              iVar12 = (auStack_44[0] & 0xffff) - 6;
              iVar10 = (auStack_44[0] & 0xffff) - 4;
              puVar13[4] = (char)((uint)iVar12 >> 8);
              puVar13[5] = (char)((uint)(iVar12 * 0x100) >> 8);
              puVar13[2] = (char)((uint)iVar10 >> 8);
              puVar13[3] = (char)((uint)(iVar10 * 0x100) >> 8);
            }
            puVar13 = puVar13 + auStack_44[0];
            if (bVar2) {
              puVar18 = puVar13;
              if (uVar16 != 0) {
                auStack_44[0] = 0;
                psVar19 = *(short **)(*param_1 + 100);
                if ((puVar15 < puVar13) || ((int)puVar15 - (int)puVar13 < 6)) {
                  return -0x6a00;
                }
                puVar22 = puVar13 + 6;
                puVar18 = puVar22;
                if (psVar19 == (short *)0x0) {
                  return -0x5e80;
                }
                while (*psVar19 != 0) {
                  if (((ushort)(*psVar19 - 0x12U) < 0xd) &&
                     (iVar12 = FUN_ram_4816af3a(), iVar12 != 0)) {
                    if (puVar15 < puVar18) {
                      return -0x6a00;
                    }
                    if ((int)puVar15 - (int)puVar18 < 2) {
                      return -0x6a00;
                    }
                    sVar1 = *psVar19;
                    psVar19 = psVar19 + 1;
                    *puVar18 = (char)((ushort)sVar1 >> 8);
                    puVar18[1] = (char)sVar1;
                    puVar18 = puVar18 + 2;
                  }
                  else {
                    psVar19 = psVar19 + 1;
                  }
                }
                if (puVar18 == puVar22) {
                  return -0x6c00;
                }
                uVar6 = (int)puVar18 - (int)puVar22 & 0xffff;
                puVar13[2] = (char)(uVar6 + 2 >> 8);
                *puVar13 = 0;
                puVar13[3] = (char)((uVar6 + 2) * 0x100 >> 8);
                puVar13[1] = 10;
                auStack_44[0] = (int)puVar18 - (int)puVar13;
                puVar13[4] = (char)(uVar6 >> 8);
                puVar13[5] = (char)uVar6;
              }
              iVar12 = FUN_ram_4816bb56(param_1,puVar18,puVar15,auStack_44);
              if (iVar12 != 0) {
                return iVar12;
              }
              puVar18 = puVar18 + auStack_44[0];
              iVar12 = FUN_ram_4816c592(param_1,puVar18,puVar15,uVar16,auStack_44);
              if (iVar12 != 0) {
                return iVar12;
              }
              puVar13 = puVar18 + auStack_44[0];
            }
            puVar15 = puVar13 + (-2 - (int)puVar17);
            if (puVar15 != (undefined1 *)0x0) {
              puVar14[2] = (char)((uint)puVar15 >> 8);
              puVar14[3] = (char)((uint)((int)puVar15 * 0x100) >> 8);
              puVar17 = puVar13;
            }
            iVar12 = (int)puVar17 - (int)puVar3;
            iVar10 = FUN_ram_4816a35c(param_1,1,iVar12);
            if (((iVar10 == 0) &&
                (iVar10 = (**(code **)(param_1[0x10] + 0x14))(param_1,puStack_4c,iVar12),
                iVar10 == 0)) && (iVar10 = FUN_ram_48170a3a(param_1,iStack_48,iVar12), iVar10 == 0))
            {
              param_1[1] = 2;
            }
            return iVar10;
          }
        }
      }
    }
  }
  return -0x6a00;
}



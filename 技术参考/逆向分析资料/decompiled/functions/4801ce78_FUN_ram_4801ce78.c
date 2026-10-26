/* Firmware entry: 0x4801ce78 */

int FUN_ram_4801ce78(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(*param_1 + 0x18);
  if (iVar2 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar12 = 0;
    puVar1 = (uint *)(*(int *)(*param_1 + 0x1c) + 4);
    do {
      while( true ) {
        uVar9 = puVar1[1];
        puVar6 = (uint *)(puVar1[4] + (int)param_1);
        if (uVar9 != 0) break;
        iVar11 = FUN_ram_4801cafa(*puVar1,puVar1[2]);
joined_r0x4801cfd6:
        puVar1 = puVar1 + 0xc;
        iVar13 = iVar13 + iVar11;
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar2) goto LAB_ram_4801cf46;
      }
      puVar8 = (uint *)(puVar1[3] + (int)param_1);
      if (uVar9 == 1) {
        if ((puVar1[7] & 4) == 0) {
          if ((puVar1[2] - 0xe & 0xfffffffd) == 0) {
            if ((*puVar6 != 0) && (*puVar6 != puVar1[6])) goto LAB_ram_4801cfc8;
          }
          else if (*puVar8 != 0) {
LAB_ram_4801cfc8:
            uVar9 = *puVar1;
            goto LAB_ram_4801cfca;
          }
          goto joined_r0x4801d004;
        }
LAB_ram_4801d00a:
        uVar9 = *puVar1;
        if ((*puVar8 != uVar9) ||
           (((puVar1[2] - 0xe & 0xfffffffd) == 0 && ((*puVar6 == 0 || (*puVar6 == puVar1[6]))))))
        goto joined_r0x4801d004;
LAB_ram_4801cfca:
        iVar11 = FUN_ram_4801cafa(uVar9);
        goto joined_r0x4801cfd6;
      }
      if (uVar9 == 3) {
        if ((puVar1[7] & 4) != 0) goto LAB_ram_4801d00a;
        uVar9 = puVar1[2];
        iVar11 = FUN_ram_4801c594(uVar9,puVar6);
        if (iVar11 == 0) {
          iVar11 = FUN_ram_4801cafa(*puVar1,uVar9,puVar6);
          iVar13 = iVar13 + iVar11;
        }
      }
      else {
        uVar9 = *puVar8;
        if (uVar9 != 0) {
          uVar10 = *puVar1;
          iVar11 = 1;
          if (((0xf < uVar10) && (iVar11 = 2, 0x7ff < uVar10)) && (iVar11 = 3, 0x3ffff < uVar10)) {
            iVar11 = (0x1ffffff < uVar10) + 4;
          }
          puVar6 = (uint *)*puVar6;
          uVar10 = puVar1[7] & 1;
          uVar7 = puVar1[2];
          if (uVar10 == 0) {
            iVar11 = iVar11 * uVar9;
            if (uVar7 == 8) {
LAB_ram_4801d070:
              puVar8 = puVar6 + uVar9 * 2;
              uVar14 = 0;
              do {
                while( true ) {
                  uVar7 = puVar6[1];
                  uVar9 = *puVar6;
                  if (uVar7 == 0) break;
                  iVar4 = 5;
                  if (((7 < uVar7) && (iVar4 = 6, 0x3ff < uVar7)) &&
                     ((iVar4 = 7, 0x1ffff < uVar7 && (iVar4 = 8, 0xffffff < uVar7)))) {
                    iVar4 = ((int)uVar7 < 0) + 9;
                  }
LAB_ram_4801d0b8:
                  puVar6 = puVar6 + 2;
                  uVar14 = uVar14 + iVar4;
                  if (puVar8 == puVar6) goto LAB_ram_4801d0f2;
                }
                iVar4 = 1;
                if (((uVar9 < 0x80) || (iVar4 = 2, uVar9 < 0x4000)) || (iVar4 = 3, uVar9 < 0x200000)
                   ) goto LAB_ram_4801d0b8;
                puVar6 = puVar6 + 2;
                uVar14 = uVar14 + (0xfffffff < uVar9) + 4;
              } while (puVar8 != puVar6);
              goto LAB_ram_4801d0f2;
            }
            if (uVar7 < 9) {
              if (uVar7 == 4) {
LAB_ram_4801d2f4:
                puVar8 = puVar6 + uVar9 * 2;
                uVar14 = 0;
                do {
                  uVar7 = (int)puVar6[1] >> 0x1f;
                  uVar3 = *puVar6 >> 0x1f | puVar6[1] << 1;
                  uVar9 = *puVar6 << 1 ^ uVar7;
                  uVar15 = uVar3 ^ uVar7;
                  if (uVar3 == uVar7) {
                    iVar4 = 1;
                    if (((0x7f < uVar9) && (iVar4 = 2, 0x3fff < uVar9)) &&
                       (iVar4 = 3, 0x1fffff < uVar9)) {
                      iVar4 = (0xfffffff < uVar9) + 4;
                    }
                  }
                  else {
                    iVar4 = 5;
                    if (((7 < uVar15) && (iVar4 = 6, 0x3ff < uVar15)) &&
                       ((iVar4 = 7, 0x1ffff < uVar15 && (iVar4 = 8, 0xffffff < uVar15)))) {
                      iVar4 = ((int)uVar15 < 0) + 9;
                    }
                  }
                  puVar6 = puVar6 + 2;
                  uVar14 = uVar14 + iVar4;
                } while (puVar8 != puVar6);
                goto LAB_ram_4801d0f2;
              }
              if (uVar7 < 5) {
                if (uVar7 != 1) {
                  if (uVar7 < 2) goto LAB_ram_4801d20a;
                  if (uVar7 == 2) {
                    iVar11 = iVar11 + uVar9 * 4;
                    goto LAB_ram_4801cf2e;
                  }
                  goto LAB_ram_4801d070;
                }
LAB_ram_4801d38a:
                puVar8 = puVar6 + uVar9;
                uVar14 = 0;
                do {
                  iVar4 = 1;
                  uVar9 = *puVar6 << 1 ^ (int)*puVar6 >> 0x1f;
                  if (((0x7f < uVar9) && (iVar4 = 2, 0x3fff < uVar9)) &&
                     (iVar4 = 3, 0x1fffff < uVar9)) {
                    iVar4 = (0xfffffff < uVar9) + 4;
                  }
                  puVar6 = puVar6 + 1;
                  uVar14 = uVar14 + iVar4;
                } while (puVar8 != puVar6);
                goto LAB_ram_4801d0f2;
              }
              if (uVar7 == 6) {
LAB_ram_4801d3d2:
                puVar8 = puVar6 + uVar9;
                uVar14 = 0;
                do {
                  uVar9 = *puVar6;
                  iVar4 = 1;
                  if (((0x7f < uVar9) && (iVar4 = 2, 0x3fff < uVar9)) &&
                     (iVar4 = 3, 0x1fffff < uVar9)) {
                    iVar4 = (0xfffffff < uVar9) + 4;
                  }
                  puVar6 = puVar6 + 1;
                  uVar14 = uVar14 + iVar4;
                } while (puVar8 != puVar6);
                goto LAB_ram_4801d0f2;
              }
              uVar14 = uVar9 << 2;
              if (uVar7 != 7) {
                uVar14 = uVar9 << 3;
              }
LAB_ram_4801cf2c:
              iVar11 = iVar11 + uVar14;
            }
            else {
              if (uVar7 == 0xe) {
LAB_ram_4801d292:
                puVar8 = puVar6 + uVar9;
                uVar14 = 0;
                do {
                  sVar5 = strlen((char *)*puVar6);
                  iVar4 = 1;
                  if (((0x7f < sVar5) && (iVar4 = 2, 0x3fff < sVar5)) &&
                     (iVar4 = 3, 0x1fffff < sVar5)) {
                    iVar4 = (0xfffffff < sVar5) + 4;
                  }
                  puVar6 = puVar6 + 1;
                  uVar14 = uVar14 + sVar5 + iVar4;
                } while (puVar8 != puVar6);
LAB_ram_4801d0f2:
                if (uVar10 != 0) goto LAB_ram_4801d0f6;
                goto LAB_ram_4801cf2c;
              }
              if (0xe < uVar7) {
                if (uVar7 == 0xf) {
LAB_ram_4801d252:
                  puVar8 = puVar6 + uVar9 * 2;
                  uVar14 = 0;
                  do {
                    uVar9 = *puVar6;
                    iVar4 = 1;
                    if (((0x7f < uVar9) && (iVar4 = 2, 0x3fff < uVar9)) &&
                       (iVar4 = 3, 0x1fffff < uVar9)) {
                      iVar4 = (0xfffffff < uVar9) + 4;
                    }
                    puVar6 = puVar6 + 2;
                    uVar14 = uVar14 + uVar9 + iVar4;
                  } while (puVar8 != puVar6);
                }
                else {
                  if (uVar7 != 0x10) goto LAB_ram_4801cf2e;
LAB_ram_4801d166:
                  uVar14 = 0;
                  uVar7 = 0;
                  do {
                    if (**(int **)*puVar6 != 0x28aaeef9) {
                    /* WARNING: Subroutine does not return */
                      FUN_ram_4ff44e88("protobuf-c.c",0x2c9,"protobuf_c_message_get_packed_size",
                                       "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC"
                                      );
                    }
                    uVar3 = FUN_ram_4801ce78();
                    iVar4 = 1;
                    if (((0x7f < uVar3) && (iVar4 = 2, 0x3fff < uVar3)) &&
                       (iVar4 = 3, 0x1fffff < uVar3)) {
                      iVar4 = (0xfffffff < uVar3) + 4;
                    }
                    uVar7 = uVar7 + 1;
                    uVar14 = uVar14 + iVar4 + uVar3;
                    puVar6 = puVar6 + 1;
                  } while (uVar9 != uVar7);
                }
                goto LAB_ram_4801d0f2;
              }
              if (uVar7 != 0xc) {
                if (uVar7 != 0xd) {
                  uVar14 = uVar9 << 2;
                  if (uVar7 != 10) {
                    uVar14 = uVar9 << 3;
                  }
                  goto LAB_ram_4801cf2c;
                }
LAB_ram_4801d20a:
                puVar8 = puVar6 + uVar9;
                uVar14 = 0;
                do {
                  uVar9 = *puVar6;
                  if ((int)uVar9 < 0) {
                    iVar4 = 10;
                  }
                  else {
                    iVar4 = 1;
                    if (((0x7f < (int)uVar9) && (iVar4 = 2, 0x3fff < (int)uVar9)) &&
                       (iVar4 = 3, 0x1fffff < (int)uVar9)) {
                      iVar4 = (0xfffffff < (int)uVar9) + 4;
                    }
                  }
                  puVar6 = puVar6 + 1;
                  uVar14 = uVar14 + iVar4;
                } while (puVar8 != puVar6);
                goto LAB_ram_4801d0f2;
              }
              iVar11 = iVar11 + uVar9;
            }
LAB_ram_4801cf2e:
            iVar13 = iVar13 + iVar11;
          }
          else {
            if (uVar7 == 8) goto LAB_ram_4801d070;
            if (uVar7 < 9) {
              if (uVar7 == 4) goto LAB_ram_4801d2f4;
              if (uVar7 < 5) {
                if (uVar7 == 1) goto LAB_ram_4801d38a;
                if (uVar7 < 2) goto LAB_ram_4801d20a;
                if (uVar7 != 2) goto LAB_ram_4801d070;
                uVar14 = uVar9 << 2;
              }
              else {
                if (uVar7 == 6) goto LAB_ram_4801d3d2;
                uVar14 = uVar9 << 2;
                if (uVar7 != 7) {
                  uVar14 = uVar9 << 3;
                }
              }
LAB_ram_4801d0f6:
              uVar10 = 1;
              if (((0x7f < uVar14) && (uVar10 = 2, 0x3fff < uVar14)) &&
                 (uVar10 = 3, 0x1fffff < uVar14)) {
                uVar10 = (0xfffffff < uVar14) + 4;
              }
            }
            else {
              if (uVar7 == 0xe) goto LAB_ram_4801d292;
              if (uVar7 < 0xf) {
                uVar14 = uVar9;
                if (uVar7 != 0xc) {
                  if (uVar7 == 0xd) goto LAB_ram_4801d20a;
                  uVar14 = uVar9 << 2;
                  if (uVar7 != 10) {
                    uVar14 = uVar9 << 3;
                  }
                }
                goto LAB_ram_4801d0f6;
              }
              if (uVar7 == 0xf) goto LAB_ram_4801d252;
              uVar14 = 0;
              if (uVar7 == 0x10) goto LAB_ram_4801d166;
            }
            iVar13 = iVar13 + iVar11 + uVar14 + uVar10;
          }
        }
      }
joined_r0x4801d004:
      puVar1 = puVar1 + 0xc;
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar2);
  }
LAB_ram_4801cf46:
  if (param_1[1] != 0) {
    puVar6 = (uint *)param_1[2];
    puVar1 = puVar6 + param_1[1] * 4;
    do {
      uVar9 = *puVar6;
      iVar2 = 1;
      if (((0xf < uVar9) && (iVar2 = 2, 0x7ff < uVar9)) && (iVar2 = 3, 0x3ffff < uVar9)) {
        iVar2 = (0x1ffffff < uVar9) + 4;
      }
      puVar8 = puVar6 + 2;
      puVar6 = puVar6 + 4;
      iVar13 = iVar13 + iVar2 + *puVar8;
    } while (puVar1 != puVar6);
  }
  return iVar13;
}



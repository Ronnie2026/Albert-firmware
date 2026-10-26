/* Firmware entry: 0x4819e9b0 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4819e9b0(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  byte *pbVar20;
  byte *pbVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined8 uVar28;
  int local_240 [5];
  byte *local_22c;
  code *local_228;
  byte *local_224;
  uint local_220;
  int local_21c;
  undefined4 *local_218;
  int *local_214 [4];
  byte local_204 [4];
  int local_200;
  uint local_1fc;
  int local_1f8 [2];
  int local_1f0;
  byte abStack_1e9 [41];
  int aiStack_1c0 [31];
  char acStack_141 [269];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = local_240 + 4;
  local_218 = param_1;
  local_224 = param_3;
  local_214[0] = param_4;
  local_200 = 0;
  local_228 = (code *)0x0;
  piVar19 = (int *)0x0;
  local_220 = 0;
  local_21c = 0;
  pbVar4 = (byte *)0x0;
  iVar23 = 0;
  iVar24 = 0;
LAB_ram_4819ea10:
  iVar5 = local_200;
  piVar22 = local_214[0];
  local_1fc = (uint)*local_224;
  pbVar21 = local_224 + 1;
  if (local_1fc != 0) {
    if (((&DAT_ram_4823af31)[local_1fc] & 8) == 0) goto LAB_ram_4819ea82;
    while (((0 < param_2[1] || (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 == 0)) &&
           (((&DAT_ram_4823af31)[*(byte *)*param_2] & 8) != 0))) {
      iVar23 = iVar23 + 1;
      param_2[1] = param_2[1] + -1;
      *param_2 = (int)((byte *)*param_2 + 1);
    }
    goto LAB_ram_4819ea5a;
  }
switchD_ram_4819eb40_caseD_2:
  if (piVar19 != (int *)0x0) {
    if (iVar24 == -1) {
LAB_ram_481a0436:
      for (iVar24 = 0; iVar24 < (int)(uint)*(ushort *)((int)piVar19 + 6); iVar24 = iVar24 + 1) {
        puVar18 = (undefined4 *)(*piVar19 + iVar24 * 4);
        thunk_FUN_ram_4ff209c6(*(undefined4 *)*puVar18);
        *(undefined4 *)*puVar18 = 0;
      }
      iVar24 = -1;
    }
    if (*piVar19 != 0) {
      thunk_FUN_ram_4ff209c6();
    }
  }
  return iVar24;
LAB_ram_4819ea82:
  if (local_1fc == 0x25) {
    pbVar16 = (byte *)0x0;
    uVar25 = 0;
    pbVar20 = (byte *)0x0;
    pbVar26 = pbVar21;
    pbVar27 = pbVar4;
LAB_ram_4819ea92:
    while( true ) {
      pbVar21 = pbVar26 + 1;
      local_224 = pbVar21;
      uVar17 = (uint)*pbVar26;
      if (0x7a < uVar17) goto switchD_ram_4819eb40_caseD_2;
      if (0x42 < uVar17) break;
      if (uVar17 == 0x2a) {
        if (pbVar20 != (byte *)0x0 || uVar25 != 0) goto switchD_ram_4819eb40_caseD_2;
        uVar25 = 0x10;
        pbVar20 = (byte *)0x0;
        pbVar26 = local_224;
      }
      else if (uVar17 < 0x2b) {
        if (uVar17 != 0x24) {
          if (uVar17 == 0x25) goto LAB_ram_4819eb6a;
          goto switchD_ram_4819eb40_caseD_2;
        }
        if (uVar25 != 0) goto switchD_ram_4819eb40_caseD_2;
        if ((byte *)0x20 < pbVar20) {
          *local_218 = 0x16;
          goto LAB_ram_4819eba2;
        }
        pbVar27 = pbVar20 + -1;
        pbVar16 = (byte *)0x1;
        pbVar20 = (byte *)0x0;
        pbVar26 = local_224;
      }
      else {
        if ((9 < (uVar17 - 0x30 & 0xff)) || ((uVar25 & 0x8f) != 0))
        goto switchD_ram_4819eb40_caseD_2;
        pbVar20 = (byte *)(uVar17 + (int)pbVar20 * 10 + -0x30);
        pbVar26 = local_224;
      }
    }
    switch(uVar17 - 0x43 & 0xff) {
    case 0:
      goto switchD_ram_4819eb40_caseD_0;
    case 1:
      uVar25 = uVar25 | 1;
    case 0x21:
      iVar5 = 0x394;
LAB_ram_4819ec9e:
      local_228 = (code *)(iVar5 + 0x48197000);
      local_21c = 10;
LAB_ram_4819ec90:
LAB_ram_4819efb6:
      iVar5 = 3;
      goto LAB_ram_4819ecc0;
    default:
      goto switchD_ram_4819eb40_caseD_2;
    case 9:
    case 0x27:
      if ((uVar25 & 0xf) == 0) goto LAB_ram_4819ebe8;
      goto switchD_ram_4819eb40_caseD_2;
    case 0xc:
      uVar25 = uVar25 | 1;
    case 0x2c:
      local_228 = thunk_FUN_ram_48197398;
      local_21c = 8;
      goto LAB_ram_4819ec90;
    case 0x10:
      uVar25 = uVar25 | 1;
    case 0x30:
      iVar5 = 2;
      goto LAB_ram_4819ecc0;
    case 0x15:
    case 0x35:
      uVar25 = uVar25 | 0x200;
      goto LAB_ram_4819ecaa;
    case 0x18:
      local_22c = pbVar16;
      local_224 = (byte *)FUN_ram_481a2ce4(acStack_141 + 1,pbVar21);
      uVar25 = uVar25 | 0x40;
      iVar5 = 1;
      pbVar16 = local_22c;
      goto LAB_ram_4819ecc0;
    case 0x20:
      goto switchD_ram_4819eb40_caseD_20;
    case 0x25:
      if ((uVar25 & 0xf) != 0) goto switchD_ram_4819eb40_caseD_2;
      if (pbVar26[1] == 0x68) {
        uVar25 = uVar25 | 8;
        pbVar26 = pbVar26 + 2;
      }
      else {
        uVar25 = uVar25 | 4;
        pbVar26 = local_224;
      }
      goto LAB_ram_4819ea92;
    case 0x26:
      local_228 = (code *)&LAB_ram_48197394;
      local_21c = 0;
      goto LAB_ram_4819efb6;
    case 0x29:
      if ((uVar25 & 0xf) != 0) goto switchD_ram_4819eb40_caseD_2;
      if (pbVar26[1] == 0x6c) {
        local_224 = pbVar26 + 2;
LAB_ram_4819ebe8:
        uVar25 = uVar25 | 2;
        pbVar26 = local_224;
      }
      else {
        uVar25 = uVar25 | 1;
        pbVar26 = local_224;
      }
      goto LAB_ram_4819ea92;
    case 0x2a:
      if ((uVar25 & 0x8f) != 0) goto switchD_ram_4819eb40_caseD_2;
      puVar11 = (undefined1 *)piVar3;
      if (piVar19 == (int *)0x0) {
        puVar11 = (undefined1 *)((int)piVar3 + -0x10);
        piVar19 = (int *)((int)piVar3 + -0x10);
        *piVar19 = 0;
        *(undefined4 *)((int)piVar3 + -0xc) = 0;
      }
      uVar25 = uVar25 | 0x80;
      piVar3 = (int *)puVar11;
      pbVar26 = local_224;
      goto LAB_ram_4819ea92;
    case 0x2b:
      if ((uVar25 & 0x10) != 0) goto LAB_ram_4819ea10;
      if ((uVar25 & 8) != 0) {
        if (pbVar16 == (byte *)0x0) {
          pbVar21 = pbVar4 + 1;
          if ((int)pbVar4 < local_200) {
            puVar11 = (undefined1 *)aiStack_1c0[(int)pbVar27];
            pbVar4 = pbVar21;
          }
          else {
            puVar11 = (undefined1 *)*local_214[0];
            if (local_200 < 0x20) {
              local_200 = local_200 + 1;
              local_214[0] = local_214[0] + 1;
              aiStack_1c0[iVar5] = (int)puVar11;
              pbVar4 = pbVar21;
            }
            else {
              local_214[0] = local_214[0] + 1;
              pbVar4 = pbVar21;
            }
          }
        }
        else if ((int)pbVar27 < local_200) {
          puVar11 = (undefined1 *)aiStack_1c0[(int)pbVar27];
        }
        else {
          puVar11 = (undefined1 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
        }
        *puVar11 = (char)iVar23;
        goto LAB_ram_4819ea10;
      }
      if ((uVar25 & 4) != 0) {
        if (pbVar16 == (byte *)0x0) {
          pbVar21 = pbVar4 + 1;
          if ((int)pbVar4 < local_200) {
            puVar12 = (undefined2 *)aiStack_1c0[(int)pbVar27];
            pbVar4 = pbVar21;
          }
          else {
            puVar12 = (undefined2 *)*local_214[0];
            if (local_200 < 0x20) {
              local_200 = local_200 + 1;
              local_214[0] = local_214[0] + 1;
              aiStack_1c0[iVar5] = (int)puVar12;
              pbVar4 = pbVar21;
            }
            else {
              local_214[0] = local_214[0] + 1;
              pbVar4 = pbVar21;
            }
          }
        }
        else if ((int)pbVar27 < local_200) {
          puVar12 = (undefined2 *)aiStack_1c0[(int)pbVar27];
        }
        else {
          puVar12 = (undefined2 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
        }
        *puVar12 = (short)iVar23;
        goto LAB_ram_4819ea10;
      }
      if ((uVar25 & 1) == 0) {
        if ((uVar25 & 2) != 0) {
          if (pbVar16 == (byte *)0x0) {
            pbVar21 = pbVar4 + 1;
            if ((int)pbVar4 < local_200) {
              piVar22 = (int *)aiStack_1c0[(int)pbVar27];
              pbVar4 = pbVar21;
            }
            else {
              piVar22 = (int *)*local_214[0];
              if (local_200 < 0x20) {
                local_200 = local_200 + 1;
                local_214[0] = local_214[0] + 1;
                aiStack_1c0[iVar5] = (int)piVar22;
                pbVar4 = pbVar21;
              }
              else {
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
          }
          else if ((int)pbVar27 < local_200) {
            piVar22 = (int *)aiStack_1c0[(int)pbVar27];
          }
          else {
            piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
          }
          *piVar22 = iVar23;
          piVar22[1] = iVar23 >> 0x1f;
          goto LAB_ram_4819ea10;
        }
        if (pbVar16 != (byte *)0x0) goto LAB_ram_4819ee8a;
        if ((int)pbVar4 < local_200) goto LAB_ram_4819eea4;
        if (local_200 < 0x20) {
          local_200 = local_200 + 1;
          piVar22 = (int *)*local_214[0];
          local_214[0] = local_214[0] + 1;
          goto LAB_ram_4819eece;
        }
        local_214[0] = local_214[0] + 1;
        piVar22 = (int *)*piVar22;
        pbVar4 = pbVar4 + 1;
      }
      else if (pbVar16 == (byte *)0x0) {
        if ((int)pbVar4 < local_200) {
LAB_ram_4819eea4:
          piVar22 = (int *)aiStack_1c0[(int)pbVar27];
          pbVar4 = pbVar4 + 1;
        }
        else {
          piVar22 = (int *)*local_214[0];
          if (local_200 < 0x20) {
            local_200 = local_200 + 1;
            local_214[0] = local_214[0] + 1;
LAB_ram_4819eece:
            aiStack_1c0[iVar5] = (int)piVar22;
            pbVar4 = pbVar4 + 1;
          }
          else {
            local_214[0] = local_214[0] + 1;
            pbVar4 = pbVar4 + 1;
          }
        }
      }
      else {
LAB_ram_4819ee8a:
        if ((int)pbVar27 < local_200) {
          piVar22 = (int *)aiStack_1c0[(int)pbVar27];
        }
        else {
          piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
        }
      }
      *piVar22 = iVar23;
      goto LAB_ram_4819ea10;
    case 0x2d:
      uVar25 = uVar25 | 0x220;
LAB_ram_4819ecaa:
      local_228 = thunk_FUN_ram_48197398;
      local_21c = 0x10;
      goto LAB_ram_4819ec90;
    case 0x31:
    case 0x37:
      goto switchD_ram_4819eb40_caseD_31;
    case 0x32:
      iVar5 = 0x49c;
      goto LAB_ram_4819ec9e;
    }
  }
LAB_ram_4819eb6a:
  if ((0 < param_2[1]) || (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 == 0)) {
    if (*(byte *)*param_2 != pbVar21[-1]) goto switchD_ram_4819eb40_caseD_2;
    *param_2 = (int)((byte *)*param_2 + 1);
    param_2[1] = param_2[1] + -1;
    iVar23 = iVar23 + 1;
LAB_ram_4819ea5a:
    local_224 = pbVar21;
    goto LAB_ram_4819ea10;
  }
LAB_ram_4819eba2:
  if ((iVar24 != 0) && ((*(ushort *)(param_2 + 3) & 0x40) == 0)) goto switchD_ram_4819eb40_caseD_2;
LAB_ram_4819ebb0:
  if (piVar19 == (int *)0x0) {
    return -1;
  }
  goto LAB_ram_481a0436;
switchD_ram_4819eb40_caseD_31:
  pbVar26 = local_224;
  if ((uVar25 & 0xf) != 0) goto switchD_ram_4819eb40_caseD_2;
  goto LAB_ram_4819ea92;
switchD_ram_4819eb40_caseD_0:
  uVar25 = uVar25 | 1;
switchD_ram_4819eb40_caseD_20:
  uVar25 = uVar25 | 0x40;
  iVar5 = 0;
LAB_ram_4819ecc0:
  if ((0 < param_2[1]) ||
     (local_22c = pbVar16, iVar15 = FUN_ram_4819e8c6(local_218,param_2), pbVar16 = local_22c,
     iVar15 == 0)) {
    if ((uVar25 & 0x40) == 0) {
      while (((&DAT_ram_4823af31)[*(byte *)*param_2] & 8) != 0) {
        iVar15 = param_2[1];
        iVar23 = iVar23 + 1;
        param_2[1] = iVar15 + -1;
        if (iVar15 + -1 < 1) {
          local_22c = pbVar16;
          iVar15 = FUN_ram_4819e8c6(local_218,param_2);
          pbVar16 = local_22c;
          if (iVar15 != 0) goto LAB_ram_4819eba2;
        }
        else {
          *param_2 = (int)((byte *)*param_2 + 1);
        }
      }
    }
    iVar15 = local_200;
    piVar22 = local_214[0];
    if (iVar5 == 2) {
      if (pbVar20 == (byte *)0x0) {
        pbVar20 = (byte *)0xffffffff;
      }
      local_22c = (byte *)(uVar25 & 0x10);
      if ((uVar25 & 1) == 0) {
        pbVar21 = (byte *)0x0;
        if ((uVar25 & 0x10) == 0) {
          if ((uVar25 & 0x80) == 0) {
            if (pbVar16 == (byte *)0x0) {
              pbVar21 = pbVar4 + 1;
              if ((int)pbVar4 < local_200) {
                pbVar16 = (byte *)aiStack_1c0[(int)pbVar27];
                pbVar4 = pbVar21;
              }
              else if (local_200 < 0x20) {
                local_214[0] = local_214[0] + 1;
                pbVar16 = (byte *)*piVar22;
                local_200 = local_200 + 1;
                aiStack_1c0[iVar15] = (int)pbVar16;
                pbVar4 = pbVar21;
              }
              else {
                pbVar16 = (byte *)*local_214[0];
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
            else if ((int)pbVar27 < local_200) {
              pbVar16 = (byte *)aiStack_1c0[(int)pbVar27];
            }
            else {
              pbVar16 = (byte *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
            }
            pbVar21 = (byte *)0x0;
            piVar22 = (int *)0x0;
            pbVar26 = pbVar16;
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              pbVar21 = pbVar4 + 1;
              if ((int)pbVar4 < local_200) {
                piVar22 = (int *)aiStack_1c0[(int)pbVar27];
                pbVar4 = pbVar21;
              }
              else {
                piVar22 = (int *)*local_214[0];
                if (local_200 < 0x20) {
                  local_200 = local_200 + 1;
                  local_214[0] = local_214[0] + 1;
                  aiStack_1c0[iVar15] = (int)piVar22;
                  pbVar4 = pbVar21;
                }
                else {
                  local_214[0] = local_214[0] + 1;
                  pbVar4 = pbVar21;
                }
              }
            }
            else if ((int)pbVar27 < local_200) {
              piVar22 = (int *)aiStack_1c0[(int)pbVar27];
            }
            else {
              piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
            }
            if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
            pbVar16 = (byte *)thunk_FUN_ram_4ff2070c(0x20);
            if (pbVar16 == (byte *)0x0) goto LAB_ram_4819ebb0;
            uVar2 = *(ushort *)((int)piVar19 + 6);
            uVar25 = (uint)*(ushort *)(piVar19 + 1);
            *piVar22 = (int)pbVar16;
            if (uVar25 <= uVar2) {
              if (0xfff6 < uVar25) goto LAB_ram_481a0436;
              iVar5 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
              if (iVar5 == 0) goto LAB_ram_481a0436;
              *piVar19 = iVar5;
              *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
            }
            *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
            *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
            pbVar21 = (byte *)0x20;
            pbVar26 = pbVar16;
          }
          while (pbVar13 = (byte *)*param_2, pbVar27 = pbVar26,
                ((&DAT_ram_4823af31)[*pbVar13] & 8) == 0) {
            pbVar27 = pbVar26 + 1;
            param_2[1] = param_2[1] + -1;
            *param_2 = (int)(pbVar13 + 1);
            *pbVar26 = *pbVar13;
            if ((piVar22 != (int *)0x0) && (iVar5 = -(int)pbVar16, pbVar21 <= pbVar27 + iVar5)) {
              pbVar21 = (byte *)((int)pbVar21 << 1);
              pbVar16 = (byte *)thunk_FUN_ram_4ff20790(pbVar16,pbVar21);
              if (pbVar16 == (byte *)0x0) goto LAB_ram_4819ebb0;
              pbVar27 = pbVar16 + (int)(pbVar27 + iVar5);
              *piVar22 = (int)pbVar16;
            }
            pbVar20 = pbVar20 + -1;
            if ((pbVar20 == (byte *)0x0) ||
               ((pbVar26 = pbVar27, param_2[1] < 1 &&
                (local_22c = pbVar16, iVar5 = FUN_ram_4819e8c6(local_218,param_2),
                pbVar16 = local_22c, iVar5 != 0)))) break;
          }
          *pbVar27 = 0;
          pbVar27 = pbVar27 + -(int)pbVar16;
          if ((piVar22 != (int *)0x0) &&
             ((pbVar27 + 1 < pbVar21 && (iVar5 = thunk_FUN_ram_4ff20790(*piVar22), iVar5 != 0)))) {
            *piVar22 = iVar5;
          }
LAB_ram_4819f9d2:
          iVar24 = iVar24 + 1;
          iVar23 = iVar23 + (int)pbVar27;
          goto LAB_ram_4819ea10;
        }
        while (((&DAT_ram_4823af31)[*(byte *)*param_2] & 8) == 0) {
          iVar5 = param_2[1];
          pbVar21 = pbVar21 + 1;
          param_2[1] = iVar5 + -1;
          *param_2 = (int)((byte *)*param_2 + 1);
          if ((pbVar21 == pbVar20) ||
             ((iVar5 + -1 < 1 && (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 != 0)))) break;
        }
        goto LAB_ram_4819f29e;
      }
      if ((byte *)(uVar25 & 0x10) == (byte *)0x0) {
        if ((uVar25 & 0x80) == 0) {
          if (pbVar16 == (byte *)0x0) {
            pbVar21 = pbVar4 + 1;
            if ((int)pbVar4 < local_200) {
              puVar9 = (uint *)aiStack_1c0[(int)pbVar27];
              pbVar4 = pbVar21;
            }
            else {
              puVar9 = (uint *)*local_214[0];
              if (local_200 < 0x20) {
                local_200 = local_200 + 1;
                local_214[0] = local_214[0] + 1;
                aiStack_1c0[iVar15] = (int)puVar9;
                pbVar4 = pbVar21;
              }
              else {
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
          }
          else if ((int)pbVar27 < local_200) {
            puVar9 = (uint *)aiStack_1c0[(int)pbVar27];
          }
          else {
            puVar9 = (uint *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
          }
          uVar25 = 0;
          puVar8 = (uint *)0x0;
          piVar22 = (int *)0x0;
        }
        else {
          if (pbVar16 == (byte *)0x0) {
            pbVar21 = pbVar4 + 1;
            if ((int)pbVar4 < local_200) {
              piVar22 = (int *)aiStack_1c0[(int)pbVar27];
              pbVar4 = pbVar21;
            }
            else {
              piVar22 = (int *)*local_214[0];
              if (local_200 < 0x20) {
                local_214[0] = local_214[0] + 1;
                local_200 = local_200 + 1;
                aiStack_1c0[iVar15] = (int)piVar22;
                pbVar4 = pbVar21;
              }
              else {
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
          }
          else if ((int)pbVar27 < local_200) {
            piVar22 = (int *)aiStack_1c0[(int)pbVar27];
          }
          else {
            piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
          }
          if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
          puVar8 = (uint *)thunk_FUN_ram_4ff2070c(0x80);
          if (puVar8 == (uint *)0x0) goto LAB_ram_4819ed56;
          uVar2 = *(ushort *)((int)piVar19 + 6);
          uVar25 = (uint)*(ushort *)(piVar19 + 1);
          *piVar22 = (int)puVar8;
          if (uVar25 <= uVar2) {
            if (0xfff6 < uVar25) {
LAB_ram_4819ed56:
              iVar24 = -1;
              goto switchD_ram_4819eb40_caseD_2;
            }
            iVar5 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
            if (iVar5 == 0) goto LAB_ram_4819ed56;
            *piVar19 = iVar5;
            *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
          }
          *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
          *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
          uVar25 = 0x20;
          puVar9 = puVar8;
        }
      }
      else {
        uVar25 = 0;
        puVar8 = (uint *)0x0;
        piVar22 = (int *)0x0;
        puVar9 = &local_1fc;
      }
      uVar17 = 0;
      do {
        if ((((&DAT_ram_4823af31)[*(byte *)*param_2] & 8) != 0) || (pbVar20 == (byte *)0x0))
        goto LAB_ram_4819fb36;
        local_240[4] = uVar17;
        uVar17 = FUN_ram_4819be78();
        if (uVar17 == local_240[4]) goto LAB_ram_4819eba2;
        pbVar21 = (byte *)*param_2;
        uVar17 = local_240[4] + 1;
        abStack_1e9[local_240[4] + 1] = *pbVar21;
        *param_2 = (int)(pbVar21 + 1);
        param_2[1] = param_2[1] + -1;
        if ((local_220 != 3) || (local_1f0 != 4)) {
          memset(&local_1f0,0,8);
        }
        local_220 = FUN_ram_481a3176(local_218,puVar9,abStack_1e9 + 1,uVar17,&local_1f0);
        if (local_220 == 0xffffffff) goto LAB_ram_4819eba2;
        if (local_220 == 0) {
          *puVar9 = 0;
LAB_ram_4819fb24:
          iVar5 = FUN_ram_481a31b4(*puVar9);
          if (iVar5 != 0) goto LAB_ram_4819fb32;
          iVar23 = iVar23 + uVar17;
          if ((local_220 != 3) || (local_1f0 != 4)) {
            pbVar20 = pbVar20 + -1;
          }
          uVar17 = 0;
          if (local_22c == (byte *)0x0) {
            puVar9 = puVar9 + 1;
            if (piVar22 == (int *)0x0) {
              uVar17 = 0;
            }
            else {
              iVar5 = (int)puVar9 - (int)puVar8;
              uVar17 = 0;
              if (uVar25 <= (uint)(iVar5 >> 2)) {
                local_240[4] = 0;
                puVar8 = (uint *)thunk_FUN_ram_4ff20790(puVar8,uVar25 << 3);
                if (puVar8 == (uint *)0x0) goto LAB_ram_4819ed56;
                puVar9 = (uint *)((int)puVar8 + iVar5);
                *piVar22 = (int)puVar8;
                uVar25 = uVar25 << 1;
                uVar17 = local_240[4];
              }
            }
          }
        }
        else if (local_220 != 0xfffffffe) goto LAB_ram_4819fb24;
      } while ((0 < param_2[1]) ||
              (local_240[4] = uVar17, iVar5 = FUN_ram_4819e8c6(local_218,param_2),
              uVar17 = local_240[4], iVar5 == 0));
      if (local_240[4] == 0) goto LAB_ram_4819fb36;
    }
    else {
      if (iVar5 == 3) {
        pbVar26 = (byte *)0x0;
        if ((byte *)0x26 < pbVar20 + -1) {
          pbVar26 = pbVar20 + -0x27;
          pbVar20 = (byte *)0x27;
        }
        uVar25 = uVar25 | 0xd80;
        iVar5 = 0;
        pbVar21 = abStack_1e9 + 1;
        do {
          pbVar13 = (byte *)*param_2;
          bVar1 = *pbVar13;
          if (bVar1 < 0x3a) {
            if (bVar1 < 0x2b) break;
            switch(bVar1) {
            case 0x2b:
            case 0x2d:
              if ((uVar25 & 0x80) != 0) {
                uVar25 = uVar25 & 0xffffff7f;
                goto LAB_ram_481a00ae;
              }
            default:
              goto switchD_ram_4819ffc2_caseD_2c;
            case 0x30:
              if (-1 < (int)(uVar25 << 0x14)) goto LAB_ram_481a00ae;
              if (local_21c == 0) {
                uVar25 = uVar25 | 0x200;
                local_21c = 8;
              }
              if ((uVar25 & 0x400) != 0) {
                uVar25 = uVar25 & 0xfffffa7f;
                goto LAB_ram_481a00ae;
              }
              uVar25 = uVar25 & 0xfffffc7f;
              if (pbVar26 != (byte *)0x0) {
                pbVar26 = pbVar26 + -1;
                pbVar20 = pbVar20 + 1;
              }
              iVar5 = iVar5 + 1;
              goto LAB_ram_481a00c4;
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
              local_21c = (int)*(short *)(&UNK_ram_4823ba70 + local_21c * 2);
              break;
            case 0x38:
            case 0x39:
              iVar15 = 8;
              local_21c = (int)*(short *)(&UNK_ram_4823ba70 + local_21c * 2);
LAB_ram_481a0122:
              if (local_21c <= iVar15) goto switchD_ram_4819ffc2_caseD_2c;
            }
            uVar25 = uVar25 & 0xfffff47f;
          }
          else {
            if (bVar1 < 0x67) {
              if (bVar1 < 0x61) {
                if (0x46 < bVar1) {
                  bVar14 = 0x58;
                  goto LAB_ram_481a0066;
                }
                if (bVar1 < 0x41) break;
              }
              iVar15 = 10;
              goto LAB_ram_481a0122;
            }
            bVar14 = 0x78;
LAB_ram_481a0066:
            if ((bVar1 != bVar14) || ((uVar25 & 0x600) != 0x200)) break;
            uVar25 = uVar25 & 0xfffffdff | 0x500;
            local_21c = 0x10;
          }
LAB_ram_481a00ae:
          *pbVar21 = bVar1;
          pbVar21 = pbVar21 + 1;
LAB_ram_481a00c4:
          iVar15 = param_2[1];
          param_2[1] = iVar15 + -1;
          if (iVar15 + -1 < 1) {
            local_22c = pbVar16;
            iVar15 = FUN_ram_4819e8c6(local_218,param_2);
            pbVar16 = local_22c;
            if (iVar15 != 0) break;
          }
          else {
            *param_2 = (int)(pbVar13 + 1);
          }
          pbVar20 = pbVar20 + -1;
        } while (pbVar20 != (byte *)0x0);
switchD_ram_4819ffc2_caseD_2c:
        if ((uVar25 & 0x100) != 0) {
          if (abStack_1e9 + 1 < pbVar21) {
            local_22c = pbVar16;
            FUN_ram_4819e82e(local_218,pbVar21[-1],param_2);
            pbVar21 = pbVar21 + -1;
            pbVar16 = local_22c;
          }
          if (pbVar21 == abStack_1e9 + 1) goto switchD_ram_4819eb40_caseD_2;
        }
        local_22c = pbVar16;
        if ((uVar25 & 0x10) == 0) {
          *pbVar21 = 0;
          uVar10 = (*local_228)(local_218,abStack_1e9 + 1,0,local_21c,pbVar16,local_228);
          iVar15 = local_200;
          piVar22 = local_214[0];
          if ((uVar25 & 0x20) == 0) {
            if ((uVar25 & 8) == 0) {
              if ((uVar25 & 4) == 0) {
                if ((uVar25 & 1) != 0) goto LAB_ram_481a0048;
                if ((uVar25 & 2) == 0) {
                  if (local_22c == (byte *)0x0) {
                    pbVar16 = pbVar4 + 1;
                    if ((int)pbVar4 < local_200) {
                      puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                      pbVar4 = pbVar16;
                    }
                    else if (local_200 < 0x20) {
                      local_214[0] = local_214[0] + 1;
                      puVar18 = (undefined4 *)*piVar22;
                      local_200 = local_200 + 1;
                      aiStack_1c0[iVar15] = (int)puVar18;
                      pbVar4 = pbVar16;
                    }
                    else {
                      puVar18 = (undefined4 *)*local_214[0];
                      local_214[0] = local_214[0] + 1;
                      pbVar4 = pbVar16;
                    }
                  }
                  else if ((int)pbVar27 < local_200) {
                    puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                  }
                  else {
                    puVar18 = (undefined4 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
                  }
                  *puVar18 = uVar10;
                }
                else {
                  if (local_228 == thunk_FUN_ram_48197398) {
                    uVar28 = thunk_FUN_ram_481a2fd8(local_218,abStack_1e9 + 1,0,local_21c);
                  }
                  else {
                    uVar28 = thunk_FUN_ram_481a2e2a(local_218,abStack_1e9 + 1,0,local_21c);
                  }
                  piVar22 = local_214[0];
                  pbVar16 = (byte *)uVar28;
                  if (local_22c == (byte *)0x0) {
                    pbVar20 = pbVar4 + 1;
                    if ((int)pbVar4 < iVar15) {
                      puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                      pbVar4 = pbVar20;
                    }
                    else if (iVar15 < 0x20) {
                      local_214[0] = local_214[0] + 1;
                      puVar18 = (undefined4 *)*piVar22;
                      local_200 = iVar15 + 1;
                      aiStack_1c0[iVar15] = (int)puVar18;
                      pbVar4 = pbVar20;
                    }
                    else {
                      puVar18 = (undefined4 *)*local_214[0];
                      local_214[0] = local_214[0] + 1;
                      pbVar4 = pbVar20;
                    }
                  }
                  else if ((int)pbVar27 < iVar15) {
                    puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                  }
                  else {
                    local_22c = pbVar16;
                    puVar18 = (undefined4 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
                    pbVar16 = local_22c;
                  }
                  *puVar18 = pbVar16;
                  puVar18[1] = (int)((ulonglong)uVar28 >> 0x20);
                }
              }
              else {
                if (local_22c == (byte *)0x0) {
                  pbVar16 = pbVar4 + 1;
                  if ((int)pbVar4 < local_200) {
                    puVar12 = (undefined2 *)aiStack_1c0[(int)pbVar27];
                    pbVar4 = pbVar16;
                  }
                  else {
                    puVar12 = (undefined2 *)*local_214[0];
                    if (local_200 < 0x20) {
                      local_214[0] = local_214[0] + 1;
                      local_200 = local_200 + 1;
                      aiStack_1c0[iVar15] = (int)puVar12;
                      pbVar4 = pbVar16;
                    }
                    else {
                      local_214[0] = local_214[0] + 1;
                      pbVar4 = pbVar16;
                    }
                  }
                }
                else if ((int)pbVar27 < local_200) {
                  puVar12 = (undefined2 *)aiStack_1c0[(int)pbVar27];
                }
                else {
                  puVar12 = (undefined2 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
                }
                *puVar12 = (short)uVar10;
              }
            }
            else {
              if (local_22c == (byte *)0x0) {
                pbVar16 = pbVar4 + 1;
                if ((int)pbVar4 < local_200) {
                  puVar11 = (undefined1 *)aiStack_1c0[(int)pbVar27];
                  pbVar4 = pbVar16;
                }
                else {
                  puVar11 = (undefined1 *)*local_214[0];
                  if (local_200 < 0x20) {
                    local_214[0] = local_214[0] + 1;
                    local_200 = local_200 + 1;
                    aiStack_1c0[iVar15] = (int)puVar11;
                    pbVar4 = pbVar16;
                  }
                  else {
                    local_214[0] = local_214[0] + 1;
                    pbVar4 = pbVar16;
                  }
                }
              }
              else if ((int)pbVar27 < local_200) {
                puVar11 = (undefined1 *)aiStack_1c0[(int)pbVar27];
              }
              else {
                puVar11 = (undefined1 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
              }
              *puVar11 = (char)uVar10;
            }
          }
          else {
LAB_ram_481a0048:
            if (local_22c == (byte *)0x0) {
              pbVar16 = pbVar4 + 1;
              if ((int)pbVar4 < local_200) {
                puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                pbVar4 = pbVar16;
              }
              else {
                puVar18 = (undefined4 *)*local_214[0];
                if (local_200 < 0x20) {
                  local_214[0] = local_214[0] + 1;
                  local_200 = local_200 + 1;
                  aiStack_1c0[iVar15] = (int)puVar18;
                  pbVar4 = pbVar16;
                }
                else {
                  local_214[0] = local_214[0] + 1;
                  pbVar4 = pbVar16;
                }
              }
            }
            else if ((int)pbVar27 < local_200) {
              puVar18 = (undefined4 *)aiStack_1c0[(int)pbVar27];
            }
            else {
              puVar18 = (undefined4 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
            }
            *puVar18 = uVar10;
          }
          iVar24 = iVar24 + 1;
        }
        pbVar21 = pbVar21 + (iVar5 - (int)(abStack_1e9 + 1));
LAB_ram_4819f29e:
        iVar23 = iVar23 + (int)pbVar21;
        goto LAB_ram_4819ea10;
      }
      local_22c = (byte *)(uVar25 & 0x10);
      if (iVar5 == 1) {
        if (pbVar20 == (byte *)0x0) {
          pbVar20 = (byte *)0xffffffff;
        }
        if ((uVar25 & 1) != 0) {
          if ((uVar25 & 0x10) == 0) {
            if ((uVar25 & 0x80) == 0) {
              if (pbVar16 == (byte *)0x0) {
                pbVar21 = pbVar4 + 1;
                if ((int)pbVar4 < local_200) {
                  puVar8 = (uint *)aiStack_1c0[(int)pbVar27];
                  pbVar4 = pbVar21;
                }
                else {
                  puVar8 = (uint *)*local_214[0];
                  local_214[0] = local_214[0] + 1;
                  pbVar4 = pbVar21;
                  if (local_200 < 0x20) {
                    aiStack_1c0[local_200] = (int)puVar8;
                    local_200 = local_200 + 1;
                  }
                }
              }
              else if ((int)pbVar27 < local_200) {
                puVar8 = (uint *)aiStack_1c0[(int)pbVar27];
              }
              else {
                puVar8 = (uint *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
              }
              uVar25 = 0;
              puVar9 = (uint *)0x0;
              piVar22 = (int *)0x0;
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                pbVar21 = pbVar4 + 1;
                if ((int)pbVar4 < local_200) {
                  piVar22 = (int *)aiStack_1c0[(int)pbVar27];
                  pbVar4 = pbVar21;
                }
                else {
                  piVar22 = (int *)*local_214[0];
                  if (local_200 < 0x20) {
                    local_214[0] = local_214[0] + 1;
                    local_200 = local_200 + 1;
                    aiStack_1c0[iVar15] = (int)piVar22;
                    pbVar4 = pbVar21;
                  }
                  else {
                    local_214[0] = local_214[0] + 1;
                    pbVar4 = pbVar21;
                  }
                }
              }
              else if ((int)pbVar27 < local_200) {
                piVar22 = (int *)aiStack_1c0[(int)pbVar27];
              }
              else {
                piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
              }
              if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
              puVar8 = (uint *)thunk_FUN_ram_4ff2070c(0x80);
              if (puVar8 == (uint *)0x0) goto LAB_ram_4819ed56;
              uVar2 = *(ushort *)((int)piVar19 + 6);
              uVar25 = (uint)*(ushort *)(piVar19 + 1);
              *piVar22 = (int)puVar8;
              if (uVar25 <= uVar2) {
                if (0xfff6 < uVar25) goto LAB_ram_4819ed56;
                iVar5 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
                if (iVar5 == 0) goto LAB_ram_4819ed56;
                *piVar19 = iVar5;
                *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
              }
              *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
              *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
              uVar25 = 0x20;
              puVar9 = puVar8;
            }
          }
          else {
            uVar25 = 0;
            puVar9 = (uint *)0x0;
            piVar22 = (int *)0x0;
            puVar8 = &local_1fc;
          }
          uVar17 = 0;
          do {
            local_240[4] = uVar17;
            uVar17 = FUN_ram_4819be78();
            if (uVar17 == local_240[4]) goto LAB_ram_4819eba2;
            pbVar21 = (byte *)*param_2;
            uVar17 = local_240[4] + 1;
            abStack_1e9[local_240[4] + 1] = *pbVar21;
            *param_2 = (int)(pbVar21 + 1);
            param_2[1] = param_2[1] + -1;
            if ((local_220 != 3) || (local_1f8[0] != 4)) {
              memset(local_1f8,0,8);
            }
            local_220 = FUN_ram_481a3176(local_218,puVar8,abStack_1e9 + 1,uVar17,local_1f8);
            if (local_220 == 0xffffffff) goto LAB_ram_4819eba2;
            if (local_220 == 0) {
              *puVar8 = 0;
LAB_ram_4819f562:
              uVar7 = *puVar8;
              if (uVar7 != 0xffffffff) {
                local_240[4] = uVar7;
                memset(&local_1f0,0,8);
                iVar5 = (**(code **)(PTR_DAT_ram_4823b50c_ram_4ff47fc0 + 0xe0))
                                  (local_218,local_204,local_240[4],&local_1f0);
                uVar7 = 0;
                if (iVar5 == 1) {
                  uVar7 = (uint)local_204[0];
                }
              }
              if (acStack_141[uVar7 + 1] == '\0') goto LAB_ram_4819f5b8;
              iVar23 = iVar23 + uVar17;
              if ((local_220 != 3) || (local_1f8[0] != 4)) {
                pbVar20 = pbVar20 + -1;
              }
              if ((local_22c == (byte *)0x0) && (puVar8 = puVar8 + 1, piVar22 != (int *)0x0)) {
                iVar5 = (int)puVar8 - (int)puVar9;
                uVar17 = 0;
                if (uVar25 <= (uint)(iVar5 >> 2)) {
                  local_240[4] = 0;
                  puVar9 = (uint *)thunk_FUN_ram_4ff20790(puVar9,uVar25 << 3);
                  if (puVar9 == (uint *)0x0) goto LAB_ram_4819ed56;
                  puVar8 = (uint *)((int)puVar9 + iVar5);
                  *piVar22 = (int)puVar9;
                  uVar25 = uVar25 << 1;
                  uVar17 = local_240[4];
                }
              }
              else {
                uVar17 = 0;
              }
            }
            else if (local_220 != 0xfffffffe) goto LAB_ram_4819f562;
            if ((param_2[1] < 1) &&
               (local_240[4] = uVar17, iVar5 = FUN_ram_4819e8c6(local_218,param_2),
               uVar17 = local_240[4], iVar5 != 0)) {
              if (local_240[4] != 0) goto LAB_ram_4819eba2;
              break;
            }
          } while (pbVar20 != (byte *)0x0);
          goto LAB_ram_4819f5bc;
        }
        pbVar21 = (byte *)0x0;
        if ((uVar25 & 0x10) != 0) {
          while (acStack_141[*(byte *)*param_2 + 1] != '\0') {
            iVar5 = param_2[1];
            pbVar21 = pbVar21 + 1;
            param_2[1] = iVar5 + -1;
            *param_2 = (int)((byte *)*param_2 + 1);
            if ((pbVar21 == pbVar20) ||
               ((iVar5 + -1 < 1 && (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 != 0))))
            goto LAB_ram_4819f7c6;
          }
          if (pbVar21 == (byte *)0x0) goto switchD_ram_4819eb40_caseD_2;
LAB_ram_4819f7c6:
          iVar23 = iVar23 + (int)pbVar21;
          goto LAB_ram_4819ea10;
        }
        if ((uVar25 & 0x80) == 0) {
          if (pbVar16 == (byte *)0x0) {
            pbVar21 = pbVar4 + 1;
            if ((int)pbVar4 < local_200) {
              pbVar16 = (byte *)aiStack_1c0[(int)pbVar27];
              pbVar4 = pbVar21;
            }
            else {
              pbVar16 = (byte *)*local_214[0];
              if (local_200 < 0x20) {
                local_200 = local_200 + 1;
                local_214[0] = local_214[0] + 1;
                aiStack_1c0[iVar15] = (int)pbVar16;
                pbVar4 = pbVar21;
              }
              else {
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
          }
          else if ((int)pbVar27 < local_200) {
            pbVar16 = (byte *)aiStack_1c0[(int)pbVar27];
          }
          else {
            pbVar16 = (byte *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
          }
          pbVar21 = (byte *)0x0;
          piVar22 = (int *)0x0;
          pbVar26 = pbVar16;
        }
        else {
          if (pbVar16 == (byte *)0x0) {
            pbVar21 = pbVar4 + 1;
            if ((int)pbVar4 < local_200) {
              piVar22 = (int *)aiStack_1c0[(int)pbVar27];
              pbVar4 = pbVar21;
            }
            else {
              piVar22 = (int *)*local_214[0];
              if (local_200 < 0x20) {
                local_200 = local_200 + 1;
                local_214[0] = local_214[0] + 1;
                aiStack_1c0[iVar15] = (int)piVar22;
                pbVar4 = pbVar21;
              }
              else {
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
              }
            }
          }
          else if ((int)pbVar27 < local_200) {
            piVar22 = (int *)aiStack_1c0[(int)pbVar27];
          }
          else {
            piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
          }
          if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
          pbVar16 = (byte *)thunk_FUN_ram_4ff2070c(0x20);
          if (pbVar16 == (byte *)0x0) goto LAB_ram_4819ebb0;
          uVar2 = *(ushort *)((int)piVar19 + 6);
          uVar25 = (uint)*(ushort *)(piVar19 + 1);
          *piVar22 = (int)pbVar16;
          if (uVar25 <= uVar2) {
            if (0xfff6 < uVar25) goto LAB_ram_481a0436;
            iVar5 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
            if (iVar5 == 0) goto LAB_ram_481a0436;
            *piVar19 = iVar5;
            *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
          }
          *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
          *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
          pbVar21 = (byte *)0x20;
          pbVar26 = pbVar16;
        }
        do {
          pbVar27 = (byte *)*param_2;
          if (acStack_141[*pbVar27 + 1] == '\0') {
LAB_ram_4819f86a:
            pbVar27 = pbVar26 + -(int)pbVar16;
            pbVar13 = pbVar26;
            if (pbVar26 != pbVar16) goto LAB_ram_4819f9ac;
            goto switchD_ram_4819eb40_caseD_2;
          }
          pbVar13 = pbVar26 + 1;
          param_2[1] = param_2[1] + -1;
          *param_2 = (int)(pbVar27 + 1);
          *pbVar26 = *pbVar27;
          if ((piVar22 != (int *)0x0) && (iVar5 = -(int)pbVar16, pbVar21 <= pbVar13 + iVar5)) {
            pbVar21 = (byte *)((int)pbVar21 << 1);
            pbVar16 = (byte *)thunk_FUN_ram_4ff20790(pbVar16,pbVar21);
            if (pbVar16 == (byte *)0x0) goto LAB_ram_4819ebb0;
            pbVar13 = pbVar16 + (int)(pbVar13 + iVar5);
            *piVar22 = (int)pbVar16;
          }
          pbVar20 = pbVar20 + -1;
          pbVar26 = pbVar13;
          if (pbVar20 == (byte *)0x0) goto LAB_ram_4819f86a;
        } while ((0 < param_2[1]) || (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 == 0));
        if (pbVar13 != pbVar16) {
          pbVar27 = pbVar13 + -(int)pbVar16;
LAB_ram_4819f9ac:
          *pbVar13 = 0;
          if (((piVar22 != (int *)0x0) && (pbVar27 + 1 < pbVar21)) &&
             (iVar5 = thunk_FUN_ram_4ff20790(*piVar22), iVar5 != 0)) {
            *piVar22 = iVar5;
          }
          goto LAB_ram_4819f9d2;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          pbVar20 = (byte *)0x1;
        }
        if ((uVar25 & 1) != 0) {
          if ((uVar25 & 0x10) == 0) {
            if ((uVar25 & 0x80) == 0) {
              if (pbVar16 == (byte *)0x0) {
                pbVar21 = pbVar4 + 1;
                if ((int)pbVar4 < local_200) {
                  puVar6 = (undefined4 *)aiStack_1c0[(int)pbVar27];
                  pbVar4 = pbVar21;
                }
                else {
                  puVar6 = (undefined4 *)*local_214[0];
                  local_214[0] = local_214[0] + 1;
                  pbVar4 = pbVar21;
                  if (local_200 < 0x20) {
                    aiStack_1c0[local_200] = (int)puVar6;
                    local_200 = local_200 + 1;
                  }
                }
              }
              else if ((int)pbVar27 < local_200) {
                puVar6 = (undefined4 *)aiStack_1c0[(int)pbVar27];
              }
              else {
                puVar6 = (undefined4 *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
              }
              uVar25 = 0;
              puVar18 = (undefined4 *)0x0;
              piVar22 = (int *)0x0;
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                pbVar21 = pbVar4 + 1;
                if ((int)pbVar4 < local_200) {
                  piVar22 = (int *)aiStack_1c0[(int)pbVar27];
                  pbVar4 = pbVar21;
                }
                else {
                  piVar22 = (int *)*local_214[0];
                  if (local_200 < 0x20) {
                    local_214[0] = local_214[0] + 1;
                    local_200 = local_200 + 1;
                    aiStack_1c0[iVar15] = (int)piVar22;
                    pbVar4 = pbVar21;
                  }
                  else {
                    local_214[0] = local_214[0] + 1;
                    pbVar4 = pbVar21;
                  }
                }
              }
              else if ((int)pbVar27 < local_200) {
                piVar22 = (int *)aiStack_1c0[(int)pbVar27];
              }
              else {
                piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
              }
              if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
              puVar6 = (undefined4 *)thunk_FUN_ram_4ff2070c(0x80);
              if (puVar6 == (undefined4 *)0x0) goto LAB_ram_4819ed56;
              uVar2 = *(ushort *)((int)piVar19 + 6);
              uVar25 = (uint)*(ushort *)(piVar19 + 1);
              *piVar22 = (int)puVar6;
              if (uVar25 <= uVar2) {
                if (0xfff6 < uVar25) goto LAB_ram_4819ed56;
                iVar5 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
                if (iVar5 == 0) goto LAB_ram_4819ed56;
                *piVar19 = iVar5;
                *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
              }
              *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
              *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
              uVar25 = 0x20;
              puVar18 = puVar6;
            }
          }
          else {
            uVar25 = 0;
            puVar18 = (undefined4 *)0x0;
            piVar22 = (int *)0x0;
            puVar6 = (undefined4 *)0x0;
          }
          uVar17 = 0;
          do {
            uVar7 = FUN_ram_4819be78();
            if (uVar7 == uVar17) goto LAB_ram_4819eba2;
            pbVar21 = (byte *)*param_2;
            abStack_1e9[uVar17 + 1] = *pbVar21;
            *param_2 = (int)(pbVar21 + 1);
            param_2[1] = param_2[1] + -1;
            if ((local_220 != 3) || (uVar7 = uVar17 + 1, local_1f0 != 4)) {
              local_220 = uVar17 + 1;
              memset(&local_1f0,0,8);
              uVar7 = local_220;
            }
            local_240[4] = uVar7;
            local_220 = FUN_ram_481a3176(local_218,puVar6,abStack_1e9 + 1,uVar7,&local_1f0);
            if (local_220 == 0xffffffff) goto LAB_ram_4819eba2;
            if (local_220 == 0) {
              if (local_22c == (byte *)0x0) {
                *puVar6 = 0;
              }
LAB_ram_4819f140:
              pbVar20 = pbVar20 + -1;
LAB_ram_4819f1ea:
              iVar23 = iVar23 + local_240[4];
              if (local_22c == (byte *)0x0) {
                if ((piVar22 != (int *)0x0) &&
                   (iVar5 = (int)puVar6 - (int)puVar18, uVar25 <= (uint)(iVar5 >> 2))) {
                  puVar18 = (undefined4 *)thunk_FUN_ram_4ff20790(puVar18,uVar25 << 3);
                  if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4819ed56;
                  puVar6 = (undefined4 *)((int)puVar18 + iVar5);
                  *piVar22 = (int)puVar18;
                  uVar25 = uVar25 << 1;
                }
                puVar6 = puVar6 + 1;
              }
              uVar17 = 0;
            }
            else {
              uVar17 = local_240[4];
              if (local_220 != 0xfffffffe) {
                if ((local_220 != 3) || (local_1f0 != 4)) goto LAB_ram_4819f140;
                goto LAB_ram_4819f1ea;
              }
            }
            if ((param_2[1] < 1) && (iVar5 = FUN_ram_4819e8c6(local_218,param_2), iVar5 != 0)) {
              if (uVar17 != 0) goto LAB_ram_4819eba2;
              break;
            }
          } while (pbVar20 != (byte *)0x0);
          if (((piVar22 != (int *)0x0) && ((uint)((int)puVar6 - (int)puVar18 >> 2) < uVar25)) &&
             (iVar5 = thunk_FUN_ram_4ff20790(*piVar22), iVar5 != 0)) {
            *piVar22 = iVar5;
          }
          iVar24 = iVar24 + (uint)(local_22c == (byte *)0x0);
          goto LAB_ram_4819ea10;
        }
        if ((uVar25 & 0x10) == 0) {
          if ((uVar25 & 0x80) == 0) {
            if (pbVar16 == (byte *)0x0) {
              pbVar21 = pbVar4 + 1;
              if ((int)pbVar4 < local_200) {
                iVar5 = aiStack_1c0[(int)pbVar27];
                pbVar4 = pbVar21;
              }
              else {
                iVar5 = *local_214[0];
                local_214[0] = local_214[0] + 1;
                pbVar4 = pbVar21;
                if (local_200 < 0x20) {
                  aiStack_1c0[local_200] = iVar5;
                  local_200 = local_200 + 1;
                }
              }
            }
            else if ((int)pbVar27 < local_200) {
              iVar5 = aiStack_1c0[(int)pbVar27];
            }
            else {
              iVar5 = FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
            }
            piVar22 = (int *)0x0;
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              pbVar21 = pbVar4 + 1;
              if ((int)pbVar4 < local_200) {
                piVar22 = (int *)aiStack_1c0[(int)pbVar27];
                pbVar4 = pbVar21;
              }
              else {
                piVar22 = (int *)*local_214[0];
                if (local_200 < 0x20) {
                  local_200 = local_200 + 1;
                  local_214[0] = local_214[0] + 1;
                  aiStack_1c0[iVar15] = (int)piVar22;
                  pbVar4 = pbVar21;
                }
                else {
                  local_214[0] = local_214[0] + 1;
                  pbVar4 = pbVar21;
                }
              }
            }
            else if ((int)pbVar27 < local_200) {
              piVar22 = (int *)aiStack_1c0[(int)pbVar27];
            }
            else {
              piVar22 = (int *)FUN_ram_4819e7ee(pbVar27,local_214,&local_200);
            }
            if (piVar22 == (int *)0x0) goto switchD_ram_4819eb40_caseD_2;
            iVar5 = thunk_FUN_ram_4ff2070c(pbVar20);
            if (iVar5 == 0) goto LAB_ram_4819ebb0;
            uVar2 = *(ushort *)((int)piVar19 + 6);
            uVar25 = (uint)*(ushort *)(piVar19 + 1);
            *piVar22 = iVar5;
            if (uVar25 <= uVar2) {
              if (0xfff6 < uVar25) goto LAB_ram_481a0436;
              iVar15 = thunk_FUN_ram_4ff20790(*piVar19,(uVar25 + 8) * 4);
              if (iVar15 == 0) goto LAB_ram_481a0436;
              *piVar19 = iVar15;
              *(short *)(piVar19 + 1) = (short)(uVar25 + 8);
            }
            *(ushort *)((int)piVar19 + 6) = uVar2 + 1;
            *(int **)(*piVar19 + (uint)uVar2 * 4) = piVar22;
          }
          pbVar27 = (byte *)FUN_ram_4819e912(local_218,iVar5,1,pbVar20,param_2);
          if (pbVar27 != (byte *)0x0) {
            if (((piVar22 != (int *)0x0) && (pbVar27 < pbVar20)) &&
               (iVar5 = thunk_FUN_ram_4ff20790(*piVar22,pbVar27), iVar5 != 0)) {
              *piVar22 = iVar5;
            }
            goto LAB_ram_4819f9d2;
          }
        }
        else {
          pbVar21 = (byte *)0x0;
          do {
            iVar5 = param_2[1];
            if ((int)pbVar20 <= iVar5) {
              pbVar21 = pbVar21 + (int)pbVar20;
              param_2[1] = iVar5 - (int)pbVar20;
              *param_2 = (int)(pbVar20 + *param_2);
              goto LAB_ram_4819f29e;
            }
            *param_2 = *param_2 + iVar5;
            pbVar21 = pbVar21 + iVar5;
            pbVar20 = pbVar20 + -iVar5;
            iVar5 = FUN_ram_4819e8c6(local_218,param_2);
          } while (iVar5 == 0);
          if (pbVar21 != (byte *)0x0) goto LAB_ram_4819f29e;
        }
      }
    }
  }
  goto LAB_ram_4819eba2;
LAB_ram_4819fb32:
  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
    FUN_ram_4819e82e(local_218,abStack_1e9[uVar17],param_2);
  }
LAB_ram_4819fb36:
  if (local_22c != (byte *)0x0) goto LAB_ram_4819ea10;
  *puVar9 = 0;
  if (((piVar22 != (int *)0x0) && (((int)puVar9 - (int)puVar8 >> 2) + 1U < uVar25)) &&
     (iVar5 = thunk_FUN_ram_4ff20790(*piVar22,((int)puVar9 - (int)puVar8) + 4), iVar5 != 0)) {
    *piVar22 = iVar5;
  }
LAB_ram_4819f5ee:
  iVar24 = iVar24 + 1;
  goto LAB_ram_4819ea10;
LAB_ram_4819f5b8:
  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
    FUN_ram_4819e82e(local_218,abStack_1e9[uVar17],param_2);
  }
LAB_ram_4819f5bc:
  if (local_22c != (byte *)0x0) goto LAB_ram_4819ea10;
  *puVar8 = 0;
  if (((piVar22 != (int *)0x0) && (((int)puVar8 - (int)puVar9 >> 2) + 1U < uVar25)) &&
     (iVar5 = thunk_FUN_ram_4ff20790(*piVar22,((int)puVar8 - (int)puVar9) + 4), iVar5 != 0)) {
    *piVar22 = iVar5;
  }
  goto LAB_ram_4819f5ee;
}



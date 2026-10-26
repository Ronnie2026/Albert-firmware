/* Firmware entry: 0x480a1784 */

void FUN_ram_480a1784(int *param_1,int param_2,code *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar11;
  uint uStack_58;
  undefined1 auStack_41 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar8 = (char)param_1[0x10c];
  if (cVar8 == '\0') {
    return;
  }
  if ((uint)(param_2 - param_1[0x119]) < 120000) {
    if (cVar8 == '\x01') {
      if ((uint)(param_2 - param_1[0x119]) < 5000) goto LAB_ram_480a17c6;
    }
    else if (cVar8 == '\x02') {
      if ((uint)(param_2 - param_1[0x11a]) < 10000) goto LAB_ram_480a17c6;
    }
    else if ((1 < (byte)(cVar8 - 3U)) || ((uint)(param_2 - param_1[0x11b]) < 30000)) {
LAB_ram_480a17c6:
      iVar2 = (*param_3)();
      if ((char)param_1[0x10c] == '\0') {
        return;
      }
      uVar1 = 0x400;
      do {
        while( true ) {
          iVar3 = (*param_3)();
          if (0xf9 < (uint)(iVar3 - iVar2)) {
            return;
          }
          cVar8 = (char)param_1[0x10c];
          if (cVar8 != '\x01') break;
          piVar5 = (int *)*param_1;
          auStack_41[0] = 0;
          if (*(code **)(*piVar5 + 8) == (code *)&LAB_ram_4802f946) {
            iVar3 = FUN_ram_48136782(piVar5[1],auStack_41,1,8);
            if (iVar3 < 0) {
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 0xb) {
                return;
              }
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 0xb) {
                return;
              }
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 4) {
                return;
              }
LAB_ram_480a18b0:
              FUN_ram_48065e9c(param_1,6);
              return;
            }
          }
          else {
            iVar3 = (**(code **)(*piVar5 + 8))(piVar5,auStack_41,1);
            if (iVar3 < 0) {
              if (iVar3 == -1) {
                return;
              }
              goto LAB_ram_480a18b0;
            }
          }
          if (iVar3 == 0) {
            FUN_ram_48065e9c(param_1,5);
            return;
          }
          param_1[0x11b] = param_2;
          uVar1 = uVar1 - 1;
          iVar3 = FUN_ram_480a1124(param_1,auStack_41[0]);
          if (iVar3 == 0) {
            return;
          }
          if ((char)param_1[0x10c] != '\x01') {
            iVar2 = (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],param_1);
            if ((char)param_1[0x10c] == '\0') {
              return;
            }
            if ((char)param_1[0x10c] == '\x06') {
              return;
            }
            if (iVar2 == 0) {
              FUN_ram_48065e9c(param_1,3);
              return;
            }
            param_1[0x11a] = param_2;
            if (iVar2 == 2) {
              if ((char)param_1[0x10b] != '\0') {
                *(char *)(param_1 + 0x10c) = (param_1[0x10a] == 0) + '\x03';
                return;
              }
              FUN_ram_48065e9c(param_1,1);
              return;
            }
            uVar1 = param_1[0x10a];
            if (0x8000 < uVar1) {
              FUN_ram_48065e9c(param_1);
              return;
            }
            if (uVar1 != 0) {
              iVar2 = (*(code *)param_1[2])(uVar1 + 1);
              param_1[0x10e] = iVar2;
              if (iVar2 != 0) {
                *(undefined1 *)(param_1 + 0x10c) = 2;
                return;
              }
              FUN_ram_48065e9c(param_1,7);
              return;
            }
LAB_ram_480a1d60:
            *(undefined1 *)(param_1 + 0x10c) = 5;
            return;
          }
joined_r0x480a194e:
          if (uVar1 == 0) {
            return;
          }
        }
        if ((byte)(cVar8 - 2U) < 2) {
          uVar9 = param_1[0x10a] - param_1[0x112];
          if (uVar1 < uVar9) {
            uVar9 = uVar1;
          }
          if (cVar8 == '\x03') {
            piVar4 = (int *)*param_1;
            UNRECOVERED_JUMPTABLE = *(code **)(*piVar4 + 8);
            piVar5 = param_1 + 0x11f;
            if (UNRECOVERED_JUMPTABLE == (code *)&LAB_ram_4802f946) goto LAB_ram_480a18ec;
LAB_ram_480a1a26:
            uVar11 = (*UNRECOVERED_JUMPTABLE)(piVar4,piVar5,uVar9);
            if (-1 < (int)uVar11) goto LAB_ram_480a18fc;
            if (uVar11 == 0xffffffff) {
              return;
            }
          }
          else {
            piVar4 = (int *)*param_1;
            piVar5 = (int *)(param_1[0x10e] + param_1[0x112]);
            UNRECOVERED_JUMPTABLE = *(code **)(*piVar4 + 8);
            if (UNRECOVERED_JUMPTABLE != (code *)&LAB_ram_4802f946) goto LAB_ram_480a1a26;
LAB_ram_480a18ec:
            uVar11 = FUN_ram_48136782(piVar4[1],piVar5,uVar9,8);
            if ((int)uVar11 < 0) {
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 0xb) {
                return;
              }
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 0xb) {
                return;
              }
              piVar5 = (int *)FUN_ram_4819bf88();
              if (*piVar5 == 4) {
                return;
              }
              goto LAB_ram_480a1976;
            }
LAB_ram_480a18fc:
            if (uVar11 == 0) {
              uVar6 = 5;
              goto LAB_ram_480a197a;
            }
            if (uVar11 <= uVar9) {
              param_1[0x11b] = param_2;
              iVar3 = param_1[0x112] + uVar11;
              param_1[0x112] = iVar3;
              if (cVar8 == '\x03') {
                iVar2 = (**(code **)(*(int *)param_1[1] + 0xc))
                                  ((int *)param_1[1],param_1,param_1 + 0x11f,uVar11,0);
                cVar8 = (char)param_1[0x10c];
                if (iVar2 != 0) {
                  if (cVar8 == '\0') {
                    return;
                  }
                  if (cVar8 == '\x06') {
                    return;
                  }
                  if (param_1[0x112] != param_1[0x10a]) {
                    return;
                  }
                  *(undefined1 *)(param_1 + 0x10c) = 4;
                  return;
                }
                goto LAB_ram_480a1daa;
              }
              uVar1 = uVar1 - uVar11;
              if (iVar3 != param_1[0x10a]) {
                cVar8 = (char)param_1[0x10c];
                goto joined_r0x480a1b02;
              }
              *(undefined1 *)(iVar3 + param_1[0x10e]) = 0;
              *(undefined1 *)(param_1 + 0x10c) = 5;
              param_1[0x108] = param_1[0x10e];
              param_1[0x107] = param_1[0x112];
              goto joined_r0x480a194e;
            }
          }
LAB_ram_480a1976:
          uVar6 = 6;
          goto LAB_ram_480a197a;
        }
        if (cVar8 == '\x04') {
          iVar2 = (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],param_1,0,0,1);
          cVar8 = (char)param_1[0x10c];
          if (iVar2 != 0) {
            if (cVar8 == '\0') {
              return;
            }
            if (cVar8 == '\x06') {
              return;
            }
            goto LAB_ram_480a1d60;
          }
LAB_ram_480a1daa:
          if (cVar8 == '\0') {
            return;
          }
LAB_ram_480a1d82:
          uVar6 = 3;
LAB_ram_480a197a:
          FUN_ram_48065e9c(param_1,uVar6);
          return;
        }
        if (cVar8 == '\x05') {
          (**(code **)(*(int *)param_1[1] + 0x10))((int *)param_1[1],param_1);
          if ((char)param_1[0x10c] == '\0') {
            return;
          }
          if ((char)param_1[0x10c] == '\x06') {
            return;
          }
          goto LAB_ram_480a1d82;
        }
        if (cVar8 == '\x06') {
          uVar9 = param_1[0x114];
          if ((uint)param_1[0x113] <= uVar9) {
            iVar10 = param_1[0x118];
            iVar3 = param_1[0x117];
            if (iVar10 == iVar3) {
              iVar3 = param_1[0x116];
              if (iVar3 == -1) {
LAB_ram_480a1c0c:
                uVar9 = uVar1;
              }
              else {
                if (iVar3 == param_1[0x115]) {
                  uVar6 = 0;
                  goto LAB_ram_480a197a;
                }
                uVar9 = iVar3 - param_1[0x115];
                if (uVar1 < uVar9) goto LAB_ram_480a1c0c;
              }
              param_1[0x118] = 0;
              if ((code *)param_1[0x11e] == (code *)0x0) {
                param_1[0x117] = 0;
              }
              else {
                uVar11 = (*(code *)param_1[0x11e])(param_1[0x11d]);
                param_1[0x117] = uVar11;
                if (uVar9 < uVar11) goto LAB_ram_480a1976;
                if (uVar11 != 0) {
                  if ((char)param_1[0x10c] == '\0') {
                    return;
                  }
                  iVar3 = (*param_3)();
                  if (0xf9 < (uint)(iVar3 - iVar2)) {
                    return;
                  }
                  iVar3 = param_1[0x117];
                  iVar10 = param_1[0x118];
                  goto LAB_ram_480a1a94;
                }
                iVar3 = param_1[0x116];
              }
              if ((iVar3 == -1) || (uVar6 = 6, param_1[0x115] == iVar3)) {
                uVar6 = 0;
              }
              goto LAB_ram_480a197a;
            }
LAB_ram_480a1a94:
            uVar11 = iVar3 - iVar10;
            if (uVar1 < (uint)(iVar3 - iVar10)) {
              uVar11 = uVar1;
            }
            piVar5 = (int *)*param_1;
            iVar3 = (int)param_1 + iVar10 + 0x47c;
            if (*(code **)(*piVar5 + 0xc) == (code *)&LAB_ram_48031b18) {
              uStack_58 = FUN_ram_48136954(piVar5[1],iVar3,uVar11,8);
              if ((int)uStack_58 < 0) {
                piVar5 = (int *)FUN_ram_4819bf88();
                if (((*piVar5 == 0xb) || (piVar5 = (int *)FUN_ram_4819bf88(), *piVar5 == 0xb)) ||
                   (piVar5 = (int *)FUN_ram_4819bf88(), *piVar5 == 4)) {
                  piVar5 = (int *)param_1[1];
                  uVar7 = 1;
                  UNRECOVERED_JUMPTABLE = *(code **)(*piVar5 + 0x18);
LAB_ram_480a1d0c:
                    /* WARNING: Could not recover jumptable at 0x480a1d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)(piVar5,param_1,uVar7,uVar11,0,UNRECOVERED_JUMPTABLE);
                  return;
                }
                (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1],param_1,1,uVar11,0);
              }
              else {
                (**(code **)(*(int *)param_1[1] + 0x18))
                          ((int *)param_1[1],param_1,1,uVar11,uStack_58);
                if (uStack_58 != 0) goto LAB_ram_480a1ade;
              }
            }
            else {
              uStack_58 = (**(code **)(*piVar5 + 0xc))(piVar5,iVar3,uVar11);
              (**(code **)(*(int *)param_1[1] + 0x18))
                        ((int *)param_1[1],param_1,1,uVar11,uStack_58 & (int)~uStack_58 >> 0x1f);
              if ((uStack_58 != 0) && (-2 < (int)uStack_58)) {
                if (uStack_58 == 0xffffffff) {
                  return;
                }
LAB_ram_480a1ade:
                if (uStack_58 <= uVar11) {
                  cVar8 = (char)param_1[0x10c];
                  param_1[0x11b] = param_2;
                  param_1[0x118] = param_1[0x118] + uStack_58;
                  param_1[0x115] = param_1[0x115] + uStack_58;
                  uVar1 = uVar1 - uStack_58;
                  goto joined_r0x480a1b02;
                }
              }
            }
            goto LAB_ram_480a1976;
          }
          uVar11 = param_1[0x113] - uVar9;
          if (uVar1 < uVar11) {
            uVar11 = uVar1;
          }
          piVar5 = (int *)*param_1;
          if (*(code **)(*piVar5 + 0xc) == (code *)&LAB_ram_48031b18) {
            uStack_58 = FUN_ram_48136954(piVar5[1],param_1[0x10f] + uVar9,uVar11,8);
            if ((int)uStack_58 < 0) {
              piVar5 = (int *)FUN_ram_4819bf88();
              if (((*piVar5 == 0xb) || (piVar5 = (int *)FUN_ram_4819bf88(), *piVar5 == 0xb)) ||
                 (piVar5 = (int *)FUN_ram_4819bf88(), *piVar5 == 4)) {
                piVar5 = (int *)param_1[1];
                uVar7 = 0;
                UNRECOVERED_JUMPTABLE = *(code **)(*piVar5 + 0x18);
                goto LAB_ram_480a1d0c;
              }
              (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1],param_1,0,uVar11,0);
            }
            else {
              (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1],param_1,0,uVar11,uStack_58)
              ;
              if (uStack_58 != 0) goto LAB_ram_480a19f4;
            }
            goto LAB_ram_480a1976;
          }
          uStack_58 = (**(code **)(*piVar5 + 0xc))(piVar5,param_1[0x10f] + uVar9,uVar11);
          (**(code **)(*(int *)param_1[1] + 0x18))
                    ((int *)param_1[1],param_1,0,uVar11,uStack_58 & (int)~uStack_58 >> 0x1f);
          if ((uStack_58 == 0) || ((int)uStack_58 < -1)) goto LAB_ram_480a1976;
          if (uStack_58 == 0xffffffff) {
            return;
          }
LAB_ram_480a19f4:
          if (uVar11 < uStack_58) goto LAB_ram_480a1976;
          uVar1 = uVar1 - uStack_58;
          param_1[0x11b] = param_2;
          param_1[0x114] = param_1[0x114] + uStack_58;
          cVar8 = (char)param_1[0x10c];
joined_r0x480a1b02:
          if (cVar8 == '\0') {
            return;
          }
          goto joined_r0x480a194e;
        }
        if (cVar8 == '\0') {
          return;
        }
      } while( true );
    }
  }
  FUN_ram_48065e9c(param_1,4);
  return;
}



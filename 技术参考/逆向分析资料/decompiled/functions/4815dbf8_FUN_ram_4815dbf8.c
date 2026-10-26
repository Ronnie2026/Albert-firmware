/* Firmware entry: 0x4815dbf8 */

int FUN_ram_4815dbf8(int *param_1,int *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  piVar9 = (int *)*param_1;
  param_1[7] = param_3;
  param_1[8] = param_4;
  if (piVar9 != (int *)0x0) {
    iVar4 = param_1[2];
    do {
      iVar3 = *piVar9;
      piVar6 = (int *)piVar9[1];
      if (iVar3 == 0) {
        *param_1 = (int)piVar6;
        piVar9 = piVar6;
        if (piVar6 == (int *)0x0) goto LAB_ram_4815dede;
LAB_ram_4815dc30:
        *piVar6 = iVar3;
      }
      else {
        *(int **)(iVar3 + 4) = piVar6;
        piVar9 = (int *)*param_1;
        if (piVar6 != (int *)0x0) goto LAB_ram_4815dc30;
LAB_ram_4815dede:
        param_1[1] = iVar3;
      }
      iVar4 = iVar4 + -1;
    } while (piVar9 != (int *)0x0);
    param_1[2] = iVar4;
  }
  piVar9 = (int *)param_1[3];
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    piVar9 = (int *)piVar9[1];
    iVar4 = param_1[5] + -1;
    if (iVar3 == 0) goto LAB_ram_4815dc5c;
LAB_ram_4815dc46:
    *(int **)(iVar3 + 4) = piVar9;
    piVar6 = (int *)param_1[3];
    if (piVar9 == (int *)0x0) goto LAB_ram_4815dc62;
    do {
      *piVar9 = iVar3;
      while( true ) {
        if (piVar6 == (int *)0x0) {
          param_1[5] = iVar4;
          goto LAB_ram_4815dc6c;
        }
        iVar4 = iVar4 + -1;
        iVar3 = *piVar6;
        piVar9 = (int *)piVar6[1];
        if (iVar3 != 0) goto LAB_ram_4815dc46;
LAB_ram_4815dc5c:
        param_1[3] = (int)piVar9;
        piVar6 = piVar9;
        if (piVar9 != (int *)0x0) break;
LAB_ram_4815dc62:
        param_1[4] = iVar3;
      }
    } while( true );
  }
LAB_ram_4815dc6c:
  if (param_4 < 0x1861862) {
    puVar1 = (uint *)FUN_ram_4ff20824(param_4 * 0x54 + 4,2,0x1400,0x1800);
    if (puVar1 == (uint *)0x0) goto LAB_ram_4815df2e;
LAB_ram_4815dc94:
    *puVar1 = param_4;
    iVar4 = param_4 - 1;
    puVar1 = puVar1 + 1;
    puVar12 = puVar1;
    if (-1 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        FUN_ram_4815a5f4(puVar12);
        puVar12 = puVar12 + 0x15;
      } while (iVar4 != -1);
      iVar4 = param_1[6];
      param_1[6] = (int)puVar1;
      if (iVar4 == 0) goto LAB_ram_4815dcfe;
      goto LAB_ram_4815dcc6;
    }
    iVar4 = param_1[6];
    param_1[6] = (int)puVar1;
    if (iVar4 != 0) goto LAB_ram_4815dcc6;
  }
  else {
    puVar1 = (uint *)FUN_ram_4ff20824(0xffffffff,2,0x1400,0x1800);
    if (puVar1 != (uint *)0x0) goto LAB_ram_4815dc94;
LAB_ram_4815df2e:
    iVar4 = param_1[6];
    param_1[6] = 0;
    if (iVar4 == 0) {
      return 0x101;
    }
LAB_ram_4815dcc6:
    for (iVar3 = *(int *)(iVar4 + -4) * 0x54 + iVar4; iVar3 != iVar4; iVar3 = iVar3 + -0x54) {
      thunk_FUN_ram_4815d812(iVar3 + -0x10);
    }
    FUN_ram_4ff209c6(iVar4 + -4);
    puVar1 = (uint *)param_1[6];
    if (puVar1 == (uint *)0x0) {
      return 0x101;
    }
  }
  if (param_4 != 0) {
LAB_ram_4815dcfe:
    iVar3 = param_4 + param_3;
    iVar4 = 0;
    do {
      iVar2 = FUN_ram_4815b818((int)puVar1 + iVar4,param_2,param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_4815b9de(param_1[6] + iVar4,&uStack_54);
      uVar10 = uStack_54;
      if (iVar2 == 0) {
        piVar9 = (int *)*param_1;
        if (piVar9 == (int *)0x0) {
          iVar2 = param_1[1];
          piVar9 = (int *)(param_1[6] + iVar4);
          if (iVar2 != 0) {
            *(int **)(iVar2 + 4) = piVar9;
            *piVar9 = iVar2;
            piVar9[1] = 0;
            param_1[1] = (int)piVar9;
            goto LAB_ram_4815df6c;
          }
          *piVar9 = 0;
          piVar9[1] = 0;
          param_1[1] = (int)piVar9;
          *param_1 = (int)piVar9;
        }
        else {
          do {
            iVar2 = FUN_ram_4815b9de(piVar9,&uStack_50);
            if ((iVar2 == 0) && (uVar10 < uStack_50)) {
              iVar7 = param_1[2];
              iVar2 = *piVar9;
              piVar6 = (int *)(param_1[6] + iVar4);
              if (iVar2 == 0) {
                puVar5 = (undefined4 *)*param_1;
                *piVar6 = 0;
                piVar6[1] = (int)puVar5;
                if (puVar5 != (undefined4 *)0x0) {
                  *puVar5 = piVar6;
                }
                *param_1 = (int)piVar6;
                if (param_1[1] == 0) {
                  param_1[1] = (int)piVar6;
                  param_1[2] = iVar7 + 1;
                  goto joined_r0x4815dd84;
                }
              }
              else {
                *(int **)(iVar2 + 4) = piVar6;
                *piVar9 = (int)piVar6;
                piVar6[1] = (int)piVar9;
                *piVar6 = iVar2;
              }
              param_1[2] = iVar7 + 1;
              goto joined_r0x4815dd84;
            }
            piVar9 = (int *)piVar9[1];
          } while (piVar9 != (int *)0x0);
          iVar7 = param_1[1];
          iVar2 = *param_1;
          piVar9 = (int *)(param_1[6] + iVar4);
          if (iVar7 != 0) {
            *(int **)(iVar7 + 4) = piVar9;
          }
          *piVar9 = iVar7;
          piVar9[1] = 0;
          param_1[1] = (int)piVar9;
          if (iVar2 == 0) {
LAB_ram_4815df6c:
            *param_1 = (int)piVar9;
          }
        }
        param_1[2] = param_1[2] + 1;
      }
      else {
        iVar2 = param_1[4];
        piVar9 = (int *)(param_1[6] + iVar4);
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar9;
        }
        iVar7 = param_1[3];
        *piVar9 = iVar2;
        piVar9[1] = 0;
        param_1[4] = (int)piVar9;
        if (iVar7 == 0) {
          param_1[3] = (int)piVar9;
        }
        param_1[5] = param_1[5] + 1;
      }
joined_r0x4815dd84:
      if (iVar3 == param_3 + 1) break;
      param_3 = param_3 + 1;
      iVar4 = iVar4 + 0x54;
      puVar1 = (uint *)param_1[6];
    } while( true );
  }
  if (param_1[2] == 0) {
    param_1[9] = 0;
    iVar4 = FUN_ram_4815da84(param_1);
    return iVar4;
  }
  iVar4 = FUN_ram_4815b9de(param_1[1],&uStack_50);
  if (iVar4 != 0) {
    return iVar4;
  }
  pcVar8 = *(code **)(*param_2 + 0x28);
  param_1[9] = uStack_50 + 1;
  iVar4 = (*pcVar8)(param_2);
  if (iVar4 != 0) {
    return 0;
  }
  piVar9 = (int *)param_1[1];
  uStack_54 = 0;
  uVar10 = 0xffffffff;
  while (iVar4 = FUN_ram_4815af12(piVar9,0xff,0xff,0,&uStack_54,&uStack_50,0xff), iVar4 == 0) {
    uStack_54 = (uStack_50 >> 0x10 & 0xff) + uStack_54;
    uVar10 = uStack_54;
  }
  piVar6 = (int *)*param_1;
  if (uVar10 == 0xffffffff) {
joined_r0x4815dfac:
    piVar11 = piVar6;
    if (piVar6 == (int *)0x0) goto LAB_ram_4815dfb0;
  }
  else {
    piVar11 = piVar9;
    if (piVar9 != piVar6) {
      do {
        if (piVar6[3] != -8) {
          iVar4 = FUN_ram_4815b3e2(piVar6,uStack_50 & 0xff,uStack_50._1_1_,auStack_48,
                                   uStack_50._3_1_,0xff);
          if (iVar4 == 0) {
            piVar11 = (int *)*param_1;
            if (piVar9 != piVar6) goto joined_r0x4815e004;
            goto LAB_ram_4815de1e;
          }
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar9 != piVar6);
      piVar11 = (int *)*param_1;
LAB_ram_4815de1e:
      if (uStack_50._1_1_ != 'H') goto joined_r0x4815e004;
      if (piVar9 != piVar11) {
        do {
          if (piVar11[3] != -8) {
            iVar4 = FUN_ram_4815b3e2(piVar11,uStack_50 & 0xff,0x41,auStack_48,uStack_50._3_1_,0xff);
            if (iVar4 == 0) break;
          }
          piVar11 = (int *)piVar11[1];
        } while (piVar9 != piVar11);
        piVar6 = (int *)*param_1;
        goto joined_r0x4815dfac;
      }
    }
  }
  do {
    if (piVar11[3] == -8) {
      piVar9 = (int *)param_1[1];
      if (piVar9[3] == -2) {
        iVar4 = FUN_ram_4815ba1e(piVar9);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = *piVar9;
        piVar6 = (int *)piVar9[1];
        if (iVar4 == 0) {
          *param_1 = (int)piVar6;
        }
        else {
          *(int **)(iVar4 + 4) = piVar6;
        }
        if (piVar6 == (int *)0x0) {
          param_1[1] = iVar4;
        }
        else {
          *piVar6 = iVar4;
        }
        iVar4 = param_1[4];
        param_1[2] = param_1[2] + -1;
        if (iVar4 != 0) {
          *(int **)(iVar4 + 4) = piVar9;
        }
        iVar3 = param_1[3];
        *piVar9 = iVar4;
        piVar9[1] = 0;
        param_1[4] = (int)piVar9;
        if (iVar3 == 0) {
          param_1[3] = (int)piVar9;
        }
        param_1[5] = param_1[5] + 1;
      }
      iVar4 = FUN_ram_4815da84(param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_ram_4815a798(piVar11,param_1[1]);
      if ((iVar4 != 0) && (iVar4 != 0x1102)) {
        return iVar4;
      }
      iVar4 = FUN_ram_4815ba1e(piVar11);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = *piVar11;
      piVar9 = (int *)piVar11[1];
      if (iVar4 == 0) {
        *param_1 = (int)piVar9;
      }
      else {
        *(int **)(iVar4 + 4) = piVar9;
      }
      if (piVar9 == (int *)0x0) {
        param_1[1] = iVar4;
      }
      else {
        *piVar9 = iVar4;
      }
      iVar4 = param_1[4];
      param_1[2] = param_1[2] + -1;
      if (iVar4 != 0) {
        *(int **)(iVar4 + 4) = piVar11;
      }
      iVar3 = param_1[3];
      *piVar11 = iVar4;
      piVar11[1] = 0;
      param_1[4] = (int)piVar11;
      if (iVar3 == 0) {
        param_1[3] = (int)piVar11;
      }
      iVar4 = param_1[5] + 1;
      param_1[5] = iVar4;
      goto LAB_ram_4815deb8;
    }
    piVar11 = (int *)piVar11[1];
joined_r0x4815e004:
  } while (piVar11 != (int *)0x0);
LAB_ram_4815dfb0:
  iVar4 = param_1[5];
LAB_ram_4815deb8:
  if (iVar4 != 0) {
    return 0;
  }
  return 0x110d;
}



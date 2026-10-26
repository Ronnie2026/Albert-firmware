/* Firmware entry: 0x48136b12 */

int FUN_ram_48136b12(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                    int *param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iStack_94;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int *piStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x40 < param_1) {
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 0x16;
    return -1;
  }
  uStack_6c = 0;
  uVar11 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uStack_68 = 0;
    FUN_ram_48134c4a(param_1,param_2,&uStack_6c);
    uVar11 = uStack_68;
  }
  if (param_3 != (undefined4 *)0x0) {
    uStack_68 = uVar11;
    FUN_ram_48134c4a(param_1,param_3,&uStack_6c);
    uVar11 = uStack_68;
  }
  if (param_4 != (undefined4 *)0x0) {
    uStack_68 = uVar11;
    FUN_ram_48134c4a(param_1,param_4,&uStack_6c);
    uVar11 = uStack_68;
  }
  iVar5 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
  if (iVar5 == -1) {
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 9;
    uVar3 = 0x36;
    if (0x36 < (int)param_1) {
      puVar4 = &DAT_ram_4ff6c614;
      do {
        if ((1 << (uVar3 & 0x1f) & uVar11) != 0) {
          FUN_ram_48134a50(puVar4);
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (param_1 != uVar3);
    }
    return -1;
  }
  if ((iVar5 == 0) &&
     (((param_5 == (int *)0x0 || (*param_5 != 0 || param_5[1] != 0)) || (param_5[2] != 0)))) {
    pppppppuStack_64 = (undefined4 *******)0x0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = 0;
    piStack_44 = (int *)0x0;
    puStack_5c = param_2;
    puStack_58 = param_3;
    puStack_54 = param_4;
    piStack_44 = (int *)FUN_ram_4814e840();
    if ((piStack_44 == (int *)0x0) || (*piStack_44 == 0)) {
      puVar4 = (undefined4 *)FUN_ram_4819bf88();
      *puVar4 = 0xc;
      return -1;
    }
    FUN_ram_4814e762();
    pppppppuStack_64 = DAT_ram_4ff6e180;
    if (DAT_ram_4ff6e180 != (undefined4 *******)0x0) {
      DAT_ram_4ff6e180[1] = &pppppppuStack_64;
    }
    uVar3 = 0x36;
    DAT_ram_4ff6e184 = DAT_ram_4ff6e184 + 1;
    DAT_ram_4ff6e180 = &pppppppuStack_64;
    FUN_ram_4814e79e();
    if (0x36 < (int)param_1) {
      do {
        bVar2 = false;
        if (param_2 != (undefined4 *)0x0) goto LAB_ram_48136c04;
        if (param_3 != (undefined4 *)0x0) goto LAB_ram_48136c42;
        if (param_4 == (undefined4 *)0x0) goto LAB_ram_48136e4c;
        uVar10 = uVar3 & 0x1f;
LAB_ram_48136c28:
        do {
          while( true ) {
            if ((1 << uVar10 & param_4[1]) != 0) goto LAB_ram_48136c52;
            uVar3 = uVar3 + 1;
            if (param_1 == uVar3) goto LAB_ram_48136c88;
            if (param_2 != (undefined4 *)0x0) goto LAB_ram_48136c04;
            if (param_3 != (undefined4 *)0x0) break;
            uVar10 = uVar3 & 0x1f;
          }
LAB_ram_48136c42:
          uVar8 = param_3[1];
          uVar10 = uVar3 & 0x1f;
          uVar9 = 1 << uVar10 & uVar8;
          while( true ) {
            if (uVar9 != 0) goto LAB_ram_48136c52;
            if (param_4 != (undefined4 *)0x0) goto LAB_ram_48136c28;
            while( true ) {
              uVar3 = uVar3 + 1;
              if (param_1 == uVar3) goto LAB_ram_48136c88;
              if (param_2 != (undefined4 *)0x0) break;
              if ((1 << (uVar3 & 0x1f) & uVar8) != 0) goto LAB_ram_48136c52;
            }
LAB_ram_48136c04:
            uVar10 = uVar3 & 0x1f;
            if ((1 << uVar10 & param_2[1]) != 0) goto LAB_ram_48136c52;
            if (param_3 == (undefined4 *)0x0) break;
            uVar8 = param_3[1];
            uVar9 = 1 << uVar10 & uVar8;
          }
        } while (param_4 != (undefined4 *)0x0);
        do {
          uVar3 = uVar3 + 1;
          if (param_1 == uVar3) goto LAB_ram_48136c88;
        } while ((1 << (uVar3 & 0x1f) & param_2[1]) == 0);
LAB_ram_48136c52:
        uVar6 = FUN_ram_4814e762();
        iVar7 = FUN_ram_48134bb6(uVar3);
        if (iVar7 == 0) {
          FUN_ram_4814e79e(uVar6);
          puVar4 = (undefined4 *)FUN_ram_4819bf88();
          *puVar4 = 9;
joined_r0x48136e86:
          if (uVar3 != 0x36) {
            iVar5 = -1;
            iStack_94 = 0;
            goto LAB_ram_48136cac;
          }
          FUN_ram_4813450a(&pppppppuStack_64);
          if (iStack_48 != 0) {
            FUN_ram_4814e408(piStack_44,1);
          }
          goto LAB_ram_48136ec4;
        }
        cVar1 = *(char *)(iVar7 + 0xe);
        *(char *)(iVar7 + 0xe) = cVar1 + '\x01';
        if (cVar1 == -1) {
          *(undefined1 *)(iVar7 + 0xe) = 0xff;
          FUN_ram_4814e79e(uVar6);
          FUN_ram_48134a50(iVar7);
          puVar4 = (undefined4 *)FUN_ram_4819bf88();
          *puVar4 = 0x10;
          goto joined_r0x48136e86;
        }
        FUN_ram_4814e79e(uVar6);
        uVar3 = uVar3 + 1;
        FUN_ram_48134a50(iVar7);
      } while (param_1 != uVar3);
      goto LAB_ram_48136c88;
    }
    iVar7 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
    if (iVar7 == -1) {
      puVar4 = (undefined4 *)FUN_ram_4819bf88();
      *puVar4 = 9;
      FUN_ram_4813450a(&pppppppuStack_64);
      if (iStack_48 == 0) {
        return -1;
      }
      FUN_ram_4814e408(piStack_44,1);
      return -1;
    }
    if (iVar7 == 0) {
      if (param_5 != (int *)0x0) goto LAB_ram_48136ef2;
      iStack_94 = FUN_ram_4814e408(piStack_44,0);
LAB_ram_48136f74:
      FUN_ram_4813450a(&pppppppuStack_64);
      if (iStack_48 == 0) {
        if (iStack_94 == -1) goto LAB_ram_48136d94;
      }
      else if (iStack_94 == -1) {
        FUN_ram_4814e408(piStack_44,1);
        goto LAB_ram_48136d94;
      }
      iVar5 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
      if (iVar5 == -1) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        *puVar4 = 9;
        return -1;
      }
      goto LAB_ram_48136d94;
    }
    FUN_ram_4813450a(&pppppppuStack_64);
    if (iStack_48 != 0) {
      FUN_ram_4814e408(piStack_44,1);
    }
LAB_ram_48136d3c:
    iVar5 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
    if (iVar5 == -1) {
      puVar4 = (undefined4 *)FUN_ram_4819bf88();
      *puVar4 = 9;
      if ((int)param_1 < 0x37) {
        return -1;
      }
LAB_ram_481370e2:
      puVar4 = &DAT_ram_4ff6c614;
      uVar3 = 0x36;
      do {
        if ((1 << (uVar3 & 0x1f) & uVar11) != 0) {
          FUN_ram_48134a50(puVar4);
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (param_1 != uVar3);
      return -1;
    }
  }
LAB_ram_48136d5c:
  if ((int)param_1 < 0x37) goto LAB_ram_48136d94;
  goto LAB_ram_48136d64;
  while (uVar3 = uVar3 + 2, uVar3 != param_1) {
LAB_ram_48136e4c:
    if (uVar3 + 1 == param_1) break;
  }
LAB_ram_48136c88:
  iVar7 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
  if (iVar7 == -1) {
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 9;
    iStack_94 = 0;
    uVar3 = param_1;
    iVar5 = iVar7;
  }
  else if (iVar7 == 0) {
    if (param_5 == (int *)0x0) {
      iStack_94 = FUN_ram_4814e408(piStack_44,0);
      bVar2 = true;
      uVar3 = param_1;
      iVar5 = iVar7;
    }
    else {
LAB_ram_48136ef2:
      iVar7 = *param_5 * 1000 + (param_5[2] + 500) / 1000;
      if (iVar7 < 1) {
        iVar7 = 1;
      }
      iStack_94 = FUN_ram_4814e408(piStack_44,iVar7);
      if ((int)param_1 < 0x37) goto LAB_ram_48136f74;
      bVar2 = true;
      uVar3 = param_1;
      iVar5 = 0;
    }
  }
  else {
    iStack_94 = 0;
    uVar3 = param_1;
    iVar5 = iVar7;
  }
LAB_ram_48136cac:
  pcVar12 = &DAT_ram_4ff6c622;
  uVar10 = 0x36;
  do {
    if ((((param_2 != (undefined4 *)0x0) && ((1 << (uVar10 & 0x1f) & param_2[1]) != 0)) ||
        ((param_3 != (undefined4 *)0x0 && ((1 << (uVar10 & 0x1f) & param_3[1]) != 0)))) ||
       ((param_4 != (undefined4 *)0x0 && ((1 << (uVar10 & 0x1f) & param_4[1]) != 0)))) {
      FUN_ram_4814e762();
      if (*pcVar12 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x870,"lwip_select",
                         "sock->select_waiting > 0");
      }
      *pcVar12 = *pcVar12 + -1;
      FUN_ram_4814e79e();
    }
    uVar10 = uVar10 + 1;
    pcVar12 = pcVar12 + 0x14;
  } while ((int)uVar10 < (int)uVar3);
  FUN_ram_4813450a(&pppppppuStack_64);
  if (iStack_48 == 0) {
    if (iVar5 == -1) goto LAB_ram_48136ec4;
    if (iStack_94 != -1) goto LAB_ram_48136d3c;
  }
  else {
    if (!bVar2) {
      FUN_ram_4814e408(piStack_44,1);
      if (iVar5 == -1) goto LAB_ram_48136ec4;
      if (iStack_94 != -1) goto LAB_ram_48136d3c;
      goto LAB_ram_48136d5c;
    }
    if (iStack_94 == -1) {
      FUN_ram_4814e408(piStack_44,1);
      if (iVar5 == -1) goto LAB_ram_48136ec4;
    }
    else {
      if (iVar5 == -1) {
LAB_ram_48136ec4:
        puVar4 = &DAT_ram_4ff6c614;
        uVar3 = 0x36;
        do {
          if ((1 << (uVar3 & 0x1f) & uVar11) != 0) {
            FUN_ram_48134a50(puVar4);
          }
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 5;
        } while (param_1 != uVar3);
        return -1;
      }
      iVar5 = FUN_ram_48134cce(param_1,param_2,param_3,param_4,&uStack_84,&uStack_7c,&uStack_74);
      if (iVar5 == -1) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        *puVar4 = 9;
        goto LAB_ram_481370e2;
      }
    }
  }
LAB_ram_48136d64:
  puVar4 = &DAT_ram_4ff6c614;
  uVar3 = 0x36;
  do {
    while ((1 << (uVar3 & 0x1f) & uVar11) != 0) {
      uVar3 = uVar3 + 1;
      FUN_ram_48134a50(puVar4);
      puVar4 = puVar4 + 5;
      if (param_1 == uVar3) goto LAB_ram_48136d94;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 5;
  } while (param_1 != uVar3);
LAB_ram_48136d94:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uStack_84;
    param_2[1] = uStack_80;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uStack_7c;
    param_3[1] = uStack_78;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_74;
    param_4[1] = uStack_70;
    return iVar5;
  }
  return iVar5;
}



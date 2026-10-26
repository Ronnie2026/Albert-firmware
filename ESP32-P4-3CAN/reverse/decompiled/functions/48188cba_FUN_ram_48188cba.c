/* Firmware entry: 0x48188cba */

int FUN_ram_48188cba(uint param_1,uint param_2,int param_3,uint *param_4,char *param_5,uint *param_6
                    ,code *param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uStack_104;
  int iStack_100;
  uint *puStack_fc;
  uint auStack_d4 [14];
  uint auStack_9c [26];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_6 = 0;
  puStack_fc = auStack_9c + 2;
  puVar16 = puStack_fc;
  do {
    *puVar16 = 0;
    puVar16[1] = 0xffffffff;
    puVar16 = puVar16 + 2;
  } while (puVar16 != auStack_9c + 0x16);
  if (param_4 != (uint *)0x0) {
    if (param_5 == (char *)0x0) {
LAB_ram_48188d68:
      uVar17 = 0;
    }
    else {
      sVar8 = strlen(param_5);
      iVar6 = param_1 + 0x70;
      if ((*(uint *)(param_1 + 0x158) & 0x20) == 0) {
        do {
          if (((*(int *)(iVar6 + 4) == 3) && (pcVar15 = *(char **)(iVar6 + 8), *pcVar15 == 'U')) &&
             ((pcVar15[1] == '\x04' &&
              ((pcVar15[2] == '\x03' &&
               (iVar9 = FUN_ram_48188aa6(iVar6 + 0xc,param_5,sVar8), iVar9 == 0))))))
          goto LAB_ram_48188d68;
          iVar6 = *(int *)(iVar6 + 0x18);
        } while (iVar6 != 0);
      }
      else {
        puVar18 = (uint *)(param_1 + 0xf8);
        bVar2 = false;
        puVar16 = puVar18;
        bVar1 = false;
        do {
          while (bVar3 = bVar1, uVar17 = *puVar16 & 0x1f, uVar17 == 6) {
            puVar16 = (uint *)puVar16[3];
            bVar3 = true;
            bVar1 = true;
            if (puVar16 == (uint *)0x0) goto LAB_ram_481891ee;
          }
          if (uVar17 == 7) {
            bVar2 = true;
          }
          else if ((uVar17 == 2) && (iVar6 = FUN_ram_48188aa6(puVar16,param_5,sVar8), iVar6 == 0))
          goto LAB_ram_48188d68;
          puVar16 = (uint *)puVar16[3];
          bVar1 = bVar3;
        } while (puVar16 != (uint *)0x0);
LAB_ram_481891ee:
        if (bVar2) {
          puVar14 = (uint *)FUN_ram_48188c6c(param_5,auStack_d4);
          puVar16 = puVar18;
          puVar4 = puVar14;
          while (puVar4 != (uint *)0x0) {
            if ((((*puVar16 & 0x1f) == 7) && (puVar14 == (uint *)puVar16[1])) &&
               (iVar6 = FUN_ram_4ff4511a(puVar16[2],auStack_d4,puVar14), iVar6 == 0))
            goto LAB_ram_48188d68;
            puVar16 = (uint *)puVar16[3];
            puVar4 = puVar16;
          }
        }
        if (bVar3) {
          do {
            if ((((*puVar18 & 0x1f) == 6) && (sVar8 == puVar18[1])) &&
               (iVar6 = FUN_ram_4ff4511a(puVar18[2],param_5,sVar8), iVar6 == 0))
            goto LAB_ram_48188d68;
            puVar18 = (uint *)puVar18[3];
          } while (puVar18 != (uint *)0x0);
        }
      }
      uVar17 = 4;
    }
    iVar6 = FUN_ram_481774c4(param_1 + 0xcc);
    if ((iVar6 == 0) || ((1 << (iVar6 - 1U & 0x1f) & param_4[1]) == 0)) {
      uVar17 = uVar17 | 0x8000;
    }
    iVar6 = FUN_ram_481888fc(param_4,param_1 + 0xcc);
    if (iVar6 != 0) {
      uVar17 = uVar17 | 0x10000;
    }
    iVar6 = *(int *)(param_1 + 0x188);
    auStack_9c[2] = param_1;
    auStack_9c[3] = 0;
    iStack_100 = 0;
    uStack_104 = 1;
    if (iVar6 == 0) goto LAB_ram_48188fc2;
LAB_ram_48188dba:
    if ((1 << (iVar6 - 1U & 0x1f) & *param_4) == 0) goto LAB_ram_48188fc2;
    iVar6 = *(int *)(param_1 + 0x18c);
    if (iVar6 == 0) goto LAB_ram_48188fd0;
LAB_ram_48188dd2:
    if ((1 << (iVar6 - 1U & 0x1f) & param_4[1]) == 0) goto LAB_ram_48188fd0;
    if (uStack_104 == 1) goto LAB_ram_48188fe0;
LAB_ram_48188de8:
    uVar5 = param_1;
    if (param_2 == 0) goto LAB_ram_48189056;
    bVar2 = true;
    param_1 = param_2;
LAB_ram_48188df4:
    iVar6 = uVar5 + 0x50;
    do {
      while( true ) {
        iVar9 = FUN_ram_4818899a(iVar6,param_1 + 0x70);
        if (((iVar9 == 0) &&
            (((bVar2 && (*(int *)(param_1 + 0x1c) < 3)) ||
             ((*(int *)(param_1 + 0x15c) != 0 &&
              (((*(uint *)(param_1 + 0x158) & 4) == 0 ||
               (((*(uint *)(param_1 + 0x164) & 4) != 0 &&
                ((*(uint *)(param_1 + 0x164) & 0x8001) == 0)))))))))) &&
           (((int)*(uint *)(param_1 + 0x160) < 1 ||
            (uStack_104 - iStack_100 <= *(uint *)(param_1 + 0x160))))) break;
LAB_ram_4818904a:
        param_1 = *(uint *)(param_1 + 0x194);
        if (param_1 == 0) {
          if (bVar2) goto LAB_ram_48189056;
          goto LAB_ram_48189060;
        }
      }
      uVar10 = FUN_ram_4817697e(*(undefined4 *)(uVar5 + 0x188));
      uVar11 = FUN_ram_48176d4c();
      iVar9 = FUN_ram_48176cf2(uVar10,*(undefined4 *)(uVar5 + 0x18),*(undefined4 *)(uVar5 + 0x14),
                               auStack_d4);
      if (iVar9 == 0) {
        iVar9 = FUN_ram_48177194(param_1 + 0xcc,*(undefined4 *)(uVar5 + 0x18c));
        if (iVar9 == 0) goto LAB_ram_48189128;
        iVar9 = FUN_ram_48177276(*(undefined4 *)(uVar5 + 0x18c),*(undefined4 *)(uVar5 + 400),
                                 param_1 + 0xcc,*(undefined4 *)(uVar5 + 0x188),auStack_d4,uVar11,
                                 *(undefined4 *)(uVar5 + 0x184),*(undefined4 *)(uVar5 + 0x180));
        if (!bVar2) {
          bVar1 = iVar9 == 0;
          goto LAB_ram_48189138;
        }
        if (iVar9 != 0) goto LAB_ram_4818904a;
        bVar1 = bVar2;
        if (uStack_104 != 1) goto LAB_ram_481890f0;
      }
      else {
LAB_ram_48189128:
        if (bVar2) goto LAB_ram_4818904a;
        bVar1 = false;
LAB_ram_48189138:
        if (uStack_104 != 1) {
LAB_ram_481890f0:
          iVar6 = FUN_ram_4818899a(iVar6,uVar5 + 0x70);
          iStack_100 = (uint)(iVar6 == 0) + iStack_100;
          if ((!bVar2) && (8 < uStack_104)) goto LAB_ram_48189172;
        }
        if (!bVar1) {
          puStack_fc[1] = puStack_fc[1] | 8;
        }
      }
      iVar9 = param_1 + 0xcc;
      iVar6 = FUN_ram_481888fc(param_4,iVar9);
      if (iVar6 != 0) {
        puStack_fc[1] = puStack_fc[1] | 0x10000;
      }
      uVar7 = 0;
      iVar6 = param_3;
      if (param_3 == 0) {
        uVar7 = 0;
      }
      else {
        do {
          if ((*(int *)(iVar6 + 0x18) != 0) &&
             (iVar12 = FUN_ram_4818899a(iVar6 + 0x34,param_1 + 0x70), iVar12 == 0)) {
            if (((*(uint *)(param_1 + 0x158) & 4) == 0) ||
               (((*(uint *)(param_1 + 0x164) & 2) != 0 &&
                ((*(uint *)(param_1 + 0x164) & 0x8001) == 0)))) {
              if ((*(int *)(iVar6 + 0xe8) == 0) ||
                 ((1 << (*(int *)(iVar6 + 0xe8) - 1U & 0x1f) & *param_4) == 0)) {
                uVar7 = uVar7 | 0x20000;
              }
              if ((*(int *)(iVar6 + 0xec) == 0) ||
                 ((1 << (*(int *)(iVar6 + 0xec) - 1U & 0x1f) & param_4[1]) == 0)) {
                uVar7 = uVar7 | 0x40000;
              }
              uVar10 = FUN_ram_4817697e();
              uVar11 = FUN_ram_48176d4c();
              iVar12 = FUN_ram_48176cf2(uVar10,*(undefined4 *)(iVar6 + 0x14),
                                        *(undefined4 *)(iVar6 + 0x10),auStack_d4);
              if (iVar12 == 0) {
                iVar12 = FUN_ram_481888fc(param_4,iVar9);
                if (iVar12 != 0) {
                  uVar7 = uVar7 | 0x10000;
                }
                iVar12 = FUN_ram_48177276(*(undefined4 *)(iVar6 + 0xec),
                                          *(undefined4 *)(iVar6 + 0xf0),iVar9,
                                          *(undefined4 *)(iVar6 + 0xe8),auStack_d4,uVar11,
                                          *(undefined4 *)(iVar6 + 0xe4),
                                          *(undefined4 *)(iVar6 + 0xe0));
                if (iVar12 == 0) {
                  iVar12 = iVar6 + 0x84;
                  do {
                    if (*(int *)(iVar12 + 0x10) == 0) break;
                    if ((*(int *)(uVar5 + 0x24) == *(int *)(iVar12 + 0x10)) &&
                       (iVar13 = FUN_ram_4ff4511a(*(undefined4 *)(uVar5 + 0x28),
                                                  *(undefined4 *)(iVar12 + 0x14)), iVar13 == 0)) {
                      uVar7 = uVar7 | 2;
                      goto LAB_ram_48188f98;
                    }
                    iVar12 = *(int *)(iVar12 + 0x3c);
                  } while (iVar12 != 0);
                  goto LAB_ram_481890e4;
                }
              }
            }
            uVar7 = uVar7 | 0x10;
            break;
          }
LAB_ram_481890e4:
          iVar6 = *(int *)(iVar6 + 0xf4);
        } while (iVar6 != 0);
      }
LAB_ram_48188f98:
      puStack_fc[2] = param_1;
      puStack_fc[3] = 0;
      puStack_fc[1] = puStack_fc[1] | uVar7;
      uStack_104 = uStack_104 + 1;
      puStack_fc = puStack_fc + 2;
      if (bVar2) {
LAB_ram_4818901a:
        iVar6 = uStack_104 - 1;
        goto LAB_ram_4818907c;
      }
      iVar6 = *(int *)(param_1 + 0x188);
      if (iVar6 != 0) goto LAB_ram_48188dba;
LAB_ram_48188fc2:
      puStack_fc[1] = 0x4000;
      iVar6 = *(int *)(param_1 + 0x18c);
      if (iVar6 != 0) goto LAB_ram_48188dd2;
LAB_ram_48188fd0:
      puStack_fc[1] = puStack_fc[1] | 0x8000;
      if (uStack_104 != 1) goto LAB_ram_48188de8;
LAB_ram_48188fe0:
      iVar6 = param_1 + 0x50;
      iVar9 = FUN_ram_4818899a(iVar6,param_1 + 0x70);
      if (iVar9 != 0) goto LAB_ram_48188de8;
      uVar5 = param_1;
      if (param_2 == 0) goto LAB_ram_48189056;
      iVar9 = *(int *)(param_1 + 8);
      uVar7 = param_2;
      do {
        if ((iVar9 == *(int *)(uVar7 + 8)) &&
           (iVar12 = FUN_ram_4ff4511a(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(uVar7 + 0xc),
                                      iVar9), iVar12 == 0)) goto LAB_ram_4818901a;
        uVar7 = *(uint *)(uVar7 + 0x194);
      } while (uVar7 != 0);
      bVar2 = true;
      param_1 = param_2;
    } while( true );
  }
  iVar9 = -0x2800;
LAB_ram_48189184:
  *param_6 = 0xffffffff;
  return iVar9;
LAB_ram_48189056:
  param_1 = *(uint *)(uVar5 + 0x194);
  bVar2 = false;
  if (param_1 != 0) goto LAB_ram_48188df4;
LAB_ram_48189060:
  iVar6 = uStack_104 - 1;
  auStack_9c[iVar6 * 2 + 3] = auStack_9c[iVar6 * 2 + 3] | 8;
LAB_ram_4818907c:
  puVar16 = auStack_9c + uStack_104 * 2;
  auStack_9c[3] = auStack_9c[3] | uVar17;
  while( true ) {
    auStack_d4[0] = puVar16[1];
    if ((param_7 != (code *)0x0) &&
       (iVar9 = (*param_7)(param_8,*puVar16,iVar6,auStack_d4), iVar9 != 0)) break;
    uVar17 = *param_6;
    puVar16 = puVar16 + -2;
    *param_6 = uVar17 | auStack_d4[0];
    if (iVar6 == 0) {
      if ((uVar17 | auStack_d4[0]) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = -0x2700;
      }
      return iVar6;
    }
    iVar6 = iVar6 + -1;
  }
  if (iVar9 == -0x2700) {
LAB_ram_48189172:
    iVar9 = -0x3000;
  }
  goto LAB_ram_48189184;
}



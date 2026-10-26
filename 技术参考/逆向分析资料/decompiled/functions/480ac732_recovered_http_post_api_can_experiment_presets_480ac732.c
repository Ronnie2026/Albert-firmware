/* Firmware entry: 0x480ac732 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_api_can_experiment_presets_480ac732(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char ******ppppppcVar6;
  ulong uVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  char *****pppppcVar11;
  undefined4 ******ppppppuVar12;
  char *****pppppcVar13;
  char *****pppppcVar14;
  int iVar15;
  char *pcVar16;
  byte *pbVar17;
  int iVar18;
  char *pcVar19;
  char ******__s;
  char cVar20;
  undefined1 uVar21;
  int iVar22;
  undefined1 uStack_1ad;
  undefined8 uStack_1ac;
  undefined1 auStack_1a4 [16];
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 *****local_184 [3];
  char cStack_175;
  char *****local_174;
  char ****appppcStack_170 [2];
  undefined1 uStack_166;
  byte bStack_165;
  char ****local_164 [8];
  undefined2 uStack_144;
  undefined1 uStack_13b;
  undefined1 uStack_138;
  undefined2 uStack_132;
  undefined1 uStack_124;
  char ****appppcStack_84 [21];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(local_184,&DAT_ram_481c7a3c);
  iVar18 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
  iVar15 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar18;
  if (*(int *)(iVar15 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar18 + 0xcc4);
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar5 = FUN_ram_4802b18e(local_184,*puVar2);
      iVar18 = DAT_ram_4ff6ded8;
      if (iVar5 != 0) {
        iVar15 = FUN_ram_4802b18e(local_184,"plain");
        if ((iVar15 == 0) ||
           (iVar15 = *(int *)(iVar18 + 0x4c) + *(int *)(iVar18 + 0x40) * 0x1d40,
           *(char *)(iVar15 + 0xcc2) == '\0')) {
          iVar5 = *(int *)(iVar18 + 0x40);
          iVar15 = iVar5 * 0x1d40;
          iVar22 = *(int *)(iVar18 + 0x4c);
          iVar18 = iVar22 + iVar15;
          if (*(int *)(iVar18 + 0x1cc4) == 0) goto LAB_ram_480acce4;
          puVar2 = (undefined4 *)(iVar15 + 0xcc4 + iVar22);
          uVar4 = 0;
          goto LAB_ram_480ac818;
        }
        puVar9 = *(undefined1 **)(iVar15 + 0x43c);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(&local_174,puVar9,*(undefined4 *)(iVar15 + 0x438));
        goto LAB_ram_480ac844;
      }
      puVar2 = puVar2 + 2;
    } while (uVar4 < *(uint *)(iVar15 + 0x1cc4));
  }
  FUN_ram_4802a59e(local_184);
  goto LAB_ram_480aca96;
  while( true ) {
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar18 + 0x1cc4) <= uVar4) break;
LAB_ram_480ac818:
    iVar15 = FUN_ram_4802b18e(local_184,*puVar2);
    if (iVar15 != 0) {
      FUN_ram_4802a8a8(&local_174,*(undefined4 *)(iVar22 + (iVar5 * 0x3a8 + uVar4) * 8 + 0xcc8));
      goto LAB_ram_480ac844;
    }
  }
LAB_ram_480acce4:
  FUN_ram_4802a8a8(&local_174,&DAT_ram_481df390);
LAB_ram_480ac844:
  __s = &local_174;
  if ((char)bStack_165 < '\0') {
    ppppppcVar6 = __s;
    if ((bStack_165 & 0x7f) != 0) goto LAB_ram_480ac858;
  }
  else if (((char ******)local_174 != (char ******)0x0) &&
          (ppppppcVar6 = (char ******)local_174, appppcStack_170[1] != (char ****)0x0)) {
LAB_ram_480ac858:
    uStack_194 = (char *)0x0;
    uVar7 = strtoul((char *)ppppppcVar6,(char **)&uStack_194,10);
    if ((uStack_194 != (char *)0x0) && ((*uStack_194 == '\0' && (uVar7 < 8)))) {
      FUN_ram_4802a59e(__s);
      FUN_ram_4802a59e(local_184);
      iVar15 = DAT_ram_4ff6ded8;
      FUN_ram_4802a8a8(__s,"action");
      iVar18 = FUN_ram_4802b18e(__s,"plain");
      if ((iVar18 == 0) ||
         (iVar18 = *(int *)(iVar15 + 0x4c) + *(int *)(iVar15 + 0x40) * 0x1d40,
         *(char *)(iVar18 + 0xcc2) == '\0')) {
        iVar5 = *(int *)(iVar15 + 0x40);
        iVar18 = iVar5 * 0x1d40;
        iVar22 = *(int *)(iVar15 + 0x4c);
        iVar15 = iVar22 + iVar18;
        if (*(int *)(iVar15 + 0x1cc4) != 0) {
          puVar2 = (undefined4 *)(iVar18 + 0xcc4 + iVar22);
          uVar4 = 0;
          do {
            iVar18 = FUN_ram_4802b18e(__s,*puVar2);
            if (iVar18 != 0) {
              FUN_ram_4802a8a8(auStack_1a4,
                               *(undefined4 *)(iVar22 + (iVar5 * 0x3a8 + uVar4) * 8 + 0xcc8));
              goto LAB_ram_480ac8ea;
            }
            uVar4 = uVar4 + 1;
            puVar2 = puVar2 + 2;
          } while (uVar4 < *(uint *)(iVar15 + 0x1cc4));
        }
        FUN_ram_4802a8a8(auStack_1a4,&DAT_ram_481df390);
      }
      else {
        puVar9 = *(undefined1 **)(iVar18 + 0x43c);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(auStack_1a4,puVar9,*(undefined4 *)(iVar18 + 0x438));
      }
LAB_ram_480ac8ea:
      FUN_ram_4802a59e(__s);
      iVar15 = FUN_ram_4802b18e(auStack_1a4,"load");
      if (iVar15 == 0) {
        if ((DAT_ram_4ff6ded0 == (code *)0x0) || (iVar15 = (*DAT_ram_4ff6ded0)(), iVar15 != 0)) {
          iVar5 = FUN_ram_4802b18e(auStack_1a4,"rename");
          iVar18 = DAT_ram_4ff6ded8;
          iVar15 = DAT_ram_4ff6ded4;
          if (iVar5 == 0) {
            iVar15 = FUN_ram_4802b18e(auStack_1a4,"save");
            if (iVar15 == 0) {
              FUN_ram_4808999a(400,0x12,0);
            }
            else {
              memset(__s,0,0x144);
              appppcStack_170[0]._0_1_ = 1;
              uStack_13b = 1;
              uStack_144 = 100;
              uStack_138 = 0xff;
              uStack_124 = 0xff;
              uStack_132 = 0xff1d;
              ppppppcVar6 = __s;
              do {
                *(undefined1 *)(ppppppcVar6 + 0x15) = 1;
                *(undefined2 *)(ppppppcVar6 + 0x20) = 100;
                *(undefined1 *)((int)ppppppcVar6 + 0x89) = 1;
                *(undefined1 *)(ppppppcVar6 + 0x23) = 0xff;
                *(undefined2 *)((int)ppppppcVar6 + 0x92) = 0xff1d;
                *(undefined1 *)(ppppppcVar6 + 0x28) = 0xff;
                ppppppcVar6 = ppppppcVar6 + 0x14;
              } while ((char ******)appppcStack_84 != ppppppcVar6);
              uStack_1ad = 0;
              iVar5 = FUN_ram_48088676(__s,&uStack_1ad);
              iVar18 = DAT_ram_4ff6ded8;
              iVar15 = DAT_ram_4ff6ded4;
              if (iVar5 == 0) {
                FUN_ram_4808999a(400,uStack_1ad,0);
              }
              else {
                FUN_ram_4802a8a8(&uStack_194,"name");
                FUN_ram_4806562c(local_184,iVar18,&uStack_194);
                ppppppuVar12 = local_184;
                if (-1 < cStack_175) {
                  ppppppuVar12 = (undefined4 ******)local_184[0];
                }
                uStack_1ac = FUN_ram_48085db8(iVar15,uVar7 & 0xff,ppppppuVar12,__s);
                FUN_ram_4802a59e(local_184);
                FUN_ram_4802a59e(&uStack_194);
                if ((uStack_1ac & 0xff) != 0) {
                  FUN_ram_48089eac(uVar7 & 0xff,&uStack_1ac);
                  FUN_ram_4802a59e(auStack_1a4);
                  return;
                }
                FUN_ram_4808999a(0x199,uStack_1ac._1_1_,0);
              }
            }
          }
          else {
            FUN_ram_4802a8a8(local_184,"name");
            FUN_ram_4806562c(__s,iVar18,local_184);
            ppppppcVar6 = __s;
            if (-1 < (char)bStack_165) {
              ppppppcVar6 = (char ******)local_174;
            }
            uVar21 = 0;
            if ((*(char *)(iVar15 + 0x18) == '\0') || (*(char *)(iVar15 + 0x19) == '\0')) {
              uStack_190 = 0;
              uVar3 = 0x13;
            }
            else {
              pcVar19 = (char *)(*(int *)(iVar15 + 0x14) + uVar7 * 0x17c);
              if (*pcVar19 == '\0') {
                uStack_190 = 0;
                uVar3 = 0x14;
              }
              else {
                uStack_190 = 0;
                uVar3 = 0x14;
                if (pcVar19[1] != '\0') {
                  memset(pcVar19 + 0xc,0,0x19);
                  if (ppppppcVar6 != (char ******)0x0) {
                    uVar4 = 0;
                    do {
                      if (*(char *)((int)ppppppcVar6 + uVar4) == '\0') {
                        uVar4 = uVar4 & 0xff;
                        break;
                      }
                      pcVar19[uVar4 + 0xc] = *(char *)((int)ppppppcVar6 + uVar4);
                      uVar4 = uVar4 + 1;
                    } while (uVar4 != 0x18);
                    pcVar19[uVar4 + 0xc] = '\0';
                  }
                  uVar4 = 0x811c9dc5;
                  pbVar17 = (byte *)(pcVar19 + 4);
                  do {
                    bVar1 = *pbVar17;
                    pbVar17 = pbVar17 + 1;
                    uVar4 = (uVar4 ^ bVar1) * 0x1000193;
                  } while (pbVar17 != (byte *)(pcVar19 + 0x16c));
                  iVar18 = *(int *)(iVar15 + 0x14);
                  *(uint *)(pcVar19 + 0x16c) = uVar4;
                  iVar18 = iVar18 + uVar7 * 0x17c;
                  iVar5 = *(int *)(iVar18 + 0x170) + 1;
                  if (iVar5 == 0) {
                    iVar5 = 1;
                  }
                  *(int *)(iVar18 + 0x170) = iVar5;
                  uVar4 = *(uint *)(iVar15 + 0x1c);
                  uVar21 = 1;
                  *(undefined1 *)(iVar18 + 0x178) = 1;
                  *(uint *)(iVar15 + 0x1c) = uVar4 | 1 << (uVar7 & 0x1f);
                  uStack_190 = *(undefined4 *)(pcVar19 + 0x170);
                  uVar3 = 0;
                }
              }
            }
            pcVar19 = uStack_194;
            uStack_194._3_1_ = SUB41(pcVar19,3);
            uStack_194._0_3_ = CONCAT12(uVar21,CONCAT11(uVar3,uVar21));
            FUN_ram_4802a59e(__s);
            FUN_ram_4802a59e(local_184);
            if (((uint)uStack_194 & 0xff) == 0) {
              FUN_ram_4808999a(0x199,uVar3,0);
            }
            else {
              FUN_ram_48089eac(uVar7 & 0xff,&uStack_194);
            }
          }
        }
        else {
          FUN_ram_48066698(DAT_ram_4ff6ded8,0x199,"application/json",
                           "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}",0x2e);
        }
      }
      else {
        memset(__s,0,0x144);
        iVar15 = DAT_ram_4ff6ded4;
        appppcStack_170[0]._0_1_ = 1;
        uStack_13b = 1;
        uStack_144 = 100;
        uStack_138 = 0xff;
        uStack_124 = 0xff;
        uStack_132 = 0xff1d;
        ppppppcVar6 = __s;
        do {
          *(undefined1 *)(ppppppcVar6 + 0x15) = 1;
          *(undefined2 *)(ppppppcVar6 + 0x20) = 100;
          *(undefined1 *)((int)ppppppcVar6 + 0x89) = 1;
          *(undefined1 *)(ppppppcVar6 + 0x23) = 0xff;
          *(undefined2 *)((int)ppppppcVar6 + 0x92) = 0xff1d;
          *(undefined1 *)(ppppppcVar6 + 0x28) = 0xff;
          ppppppcVar6 = ppppppcVar6 + 0x14;
        } while ((char ******)appppcStack_84 != ppppppcVar6);
        puVar9 = &uStack_166;
        do {
          puVar9[-10] = 1;
          *(undefined4 *)(puVar9 + -6) = 0;
          *(undefined2 *)(puVar9 + -2) = 0;
          pvVar8 = memset(puVar9,0,0x20);
          *(undefined1 *)((int)pvVar8 + 0x20) = 0;
          *(undefined4 *)((int)pvVar8 + 0x22) = 100;
          *(undefined1 *)((int)pvVar8 + 0x26) = 0;
          *(undefined1 *)((int)pvVar8 + 0x3a) = 0;
          *(undefined4 *)((int)pvVar8 + 0x3e) = 0;
          *(undefined1 *)((int)pvVar8 + 0x42) = 0xff;
          *(undefined1 *)((int)pvVar8 + 0x27) = 0;
          *(undefined1 *)((int)pvVar8 + 0x28) = 0;
          *(undefined1 *)((int)pvVar8 + 0x29) = 0;
          *(undefined1 *)((int)pvVar8 + 0x2a) = 0;
          *(undefined1 *)((int)pvVar8 + 0x2b) = 1;
          *(undefined1 *)((int)pvVar8 + 0x2c) = 0;
          *(undefined1 *)((int)pvVar8 + 0x2d) = 0;
          *(undefined1 *)((int)pvVar8 + 0x2e) = 0xff;
          *(undefined1 *)((int)pvVar8 + 0x2f) = 0;
          *(undefined1 *)((int)pvVar8 + 0x30) = 0;
          *(undefined1 *)((int)pvVar8 + 0x31) = 0;
          *(undefined1 *)((int)pvVar8 + 0x32) = 0;
          *(undefined1 *)((int)pvVar8 + 0x33) = 0;
          *(undefined2 *)((int)pvVar8 + 0x34) = 0xff1d;
          *(undefined1 *)((int)pvVar8 + 0x36) = 0;
          *(undefined1 *)((int)pvVar8 + 0x37) = 0;
          *(undefined1 *)((int)pvVar8 + 0x38) = 0;
          *(undefined1 *)((int)pvVar8 + 0x39) = 0;
          puVar9 = (undefined1 *)((int)pvVar8 + 0x50);
        } while (&stack0xffffffda != puVar9);
        if ((*(char *)(iVar15 + 0x18) == '\0') || (iVar15 = *(int *)(iVar15 + 0x14), iVar15 == 0)) {
          uStack_194 = (char *)((uint)uStack_194 & 0xffffff00);
          uVar10 = 0x13;
        }
        else {
          pcVar19 = (char *)(iVar15 + uVar7 * 0x17c);
          if ((*pcVar19 == '\0') || (pcVar19[1] == '\0')) {
            cVar20 = '\0';
            uVar10 = 0x14;
          }
          else {
            pcVar16 = pcVar19 + 0x28;
            do {
              pppppcVar11 = *(char ******)(pcVar16 + 4);
              pppppcVar13 = *(char ******)(pcVar16 + 8);
              pppppcVar14 = *(char ******)(pcVar16 + 0xc);
              *__s = *(char ******)pcVar16;
              __s[1] = pppppcVar11;
              __s[2] = pppppcVar13;
              __s[3] = pppppcVar14;
              pcVar16 = pcVar16 + 0x10;
              __s = __s + 4;
            } while (pcVar16 != pcVar19 + 0x168);
            uVar10 = 0;
            cVar20 = '\x01';
            *__s = *(char ******)pcVar16;
          }
          uStack_194 = (char *)CONCAT31(uStack_194._1_3_,cVar20);
          if (cVar20 != '\0') {
            FUN_ram_4802a8a8(local_184,&DAT_ram_481c4164);
            FUN_ram_480881e0(local_184,&DAT_ram_481c4274);
            FUN_ram_4802af2c(local_184,&DAT_ram_481c3dec);
            FUN_ram_480ab726(local_184,"ruleCount",(char)local_174);
            FUN_ram_480881e0(local_184,"rules");
            FUN_ram_4802af5a(local_184,0x5b);
            pppppcVar11 = appppcStack_170;
            cVar20 = '\0';
            if ((char)local_174 != '\0') {
              while( true ) {
                FUN_ram_480abb04(local_184,pppppcVar11);
                cVar20 = cVar20 + '\x01';
                pppppcVar11 = pppppcVar11 + 0x14;
                if ((char)local_174 == cVar20) break;
                FUN_ram_4802af5a(local_184);
              }
            }
            FUN_ram_4802af5a(local_184,0x5d);
            FUN_ram_4802af5a(local_184,0x7d);
            FUN_ram_4806acb0(DAT_ram_4ff6ded8,200,"application/json",local_184);
            FUN_ram_4802a59e(local_184);
            goto LAB_ram_480aca32;
          }
        }
        FUN_ram_4808999a(0x194,uVar10,0);
      }
LAB_ram_480aca32:
      FUN_ram_4802a59e(auStack_1a4);
      return;
    }
  }
  FUN_ram_4802a59e(__s);
  FUN_ram_4802a59e(local_184);
LAB_ram_480aca96:
  FUN_ram_4808999a(400,0x12,0);
  return;
}



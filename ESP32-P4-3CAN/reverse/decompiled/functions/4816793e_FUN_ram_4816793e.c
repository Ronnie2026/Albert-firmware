/* Firmware entry: 0x4816793e */

int FUN_ram_4816793e(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45080(1,0xe0);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4ff45080(1,0x20);
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_ram_4ff45080(1,0x28);
      *(int *)(iVar1 + 0x14) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_ram_4ff45080(1,0x30);
        *(int *)(iVar1 + 0x2c) = iVar2;
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_ram_4ff45080(1,0x30);
          *(int **)(iVar1 + 0x20) = piVar3;
          if (piVar3 != (int *)0x0) {
            iVar2 = FUN_ram_48168e60();
            *piVar3 = iVar2;
            if (iVar2 != 0) {
              iVar13 = *(int *)(iVar1 + 0x20);
              iVar2 = FUN_ram_4ff45080(1,0x18);
              *(int *)(iVar13 + 4) = iVar2;
              if (iVar2 != 0) {
                piVar3 = (int *)FUN_ram_4ff45080(1,0x30);
                *(int **)(iVar1 + 0x24) = piVar3;
                if (piVar3 != (int *)0x0) {
                  iVar2 = FUN_ram_48168e60();
                  *piVar3 = iVar2;
                  if (iVar2 != 0) {
                    iVar13 = *(int *)(iVar1 + 0x24);
                    iVar2 = FUN_ram_4ff45080(1,0x18);
                    *(int *)(iVar13 + 4) = iVar2;
                    if (iVar2 != 0) {
                      iVar2 = FUN_ram_48193108();
                      *(int *)(iVar1 + 0x18) = iVar2;
                      if ((((iVar2 == 0) || (iVar2 = FUN_ram_48193fd6(), iVar2 == 0)) ||
                          (iVar13 = FUN_ram_48193378(iVar2,0x50), iVar13 != 0)) ||
                         (iVar13 = FUN_ram_48193168(*(undefined4 *)(iVar1 + 0x18),iVar2,
                                                    &DAT_ram_481dd370), iVar13 != 0)) {
                        uVar4 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error initialize transport\n",
                                         uVar4,"HTTP_CLIENT");
                        goto LAB_ram_48167ab8;
                      }
                      iVar13 = param_1[0x26];
                      if (iVar13 == 2) {
                        uVar4 = 1;
                      }
                      else if (iVar13 == 10) {
                        uVar4 = 2;
                      }
                      else {
                        uVar4 = 0;
                        if (iVar13 != 0) {
                          uVar4 = FUN_ram_4ff44d14();
                          FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                           "E (%lu) %s: %s(%d): Failed to convert addr type %d\n",
                                           uVar4,"HTTP_CLIENT","esp_http_client_init",0x32f,
                                           param_1[0x26]);
                          goto LAB_ram_48167ab8;
                        }
                      }
                      FUN_ram_48193ef0(iVar2,uVar4);
                      iVar2 = FUN_ram_48166a22(iVar1,param_1,iVar2);
                      if (iVar2 == 0) {
                        uVar4 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                         "E (%lu) %s: %s(%d): Failed to set TCP config\n",uVar4,
                                         "HTTP_CLIENT","esp_http_client_init",0x332);
                        goto LAB_ram_48167ab8;
                      }
                      iVar2 = FUN_ram_48193f62();
                      if (((iVar2 == 0) || (iVar13 = FUN_ram_48193378(iVar2,0x1bb), iVar13 != 0)) ||
                         (iVar13 = FUN_ram_48193168(*(undefined4 *)(iVar1 + 0x18),iVar2,"https"),
                         iVar13 != 0)) {
                        uVar4 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                         "E (%lu) %s: Error initialize SSL Transport\n",uVar4,
                                         "HTTP_CLIENT");
                        goto LAB_ram_48167ab8;
                      }
                      FUN_ram_48193ef0(iVar2,uVar4);
                      iVar13 = FUN_ram_48166a22(iVar1,param_1,iVar2);
                      if (iVar13 == 0) {
                        uVar4 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                         "E (%lu) %s: %s(%d): Failed to set SSL config\n",uVar4,
                                         "HTTP_CLIENT","esp_http_client_init",0x342);
                        goto LAB_ram_48167ab8;
                      }
                      if (param_1[0x1e] == 0) {
                        if (*(char *)((int)param_1 + 0x71) == '\0') {
                          pcVar14 = (char *)param_1[8];
                          if (pcVar14 != (char *)0x0) {
                            if (param_1[9] == 0) {
                              sVar5 = strlen(pcVar14);
                              FUN_ram_48193ec8(iVar2,pcVar14,sVar5);
                            }
                            else {
                              FUN_ram_48193ed6(iVar2,pcVar14);
                            }
                          }
                        }
                        else {
                          FUN_ram_48193eb0(iVar2);
                        }
                      }
                      else {
                        FUN_ram_48193f4e(iVar2);
                      }
                      pcVar14 = (char *)param_1[10];
                      if (pcVar14 != (char *)0x0) {
                        if (param_1[0xb] == 0) {
                          sVar5 = strlen(pcVar14);
                          FUN_ram_48193ee2(iVar2,pcVar14,sVar5);
                        }
                        else {
                          FUN_ram_48193efa(iVar2,pcVar14);
                        }
                      }
                      FUN_ram_48193ebe(iVar2,param_1[0x10]);
                      if (param_1[0x25] != 0) {
                        FUN_ram_48193f58(iVar2);
                      }
                      pcVar14 = (char *)param_1[0xc];
                      if (pcVar14 != (char *)0x0) {
                        if (param_1[0xd] == 0) {
                          sVar5 = strlen(pcVar14);
                          FUN_ram_48193f06(iVar2,pcVar14,sVar5);
                        }
                        else {
                          FUN_ram_48193f20(iVar2,pcVar14);
                        }
                      }
                      if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
                        FUN_ram_48193f14(iVar2);
                      }
                      if (*(char *)((int)param_1 + 0x72) != '\0') {
                        FUN_ram_48193f36(iVar2);
                      }
                      if (param_1[0x1d] != 0) {
                        FUN_ram_48193f44(iVar2);
                      }
                      iVar2 = param_1[0x14];
                      iVar13 = param_1[0x12];
                      iVar12 = param_1[2];
                      iVar11 = param_1[5];
                      iVar6 = param_1[0x17];
                      iVar7 = param_1[0x13];
                      iVar9 = param_1[0x16];
                      iVar8 = param_1[0x19];
                      *(int *)(iVar1 + 0x28) = param_1[0x1b];
                      *(char *)(iVar1 + 0x94) = (char)iVar2;
                      *(int *)(iVar1 + 0x6c) = iVar13;
                      *(int *)(iVar1 + 0x54) = iVar12;
                      *(int *)(iVar1 + 0x70) = iVar11;
                      *(int *)(iVar1 + 0x84) = iVar6;
                      *(int *)(iVar1 + 0x88) = iVar7;
                      *(int *)(iVar1 + 8) = iVar9;
                      iVar13 = param_1[0x15];
                      iVar2 = param_1[0x1a];
                      if (iVar8 == 0) {
                        iVar8 = 0x200;
                      }
                      *(int *)(iVar1 + 0x8c) = iVar8;
                      if (iVar2 == 0) {
                        iVar2 = 0x200;
                      }
                      *(int *)(iVar1 + 0x90) = iVar2;
                      if (iVar13 == 0) {
                        iVar13 = 10;
                      }
                      *(int *)(iVar1 + 4) = iVar13;
                      if (iVar9 == 0) {
                        *(undefined4 *)(iVar1 + 8) = 10;
                      }
                      else if (iVar9 == -1) {
                        *(undefined4 *)(iVar1 + 8) = 0;
                      }
                      pcVar14 = (char *)param_1[6];
                      if (pcVar14 == (char *)0x0) {
                        pcVar14 = "/";
                      }
                      pcVar14 = strdup(pcVar14);
                      *(char **)(iVar1 + 0x60) = pcVar14;
                      if (pcVar14 == (char *)0x0) {
                        uVar4 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: %s(%d): Memory exhausted\n",
                                         uVar4,"HTTP_CLIENT","_set_config",0x222);
LAB_ram_48167fea:
                        uVar4 = FUN_ram_4ff44d14();
                        pcVar14 = "E (%lu) %s: Error set configurations\n";
                      }
                      else {
                        if ((char *)param_1[1] != (char *)0x0) {
                          pcVar14 = strdup((char *)param_1[1]);
                          *(char **)(iVar1 + 0x50) = pcVar14;
                          if (pcVar14 != (char *)0x0) goto LAB_ram_48167c54;
                          uVar4 = FUN_ram_4ff44d14();
                          FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: %s(%d): Memory exhausted\n",
                                           uVar4,"HTTP_CLIENT","_set_config",0x227);
LAB_ram_4816800a:
                          FUN_ram_48166c24(iVar1);
                          goto LAB_ram_48167fea;
                        }
LAB_ram_48167c54:
                        if ((char *)param_1[7] != (char *)0x0) {
                          pcVar14 = strdup((char *)param_1[7]);
                          *(char **)(iVar1 + 100) = pcVar14;
                          if (pcVar14 == (char *)0x0) {
                            uVar4 = FUN_ram_4ff44d14();
                            FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                             "E (%lu) %s: %s(%d): Memory exhausted\n",uVar4,
                                             "HTTP_CLIENT","_set_config",0x22c);
                            goto LAB_ram_4816800a;
                          }
                        }
                        if ((char *)param_1[3] != (char *)0x0) {
                          pcVar14 = strdup((char *)param_1[3]);
                          *(char **)(iVar1 + 0x58) = pcVar14;
                          if (pcVar14 == (char *)0x0) {
                            uVar4 = FUN_ram_4ff44d14();
                            FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                             "E (%lu) %s: %s(%d): Memory exhausted\n",uVar4,
                                             "HTTP_CLIENT","_set_config",0x231);
                            goto LAB_ram_4816800a;
                          }
                        }
                        if ((char *)param_1[4] != (char *)0x0) {
                          pcVar14 = strdup((char *)param_1[4]);
                          *(char **)(iVar1 + 0x5c) = pcVar14;
                          if (pcVar14 == (char *)0x0) {
                            uVar4 = FUN_ram_4ff44d14();
                            FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                             "E (%lu) %s: %s(%d): Memory exhausted\n",uVar4,
                                             "HTTP_CLIENT","_set_config",0x236);
                            goto LAB_ram_4816800a;
                          }
                        }
                        if (param_1[0x18] == 2) {
                          iVar2 = FUN_ram_481692f0(iVar1 + 0x4c,"https",0xffffffff);
                          if (iVar2 == 0) goto LAB_ram_4816800a;
                          if (*(int *)(iVar1 + 0x54) == 0) {
                            *(undefined4 *)(iVar1 + 0x54) = 0x1bb;
                          }
                        }
                        else {
                          iVar2 = FUN_ram_481692f0(iVar1 + 0x4c,&DAT_ram_481dd370,0xffffffff);
                          if (iVar2 == 0) goto LAB_ram_4816800a;
                          if (*(int *)(iVar1 + 0x54) == 0) {
                            *(undefined4 *)(iVar1 + 0x54) = 0x50;
                          }
                        }
                        if (*(int *)(iVar1 + 0x88) == 0) {
                          *(undefined4 *)(iVar1 + 0x88) = 5000;
                        }
                        if ((char)param_1[0x1c] != '\0') {
                          *(undefined1 *)(iVar1 + 0xc4) = 1;
                        }
                        piVar3 = *(int **)(*(int *)(iVar1 + 0x20) + 4);
                        iVar2 = thunk_FUN_ram_4ff2070c(*(undefined4 *)(iVar1 + 0x90));
                        *piVar3 = iVar2;
                        if (iVar2 == 0) {
LAB_ram_4816814a:
                          uVar4 = FUN_ram_4ff44d14();
                          pcVar14 = "E (%lu) %s: Allocation failed\n";
                        }
                        else {
                          piVar3 = *(int **)(*(int *)(iVar1 + 0x24) + 4);
                          iVar2 = thunk_FUN_ram_4ff2070c(*(undefined4 *)(iVar1 + 0x8c));
                          *piVar3 = iVar2;
                          if (iVar2 == 0) goto LAB_ram_4816814a;
                          pcVar14 = (char *)param_1[0x11];
                          if (pcVar14 == (char *)0x0) {
                            pcVar14 = "ESP32 HTTP Client/1.0";
                          }
                          if ((param_1[1] == 0) || (param_1[6] == 0)) {
                            if (*param_1 == 0) {
                              uVar4 = FUN_ram_4ff44d14();
                              pcVar14 = "E (%lu) %s: config should have either URL or host & path\n"
                              ;
                            }
                            else {
                              iVar2 = FUN_ram_4816763e(iVar1);
                              if (iVar2 == 0) goto LAB_ram_48167d0e;
                              uVar4 = FUN_ram_4ff44d14();
                              pcVar14 = "E (%lu) %s: Failed to set URL\n";
                            }
                          }
                          else {
LAB_ram_48167d0e:
                            if (*(int *)(iVar1 + 0x50) == 0) {
                              uVar4 = FUN_ram_4ff44d14();
                              pcVar14 = "E (%lu) %s: invalid host\n";
                            }
                            else {
                              iVar2 = FUN_ram_48166b36(*(int *)(iVar1 + 0x50),
                                                       *(undefined4 *)(iVar1 + 0x54));
                              if (iVar2 == 0) {
                                uVar4 = FUN_ram_4ff44d14();
                                pcVar14 = "E (%lu) %s: Failed to allocate memory for host header\n";
                              }
                              else {
                                if (((((*(int **)(iVar1 + 0x20) != (int *)0x0) &&
                                      (iVar13 = **(int **)(iVar1 + 0x20), iVar13 != 0)) &&
                                     (iVar13 = FUN_ram_4816901a(iVar13,"User-Agent",pcVar14),
                                     iVar13 == 0)) &&
                                    ((*(int **)(iVar1 + 0x20) != (int *)0x0 &&
                                     (iVar13 = **(int **)(iVar1 + 0x20), iVar13 != 0)))) &&
                                   (iVar13 = FUN_ram_4816901a(iVar13,&DAT_ram_481c3da8,iVar2),
                                   iVar13 == 0)) {
                                  thunk_FUN_ram_4ff209c6(iVar2);
                                  puVar10 = *(undefined4 **)(iVar1 + 0x14);
                                  iVar2 = *(int *)(iVar1 + 0x10);
                                  *(byte *)(iVar1 + 0xdc) = *(byte *)(iVar1 + 0xdc) | 1;
                                  *puVar10 = &LAB_ram_48166776;
                                  puVar10[1] = &LAB_ram_48166786;
                                  puVar10[2] = &LAB_ram_48166c20;
                                  puVar10[3] = FUN_ram_48166d12;
                                  puVar10[4] = FUN_ram_48166954;
                                  puVar10[5] = FUN_ram_48166d4a;
                                  puVar10[6] = &LAB_ram_48166814;
                                  puVar10[7] = &LAB_ram_4816678a;
                                  puVar10[9] = &LAB_ram_48166796;
                                  puVar10[8] = &LAB_ram_4816679a;
                                  *(int *)(iVar2 + 0x18) = iVar1;
                                  *(int *)(iVar1 + 0x9c) = iVar1;
                                  *(undefined4 *)(iVar1 + 0x80) = 1;
                                  return iVar1;
                                }
                                thunk_FUN_ram_4ff209c6(iVar2);
                                uVar4 = FUN_ram_4ff44d14();
                                pcVar14 = "E (%lu) %s: Error while setting default configurations\n"
                                ;
                              }
                            }
                          }
                        }
                      }
                      FUN_ram_4ff44bf0(1,"HTTP_CLIENT",pcVar14,uVar4,"HTTP_CLIENT");
                      goto LAB_ram_48167ab8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error allocate memory\n",uVar4,"HTTP_CLIENT");
LAB_ram_48167ab8:
  FUN_ram_481674aa(iVar1);
  return 0;
}



/* Firmware entry: 0x48168726 */

int FUN_ram_48168726(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *apiStack_34 [3];
  int *piStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apiStack_34[0] = param_1;
  if (param_1[3] != 0) {
    iVar2 = -1;
    goto LAB_ram_48168946;
  }
  uVar5 = param_1[0x20];
  if (uVar5 == 3) goto LAB_ram_48168a8a;
  if (uVar5 < 4) {
    if (uVar5 == 1) goto LAB_ram_48168a98;
    if (uVar5 == 2) {
LAB_ram_4816875a:
      iVar2 = FUN_ram_48168200(apiStack_34[0],apiStack_34[0][0x11]);
      if (iVar2 == 0) {
        if (apiStack_34[0][0x20] == 3) {
          iVar7 = apiStack_34[0][0xc];
          piVar3 = apiStack_34[0];
          if (iVar7 == 0) goto LAB_ram_481687da;
LAB_ram_4816877c:
          piVar3 = apiStack_34[0];
          if (apiStack_34[0][0x11] != 0) {
            iVar6 = apiStack_34[0][0x2e];
            iVar8 = apiStack_34[0][0x2d];
            if (0 < iVar6) {
              iVar1 = 0;
              do {
                iVar2 = FUN_ram_4819331c(piVar3[7],iVar1 + iVar8 + iVar7,iVar6,piVar3[0x22]);
                iVar6 = iVar6 - iVar2;
                if (((char)piVar3[0x31] != '\0') || (iVar2 < 1)) break;
                iVar1 = iVar1 + iVar2;
                iVar2 = iVar1;
              } while (0 < iVar6);
              if (iVar2 < 0) goto LAB_ram_48168af4;
              iVar7 = piVar3[0x2e];
              piVar3[0x2e] = iVar7 - iVar2;
              piVar3[0x2d] = piVar3[0x2d] + iVar2;
              if (0 < iVar7 - iVar2) {
                iVar2 = 0x7003;
                goto LAB_ram_48168af4;
              }
            }
          }
LAB_ram_481687da:
          piVar3[0x20] = 4;
LAB_ram_481687e0:
          *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) & 0xfe;
          lVar9 = FUN_ram_48167188(apiStack_34[0]);
          if (lVar9 < 0) {
            if (((char)apiStack_34[0][0x31] != '\0') &&
               (piVar3 = (int *)FUN_ram_4819bf88(), *piVar3 == 0xb)) {
              return 0x7007;
            }
            if (lVar9 == -0x7007) {
              return 0x7007;
            }
            *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) | 1;
            iVar2 = FUN_ram_4819339e(apiStack_34[0][7]);
            piVar3 = apiStack_34[0];
            if (iVar2 == 0x80) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"HTTP_CLIENT","W (%lu) %s: Close connection due to FIN received\n",
                               uVar4,"HTTP_CLIENT");
              FUN_ram_4816725c(apiStack_34[0]);
              piVar3 = apiStack_34[0];
              iVar2 = FUN_ram_48193390(apiStack_34[0][7]);
              if ((code *)piVar3[0x21] != (code *)0x0) {
                piVar3[0x28] = iVar2;
                piVar3[0x26] = 0;
                piVar3[0x29] = 0;
                piVar3[0x2a] = piVar3[10];
                (*(code *)piVar3[0x21])(piVar3 + 0x26);
              }
              FUN_ram_481667a6(0,apiStack_34,4);
              return 0x7008;
            }
            iVar2 = FUN_ram_48193390(apiStack_34[0][7]);
            if ((code *)piVar3[0x21] != (code *)0x0) {
              piVar3[0x28] = iVar2;
              piVar3[0x26] = 0;
              piVar3[0x29] = 0;
              piVar3[0x2a] = piVar3[10];
              (*(code *)piVar3[0x21])(piVar3 + 0x26);
            }
            FUN_ram_481667a6(0,apiStack_34,4);
            return 0x7004;
          }
LAB_ram_481687f8:
          do {
            piVar3 = apiStack_34[0];
            iVar7 = apiStack_34[0][9];
            *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) | 1;
            iVar2 = *(int *)(iVar7 + 8);
            if (iVar2 - 200U < 100) {
              *apiStack_34[0] = 0;
            }
            else {
              if (apiStack_34[0][1] <= *apiStack_34[0]) {
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                 "E (%lu) %s: Error, reach max_redirection_count count=%d\n",uVar4,
                                 "HTTP_CLIENT",*piVar3);
                iVar2 = 0x7001;
LAB_ram_48168b7e:
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error response\n",uVar4,"HTTP_CLIENT")
                ;
                piVar3 = apiStack_34[0];
                iVar7 = FUN_ram_48193390(apiStack_34[0][7]);
                if ((code *)piVar3[0x21] != (code *)0x0) {
                  piVar3[0x28] = iVar7;
                  piVar3[0x26] = 0;
                  piVar3[0x29] = 0;
                  piVar3[0x2a] = piVar3[10];
                  (*(code *)piVar3[0x21])(piVar3 + 0x26);
                }
                goto LAB_ram_48168b2e;
              }
              if (iVar2 < 0x135) {
                if ((0x132 < iVar2) || (iVar2 - 0x12dU < 3)) {
                  if ((char)apiStack_34[0][0x25] == '\0') {
                    iVar2 = FUN_ram_4816816a(apiStack_34[0]);
                    if (iVar2 != 0) goto LAB_ram_48168b7e;
                    iVar2 = *(int *)(piVar3[9] + 8);
                  }
                  else if ((code *)apiStack_34[0][0x21] != (code *)0x0) {
                    apiStack_34[0][0x26] = 7;
                    apiStack_34[0][0x28] = 0;
                    apiStack_34[0][0x29] = 0;
                    apiStack_34[0][0x2a] = apiStack_34[0][10];
                    (*(code *)apiStack_34[0][0x21])(apiStack_34[0] + 0x26);
                    iVar2 = *(int *)(piVar3[9] + 8);
                  }
                  piStack_28 = piVar3;
                  iStack_24 = iVar2;
                  FUN_ram_481667a6(7,&piStack_28,8);
                  iVar7 = apiStack_34[0][9];
                }
              }
              else if (iVar2 == 0x191) {
                iVar2 = FUN_ram_48168656(apiStack_34[0]);
                if (iVar2 != 0) goto LAB_ram_48168b7e;
                iVar7 = apiStack_34[0][9];
              }
            }
            if (*(char *)(iVar7 + 0x2c) != '\0') {
              while ((char)apiStack_34[0][0x1f] == '\0') {
                if ((uint)apiStack_34[0][0x20] < 6) {
                  iVar2 = -1;
LAB_ram_48168b3c:
                  if ((char)apiStack_34[0][0x31] != '\0') {
LAB_ram_48168a4c:
                    piVar3 = (int *)FUN_ram_4819bf88();
                    if (*piVar3 == 0xb) {
                      return 0x7007;
                    }
                  }
                  if ((apiStack_34[0][0x1b] == 5) || ((char)apiStack_34[0][0x1f] != '\0')) {
LAB_ram_48168a6a:
                    iVar7 = apiStack_34[0][9];
                    iVar2 = 0;
                  }
                  else {
                    uVar4 = FUN_ram_4ff44d14();
                    FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                     "E (%lu) %s: Incomplete chunked data received %d\n",uVar4,
                                     "HTTP_CLIENT",iVar2);
                    iVar2 = 0x700c;
                    iVar7 = apiStack_34[0][9];
                  }
                  goto LAB_ram_481688aa;
                }
                if (apiStack_34[0][0x1b] == 5) {
                  iVar2 = 0;
                  if ((char)apiStack_34[0][0x31] != '\0') goto LAB_ram_48168a4c;
                  goto LAB_ram_48168a6a;
                }
                iVar2 = FUN_ram_48166bca(apiStack_34[0]);
                if (iVar2 < 1) goto LAB_ram_48168b3c;
                iVar7 = apiStack_34[0][9];
                if (*(char *)(iVar7 + 0x2c) == '\0') break;
              }
            }
            iVar2 = 0;
LAB_ram_481688aa:
            iVar6 = *(int *)(iVar7 + 0x14);
            iVar8 = *(int *)(iVar7 + 0x24);
            if (iVar6 <= iVar8) goto LAB_ram_481688dc;
            while (5 < (uint)apiStack_34[0][0x20]) {
              if (apiStack_34[0][0x1b] == 5) {
                iVar7 = 0;
                if ((char)apiStack_34[0][0x31] != '\0') goto LAB_ram_48168972;
                goto LAB_ram_481688e8;
              }
              iVar7 = FUN_ram_48166bca(apiStack_34[0]);
              if (iVar7 < 1) goto LAB_ram_48168b46;
              iVar7 = apiStack_34[0][9];
              iVar6 = *(int *)(iVar7 + 0x14);
              iVar8 = *(int *)(iVar7 + 0x24);
              if (iVar6 <= iVar8) {
LAB_ram_481688dc:
                if ((iVar6 != iVar8) || (*(uint *)(iVar7 + 0x10) <= *(uint *)(iVar7 + 0x20)))
                goto LAB_ram_481688e8;
              }
            }
            iVar7 = -1;
LAB_ram_48168b46:
            if ((char)apiStack_34[0][0x31] != '\0') {
LAB_ram_48168972:
              piVar3 = (int *)FUN_ram_4819bf88();
              if (*piVar3 == 0xb) {
                return 0x7007;
              }
            }
            if (apiStack_34[0][0x1b] != 5) {
              iVar6 = apiStack_34[0][9];
              if ((*(int *)(iVar6 + 0x24) < *(int *)(iVar6 + 0x14)) ||
                 ((*(int *)(iVar6 + 0x14) == *(int *)(iVar6 + 0x24) &&
                  (*(uint *)(iVar6 + 0x20) < *(uint *)(iVar6 + 0x10))))) {
                uVar4 = FUN_ram_4ff44d14();
                iVar2 = apiStack_34[0][9];
                FUN_ram_4ff44bf0(1,"HTTP_CLIENT",
                                 "E (%lu) %s: Incomlete data received, ret=%d, %lld/%lld bytes\n",
                                 uVar4,"HTTP_CLIENT",iVar7,*(undefined4 *)(iVar2 + 0x20),
                                 *(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x10),
                                 *(undefined4 *)(iVar2 + 0x14));
                goto LAB_ram_481689de;
              }
            }
LAB_ram_481688e8:
            if (iVar2 == 0) {
              if ((code *)apiStack_34[0][0x21] != (code *)0x0) {
                apiStack_34[0][0x28] = 0;
                apiStack_34[0][0x29] = 0;
                apiStack_34[0][0x2a] = apiStack_34[0][10];
                apiStack_34[0][0x26] = 5;
                (*(code *)apiStack_34[0][0x21])(apiStack_34[0] + 0x26);
              }
              FUN_ram_481667a6(5,apiStack_34,4);
              iVar2 = 0;
            }
            else {
LAB_ram_481689de:
              piVar3 = apiStack_34[0];
              iVar2 = FUN_ram_48193390(apiStack_34[0][7]);
              if ((code *)piVar3[0x21] != (code *)0x0) {
                piVar3[0x28] = iVar2;
                piVar3[0x26] = 0;
                piVar3[0x29] = 0;
                piVar3[0x2a] = piVar3[10];
                (*(code *)piVar3[0x21])(piVar3 + 0x26);
              }
              FUN_ram_481667a6(0,apiStack_34,4);
              iVar2 = 0x700c;
            }
            iVar7 = apiStack_34[0][4];
            *(undefined4 *)(*(int *)(apiStack_34[0][9] + 4) + 0x10) = 0;
            iVar7 = FUN_ram_4818d5ce(iVar7);
            if (iVar7 == 0) {
              FUN_ram_4816725c(apiStack_34[0]);
            }
            else if (2 < (uint)apiStack_34[0][0x20]) {
              apiStack_34[0][0x20] = 2;
              *(undefined1 *)(apiStack_34[0] + 0x2f) = 0;
            }
            do {
              while( true ) {
                if (apiStack_34[0][3] == 0) {
                  return iVar2;
                }
                if (iVar2 != 0) {
                  return iVar2;
                }
LAB_ram_48168946:
                FUN_ram_48166da6(apiStack_34[0]);
                uVar5 = apiStack_34[0][0x20];
                if (uVar5 == 3) goto LAB_ram_48168a8a;
                if (3 < uVar5) break;
                if (uVar5 == 1) goto LAB_ram_48168a98;
                if (uVar5 == 2) goto LAB_ram_4816875a;
              }
              if (uVar5 == 4) goto LAB_ram_481687e0;
            } while (uVar5 != 6);
          } while( true );
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Invalid state\n",uVar4,"HTTP_CLIENT");
        iVar2 = 0x103;
LAB_ram_48168af4:
        if (((char)apiStack_34[0][0x31] != '\0') &&
           (piVar3 = (int *)FUN_ram_4819bf88(), *piVar3 == 0xb)) {
          return 0x7007;
        }
        goto LAB_ram_48168b0a;
      }
      if (((char)apiStack_34[0][0x31] != '\0') &&
         (piVar3 = (int *)FUN_ram_4819bf88(), *piVar3 == 0xb)) {
        return 0x7007;
      }
      piVar3 = apiStack_34[0];
      iVar7 = FUN_ram_48193390(apiStack_34[0][7]);
      if ((code *)piVar3[0x21] != (code *)0x0) {
        piVar3[0x28] = iVar7;
        piVar3[0x26] = 0;
        piVar3[0x29] = 0;
        piVar3[0x2a] = piVar3[10];
        (*(code *)piVar3[0x21])(piVar3 + 0x26);
      }
      goto LAB_ram_48168b2e;
    }
  }
  else {
    if (uVar5 == 4) goto LAB_ram_481687e0;
    if (uVar5 == 6) goto LAB_ram_481687f8;
  }
  return -1;
LAB_ram_48168a8a:
  iVar7 = apiStack_34[0][0xc];
  piVar3 = apiStack_34[0];
  if (iVar7 != 0) goto LAB_ram_4816877c;
  goto LAB_ram_481687da;
LAB_ram_48168a98:
  iVar2 = FUN_ram_481672be(apiStack_34[0]);
  if (iVar2 != 0) {
    if (((char)apiStack_34[0][0x31] != '\0') && (iVar2 == 0x7006)) {
      return 0x7007;
    }
LAB_ram_48168b0a:
    piVar3 = apiStack_34[0];
    iVar7 = FUN_ram_48193390(apiStack_34[0][7]);
    if ((code *)piVar3[0x21] != (code *)0x0) {
      piVar3[0x28] = iVar7;
      piVar3[0x26] = 0;
      piVar3[0x29] = 0;
      piVar3[0x2a] = piVar3[10];
      (*(code *)piVar3[0x21])(piVar3 + 0x26);
    }
LAB_ram_48168b2e:
    FUN_ram_481667a6(0,apiStack_34,4);
    return iVar2;
  }
  goto LAB_ram_4816875a;
}



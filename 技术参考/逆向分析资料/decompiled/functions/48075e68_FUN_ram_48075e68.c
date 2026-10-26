/* Firmware entry: 0x48075e68 */

undefined4 FUN_ram_48075e68(int param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 < 0xd) && (uVar3 = *param_3, *param_3 = uVar3 + 1, uVar3 + 1 <= param_4)) {
    iVar1 = FUN_ram_48129d0c();
    piVar4 = *(int **)(param_1 + 8);
    if (iVar1 == 0) {
      if (piVar4 == (int *)0x0) {
        return 1;
      }
LAB_ram_48075ef6:
      if ((param_2 != 0xc) && (uVar3 = *param_3, *param_3 = uVar3 + 1, uVar3 + 1 <= param_4)) {
        do {
          iVar1 = FUN_ram_48129d0c(piVar4);
          piVar7 = (int *)piVar4[2];
          if (iVar1 == 0) {
            if (piVar7 != (int *)0x0) goto LAB_ram_48075fbc;
          }
          else {
            piVar5 = piVar7;
            if (piVar7 != (int *)0x0) {
              while( true ) {
                iVar1 = piVar5[8];
                if (iVar1 == 0) {
                  return 0;
                }
                piVar5 = (int *)*piVar5;
                piVar6 = piVar5;
                if (piVar5 == (int *)0x0) break;
                do {
                  if ((piVar6[8] != 0) && (iVar2 = FUN_ram_4ff453ae(iVar1), iVar2 == 0)) {
                    return 0;
                  }
                  piVar6 = (int *)*piVar6;
                } while (piVar6 != (int *)0x0);
              }
LAB_ram_48075fbc:
              if (param_2 == 0xb) {
                return 0;
              }
              uVar3 = *param_3;
              *param_3 = uVar3 + 1;
              if (param_4 < uVar3 + 1) {
                return 0;
              }
              do {
                iVar1 = FUN_ram_48129d0c(piVar7);
                piVar5 = (int *)piVar7[2];
                if (iVar1 == 0) {
                  if (piVar5 != (int *)0x0) goto LAB_ram_4807603c;
                }
                else {
                  piVar6 = piVar5;
                  if (piVar5 != (int *)0x0) {
                    while( true ) {
                      iVar1 = piVar6[8];
                      if (iVar1 == 0) {
                        return 0;
                      }
                      piVar6 = (int *)*piVar6;
                      piVar8 = piVar6;
                      if (piVar6 == (int *)0x0) break;
                      do {
                        if ((piVar8[8] != 0) && (iVar2 = FUN_ram_4ff453ae(iVar1), iVar2 == 0)) {
                          return 0;
                        }
                        piVar8 = (int *)*piVar8;
                      } while (piVar8 != (int *)0x0);
                    }
LAB_ram_4807603c:
                    if (param_2 == 10) {
                      return 0;
                    }
                    uVar3 = *param_3;
                    *param_3 = uVar3 + 1;
                    if (param_4 < uVar3 + 1) {
                      return 0;
                    }
                    do {
                      iVar1 = FUN_ram_48129d0c(piVar5);
                      piVar6 = (int *)piVar5[2];
                      if (iVar1 == 0) {
                        if (piVar6 != (int *)0x0) {
LAB_ram_480760be:
                          if (param_2 == 9) {
                            return 0;
                          }
                          uVar3 = *param_3 + 1;
                          *param_3 = uVar3;
                          while( true ) {
                            if (param_4 < uVar3) {
                              return 0;
                            }
                            iVar1 = FUN_ram_48129d0c(piVar6);
                            piVar8 = (int *)piVar6[2];
                            if (iVar1 == 0) goto joined_r0x48076128;
                            piVar9 = piVar8;
                            if (piVar8 != (int *)0x0) {
                              while( true ) {
                                iVar1 = piVar9[8];
                                if (iVar1 == 0) {
                                  return 0;
                                }
                                piVar9 = (int *)*piVar9;
                                piVar10 = piVar9;
                                if (piVar9 == (int *)0x0) break;
                                do {
                                  if ((piVar10[8] != 0) &&
                                     (iVar2 = FUN_ram_4ff453ae(iVar1), iVar2 == 0)) {
                                    return 0;
                                  }
                                  piVar10 = (int *)*piVar10;
                                } while (piVar10 != (int *)0x0);
                              }
                              do {
                                iVar1 = FUN_ram_48075e68(piVar8,param_2 + 5,param_3,param_4);
                                if (iVar1 == 0) {
                                  return 0;
                                }
                                piVar8 = (int *)*piVar8;
joined_r0x48076128:
                              } while (piVar8 != (int *)0x0);
                            }
                            piVar6 = (int *)*piVar6;
                            if (piVar6 == (int *)0x0) break;
                            uVar3 = *param_3 + 1;
                            *param_3 = uVar3;
                          }
                        }
                      }
                      else {
                        piVar8 = piVar6;
                        if (piVar6 != (int *)0x0) {
                          while( true ) {
                            iVar1 = piVar8[8];
                            if (iVar1 == 0) {
                              return 0;
                            }
                            piVar8 = (int *)*piVar8;
                            piVar9 = piVar8;
                            if (piVar8 == (int *)0x0) break;
                            do {
                              if ((piVar9[8] != 0) && (iVar2 = FUN_ram_4ff453ae(iVar1), iVar2 == 0))
                              {
                                return 0;
                              }
                              piVar9 = (int *)*piVar9;
                            } while (piVar9 != (int *)0x0);
                          }
                          goto LAB_ram_480760be;
                        }
                      }
                      piVar5 = (int *)*piVar5;
                      if (piVar5 == (int *)0x0) break;
                      uVar3 = *param_3;
                      *param_3 = uVar3 + 1;
                      if (param_4 < uVar3 + 1) {
                        return 0;
                      }
                    } while( true );
                  }
                }
                piVar7 = (int *)*piVar7;
                if (piVar7 == (int *)0x0) break;
                uVar3 = *param_3;
                *param_3 = uVar3 + 1;
                if (param_4 < uVar3 + 1) {
                  return 0;
                }
              } while( true );
            }
          }
          piVar4 = (int *)*piVar4;
          if (piVar4 == (int *)0x0) {
            return 1;
          }
          uVar3 = *param_3;
          *param_3 = uVar3 + 1;
        } while (uVar3 + 1 <= param_4);
      }
    }
    else {
      piVar7 = piVar4;
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      while (iVar1 = piVar7[8], iVar1 != 0) {
        piVar7 = (int *)*piVar7;
        piVar5 = piVar7;
        if (piVar7 == (int *)0x0) goto LAB_ram_48075ef6;
        do {
          if ((piVar5[8] != 0) && (iVar2 = FUN_ram_4ff453ae(iVar1), iVar2 == 0)) {
            return 0;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
      }
    }
  }
  return 0;
}



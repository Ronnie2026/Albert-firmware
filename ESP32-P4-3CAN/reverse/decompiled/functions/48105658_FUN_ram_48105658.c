/* Firmware entry: 0x48105658 */

undefined4 FUN_ram_48105658(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  char cVar17;
  char cStack_e9;
  undefined4 uStack_e8;
  char local_e4;
  char cStack_e3;
  undefined4 uStack_e0;
  char cStack_da;
  char acStack_d8 [4];
  undefined4 local_d4 [24];
  char cStack_73;
  char cStack_72;
  char cStack_6c;
  char cStack_6b;
  byte bStack_6a;
  char cStack_5c;
  char cStack_5a;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar15 = *(uint **)(param_1 + 0x6c);
  fence();
  uVar16 = *puVar15;
  do {
    uVar5 = uVar16 + 1;
    if (((int)uVar16 < 0) || ((uVar16 & 0xffff) == 0xffff)) {
      *(undefined1 *)(param_1 + 0xb95) = 0x11;
      *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
      return 0;
    }
    bVar1 = *puVar15 != uVar16;
    uVar16 = *puVar15;
  } while (bVar1);
  *puVar15 = uVar5;
  iVar3 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar3 + 0xb18,0xffffffff);
  puVar14 = (undefined4 *)(iVar3 + 0xb38);
  pcVar11 = &local_e4;
  do {
    uVar4 = puVar14[1];
    uVar6 = puVar14[2];
    uVar9 = puVar14[3];
    *(undefined4 *)pcVar11 = *puVar14;
    *(undefined4 *)(pcVar11 + 4) = uVar4;
    *(undefined4 *)(pcVar11 + 8) = uVar6;
    *(undefined4 *)(pcVar11 + 0xc) = uVar9;
    puVar14 = puVar14 + 4;
    pcVar11 = pcVar11 + 0x10;
  } while (puVar14 != (undefined4 *)(iVar3 + 0xbd8));
  *(undefined4 *)pcVar11 = *puVar14;
  FUN_ram_4ff3ee10(iVar3 + 0xb18);
  uVar16 = param_2;
  cVar2 = cStack_72;
  cVar17 = cStack_72;
  if (2 < param_4) goto LAB_ram_481057e6;
  uVar8 = 0;
  uVar7 = 0;
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0xaf4) != '\x01') {
LAB_ram_481057e6:
      uVar7 = 0;
      goto joined_r0x481057f2;
    }
    iVar3 = *(int *)(param_1 + 0x58);
    if (cStack_e3 != '\x0e') {
      fence();
      if (*(char *)(iVar3 + 0x7a14) != '\0') {
        uVar16 = 4;
        uVar7 = 1;
        goto joined_r0x481057f2;
      }
      goto LAB_ram_481057e6;
    }
    if (cStack_72 == '\0') {
      iVar12 = *(int *)(param_1 + 0xba8);
      uVar7 = 0;
      if (iVar12 == 0) {
        cVar2 = '\0';
        goto LAB_ram_48105750;
      }
      goto LAB_ram_48105722;
    }
  }
  else {
joined_r0x481057f2:
    uVar8 = uVar7;
    if (cStack_72 == '\0') {
      iVar12 = *(int *)(param_1 + 0xba8);
      if (iVar12 == 0) {
        iVar3 = *(int *)(param_1 + 0x58);
        cVar17 = '\0';
      }
      else {
        iVar3 = *(int *)(param_1 + 0x58);
        uVar7 = uVar8;
LAB_ram_48105722:
        uVar8 = uVar7;
        if ((uint)(param_3 - iVar12) < 0x12d) {
          cVar17 = '\0';
          cVar2 = '\0';
          if ((*(char *)(param_1 + 0x91c) != '\0') &&
             (cVar2 = '\0', *(char *)(param_1 + 0x91d) != '\0')) {
            cVar2 = (uint)(param_3 - *(int *)(param_1 + 0x918)) < 0x12d;
          }
        }
        else {
          cVar2 = '\0';
          cVar17 = '\0';
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
    }
  }
LAB_ram_48105750:
  if ((((acStack_d8[0] == '\0') ||
       (iVar3 = FUN_ram_48045922(*(undefined4 *)(iVar3 + 0x7cd4),2,0), iVar3 == 0)) ||
      ((cStack_73 == '\0' && (param_4 != 5)))) || (cStack_da == '\0')) {
LAB_ram_48105752:
    *(undefined1 *)(param_1 + 0xb95) = 1;
    *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
  }
  else if ((*(char *)(param_1 + 0xb36) == '\0') && (*(char *)(param_1 + 0xaec) == '\0')) {
    if (((uVar16 - 1 & 0xff) < 2) || (uVar16 == 4)) {
      if (param_4 == 5) {
        if ((cStack_5a == '\0') || (local_e4 == '\0')) goto LAB_ram_48105752;
        if ((*(char *)(param_1 + 0xaf4) != '\x01') ||
           ((uVar16 != 4 && ((cStack_e3 != '\x0e' || (uVar16 != 2)))))) goto LAB_ram_48105848;
      }
      if ((*(int *)(param_1 + 0xaf8) == 0) || (300 < (uint)(param_3 - *(int *)(param_1 + 0xaf8)))) {
        *(undefined1 *)(param_1 + 0xb95) = 8;
        *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
      }
      else {
        uVar5 = (uint)*(byte *)(param_1 + 0xaf4);
        if (uVar5 == uVar16) {
          *(undefined1 *)(param_1 + 0xb95) = 5;
          *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
        }
        else if ((cStack_5c == '\0') || (uVar16 == 1)) {
LAB_ram_48105970:
          if (param_4 == 3) {
            if (uVar5 == 2) {
LAB_ram_48105ad4:
              iVar3 = *(int *)(param_1 + 0x58);
              if (cStack_e3 == '\f') {
LAB_ram_48105bc0:
                if ((*(char *)(iVar3 + 0x7e14) != '\0') && (4 < *(byte *)(iVar3 + 0x7e1c))) {
                  iVar3 = *(int *)(iVar3 + 0x7e18);
                  goto joined_r0x48105bd8;
                }
              }
              else {
LAB_ram_48105ade:
                if (4 < *(byte *)(*(int *)(iVar3 + 0x7cd0) + 0x8fdc)) {
                  iVar3 = *(int *)(*(int *)(iVar3 + 0x7cd0) + 0x8fd8);
joined_r0x48105bd8:
                  if ((iVar3 != 0) && ((uint)(param_3 - iVar3) < 0x12d)) {
                    puVar13 = *(uint **)(param_1 + 0x6c);
                    fence();
                    uVar5 = *puVar13;
                    do {
                      uVar10 = uVar5 + 1;
                      if (((uVar5 & 0x80030000) != 0) || ((uVar5 & 0xffff) == 0xffff))
                      goto LAB_ram_48105868;
                      bVar1 = *puVar13 != uVar5;
                      uVar5 = *puVar13;
                    } while (bVar1);
                    *puVar13 = uVar10 | 0x20000;
                    *(char *)(param_1 + 0xb65) = (char)uVar16;
                    *(undefined1 *)(param_1 + 0xb66) = *(undefined1 *)(param_1 + 0xaf4);
                    *(char *)(param_1 + 0xb62) = (char)param_4;
                    *(undefined1 *)(param_1 + 0xb63) = uVar8;
                    *(undefined1 *)(param_1 + 0xb36) = 1;
                    if (param_4 == 3) {
                      *(undefined4 *)(param_1 + 0xb74) = 0;
LAB_ram_48105c00:
                      uVar4 = 0;
LAB_ram_48105c02:
                      *(undefined4 *)(param_1 + 0xb78) = uVar4;
                      uVar4 = 0;
                    }
                    else {
                      iVar3 = *(int *)(param_1 + 0x904);
                      *(int *)(param_1 + 0xb74) = iVar3;
                      if (cStack_72 != '\0') goto LAB_ram_48105c00;
                      if (((((param_4 == 4) && (cStack_6c != '\0')) &&
                           (*(char *)(param_1 + 0x931) != '\0')) &&
                          ((iVar3 != 0 && (iVar3 == *(int *)(param_1 + 0x92c))))) &&
                         (iVar3 = FUN_ram_4804999a(param_1 + 0x928,bStack_6a), iVar3 != 0)) {
                        uVar4 = *(undefined4 *)(param_1 + 0x928);
                        goto LAB_ram_48105c02;
                      }
                      uVar4 = *(undefined4 *)(param_1 + 0x920);
                      *(undefined4 *)(param_1 + 0xb78) = 0;
                    }
                    *(int *)(param_1 + 0xb68) = param_3 + 300;
                    *(undefined4 *)(param_1 + 0xb70) = uVar4;
                    *(undefined1 *)(param_1 + 0xb95) = 0;
                    uVar4 = 1;
                    goto LAB_ram_48105768;
                  }
                }
              }
              *(undefined1 *)(param_1 + 0xb95) = 9;
              *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
            }
            else {
              *(undefined1 *)(param_1 + 0xb95) = 0x10;
              *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x58);
            if ((((byte)(*(char *)(iVar3 + 0x7c58) - 3U) < 4) && (*(int *)(iVar3 + 0x7c64) != 0)) &&
               ((uint)(param_3 - *(int *)(iVar3 + 0x7c64)) < 0x1f5)) {
              *(undefined1 *)(param_1 + 0xb95) = 7;
              *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
            }
            else {
              if (((*(char *)(param_1 + 0x911) == '\0') || (*(char *)(param_1 + 0x90f) == '\0')) ||
                 (300 < (uint)(param_3 - *(int *)(param_1 + 0x908)))) {
                uVar8 = 4;
                if (*(short *)(param_1 + 0xafe) == -1) {
                  uVar8 = 8;
                }
              }
              else {
                FUN_ram_481055bc(param_1,&local_e4,param_3);
                if (cVar17 != '\0') {
LAB_ram_48105abc:
                  if ((param_4 != 2) || (cStack_6b == '\0')) goto LAB_ram_48105ac2;
                  if (uVar5 == 1) {
LAB_ram_48105c9c:
                    uStack_e8 = 0x80000000;
                    cStack_e9 = '\0';
                    iVar3 = FUN_ram_48052348(param_1 + 0xa8c,param_1 + 0xa98,param_3,&uStack_e8,
                                             &cStack_e9);
                    if (iVar3 == 0) {
                      *(char *)(param_1 + 0xb95) = '\x13' - cStack_e9;
                      iVar3 = *(int *)(param_1 + 0xb9c) + 1;
                    }
                    else {
                      if (*(char *)(param_1 + 0xad2) != '\0') {
                        if ((uVar5 == 1) && (param_2 == uVar16)) {
                          if (*(char *)(param_1 + 0xae8) == '\x01') {
                            if (uVar16 != 4) goto LAB_ram_48105ce8;
                          }
                          else if ((*(char *)(param_1 + 0xae8) != -1) || (uVar16 != 2)) {
LAB_ram_48105ce8:
                            *(undefined1 *)(param_1 + 0xb95) = 0x15;
                            iVar3 = *(int *)(param_1 + 0xb9c) + 1;
                            goto LAB_ram_48105cf8;
                          }
                        }
LAB_ram_48105ac2:
                        if (-1 < param_3 - *(int *)(param_1 + 0xb6c)) goto LAB_ram_48105ad4;
                        goto LAB_ram_48105c0c;
                      }
                      *(undefined1 *)(param_1 + 0xb95) = 0x14;
                      iVar3 = *(int *)(param_1 + 0xb9c) + 1;
                    }
LAB_ram_48105cf8:
                    *(int *)(param_1 + 0xb9c) = iVar3;
                  }
                  else {
                    if (cStack_e3 == '\f') {
                      if ((uVar5 - 2 & 0xfd) == 0) goto LAB_ram_48105c9c;
                      if (param_3 - *(int *)(param_1 + 0xb6c) < 0) goto LAB_ram_48105c0c;
                      goto LAB_ram_48105bc0;
                    }
                    if (-1 < param_3 - *(int *)(param_1 + 0xb6c)) goto LAB_ram_48105ade;
LAB_ram_48105c0c:
                    *(undefined1 *)(param_1 + 0xb95) = 6;
                    *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
                  }
                  goto LAB_ram_48105766;
                }
                if ((param_4 != 4) || (cStack_6c == '\0')) {
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x924) == '\0')) {
                    *(undefined1 *)(param_1 + 0xb95) = 3;
                    *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
                  }
                  else {
                    if ((bStack_6a == 0) || (*(byte *)(param_1 + 0x925) < bStack_6a))
                    goto LAB_ram_48105abc;
                    *(undefined1 *)(param_1 + 0xb95) = 0xe;
                    *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
                  }
                  goto LAB_ram_48105766;
                }
                cVar2 = *(char *)(param_1 + 0x931);
                if (((cVar2 != '\0') && (*(int *)(param_1 + 0x904) != 0)) &&
                   (*(int *)(param_1 + 0x904) == *(int *)(param_1 + 0x92c))) {
                  iVar3 = FUN_ram_4804999a(param_1 + 0x928,bStack_6a);
                  if (iVar3 != 0) goto LAB_ram_48105ac2;
                  if (cVar2 != '\0') {
                    uVar8 = 0xe;
                    goto LAB_ram_48105a74;
                  }
                }
                uVar8 = 3;
              }
LAB_ram_48105a74:
              *(undefined1 *)(param_1 + 0xb95) = uVar8;
              *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
            }
          }
        }
        else {
          if ((*(char *)(param_1 + 0xbaf) == '\0') ||
             ((*(int *)(param_1 + 0xbb0) == 0 || (300 < (uint)(param_3 - *(int *)(param_1 + 0xbb0)))
              ))) {
            uVar7 = 0x17;
          }
          else {
            uVar7 = 0x16;
            if (*(char *)(param_1 + 0xbad) == '\x01') {
              if (1 < *(byte *)(param_1 + 0xbae)) goto LAB_ram_48105970;
              uVar7 = 0x16;
            }
          }
          *(undefined1 *)(param_1 + 0xb95) = uVar7;
          *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
        }
      }
    }
    else {
LAB_ram_48105848:
      *(undefined1 *)(param_1 + 0xb95) = 2;
      *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
    }
  }
  else {
LAB_ram_48105868:
    *(undefined1 *)(param_1 + 0xb95) = 0x11;
    *(int *)(param_1 + 0xb9c) = *(int *)(param_1 + 0xb9c) + 1;
  }
LAB_ram_48105766:
  uVar4 = 0;
LAB_ram_48105768:
  fence();
  uVar16 = *puVar15;
  while( true ) {
    uVar5 = uVar16 - 1;
    if ((int)uVar16 < 0) {
      return uVar4;
    }
    if ((uVar16 & 0xffff) == 0) break;
    bVar1 = *puVar15 == uVar16;
    uVar16 = *puVar15;
    if (bVar1) {
      *puVar15 = uVar5;
      return uVar4;
    }
  }
  return uVar4;
}



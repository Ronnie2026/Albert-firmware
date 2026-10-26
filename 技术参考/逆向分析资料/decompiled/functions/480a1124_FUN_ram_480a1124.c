/* Firmware entry: 0x480a1124 */

undefined1 FUN_ram_480a1124(int param_1,uint param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  void *__s;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = *(uint *)(param_1 + 0x440);
  if (0x1fff < uVar7) {
LAB_ram_480a1194:
    FUN_ram_48065e9c(param_1,2);
    return 0;
  }
  if ((param_2 == 0) || (param_2 == 0x7f)) goto LAB_ram_480a115a;
  if ((0x1f < param_2) || (param_2 == 0xd)) {
LAB_ram_480a1170:
    *(uint *)(param_1 + 0x440) = uVar7 + 1;
    *(char *)(uVar7 + *(int *)(param_1 + 0x434)) = (char)param_2;
    return 1;
  }
  if (param_2 != 10) {
    if (param_2 != 9) goto LAB_ram_480a115a;
    goto LAB_ram_480a1170;
  }
  *(uint *)(param_1 + 0x440) = uVar7 + 1;
  *(undefined1 *)(uVar7 + *(int *)(param_1 + 0x434)) = 10;
  if (*(uint *)(param_1 + 0x440) < 2) goto LAB_ram_480a115a;
  iVar8 = *(uint *)(param_1 + 0x440) - 2;
  pcVar4 = (char *)(*(int *)(param_1 + 0x434) + iVar8);
  if (*pcVar4 != '\r') goto LAB_ram_480a115a;
  *pcVar4 = '\0';
  iVar5 = *(int *)(param_1 + 0x444);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x440);
  uVar7 = iVar8 - iVar5;
  __s = (void *)(*(int *)(param_1 + 0x434) + iVar5);
  if (*(char *)(param_1 + 0x470) == '\0') {
    *(undefined1 *)(param_1 + 0x470) = 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
    if (uVar7 != 0) {
      pvVar2 = memchr(__s,0x20,uVar7);
      uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
      if (((pvVar2 != (void *)0x0) &&
          (iVar8 = (int)pvVar2 - (int)__s,
          uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50), iVar8 != -1)) &&
         (uVar17 = iVar8 + 1, uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50),
         uVar17 < uVar7)) {
        pvVar2 = memchr((void *)((int)__s + uVar17),0x20,uVar7 - uVar17);
        uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
        if ((pvVar2 != (void *)0x0) &&
           (iVar5 = (int)pvVar2 - (int)__s,
           uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50), iVar5 != -1)) {
          uVar18 = iVar5 + 1;
          if (uVar18 < uVar7) {
            pvVar2 = memchr((void *)((int)__s + uVar18),0x20,uVar7 - uVar18);
            if ((pvVar2 != (void *)0x0) &&
               (uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50),
               (int)pvVar2 - (int)__s != -1)) goto LAB_ram_480a1278;
          }
          uVar20 = FUN_ram_48030de0(uVar7,__s,0,iVar8);
          iVar12 = (int)uVar20;
          uVar21 = FUN_ram_48030de0(uVar7,__s,uVar18,0xffffffff);
          uVar22 = FUN_ram_48030de0(uVar7,__s,uVar17,(iVar5 - iVar8) + -1);
          uVar19 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
          pbVar13 = (byte *)((ulonglong)uVar22 >> 0x20);
          uVar7 = (uint)uVar22;
          *(undefined8 *)(param_1 + 0x414) = uVar22;
          if (0x200 < uVar7) {
            uVar3 = 2;
LAB_ram_480a1612:
            uStack_50 = uVar19;
            FUN_ram_48065e9c(param_1,uVar3);
            return 0;
          }
          uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
          if ((uVar7 != 0) && (uStack_50 = uVar19, *pbVar13 == 0x2f)) {
            iVar8 = FUN_ram_48030e10(uVar7,pbVar13,0x23,0);
            uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
            if (iVar8 == -1) {
              uStack_48._4_4_ = "HTTP/1.1";
              uStack_48._0_4_ = 8;
              uStack_50 = uVar21;
              if ((int)uVar21 == 8) {
                iVar8 = FUN_ram_480a10f0(&uStack_50,8,"HTTP/1.1");
                if (iVar8 != 0) {
                  uStack_48._4_4_ = "HTTP/1.0";
                  iVar8 = FUN_ram_480a10f0(&uStack_50,8,"HTTP/1.0");
                  if (iVar8 != 0) goto LAB_ram_480a1278;
                }
                pbVar15 = pbVar13 + uVar7;
                do {
                  if (pbVar15 == pbVar13) {
                    uStack_48._4_4_ = "HTTP/1.1";
                    uStack_48._0_4_ = 8;
                    uStack_50._0_4_ = 8;
                    uStack_50._4_4_ = (char *)(int)((ulonglong)uVar21 >> 0x20);
                    iVar8 = FUN_ram_480a10f0(&uStack_50,8,"HTTP/1.1");
                    *(bool *)(param_1 + 0x471) = iVar8 == 0;
                    uStack_48._4_4_ = &DAT_ram_481c87b8;
                    uStack_48._0_4_ = 3;
                    uStack_50 = uVar20;
                    if (iVar12 == 3) {
                      iVar8 = FUN_ram_480a10f0(&uStack_50,3,&DAT_ram_481c87b8);
                      if (iVar8 == 0) {
                        uVar6 = 0;
                        goto LAB_ram_480a16ee;
                      }
                      uStack_48._4_4_ = &DAT_ram_481cbec0;
                      iVar8 = FUN_ram_480a10f0(&uStack_50,3,&DAT_ram_481cbec0);
                      if (iVar8 == 0) {
                        uVar6 = 2;
                        goto LAB_ram_480a16ee;
                      }
LAB_ram_480a1720:
                      uStack_48._4_4_ = "OPTIONS";
                      uStack_48._0_4_ = 7;
                      if (iVar12 == 7) {
                        uStack_50 = uVar20;
                        iVar8 = FUN_ram_480a10f0(&uStack_50,7,"OPTIONS");
                        if (iVar8 == 0) {
                          uVar6 = 5;
                          goto LAB_ram_480a16ee;
                        }
                      }
                      else {
LAB_ram_480a16c8:
                        uStack_48._4_4_ = "PATCH";
                        uStack_48._0_4_ = 5;
                        uStack_50 = uVar20;
                        if (iVar12 == 5) {
                          iVar8 = FUN_ram_480a10f0(&uStack_50,5,"PATCH");
                          if (iVar8 == 0) {
                            uVar6 = 6;
LAB_ram_480a16ee:
                            *(undefined1 *)(param_1 + 0x424) = uVar6;
                            return 1;
                          }
                        }
                      }
                    }
                    else {
                      uStack_48._4_4_ = &DAT_ram_481c87bc;
                      uStack_48._0_4_ = 4;
                      if (iVar12 != 4) {
                        uStack_48._4_4_ = "DELETE";
                        uStack_48._0_4_ = 6;
                        if (iVar12 != 6) goto LAB_ram_480a1720;
                        iVar8 = FUN_ram_480a10f0(&uStack_50,6,"DELETE");
                        uVar6 = 3;
                        if (iVar8 == 0) goto LAB_ram_480a16ee;
                        goto LAB_ram_480a16c8;
                      }
                      iVar8 = FUN_ram_480a10f0(&uStack_50,4,&DAT_ram_481c87bc);
                      if (iVar8 == 0) {
                        uVar6 = 1;
                        goto LAB_ram_480a16ee;
                      }
                      uStack_48._4_4_ = "HEAD";
                      iVar8 = FUN_ram_480a10f0(&uStack_50,4,&DAT_ram_481cbeb8);
                      if (iVar8 == 0) {
                        uVar6 = 4;
                        goto LAB_ram_480a16ee;
                      }
                    }
                    uVar3 = 1;
                    uVar19 = uStack_50;
                    goto LAB_ram_480a1612;
                  }
                  bVar1 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                } while ((0x20 < bVar1) && (bVar1 != 0x7f));
              }
            }
          }
        }
      }
    }
LAB_ram_480a1278:
    FUN_ram_48065e9c(param_1,1);
    return 0;
  }
  if (uVar7 == 0) {
    if (*(char *)(param_1 + 0x471) != '\0') {
      uStack_50._4_4_ = &DAT_ram_481c3da8;
      uStack_50._0_4_ = 4;
      uStack_48 = FUN_ram_480646fc(param_1 + 0x10,4,&DAT_ram_481c3da8);
      if ((int)uStack_48 == 0) {
        FUN_ram_48065e9c(param_1,1);
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 0x430) = 5;
    return 1;
  }
  uVar17 = *(uint *)(param_1 + 0x410);
  if (0x3f < uVar17) goto LAB_ram_480a1194;
  iVar8 = FUN_ram_48030e10(uVar7,__s,0x3a,0);
  if (0xfffffffd < iVar8 - 1U) goto LAB_ram_480a115a;
  uVar19 = FUN_ram_48030de0(uVar7,__s,0,iVar8);
  pbVar15 = (byte *)((ulonglong)uVar19 >> 0x20);
  iVar5 = (int)uVar19;
  for (pbVar13 = pbVar15; pbVar15 + iVar5 != pbVar13; pbVar13 = pbVar13 + 1) {
    uVar18 = (uint)*pbVar13;
    if (((9 < (uVar18 - 0x30 & 0xff)) && (0x19 < ((uVar18 & 0xffffffdf) - 0x41 & 0xff))) &&
       ((uVar18 == 0 || (pcVar4 = strchr("!#$%&\'*+-.^_`|~",uVar18), pcVar4 == (char *)0x0))))
    goto LAB_ram_480a115a;
  }
  uVar20 = FUN_ram_48030de0(uVar7,__s,iVar8 + 1,0xffffffff);
  pbVar14 = (byte *)((ulonglong)uVar20 >> 0x20);
  pbVar13 = pbVar14;
  if ((int)uVar20 != 0) {
    pbVar13 = pbVar14 + (int)uVar20;
    do {
      if ((*pbVar14 != 0x20) && (*pbVar14 != 9)) {
        iVar8 = (int)pbVar13 - (int)pbVar14;
        goto LAB_ram_480a15d4;
      }
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 != pbVar13);
  }
  pbVar14 = pbVar13;
  iVar8 = 0;
  pbVar16 = pbVar14;
  goto LAB_ram_480a146a;
  while (iVar8 = iVar12, iVar12 != 0) {
LAB_ram_480a15d4:
    iVar12 = iVar8 + -1;
    if ((pbVar14[iVar12] != 0x20) && (pbVar14[iVar12] != 9)) {
      pbVar16 = pbVar14 + iVar8;
      pbVar13 = pbVar14;
      goto LAB_ram_480a15fa;
    }
  }
  iVar8 = 0;
  pbVar16 = pbVar14;
  goto LAB_ram_480a146a;
  while (pbVar16 != pbVar13) {
LAB_ram_480a15fa:
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    if ((bVar1 < 0x20) && (bVar1 != 9)) goto LAB_ram_480a115a;
  }
LAB_ram_480a146a:
  iVar12 = param_1;
  if (uVar17 != 0) {
    do {
      if (iVar5 == *(int *)(iVar12 + 0x10)) {
        if (iVar5 == 0) goto LAB_ram_480a115a;
        pbVar9 = *(byte **)(iVar12 + 0x14);
        pbVar11 = pbVar9 + iVar5;
        pbVar13 = pbVar15;
        while( true ) {
          uVar7 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          if ((uVar7 - 0x41 & 0xff) < 0x1a) {
            uVar7 = uVar7 + 0x20;
          }
          uVar18 = (uint)*pbVar13;
          pbVar13 = pbVar13 + 1;
          if ((uVar18 - 0x41 & 0xff) < 0x1a) {
            uVar18 = uVar18 + 0x20;
          }
          if (uVar18 != uVar7) break;
          if (pbVar11 == pbVar9) goto LAB_ram_480a115a;
        }
      }
      iVar12 = iVar12 + 0x10;
    } while (iVar12 != uVar17 * 0x10 + param_1);
  }
  uStack_50._4_4_ = "Transfer-Encoding";
  uStack_50._0_4_ = 0x11;
  iVar12 = FUN_ram_480646a8(iVar5,pbVar15,0x11,"Transfer-Encoding");
  if (iVar12 == 0) {
    uStack_48._4_4_ = "Expect";
    uStack_48._0_4_ = 6;
    iVar12 = FUN_ram_480646a8(iVar5,pbVar15,6,"Expect");
    if (iVar12 == 0) {
      uStack_48._4_4_ = "Content-Length";
      uStack_48._0_4_ = 0xe;
      iVar5 = FUN_ram_480646a8(iVar5,pbVar15,0xe,"Content-Length");
      if (iVar5 != 0) {
        if (iVar8 == 0) {
LAB_ram_480a115a:
          FUN_ram_48065e9c(param_1,1);
          return 0;
        }
        if (pbVar16 == pbVar14) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          pbVar13 = pbVar14;
          do {
            bVar1 = *pbVar13;
            uVar18 = bVar1 - 0x30;
            pbVar13 = pbVar13 + 1;
            if ((9 < (uVar18 & 0xff)) || (~uVar18 / 10 < uVar7)) goto LAB_ram_480a115a;
            uVar7 = (uint)bVar1 + uVar7 * 10 + -0x30;
          } while (pbVar16 != pbVar13);
        }
        *(uint *)(param_1 + 0x428) = uVar7;
        *(undefined1 *)(param_1 + 0x42c) = 1;
      }
      *(uint *)(param_1 + 0x410) = uVar17 + 1;
      *(undefined8 *)(param_1 + uVar17 * 0x10 + 0x10) = uVar19;
      piVar10 = (int *)(param_1 + uVar17 * 0x10 + 0x18);
      *piVar10 = iVar8;
      piVar10[1] = (int)pbVar14;
      return 1;
    }
  }
  FUN_ram_48065e9c(param_1,1);
  return 0;
}



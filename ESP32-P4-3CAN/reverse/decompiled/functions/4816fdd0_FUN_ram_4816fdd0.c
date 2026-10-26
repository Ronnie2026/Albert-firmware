/* Firmware entry: 0x4816fdd0 */

int FUN_ram_4816fdd0(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t __n;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  int iStack_10c;
  uint uStack_100;
  undefined1 auStack_fc [12];
  byte bStack_f0;
  byte bStack_ef;
  byte bStack_ee;
  byte bStack_ed;
  byte bStack_ec;
  byte bStack_eb;
  byte bStack_ea;
  byte bStack_e9;
  byte bStack_e8;
  byte bStack_e7;
  byte bStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  byte abStack_7c [4];
  undefined4 auStack_78 [17];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 != (byte *)0x0) && (*(int *)(param_3 + 0xc) != 0)) {
    uVar8 = *(uint *)(param_3 + 0x14);
    if ((uVar8 <= *(uint *)(param_3 + 0x10)) &&
       (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x10) - uVar8)) {
      pbVar20 = (byte *)(*(int *)(param_3 + 0xc) + uVar8);
      iVar3 = FUN_ram_4816a474(param_2);
      if (iVar3 == 3) {
        iVar3 = *(int *)(param_2 + 4);
        uVar8 = *(uint *)(param_3 + 0x18);
        pbVar18 = pbVar20;
        pbVar6 = param_3;
        if (iVar3 != *(int *)(param_2 + 8)) {
          if (uVar8 < 8) {
            return -0x7180;
          }
          uVar8 = uVar8 - 8;
          *(uint *)(param_3 + 0x18) = uVar8;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 8;
          pbVar18 = pbVar20 + 8;
          pbVar6 = pbVar20;
        }
        uVar15 = *(uint *)(param_2 + 0x10);
        if (uVar15 <= uVar8) {
          uStack_80 = 0;
          iVar14 = uVar8 - uVar15;
          *(int *)(param_3 + 0x18) = iVar14;
          abStack_7c[0] = 0;
          abStack_7c[1] = 0;
          abStack_7c[2] = 0;
          abStack_7c[3] = 0;
          auStack_78[0] = 0;
          FUN_ram_4ff45158(&uStack_80,param_2 + 0x24);
          puVar12 = &uStack_80;
          do {
            bVar1 = *pbVar6;
            puVar13 = (undefined4 *)((int)puVar12 + 1);
            pbVar6 = pbVar6 + 1;
            *(byte *)(puVar12 + 1) = *(byte *)(puVar12 + 1) ^ bVar1;
            puVar12 = puVar13;
          } while (auStack_78 != puVar13);
          uStack_e5 = (undefined1)((uint)iVar14 >> 8);
          bStack_ef = param_3[1];
          bStack_ee = param_3[2];
          bStack_f0 = *param_3;
          bStack_ed = param_3[3];
          bStack_ec = param_3[4];
          uStack_e4 = (undefined1)((uint)(iVar14 * 0x100) >> 8);
          bStack_eb = param_3[5];
          bStack_ea = param_3[6];
          bStack_e9 = param_3[7];
          bStack_e8 = param_3[8];
          bStack_e7 = param_3[9];
          bStack_e6 = param_3[10];
          iVar3 = FUN_ram_48172190(param_2 + 0x98,&uStack_80,iVar3,&bStack_f0,0xd,pbVar18,uVar8,
                                   pbVar18,*(int *)(param_3 + 0x10) -
                                           ((int)pbVar18 - *(int *)(param_3 + 0xc)),&uStack_100,
                                   uVar15);
          if (iVar3 == 0) {
            if (*(uint *)(param_3 + 0x18) == uStack_100) {
              return 0;
            }
            return -0x6c00;
          }
          if (iVar3 == -0x6300) {
            return -0x7180;
          }
          return iVar3;
        }
        return -0x7180;
      }
      if (iVar3 - 1U < 2) {
        uVar8 = *(uint *)(param_2 + 4);
        uVar15 = *(uint *)(param_3 + 0x18);
        if ((uVar8 << 1 <= uVar15) && (uVar8 + *(int *)(param_2 + 0xc) + 1 <= uVar15)) {
          bVar2 = false;
          if (iVar3 == 2) {
            iVar14 = uVar15 - *(int *)(param_2 + 0xc);
            uStack_e5 = (undefined1)((uint)iVar14 >> 8);
            bStack_f0 = *param_3;
            bStack_ed = param_3[3];
            bStack_ec = param_3[4];
            bStack_ef = param_3[1];
            bStack_ee = param_3[2];
            bStack_eb = param_3[5];
            bStack_ea = param_3[6];
            bStack_e9 = param_3[7];
            uStack_e4 = (undefined1)((uint)(iVar14 * 0x100) >> 8);
            bStack_e8 = param_3[8];
            bStack_e7 = param_3[9];
            bStack_e6 = param_3[10];
            iVar3 = param_2 + 0x40;
            *(int *)(param_3 + 0x18) = iVar14;
            iVar14 = FUN_ram_48176e96(iVar3,&bStack_f0,0xd);
            if ((iVar14 != 0) ||
               (iVar14 = FUN_ram_48176e96(iVar3,pbVar20,*(undefined4 *)(param_3 + 0x18)),
               iVar14 != 0)) {
              FUN_ram_48178af2(&uStack_80,*(undefined4 *)(param_2 + 0xc));
              return iVar14;
            }
            iVar14 = FUN_ram_48176eac(iVar3,&uStack_80);
            if (iVar14 != 0) {
              FUN_ram_48178af2(&uStack_80,*(undefined4 *)(param_2 + 0xc));
              return iVar14;
            }
            iVar3 = FUN_ram_48176f38(iVar3);
            if (iVar3 != 0) {
              FUN_ram_48178af2(&uStack_80,*(undefined4 *)(param_2 + 0xc));
              return iVar3;
            }
            iVar3 = FUN_ram_481723ca(pbVar20 + *(int *)(param_3 + 0x18),&uStack_80);
            if (iVar3 != 0) {
              FUN_ram_48178af2(&uStack_80,*(undefined4 *)(param_2 + 0xc));
              return -0x7180;
            }
            FUN_ram_48178af2(&uStack_80,*(undefined4 *)(param_2 + 0xc));
            bVar2 = true;
            uVar15 = *(uint *)(param_3 + 0x18);
            uVar8 = *(uint *)(param_2 + 4);
          }
          if (uVar15 % uVar8 == 0) {
            uVar4 = FUN_ram_4ff45158(param_2 + 0x24,pbVar20,uVar8);
            iVar3 = *(int *)(param_3 + 0x18);
            pbVar20 = pbVar20 + uVar8;
            *(uint *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + uVar8;
            *(uint *)(param_3 + 0x18) = iVar3 - uVar8;
            iVar3 = FUN_ram_48172078(param_2 + 0x98,uVar4,uVar8,pbVar20,iVar3 - uVar8,pbVar20,
                                     &uStack_100);
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar8 = *(uint *)(param_3 + 0x18);
            if (uVar8 != uStack_100) {
              return -0x6c00;
            }
            uVar15 = (uint)pbVar20[uVar8 - 1];
            if (bVar2) {
              uVar9 = uVar15 + 1;
              uVar7 = (int)(uVar8 ^ uVar9) >> 0x1f;
              uVar7 = (int)(uVar7 | -(-uVar7 >> 1)) >> 0x1f;
              uVar7 = uVar8 - uVar9 & ~uVar7 | uVar9 & uVar7;
            }
            else {
              uVar9 = *(int *)(param_2 + 0xc) + 1 + uVar15;
              uVar7 = (int)(uVar8 ^ uVar9) >> 0x1f;
              uVar7 = (int)(uVar7 | -(-uVar7 >> 1)) >> 0x1f;
              uVar7 = uVar8 - uVar9 & ~uVar7 | uVar9 & uVar7;
            }
            uVar9 = ~((int)((int)uVar7 >> 0x1f | -((uint)-((int)uVar7 >> 0x1f) >> 1)) >> 0x1f);
            uVar15 = uVar15 & uVar9;
            uVar17 = uVar15 + 1;
            uVar5 = uVar8 - uVar17;
            uVar7 = uVar8;
            if (0x100 < uVar8) {
              uVar7 = 0x100;
            }
            uVar16 = 0;
            for (uVar7 = uVar8 - uVar7; uVar7 < uVar8; uVar7 = uVar7 + 1) {
              uVar10 = (int)(uVar7 ^ uVar5) >> 0x1f;
              uVar10 = (int)(-(-uVar10 >> 1) | uVar10) >> 0x1f;
              uVar10 = (int)(uVar7 - uVar5 & ~uVar10 | uVar5 & uVar10) >> 0x1f;
              uVar11 = pbVar20[uVar7] ^ uVar15;
              uVar16 = uVar16 + ((int)(-uVar11 | uVar10 | -(-uVar10 >> 1) | -(uVar11 >> 1)) >> 0x1f)
                                + 1;
            }
            uVar9 = ~((int)(-((uVar16 ^ uVar17) >> 1) | -(uVar16 ^ uVar17)) >> 0x1f) & uVar9;
            iVar3 = uVar8 - (uVar17 & uVar9);
            *(int *)(param_3 + 0x18) = iVar3;
            if (!bVar2) {
              uVar8 = iVar3 - *(int *)(param_2 + 0xc);
              uStack_e5 = (undefined1)(uVar8 >> 8);
              bStack_f0 = *param_3;
              bStack_ef = param_3[1];
              uStack_e4 = (undefined1)(uVar8 * 0x100 >> 8);
              bStack_ee = param_3[2];
              bStack_ed = param_3[3];
              uStack_e0 = 0;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
              uStack_b8 = 0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_ac = 0;
              uStack_a8 = 0;
              uStack_a4 = 0;
              uStack_a0 = 0;
              uStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              uStack_8c = 0;
              uStack_88 = 0;
              uStack_84 = 0;
              *(uint *)(param_3 + 0x18) = uVar8;
              bStack_ec = param_3[4];
              bStack_eb = param_3[5];
              bStack_ea = param_3[6];
              bStack_e9 = param_3[7];
              bStack_e6 = param_3[10];
              bStack_e7 = param_3[9];
              bStack_e8 = param_3[8];
              iVar3 = FUN_ram_48176d58(*(undefined4 *)(param_2 + 0x40));
              iStack_10c = 0x40;
              if (iVar3 == 10) {
                iStack_10c = 0x80;
              }
              iVar14 = *(int *)(param_2 + 0x48);
              __n = FUN_ram_48176d4c(*(undefined4 *)(param_2 + 0x40));
              FUN_ram_481769e8(auStack_fc);
              iVar3 = FUN_ram_48176b18(auStack_fc,*(undefined4 *)(param_2 + 0x40),0);
              if (iVar3 == 0) {
                iVar19 = param_2 + 0x40;
                iVar3 = FUN_ram_48176c62(iVar19,&bStack_f0,0xd);
                if (iVar3 == 0) {
                  uVar7 = (uVar17 & uVar9) + uVar8;
                  uVar15 = uVar7;
                  if (uVar7 < 0x100) {
                    uVar15 = 0x100;
                  }
                  uVar15 = uVar15 - 0x100;
                  iVar3 = FUN_ram_48176c62(iVar19,pbVar20,uVar15);
                  if (iVar3 == 0) {
                    memset(&uStack_e0,0x21,__n);
                    for (uVar5 = uVar15; uVar5 <= uVar7; uVar5 = uVar5 + 1) {
                      iVar3 = FUN_ram_48176aa0(auStack_fc,iVar19);
                      if ((iVar3 != 0) || (iVar3 = FUN_ram_48176caa(auStack_fc), iVar3 != 0))
                      goto LAB_ram_481704a2;
                      FUN_ram_4817248c(~((int)(-((uVar5 ^ uVar8) >> 1) | -(uVar5 ^ uVar8)) >> 0x1f),
                                       &uStack_e0,&uStack_80,0,__n);
                      if ((uVar5 < uVar7) &&
                         (iVar3 = FUN_ram_48176c62(iVar19,pbVar20 + uVar5,1), iVar3 != 0))
                      goto LAB_ram_481704a2;
                    }
                    iVar3 = FUN_ram_48176caa(iVar19,&uStack_80);
                    if ((((iVar3 == 0) && (iVar3 = FUN_ram_48176bfe(iVar19), iVar3 == 0)) &&
                        (iVar3 = FUN_ram_48176c62(iVar19,iVar14 + iStack_10c,iStack_10c), iVar3 == 0
                        )) && ((iVar3 = FUN_ram_48176c62(iVar19,&uStack_e0,__n), iVar3 == 0 &&
                               (iVar3 = FUN_ram_48176caa(iVar19,&uStack_e0), iVar3 == 0)))) {
                      iVar3 = FUN_ram_48176f38(iVar19);
                      FUN_ram_48176a1a(auStack_fc);
                      uVar4 = *(undefined4 *)(param_2 + 0xc);
                      if (iVar3 == 0) {
                        FUN_ram_481724d0(&uStack_b0,pbVar20,*(undefined4 *)(param_3 + 0x18),uVar15,
                                         uVar7);
                        iVar3 = FUN_ram_481723ca(&uStack_b0,&uStack_e0,
                                                 *(undefined4 *)(param_2 + 0xc));
                        if (iVar3 != 0) {
                          uVar9 = 0;
                        }
                        FUN_ram_48178af2(&uStack_b0,*(undefined4 *)(param_2 + 0xc));
                        FUN_ram_48178af2(&uStack_e0,*(undefined4 *)(param_2 + 0xc));
                        if (uVar9 == 0) {
                          return -0x7180;
                        }
                        return 0;
                      }
                    }
                    else {
LAB_ram_481704a2:
                      FUN_ram_48176a1a(auStack_fc);
                      uVar4 = *(undefined4 *)(param_2 + 0xc);
                    }
                    goto LAB_ram_48170336;
                  }
                }
                FUN_ram_48176a1a(auStack_fc);
                uVar4 = *(undefined4 *)(param_2 + 0xc);
              }
              else {
                FUN_ram_48176a1a(auStack_fc);
                uVar4 = *(undefined4 *)(param_2 + 0xc);
              }
LAB_ram_48170336:
              FUN_ram_48178af2(&uStack_b0,uVar4);
              FUN_ram_48178af2(&uStack_e0,*(undefined4 *)(param_2 + 0xc));
              return iVar3;
            }
            if (uVar9 != 0) {
              return 0;
            }
          }
        }
        return -0x7180;
      }
    }
  }
  return -0x6c00;
}



/* Firmware entry: 0x480a6468 */

bool FUN_ram_480a6468(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48129d0c();
  if (iVar5 != 0) {
    for (piVar12 = *(int **)(param_1 + 8); piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
      iVar5 = piVar12[8];
      if (iVar5 == 0) {
        return false;
      }
      ppuVar9 = &PTR_s_enabled_ram_481ccbd8_8_ram_48222894;
      while( true ) {
        puVar8 = *ppuVar9;
        ppuVar9 = ppuVar9 + 1;
        iVar6 = FUN_ram_4ff453ae(iVar5,puVar8);
        if (iVar6 == 0) break;
        if (ppuVar9 == &PTR_s_fsdEnabled_ram_481c623c_ram_482228f4) {
          return false;
        }
      }
    }
    uVar7 = FUN_ram_48129c8a(param_1,"enabled");
    iVar5 = FUN_ram_48129cb4();
    if (iVar5 != 0) {
      iVar5 = FUN_ram_48129ca2(uVar7);
      *(bool *)param_2 = iVar5 != 0;
      uVar7 = FUN_ram_48129c8a(param_1,"maintenanceEnabled");
      iVar5 = FUN_ram_48129cb4();
      if (iVar5 != 0) {
        iVar5 = FUN_ram_48129ca2(uVar7);
        *(bool *)(param_2 + 1) = iVar5 != 0;
        iVar5 = FUN_ram_48129c8a(param_1,"preventiveNegativeMinCentiNm");
        iVar6 = FUN_ram_48129cd6();
        uVar1 = DAT_ram_481f4cbc;
        uVar7 = DAT_ram_481f4cb8;
        if (iVar6 != 0) {
          uVar11 = *(uint *)(iVar5 + 0x1c);
          uVar10 = *(undefined4 *)(iVar5 + 0x18);
          iVar5 = __unorddf2(uVar10,uVar11 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
          if ((((iVar5 == 0) && (iVar5 = __gtdf2(uVar10,uVar11 & 0x7fffffff,uVar7,uVar1), iVar5 < 1)
               ) && (iVar5 = __ltdf2(uVar10,uVar11,0,0), -1 < iVar5)) &&
             (iVar5 = __gtdf2(uVar10,uVar11,DAT_ram_481f4cd0,DAT_ram_481f4cd4), iVar5 < 1)) {
            uVar13 = FUN_ram_48196062(uVar10,uVar11);
            iVar5 = __nedf2(uVar10,uVar11,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            if (iVar5 == 0) {
              uVar4 = FUN_ram_48195bce(uVar10,uVar11);
              *(undefined2 *)(param_2 + 2) = uVar4;
              iVar5 = FUN_ram_48129c8a(param_1,"preventiveNegativeMaxCentiNm");
              iVar6 = FUN_ram_48129cd6();
              if (iVar6 != 0) {
                uVar11 = *(uint *)(iVar5 + 0x1c);
                uVar10 = *(undefined4 *)(iVar5 + 0x18);
                iVar5 = __unorddf2(uVar10,uVar11 & 0x7fffffff,uVar7,uVar1);
                uVar1 = DAT_ram_481f4cbc;
                uVar7 = DAT_ram_481f4cb8;
                if (((iVar5 == 0) &&
                    (iVar5 = __gtdf2(uVar10,uVar11 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
                    iVar5 < 1)) &&
                   ((iVar5 = __ltdf2(uVar10,uVar11,0,0), uVar3 = DAT_ram_481f4cd4,
                    uVar2 = DAT_ram_481f4cd0, -1 < iVar5 &&
                    (iVar5 = __gtdf2(uVar10,uVar11,DAT_ram_481f4cd0,DAT_ram_481f4cd4), iVar5 < 1))))
                {
                  uVar13 = FUN_ram_48196062(uVar10,uVar11);
                  iVar5 = __nedf2(uVar10,uVar11,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
                  if (iVar5 == 0) {
                    uVar4 = FUN_ram_48195bce(uVar10,uVar11);
                    *(undefined2 *)(param_2 + 4) = uVar4;
                    iVar5 = FUN_ram_48129c8a(param_1,"preventivePositiveMinCentiNm");
                    iVar6 = FUN_ram_48129cd6();
                    if (iVar6 != 0) {
                      uVar11 = *(uint *)(iVar5 + 0x1c);
                      uVar10 = *(undefined4 *)(iVar5 + 0x18);
                      iVar5 = __unorddf2(uVar10,uVar11 & 0x7fffffff,uVar7,uVar1);
                      if (((iVar5 == 0) &&
                          (iVar5 = __gtdf2(uVar10,uVar11 & 0x7fffffff,uVar7,uVar1), iVar5 < 1)) &&
                         ((iVar5 = __ltdf2(uVar10,uVar11,0,0), -1 < iVar5 &&
                          (iVar5 = __gtdf2(uVar10,uVar11,uVar2,uVar3), iVar5 < 1)))) {
                        uVar13 = FUN_ram_48196062(uVar10,uVar11);
                        iVar5 = __nedf2(uVar10,uVar11,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
                        if (iVar5 == 0) {
                          uVar4 = FUN_ram_48195bce(uVar10,uVar11);
                          *(undefined2 *)(param_2 + 6) = uVar4;
                          iVar5 = FUN_ram_48129c8a(param_1,"preventivePositiveMaxCentiNm");
                          iVar6 = FUN_ram_48129cd6();
                          uVar1 = DAT_ram_481f4cbc;
                          uVar7 = DAT_ram_481f4cb8;
                          if (iVar6 != 0) {
                            uVar11 = *(uint *)(iVar5 + 0x1c);
                            uVar10 = *(undefined4 *)(iVar5 + 0x18);
                            iVar5 = __unorddf2(uVar10,uVar11 & 0x7fffffff,DAT_ram_481f4cb8,
                                               DAT_ram_481f4cbc);
                            if ((((iVar5 == 0) &&
                                 (iVar5 = __gtdf2(uVar10,uVar11 & 0x7fffffff,uVar7,uVar1), iVar5 < 1
                                 )) && (iVar5 = __ltdf2(uVar10,uVar11,0,0), -1 < iVar5)) &&
                               (iVar5 = __gtdf2(uVar10,uVar11,DAT_ram_481f4cd0,DAT_ram_481f4cd4),
                               iVar5 < 1)) {
                              uVar13 = FUN_ram_48196062(uVar10,uVar11);
                              iVar5 = __nedf2(uVar10,uVar11,(int)uVar13,
                                              (int)((ulonglong)uVar13 >> 0x20));
                              if (iVar5 == 0) {
                                uVar4 = FUN_ram_48195bce(uVar10,uVar11);
                                *(undefined2 *)(param_2 + 8) = uVar4;
                                iVar5 = FUN_ram_480a6228(param_1,"correctiveNegativeMinCentiNm",
                                                         0x7fff,0,param_2 + 10);
                                if (((((iVar5 != 0) &&
                                      (iVar5 = FUN_ram_480a6228(param_1,
                                                  "correctiveNegativeMaxCentiNm",0x7fff,0,
                                                  param_2 + 0xc), iVar5 != 0)) &&
                                     ((iVar5 = FUN_ram_480a6228(param_1,
                                                  "correctivePositiveMinCentiNm",0x7fff,0,
                                                  param_2 + 0xe), iVar5 != 0 &&
                                      ((iVar5 = FUN_ram_480a6228(param_1,
                                                  "correctivePositiveMaxCentiNm",0x7fff,0,
                                                  param_2 + 0x10), iVar5 != 0 &&
                                       (iVar5 = FUN_ram_480a4e2a(param_1,"correctivePositiveFrames",
                                                                 0xffff,0,param_2 + 0x12),
                                       iVar5 != 0)))))) &&
                                    ((iVar5 = FUN_ram_480a4e2a(param_1,"correctiveNegativeFrames",
                                                               0xffff,0,param_2 + 0x14), iVar5 != 0
                                     && ((((iVar5 = FUN_ram_480a6348(param_1,"activityMinMs",
                                                                     0xffffffff,0,param_2 + 0x18),
                                           iVar5 != 0 &&
                                           (iVar5 = FUN_ram_480a6348(param_1,"activityMaxMs",
                                                                     0xffffffff,0,param_2 + 0x1c),
                                           iVar5 != 0)) &&
                                          (iVar5 = FUN_ram_480a6348(param_1,"restMinMs",0xffffffff,0
                                                                    ,param_2 + 0x20), iVar5 != 0))
                                         && ((iVar5 = FUN_ram_480a6348(param_1,"restMaxMs",
                                                                       0xffffffff,0,param_2 + 0x24),
                                             iVar5 != 0 &&
                                             (iVar5 = FUN_ram_480a6348(param_1,"h2PersistenceMs",
                                                                       0xffffffff,0,param_2 + 0x28),
                                             iVar5 != 0)))))))) &&
                                   ((((iVar5 = FUN_ram_480a6348(param_1,"preCorrectionPauseMs",
                                                                0xffffffff,0,param_2 + 0x2c),
                                      iVar5 != 0 &&
                                      ((iVar5 = FUN_ram_480a6348(param_1,"correctiveSendMinMs",
                                                                 0xffffffff,0,param_2 + 0x30),
                                       iVar5 != 0 &&
                                       (iVar5 = FUN_ram_480a6348(param_1,"correctiveSendMaxMs",
                                                                 0xffffffff,0,param_2 + 0x34),
                                       iVar5 != 0)))) &&
                                     (iVar5 = FUN_ram_480a6348(param_1,"correctivePauseMinMs",
                                                               0xffffffff,0,param_2 + 0x38),
                                     iVar5 != 0)) &&
                                    (((iVar5 = FUN_ram_480a6348(param_1,"correctivePauseMaxMs",
                                                                0xffffffff,0,param_2 + 0x3c),
                                      iVar5 != 0 &&
                                      (iVar5 = FUN_ram_480a6348(param_1,"stabilityVerifyMs",
                                                                0xffffffff,0,param_2 + 0x40),
                                      iVar5 != 0)) &&
                                     (iVar5 = FUN_ram_480a6348(param_1,"dasFreshTimeoutMs",
                                                               0xffffffff,0,param_2 + 0x44),
                                     iVar5 != 0)))))) {
                                  iVar5 = FUN_ram_4804e2a8(param_2);
                                  return iVar5 == 0;
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
            }
          }
        }
      }
    }
  }
  return false;
}



/* Firmware entry: 0x480c80ca */

void FUN_ram_480c80ca(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  char cVar13;
  undefined2 uVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char cStack_f5;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 auStack_d8 [3];
  undefined1 uStack_d5;
  undefined4 local_d4;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  undefined4 local_c4 [36];
  char cStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return;
  }
  if ((param_1[0x5d] == param_2) && (param_1[0x5e] != param_2)) {
    piVar15 = param_1 + 0x30;
    do {
      if (param_2 == *piVar15) {
        iVar21 = *param_1;
        iVar22 = piVar15[2];
        iVar23 = piVar15[3];
        uVar11 = piVar15[4];
        iVar20 = iVar21 + 0xb18;
        iVar3 = piVar15[1];
        FUN_ram_4ff3ec14(iVar20,0xffffffff);
        cVar13 = *(char *)(iVar21 + 0xbd8);
        FUN_ram_4ff3ee10(iVar20);
        if (((cVar13 == '\0') && (cVar13 = *(char *)((int)param_1 + 0x246), cVar13 != '\0')) &&
           (*(char *)((int)param_1 + 0x24b) == '\0')) {
          uVar6 = (uint)*(ushort *)(param_1 + 0x8f);
          uVar9 = param_1[0x84];
          uVar4 = uVar6 * 100;
          if (uVar9 < uVar4) goto LAB_ram_480c820e;
          uVar2 = (uint)*(byte *)((int)param_1 + 0x243);
          uVar1 = (uint)*(byte *)(param_1 + 0x91);
          if (((int)((ulonglong)uVar9 * (ulonglong)uVar2 >> 0x20) != 0) ||
             ((uVar2 * 100 + uVar1) * uVar6 < uVar9 * uVar2)) goto LAB_ram_480c820e;
          iStack_ec = param_1[0x7e];
          iStack_f0 = param_1[0x7d];
          if (uVar6 == 0) {
            uVar18 = 0;
            uVar8 = 0;
          }
          else {
            uVar18 = 0;
            if (uVar9 != uVar4) {
              uVar9 = ((uVar9 + uVar6 * -100) * uVar2 + (uVar6 - 1)) / uVar6;
              if (uVar1 < uVar9) {
                uVar9 = uVar1;
              }
              uVar18 = (undefined1)uVar9;
            }
            uVar8 = 0;
            if (uVar4 < (uint)param_1[0x83]) {
              uVar6 = ((param_1[0x83] + uVar6 * -100) * uVar2 + (uVar6 - 1)) / uVar6;
              if (uVar1 < uVar6) {
                uVar6 = uVar1;
              }
              uVar8 = (undefined1)uVar6;
            }
          }
          uVar19 = *(undefined1 *)((int)param_1 + 0x249);
          uStack_e8._0_2_ = CONCAT11(uVar8,uVar18);
          uStack_e8._0_3_ = (uint3)(ushort)uStack_e8;
        }
        else {
LAB_ram_480c820e:
          iStack_f0 = 0;
          iStack_ec = 0;
          uStack_e8._0_3_ = 0;
          uVar19 = 0;
          cVar13 = '\0';
        }
        uStack_e8 = CONCAT13(uVar19,(uint3)uStack_e8);
        if ((char)iVar3 != cVar13) {
          return;
        }
        if (iStack_f0 != iVar22) {
          return;
        }
        if (iStack_ec != iVar23) {
          return;
        }
        if (uStack_e8 != uVar11) {
          return;
        }
        if ((*(char *)((int)param_1 + 0x246) == '\0') || (*(char *)((int)param_1 + 0x24b) != '\0'))
        {
LAB_ram_480c83d4:
          FUN_ram_4ff3ec14(param_1[2],0xffffffff);
          if (param_3 == 0) {
LAB_ram_480c83e4:
            iVar3 = param_1[2];
            *(int *)(param_1[1] + 0x854) = *(int *)(param_1[1] + 0x854) + 1;
            FUN_ram_4ff3ee10(iVar3);
            goto LAB_ram_480c837a;
          }
        }
        else {
          uVar4 = (uint)*(ushort *)(param_1 + 0x8f);
          uVar9 = param_1[0x84];
          uVar6 = uVar4 * 100;
          if (uVar9 < uVar6) goto LAB_ram_480c83d4;
          uVar1 = (uint)*(byte *)((int)param_1 + 0x243);
          uVar2 = (uint)*(byte *)(param_1 + 0x91);
          if (((int)((ulonglong)uVar9 * (ulonglong)uVar1 >> 0x20) != 0) ||
             ((uVar1 * 100 + uVar2) * uVar4 < uVar9 * uVar1)) goto LAB_ram_480c83d4;
          if (uVar4 == 0) {
            uVar19 = 0;
            uVar18 = 0;
          }
          else {
            uVar19 = 0;
            if (uVar9 != uVar6) {
              uVar16 = ((uVar9 + uVar4 * -100) * uVar1 + (uVar4 - 1)) / uVar4;
              if (uVar2 < uVar16) {
                uVar16 = uVar2;
              }
              uVar19 = (undefined1)uVar16;
            }
            uVar18 = 0;
            if (uVar6 < (uint)param_1[0x83]) {
              uVar16 = ((param_1[0x83] + uVar4 * -100) * uVar1 + (uVar4 - 1)) / uVar4;
              if (uVar2 < uVar16) {
                uVar16 = uVar2;
              }
              uVar18 = (undefined1)uVar16;
            }
          }
          cVar13 = *(char *)((int)param_1 + 0x249);
          uStack_c8._0_3_ = (uint3)CONCAT11(uVar18,uVar19);
          uStack_c8 = CONCAT13(cVar13,(uint3)uStack_c8);
          if ((((param_1[0x7d] != iVar22) || (iVar23 != param_1[0x7e])) ||
              (((uStack_c8 ^ uVar11) & 0xffff) != 0)) ||
             (cStack_f5 = (char)(uVar11 >> 0x18), cStack_f5 != cVar13)) goto LAB_ram_480c83d4;
          if (param_3 == 0) {
            *(undefined1 *)((int)param_1 + 0x247) = 0;
            *(undefined1 *)((int)param_1 + 0x24a) = 1;
            FUN_ram_4ff3ec14(param_1[2],0xffffffff);
            goto LAB_ram_480c83e4;
          }
          if (*(char *)((int)param_1 + 0x247) == '\0') {
            param_1[0x85] = uVar9;
            param_1[0x88] = param_4;
            *(undefined1 *)((int)param_1 + 0x253) = 1;
            *(undefined1 *)(param_1 + 0x92) = 1;
            *(undefined1 *)((int)param_1 + 0x247) = 1;
            if (*(char *)((int)param_1 + 0x252) == '\0') {
              param_1[0x86] = param_4;
            }
            *(undefined1 *)((int)param_1 + 0x252) = 0;
            if ((char)param_1[0x94] == '\0') {
              FUN_ram_480564ec(param_1 + 0x70,param_4);
              uVar11 = param_1[0x83];
            }
            else {
              uVar11 = param_1[0x83];
              uVar16 = uVar11;
              if (uVar11 < uVar9) {
                if ((uVar4 == 0) || (uVar9 == uVar6)) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = ((uVar9 + uVar4 * -100) * uVar1 + (uVar4 - 1)) / uVar4;
                  if (uVar2 < uVar16) {
                    uVar16 = uVar2;
                  }
                  uVar16 = uVar16 & 0xff;
                }
                uVar16 = (uVar16 * uVar4 + (uVar1 - 1)) / uVar1 + uVar6;
              }
              param_1[0x8b] = uVar16;
            }
            if (uVar9 <= uVar11) {
              *(undefined1 *)((int)param_1 + 0x249) = 0;
              FUN_ram_4ff3ec14(param_1[2],0xffffffff);
              iVar20 = param_1[1];
              iVar3 = param_1[2];
              *(int *)(iVar20 + 0x858) = param_4;
              *(int *)(iVar20 + 0x850) = *(int *)(iVar20 + 0x850) + 1;
              FUN_ram_4ff3ee10(iVar3);
              param_1[0x5e] = param_2;
              if (cVar13 == '\0') goto LAB_ram_480c837a;
              FUN_ram_4805883a(&local_d4,*param_1);
              if (((cStack_34 == '\0') && (*(char *)((int)param_1 + 0x246) != '\0')) &&
                 (*(char *)((int)param_1 + 0x24b) == '\0')) {
                uVar11 = (uint)*(ushort *)(param_1 + 0x8f);
                uVar4 = param_1[0x84];
                uVar6 = uVar11 * 100;
                if (uVar4 < uVar6) goto LAB_ram_480c8640;
                uVar9 = (uint)*(byte *)((int)param_1 + 0x243);
                uVar1 = (uint)*(byte *)(param_1 + 0x91);
                if (((int)((ulonglong)uVar4 * (ulonglong)uVar9 >> 0x20) != 0) ||
                   ((uVar9 * 100 + uVar1) * uVar11 < uVar4 * uVar9)) goto LAB_ram_480c8640;
                iStack_dc = param_1[0x7e];
                iStack_e0 = param_1[0x7d];
                iStack_e4 = CONCAT31(iStack_e4._1_3_,1);
                if (uVar11 == 0) {
                  uVar4 = 0;
                  uVar18 = 0;
                }
                else {
                  if (uVar4 == uVar6) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = ((uVar4 + uVar11 * -100) * uVar9 + (uVar11 - 1)) / uVar11;
                    if (uVar1 < uVar4) {
                      uVar4 = uVar1;
                    }
                    uVar4 = uVar4 & 0xff;
                  }
                  if (uVar6 < (uint)param_1[0x83]) {
                    uVar11 = ((param_1[0x83] + uVar11 * -100) * uVar9 + (uVar11 - 1)) / uVar11;
                    if (uVar1 < uVar11) {
                      uVar11 = uVar1;
                    }
                    uVar18 = (undefined1)uVar11;
                  }
                  else {
                    uVar18 = 0;
                  }
                }
                uVar19 = *(undefined1 *)((int)param_1 + 0x249);
                auStack_d8._0_2_ = CONCAT11(uVar18,(char)uVar4);
                auStack_d8 = (undefined1  [3])CONCAT12(0,auStack_d8._0_2_);
              }
              else {
LAB_ram_480c8640:
                iStack_e4 = (uint)iStack_e4._1_3_ << 8;
                iStack_e0 = 0;
                iStack_dc = 0;
                auStack_d8 = (undefined1  [3])0x0;
                uVar4 = 0;
                uVar19 = 0;
              }
              _auStack_d8 = CONCAT13(uVar19,auStack_d8);
              FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
              param_1[8] = iStack_dc;
              param_1[9] = _auStack_d8;
              param_1[6] = iStack_e4;
              param_1[7] = iStack_e0;
              FUN_ram_4ff3ee10(param_1 + 4);
              FUN_ram_4805883a(&local_d4,*param_1);
              if (local_d4._1_1_ == '\f') {
                FUN_ram_4ff3ec14(param_1[2],0xffffffff);
                uVar14 = 0;
                *(char *)(param_1[1] + 0x810) = (char)uVar4;
                iVar3 = param_1[1];
                uVar11 = (uint)*(byte *)(iVar3 + 0x804);
                if (uVar11 != 0) {
                  uVar4 = (uVar4 * 100 + 40000) * uVar11;
                  uVar6 = uVar4 + 200;
                  uVar4 = (uint)(uVar6 < uVar4);
                  uVar9 = uVar6 - ((uVar6 & 0xfffff) + (uVar4 * 0x1000 | uVar6 >> 0x14)) % 0x19;
                  uVar14 = (undefined2)
                           ((((uVar9 * -0x3d70a3d7 >> 4 |
                              ((uVar4 - (uVar6 < uVar9)) * -0x3d70a3d7 + uVar9 * -0x70a3d70b +
                              (int)((ulonglong)uVar9 * 0xc28f5c29 >> 0x20)) * 0x10000000) + 0x32) /
                             100 - uVar11) * 0x10000 >> 0x10);
                }
              }
              else {
                FUN_ram_4ff3ec14(param_1[2],0xffffffff);
                *(char *)(param_1[1] + 0x810) = (char)uVar4;
                iVar3 = param_1[1];
                uVar14 = 0;
                uVar11 = (uint)*(byte *)(iVar3 + 0x804);
                if (uVar11 != 0) {
                  uVar14 = (undefined2)
                           ((((uVar4 + 100) * uVar11 + 0x32) / 100 - uVar11) * 0x10000 >> 0x10);
                }
              }
              iVar20 = param_1[2];
              *(undefined2 *)(iVar3 + 0x812) = uVar14;
              FUN_ram_4ff3ee10(iVar20);
              goto LAB_ram_480c837a;
            }
            FUN_ram_4ff3ec14(param_1[2],0xffffffff);
          }
          else {
            FUN_ram_4ff3ec14(param_1[2],0xffffffff);
          }
        }
        iVar20 = param_1[1];
        iVar3 = param_1[2];
        *(int *)(iVar20 + 0x858) = param_4;
        *(int *)(iVar20 + 0x850) = *(int *)(iVar20 + 0x850) + 1;
        FUN_ram_4ff3ee10(iVar3);
        param_1[0x5e] = param_2;
LAB_ram_480c837a:
        FUN_ram_480c7b5e(param_1);
        iVar3 = *param_1;
        FUN_ram_4ff3ec14(iVar3 + 0xb18,0xffffffff);
        puVar17 = (undefined4 *)(iVar3 + 0xb38);
        puVar12 = &local_d4;
        do {
          uVar5 = puVar17[1];
          uVar7 = puVar17[2];
          uVar10 = puVar17[3];
          *puVar12 = *puVar17;
          puVar12[1] = uVar5;
          puVar12[2] = uVar7;
          puVar12[3] = uVar10;
          puVar17 = puVar17 + 4;
          puVar12 = puVar12 + 4;
        } while (puVar17 != (undefined4 *)(iVar3 + 0xbd8));
        *puVar12 = *puVar17;
        FUN_ram_4ff3ee10(iVar3 + 0xb18);
        FUN_ram_4809ec88(param_1,&local_d4);
        return;
      }
      piVar15 = piVar15 + 5;
    } while (param_1 + 0x58 != piVar15);
  }
  return;
}



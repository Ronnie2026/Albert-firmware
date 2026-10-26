/* Firmware entry: 0x4819a644 */

undefined4 FUN_ram_4819a644(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  void *__s;
  uint uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3[2] == 0) {
    return 0;
  }
  if ((((param_2[3] & 8) == 0) || (param_2[4] == 0)) &&
     (iVar6 = __swsetup_r(param_1,param_2), iVar6 != 0)) {
LAB_ram_4819a730:
    uVar7 = 0xffffffff;
  }
  else {
    piVar12 = (int *)*param_3;
    if ((param_2[3] & 2) == 0) {
      if ((param_2[3] & 1) == 0) {
        iVar6 = 0;
        uVar11 = 0;
LAB_ram_4819a7a4:
        while (uVar11 == 0) {
          iVar6 = *piVar12;
          puVar1 = (uint *)(piVar12 + 1);
          piVar12 = piVar12 + 2;
          uVar11 = *puVar1;
        }
        uVar13 = param_2[3];
        uVar5 = *param_2;
        uVar8 = param_2[2];
        if ((uVar13 & 0x200) == 0) {
          if ((param_2[4] < uVar5) || (uVar13 = param_2[5], uVar11 < uVar13)) {
            if (uVar11 < uVar8) {
              uVar8 = uVar11;
            }
            FUN_ram_4ff4522c(uVar5,iVar6,uVar8);
            uVar13 = param_2[2];
            param_2[2] = uVar13 - uVar8;
            *param_2 = *param_2 + uVar8;
            if ((uVar13 - uVar8 == 0) && (iVar10 = _fflush_r(param_1,param_2), iVar10 != 0))
            goto LAB_ram_4819a84a;
          }
          else {
            uVar8 = uVar11;
            if (0x7fffffff < uVar11) {
              uVar8 = 0x7fffffff;
            }
            uVar8 = (*(code *)param_2[10])
                              (param_1,param_2[8],iVar6,((int)uVar8 / (int)uVar13) * uVar13,
                               (code *)param_2[10]);
            if ((int)uVar8 < 1) goto LAB_ram_4819a84a;
          }
LAB_ram_4819a7e0:
          iVar10 = param_3[2];
          iVar6 = iVar6 + uVar8;
          uVar11 = uVar11 - uVar8;
          param_3[2] = iVar10 - uVar8;
          if (iVar10 - uVar8 == 0) goto LAB_ram_4819a76c;
          goto LAB_ram_4819a7a4;
        }
        uVar3 = uVar11;
        if ((uVar11 < uVar8) || (uVar3 = uVar8, (uVar13 & 0x480) == 0)) {
LAB_ram_4819a7c4:
          FUN_ram_4ff4522c(*param_2,iVar6,uVar3);
          param_2[2] = param_2[2] - uVar3;
          *param_2 = *param_2 + uVar3;
          uVar8 = uVar11;
          goto LAB_ram_4819a7e0;
        }
        iVar10 = uVar5 - param_2[4];
        uVar5 = iVar10 + 1 + uVar11;
        uVar8 = (int)(param_2[5] * 3) / 2;
        if (uVar8 < uVar5) {
          uVar8 = uVar5;
        }
        if ((uVar13 & 0x400) == 0) {
          uVar13 = FUN_ram_4ff450c8(param_1);
          if (uVar13 != 0) goto LAB_ram_4819a874;
          FUN_ram_4ff450c2(param_1,param_2[4]);
          *(ushort *)(param_2 + 3) = (ushort)param_2[3] & 0xff7f;
        }
        else {
          uVar13 = FUN_ram_4ff450d0(param_1,uVar8);
          if (uVar13 != 0) {
            FUN_ram_4ff45158(uVar13,param_2[4],iVar10);
            *(ushort *)(param_2 + 3) = (ushort)param_2[3] & 0xfb7f | 0x80;
LAB_ram_4819a874:
            param_2[4] = uVar13;
            param_2[5] = uVar8;
            *param_2 = uVar13 + iVar10;
            param_2[2] = uVar8 - iVar10;
            uVar3 = uVar11;
            goto LAB_ram_4819a7c4;
          }
        }
        *param_1 = 0xc;
LAB_ram_4819a84a:
        *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
        goto LAB_ram_4819a730;
      }
      uVar13 = 0;
      bVar2 = false;
      __s = (void *)0x0;
      uVar11 = 0;
      do {
        while (uVar11 == 0) {
          __s = (void *)*piVar12;
          puVar1 = (uint *)(piVar12 + 1);
          bVar2 = false;
          piVar12 = piVar12 + 2;
          uVar11 = *puVar1;
        }
        if (!bVar2) {
          pvVar4 = memchr(__s,10,uVar11);
          uVar13 = uVar11 + 1;
          if (pvVar4 != (void *)0x0) {
            uVar13 = (int)pvVar4 + (1 - (int)__s);
          }
        }
        uVar8 = uVar13;
        if (uVar11 < uVar13) {
          uVar8 = uVar11;
        }
        uVar5 = *param_2;
        if ((param_2[4] < uVar5) && (uVar3 = param_2[2] + param_2[5], (int)uVar3 < (int)uVar8)) {
          FUN_ram_4ff4522c(uVar5,__s,uVar3);
          *param_2 = *param_2 + uVar3;
          iVar6 = _fflush_r(param_1,param_2);
          uVar8 = uVar3;
          if (iVar6 != 0) goto LAB_ram_4819a84a;
        }
        else if ((int)uVar8 < (int)param_2[5]) {
          FUN_ram_4ff4522c(uVar5,__s,uVar8);
          param_2[2] = param_2[2] - uVar8;
          *param_2 = *param_2 + uVar8;
        }
        else {
          uVar8 = (*(code *)param_2[10])(param_1,param_2[8],__s);
          if ((int)uVar8 < 1) goto LAB_ram_4819a84a;
        }
        uVar13 = uVar13 - uVar8;
        bVar2 = true;
        if (uVar13 == 0) {
          iVar6 = _fflush_r(param_1,param_2);
          bVar2 = false;
          if (iVar6 != 0) goto LAB_ram_4819a84a;
        }
        iVar6 = param_3[2];
        __s = (void *)((int)__s + uVar8);
        uVar11 = uVar11 - uVar8;
        param_3[2] = iVar6 - uVar8;
      } while (iVar6 - uVar8 != 0);
    }
    else {
      iVar6 = 0;
      uVar11 = 0;
      do {
        while (uVar11 == 0) {
          iVar6 = *piVar12;
          puVar1 = (uint *)(piVar12 + 1);
          piVar12 = piVar12 + 2;
          uVar11 = *puVar1;
        }
        uVar13 = uVar11;
        if (0x7fffff80 < uVar11) {
          uVar13 = 0x7fffff80;
        }
        iVar10 = (*(code *)param_2[10])(param_1,param_2[8],iVar6,uVar13);
        if (iVar10 < 1) goto LAB_ram_4819a84a;
        iVar9 = param_3[2];
        iVar6 = iVar6 + iVar10;
        uVar11 = uVar11 - iVar10;
        param_3[2] = iVar9 - iVar10;
      } while (iVar9 - iVar10 != 0);
    }
LAB_ram_4819a76c:
    uVar7 = 0;
  }
  return uVar7;
}



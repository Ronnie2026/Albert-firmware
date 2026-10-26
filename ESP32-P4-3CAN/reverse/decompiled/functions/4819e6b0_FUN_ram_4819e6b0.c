/* Firmware entry: 0x4819e6b0 */

undefined4 FUN_ram_4819e6b0(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3[2] != 0) {
    puVar4 = (undefined4 *)*param_3;
    do {
      do {
        uVar7 = puVar4[1];
        uVar5 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar7 == 0);
      uVar1 = uVar7;
      if (((uint)param_2[2] <= uVar7) &&
         (uVar1 = param_2[2], (*(ushort *)(param_2 + 3) & 0x480) != 0)) {
        iVar6 = *param_2 - param_2[4];
        uVar3 = iVar6 + 1 + uVar7;
        uVar1 = (param_2[5] * 3) / 2;
        if (uVar1 < uVar3) {
          uVar1 = uVar3;
        }
        if ((*(ushort *)(param_2 + 3) & 0x400) == 0) {
          iVar2 = FUN_ram_4ff450c8(param_1);
          if (iVar2 == 0) {
            FUN_ram_4ff450c2(param_1,param_2[4]);
            goto LAB_ram_4819e7d0;
          }
        }
        else {
          iVar2 = FUN_ram_4ff450d0(param_1,uVar1);
          if (iVar2 == 0) {
LAB_ram_4819e7d0:
            *param_1 = 0xc;
            uVar5 = 0xffffffff;
            *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
            param_3[2] = 0;
            goto LAB_ram_4819e796;
          }
          FUN_ram_4ff45158(iVar2,param_2[4],iVar6);
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
        }
        param_2[4] = iVar2;
        param_2[5] = uVar1;
        *param_2 = iVar2 + iVar6;
        param_2[2] = uVar1 - iVar6;
        uVar1 = uVar7;
      }
      FUN_ram_4ff4522c(*param_2,uVar5,uVar1);
      param_2[2] = param_2[2] - uVar1;
      *param_2 = *param_2 + uVar1;
      iVar6 = param_3[2];
      param_3[2] = iVar6 - uVar7;
    } while (iVar6 - uVar7 != 0);
  }
  uVar5 = 0;
LAB_ram_4819e796:
  param_3[1] = 0;
  return uVar5;
}



/* Firmware entry: 0x4817ca46 */

int FUN_ram_4817ca46(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar4 = uVar1 + param_3;
  uVar5 = (uint)(uVar4 < uVar1) + param_1[1];
  uVar1 = uVar1 & 0x7f;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  uVar6 = 0x80 - uVar1;
  if ((uVar5 == 0) && (uVar4 < param_3)) {
    uVar5 = param_1[2];
    uVar4 = uVar5 + 1;
    param_1[2] = uVar4;
    param_1[3] = (uint)(uVar4 < uVar5) + param_1[3];
  }
  if (uVar1 == 0) {
    uVar4 = param_3 & 0xffffff80;
    uVar1 = 0;
    if (uVar4 == 0) goto LAB_ram_4817caa0;
    iVar3 = 0;
  }
  else {
    if (param_3 < uVar6) goto LAB_ram_4817caa0;
    param_3 = (param_3 - 0x80) + uVar1;
    FUN_ram_4ff45158((int)param_1 + uVar1 + 0x50,param_2,uVar6);
    uVar4 = param_3 & 0xffffff80;
    iVar3 = 0x80;
    param_2 = param_2 + uVar6;
  }
  FUN_ram_48187d0c();
  FUN_ram_48187d30(param_1[0x35]);
  iVar2 = FUN_ram_4817c9aa(param_1);
  if (iVar2 == 0) {
    uVar1 = param_1[0x35];
    if (uVar4 < 0x201) {
      if (iVar3 != 0) {
        FUN_ram_48187d48(uVar1,param_1 + 0x14,param_1[0x34] != 0);
        uVar1 = param_1[0x35];
        if (param_1[0x34] != 0) {
          param_1[0x34] = 0;
        }
      }
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          iVar3 = param_2 + uVar5;
          uVar5 = uVar5 + 0x80;
          FUN_ram_48187d48(uVar1,iVar3,param_1[0x34] != 0);
          if (param_1[0x34] != 0) {
            param_1[0x34] = 0;
          }
          uVar1 = param_1[0x35];
        } while (uVar5 != uVar4);
      }
      thunk_FUN_ram_4818b6a2(uVar1,param_1 + 4);
      FUN_ram_48187d1e();
      if (param_3 == 0) {
        return 0;
      }
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_ram_48187d62(uVar1,param_2,uVar4,param_1 + 0x14,iVar3,param_1[0x34] != 0);
      if (iVar2 != 0) goto LAB_ram_4817cb96;
      param_2 = param_2 + uVar4;
      thunk_FUN_ram_4818b6a2(param_1[0x35],param_1 + 4);
      param_3 = param_3 - uVar4;
      FUN_ram_48187d1e();
      uVar1 = 0;
    }
LAB_ram_4817caa0:
    FUN_ram_4ff45158((int)param_1 + uVar1 + 0x50,param_2,param_3);
    return 0;
  }
LAB_ram_4817cb96:
  FUN_ram_48187d1e();
  return iVar2;
}



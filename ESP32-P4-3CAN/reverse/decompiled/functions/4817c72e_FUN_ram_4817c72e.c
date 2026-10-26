/* Firmware entry: 0x4817c72e */

int FUN_ram_4817c72e(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = *param_1;
  uVar5 = uVar4 & 0x3f;
  *param_1 = uVar4 + param_3;
  uVar1 = 0x40 - uVar5;
  if (uVar4 + param_3 < uVar4) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar5 == 0) {
    uVar1 = param_3 & 0xffffffc0;
    uVar5 = 0;
    if (uVar1 == 0) goto LAB_ram_4817c772;
    FUN_ram_48187d0c();
    iVar3 = 0;
    FUN_ram_48187d30(param_1[0x1b]);
    uVar5 = param_1[0x1c];
    iVar2 = iVar3;
    if (uVar5 != 0) goto LAB_ram_4817c820;
LAB_ram_4817c7ae:
    param_1[0x1a] = 1;
    param_1[0x1c] = 1;
  }
  else {
    if (param_3 < uVar1) goto LAB_ram_4817c772;
    FUN_ram_4ff45158((int)param_1 + uVar5 + 0x28,param_2,uVar1);
    FUN_ram_48187d0c();
    param_3 = (uVar5 + param_3) - 0x40;
    FUN_ram_48187d30(param_1[0x1b]);
    uVar5 = param_1[0x1c];
    param_2 = param_2 + uVar1;
    uVar1 = param_3 & 0xffffffc0;
    iVar3 = 0x40;
    iVar2 = 0x40;
    if (uVar5 == 0) goto LAB_ram_4817c7ae;
LAB_ram_4817c820:
    iVar3 = iVar2;
    if (uVar5 == 1) {
      param_1[0x1a] = 0;
      thunk_FUN_ram_4818b708(param_1[0x1b],param_1 + 2);
    }
  }
  uVar5 = param_1[0x1b];
  if (uVar1 < 0x201) {
    if (iVar3 != 0) {
      FUN_ram_48187d48(uVar5,param_1 + 10,param_1[0x1a] != 0);
      uVar5 = param_1[0x1b];
      if (param_1[0x1a] != 0) {
        param_1[0x1a] = 0;
      }
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        iVar3 = param_2 + uVar4;
        uVar4 = uVar4 + 0x40;
        FUN_ram_48187d48(uVar5,iVar3,param_1[0x1a] != 0);
        if (param_1[0x1a] != 0) {
          param_1[0x1a] = 0;
        }
        uVar5 = param_1[0x1b];
      } while (uVar4 != uVar1);
    }
    thunk_FUN_ram_4818b6a2(uVar5,param_1 + 2);
    FUN_ram_48187d1e();
    if (param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_ram_48187d62(uVar5,param_2,uVar1,param_1 + 10,iVar3,param_1[0x1a] != 0);
    if (iVar3 != 0) {
      FUN_ram_48187d1e();
      return iVar3;
    }
    param_2 = param_2 + uVar1;
    thunk_FUN_ram_4818b6a2(param_1[0x1b],param_1 + 2);
    param_3 = param_3 - uVar1;
    FUN_ram_48187d1e();
    uVar5 = 0;
  }
LAB_ram_4817c772:
  FUN_ram_4ff45158((int)param_1 + uVar5 + 0x28,param_2,param_3);
  return 0;
}



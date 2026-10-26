/* Firmware entry: 0x4817c460 */

int FUN_ram_4817c460(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = *param_1;
  uVar4 = uVar3 & 0x3f;
  *param_1 = uVar3 + param_3;
  uVar1 = 0x40 - uVar4;
  if (uVar3 + param_3 < uVar3) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar4 == 0) {
    uVar3 = param_3 & 0xffffffc0;
    uVar4 = 0;
    if (uVar3 == 0) goto LAB_ram_4817c4a6;
    iVar2 = 0;
  }
  else {
    if (param_3 < uVar1) goto LAB_ram_4817c4a6;
    param_3 = param_3 + (uVar4 - 0x40);
    FUN_ram_4ff45158((int)param_1 + uVar4 + 0x1c,param_2,uVar1);
    uVar3 = param_3 & 0xffffffc0;
    iVar2 = 0x40;
    param_2 = param_2 + uVar1;
  }
  FUN_ram_48187d0c();
  FUN_ram_48187d30(param_1[0x18]);
  if (param_1[0x19] == 0) {
    param_1[0x17] = 1;
    param_1[0x19] = 1;
  }
  else if (param_1[0x19] == 1) {
    param_1[0x17] = 0;
    thunk_FUN_ram_4818b708(param_1[0x18],param_1 + 2);
  }
  if (uVar3 < 0x201) {
    if ((iVar2 != 0) && (FUN_ram_48187d48(0,param_1 + 7,param_1[0x17] != 0), param_1[0x17] != 0)) {
      param_1[0x17] = 0;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        FUN_ram_48187d48(0,param_2 + uVar4,param_1[0x17] != 0);
        uVar4 = uVar4 + 0x40;
        if (param_1[0x17] != 0) {
          param_1[0x17] = 0;
        }
      } while (uVar4 != uVar3);
    }
    thunk_FUN_ram_4818b6a2(0,param_1 + 2);
    FUN_ram_48187d1e();
    if (param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_ram_48187d62(0,param_2,uVar3,param_1 + 7,iVar2,param_1[0x17] != 0);
    if (iVar2 != 0) {
      FUN_ram_48187d1e();
      return iVar2;
    }
    thunk_FUN_ram_4818b6a2(0,param_1 + 2);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    FUN_ram_48187d1e();
    uVar4 = 0;
  }
LAB_ram_4817c4a6:
  FUN_ram_4ff45158((int)param_1 + uVar4 + 0x1c,param_2,param_3);
  return 0;
}



/* Firmware entry: 0x481784b0 */

int FUN_ram_481784b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_3c = 0;
  uStack_38 = 0;
  iVar2 = FUN_ram_4817f40e(param_1,param_2,&local_40,0x30);
  if (iVar2 != 0) {
    return iVar2 + -0x3d00;
  }
  iVar4 = *param_1 + local_40;
  iVar2 = FUN_ram_48177b2c(param_1,iVar4,&iStack_3c,&iStack_2c,&uStack_38);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_ram_4817f830(param_1,iVar4,&local_40);
  if (iVar2 != 0) {
    return iVar2 + -0x3b00;
  }
  if (iVar4 != *param_1 + local_40) {
    return -0x3b66;
  }
  iVar2 = FUN_ram_481770a2(iStack_3c);
  if (iVar2 == 0) {
    return -0x3c80;
  }
  iVar2 = FUN_ram_481770ec(param_3,iVar2);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iStack_3c == 1) {
    uStack_30 = param_3[1];
    uStack_34 = *param_3;
    iVar2 = FUN_ram_481774c4(&uStack_34);
    uVar3 = 0;
    if (iVar2 == 1) {
      uVar3 = uStack_30;
    }
    iVar2 = FUN_ram_4817922c(uVar3,*param_1,iVar4 - *param_1);
    if (iVar2 == 0) {
      *param_1 = iVar4;
      return 0;
    }
    iVar1 = -0x3b00;
    if (iVar2 + 0x6cU < 0xd) {
      iVar1 = iVar2 + -0x3b00;
    }
  }
  else if (iStack_3c - 2U < 2) {
    if ((uStack_38 & 0xfffffffb) == 9) {
      if (iStack_2c != 0 || iStack_28 != 0) {
        iVar1 = -0x3d00;
        goto LAB_ram_48178542;
      }
      iVar1 = FUN_ram_481774d2(param_3);
    }
    else {
      iVar1 = FUN_ram_48177bba(&iStack_2c,param_3);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_ram_481775ca(param_3,*param_1,iVar4 - *param_1);
      *param_1 = iVar4;
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = -0x3c80;
  }
LAB_ram_48178542:
  FUN_ram_4817707c(param_3);
  return iVar1;
}



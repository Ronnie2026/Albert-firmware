/* Firmware entry: 0x4817892e */

int FUN_ram_4817892e(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return -0x3d00;
  }
  FUN_ram_48185548(&iStack_2c);
  pcVar3 = (char *)(param_3 + -1 + param_2);
  if (*pcVar3 != '\0') {
LAB_ram_48178958:
    FUN_ram_48185906(&iStack_2c);
    iVar1 = FUN_ram_481770a2(1);
    if (iVar1 == 0) {
      return -0x3c80;
    }
    iVar1 = FUN_ram_481770ec(param_1,iVar1);
    if (iVar1 == 0) {
      uStack_34 = *param_1;
      uStack_30 = param_1[1];
      iStack_3c = param_2;
      iVar1 = FUN_ram_481774c4(&uStack_34);
      uVar2 = 0;
      if (iVar1 == 1) {
        uVar2 = uStack_30;
      }
      iVar1 = FUN_ram_4817922c(uVar2,iStack_3c,param_3);
      if (iVar1 != 0) {
        FUN_ram_4817707c(param_1);
        if (iVar1 == -0x62) {
          iStack_3c = param_2;
          iVar1 = FUN_ram_481784b0(&iStack_3c,param_2 + param_3,param_1);
          return iVar1;
        }
        return iVar1;
      }
      return 0;
    }
    return iVar1;
  }
  iVar1 = FUN_ram_4818557a(&iStack_2c,"-----BEGIN RSA PUBLIC KEY-----",
                           "-----END RSA PUBLIC KEY-----",param_2,0,0,auStack_38);
  if (iVar1 == 0) {
    iStack_3c = iStack_2c;
    iVar1 = FUN_ram_481770a2(1);
    if (iVar1 == 0) {
      FUN_ram_48185906(&iStack_2c,0);
      return -0x3c80;
    }
    iVar1 = FUN_ram_481770ec(param_1);
    if (iVar1 == 0) {
      uStack_34 = *param_1;
      uStack_30 = param_1[1];
      iVar1 = FUN_ram_481774c4(&uStack_34);
      uVar2 = 0;
      if (iVar1 == 1) {
        uVar2 = uStack_30;
      }
      iVar1 = FUN_ram_4817922c(uVar2,iStack_3c,iStack_28);
      if (iVar1 != 0) {
        FUN_ram_4817707c(param_1);
      }
    }
    FUN_ram_48185906(&iStack_2c);
    return iVar1;
  }
  if (iVar1 == -0x1080) {
    if (*pcVar3 != '\0') goto LAB_ram_48178958;
    iVar1 = FUN_ram_4818557a(&iStack_2c,"-----BEGIN PUBLIC KEY-----","-----END PUBLIC KEY-----",
                             param_2,0,0,auStack_38);
    if (iVar1 == 0) {
      iStack_3c = iStack_2c;
      iVar1 = FUN_ram_481784b0(&iStack_3c,iStack_28 + iStack_2c,param_1);
    }
    else if (iVar1 == -0x1080) goto LAB_ram_48178958;
  }
  FUN_ram_48185906(&iStack_2c);
  return iVar1;
}



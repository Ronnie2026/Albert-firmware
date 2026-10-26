/* Firmware entry: 0x48178612 */

int FUN_ram_48178612(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                    undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return -0x3d00;
  }
  pcVar4 = (char *)(param_3 + -1 + param_2);
  FUN_ram_48185548(&uStack_3c);
  if (*pcVar4 != '\0') goto joined_r0x4817864c;
  iVar1 = FUN_ram_4818557a(&uStack_3c,"-----BEGIN RSA PRIVATE KEY-----",
                           "-----END RSA PRIVATE KEY-----",param_2,param_4,param_5,auStack_48);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_481770a2(1);
    iVar1 = FUN_ram_481770ec(param_1,uVar2);
    if (iVar1 == 0) {
      uStack_44 = *param_1;
      uStack_40 = param_1[1];
      iVar1 = FUN_ram_481774c4(&uStack_44);
      uVar2 = 0;
      if (iVar1 == 1) {
        uVar2 = uStack_40;
      }
      iVar1 = FUN_ram_48179302(uVar2,uStack_3c,uStack_38);
      if (iVar1 == 0) goto LAB_ram_4817875c;
    }
    FUN_ram_4817707c(param_1);
LAB_ram_4817875c:
    FUN_ram_48185906(&uStack_3c);
    return iVar1;
  }
  if (iVar1 == -0x1380) {
    return -0x3b80;
  }
  if (iVar1 == -0x1300) {
    return -0x3c00;
  }
  if (iVar1 != -0x1080) {
    return iVar1;
  }
  if (*pcVar4 != '\0') goto joined_r0x4817864c;
  iVar1 = FUN_ram_4818557a(&uStack_3c,"-----BEGIN EC PRIVATE KEY-----",
                           "-----END EC PRIVATE KEY-----",param_2,param_4,param_5,auStack_48);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_481770a2(2);
    iVar1 = FUN_ram_481770ec(param_1,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_48177f9a(param_1,uStack_3c,uStack_38,param_6,param_7);
      goto joined_r0x481788ec;
    }
  }
  else {
    if (iVar1 == -0x1380) {
      return -0x3b80;
    }
    if (iVar1 == -0x1300) {
      return -0x3c00;
    }
    if (iVar1 != -0x1080) {
      return iVar1;
    }
    if (*pcVar4 != '\0') goto joined_r0x4817864c;
    iVar1 = FUN_ram_4818557a(&uStack_3c,"-----BEGIN PRIVATE KEY-----","-----END PRIVATE KEY-----",
                             param_2,0,0,auStack_48);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_48178190(param_1,uStack_3c,uStack_38,param_6,param_7);
    }
    else {
      if (iVar1 != -0x1080) {
        return iVar1;
      }
      if (*pcVar4 != '\0') {
joined_r0x4817864c:
        if (param_5 == 0) {
          FUN_ram_4817707c(param_1);
          FUN_ram_48177072(param_1);
        }
        else {
          iVar1 = thunk_FUN_ram_4817b126(1,param_3);
          if (iVar1 == 0) {
            return -0x3f80;
          }
          FUN_ram_4ff45158(iVar1,param_2,param_3);
          iVar3 = FUN_ram_48178380(param_1,iVar1,param_3,param_4,param_5,param_6,param_7);
          FUN_ram_48178b14(iVar1,param_3);
          if (iVar3 == 0) {
            return 0;
          }
          FUN_ram_4817707c(param_1);
          FUN_ram_48177072(param_1);
          if (iVar3 == -0x3b80) {
            return -0x3b80;
          }
        }
        iVar1 = FUN_ram_48178190(param_1,param_2,param_3,param_6,param_7);
        if (iVar1 != 0) {
          FUN_ram_4817707c(param_1);
          FUN_ram_48177072(param_1);
          uVar2 = FUN_ram_481770a2(1);
          iVar1 = FUN_ram_481770ec(param_1,uVar2);
          if (iVar1 == 0) {
            uStack_44 = *param_1;
            uStack_40 = param_1[1];
            iVar1 = FUN_ram_481774c4(&uStack_44);
            uVar2 = 0;
            if (iVar1 == 1) {
              uVar2 = uStack_40;
            }
            iVar1 = FUN_ram_48179302(uVar2,param_2,param_3);
            if (iVar1 == 0) {
              return 0;
            }
          }
          FUN_ram_4817707c(param_1);
          FUN_ram_48177072(param_1);
          uVar2 = FUN_ram_481770a2(2);
          iVar1 = FUN_ram_481770ec(param_1,uVar2);
          if ((iVar1 != 0) ||
             (iVar1 = FUN_ram_48177f9a(param_1,param_2,param_3,param_6,param_7), iVar1 != 0)) {
            FUN_ram_4817707c(param_1);
            return -0x3d00;
          }
        }
        return 0;
      }
      iVar1 = FUN_ram_4818557a(&uStack_3c,"-----BEGIN ENCRYPTED PRIVATE KEY-----",
                               "-----END ENCRYPTED PRIVATE KEY-----",param_2,0,0,auStack_48);
      if (iVar1 != 0) {
        if (iVar1 != -0x1080) {
          return iVar1;
        }
        goto joined_r0x4817864c;
      }
      iVar1 = FUN_ram_48178380(param_1,uStack_3c,uStack_38,param_4,param_5,param_6,param_7);
    }
joined_r0x481788ec:
    if (iVar1 == 0) goto LAB_ram_481788f4;
  }
  FUN_ram_4817707c(param_1);
LAB_ram_481788f4:
  FUN_ram_48185906(&uStack_3c);
  return iVar1;
}



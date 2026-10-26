/* Firmware entry: 0x48178190 */

int FUN_ram_48178190(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_40 = 0;
  uStack_3c = 0;
  iStack_44 = param_2;
  iVar1 = FUN_ram_4817f40e(&iStack_44,param_2 + param_3,&iStack_48,0x30);
  if (iVar1 != 0) {
    return iVar1 + -0x3d00;
  }
  iVar2 = iStack_44 + iStack_48;
  iVar1 = FUN_ram_4817f55c(&iStack_44,iVar2,&iStack_4c);
  if (iVar1 != 0) {
    return iVar1 + -0x3d00;
  }
  if (iStack_4c != 0) {
    return -0x3d80;
  }
  iVar1 = FUN_ram_48177b2c(&iStack_44,iVar2,&iStack_40,&iStack_2c,&uStack_3c);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4817f40e(&iStack_44,iVar2,&iStack_48,4);
  if (iVar1 != 0) {
    return iVar1 + -0x3d00;
  }
  if (iStack_48 == 0) {
    return -0x3d60;
  }
  iVar1 = FUN_ram_481770a2(iStack_40);
  if (iVar1 == 0) {
LAB_ram_48178362:
    iVar1 = -0x3c80;
  }
  else {
    iVar1 = FUN_ram_481770ec(param_1,iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_40 == 1) {
      iStack_30 = param_1[1];
      iStack_34 = *param_1;
      iVar2 = FUN_ram_481774c4(&iStack_34);
      iVar1 = 0;
      if (iVar2 == 1) {
        iVar1 = iStack_30;
      }
      iVar1 = FUN_ram_48179302(iVar1,iStack_44,iStack_48);
      if (iVar1 != 0) {
        FUN_ram_4817707c(param_1);
        return iVar1;
      }
    }
    else {
      if (1 < iStack_40 - 2U) goto LAB_ram_48178362;
      if ((uStack_3c & 0xfffffffb) == 9) {
        if (iStack_28 != 0 || iStack_2c != 0) {
LAB_ram_48178378:
          iVar1 = -0x3d00;
LAB_ram_481782ee:
          FUN_ram_4817707c(param_1);
          return iVar1;
        }
        iVar1 = FUN_ram_481774d2(param_1);
        if (iVar1 != 0) goto LAB_ram_481782ee;
        iStack_38 = iStack_44;
        iVar1 = FUN_ram_4817f40e(&iStack_38,iStack_48 + iStack_44,&iStack_34,4);
        if (iVar1 == 0) {
          if (iVar2 != iStack_38 + iStack_34) goto LAB_ram_48178378;
          iVar1 = FUN_ram_48177562(param_1);
          if (iVar1 != 0) goto LAB_ram_481782ee;
          iVar1 = FUN_ram_481775b4(param_1,iStack_38,iStack_34,param_4,param_5);
        }
        else {
          iVar1 = iVar1 + -0x3d00;
        }
        if (iVar1 != 0) goto LAB_ram_481782ee;
      }
      else {
        iVar1 = FUN_ram_48177bba(&iStack_2c,param_1);
        if ((iVar1 != 0) ||
           (iVar1 = FUN_ram_48177f9a(param_1,iStack_44,iStack_48,param_4,param_5), iVar1 != 0)) {
          FUN_ram_4817707c(param_1);
          return iVar1;
        }
      }
    }
    iVar1 = 0;
    if (param_2 + param_3 != iStack_44 + iStack_48) {
      iVar1 = -0x3d66;
    }
  }
  return iVar1;
}



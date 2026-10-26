/* Firmware entry: 0x48178380 */

int FUN_ram_48178380(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                    undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_3c = 0;
  if (param_5 == 0) {
    return -0x3c00;
  }
  iStack_48 = param_2;
  iVar1 = FUN_ram_4817f40e(&iStack_48,param_2 + param_3,&iStack_4c,0x30);
  if (iVar1 != 0) {
    return iVar1 + -0x3d00;
  }
  iVar2 = iStack_48 + iStack_4c;
  iVar1 = FUN_ram_4817f8f8(&iStack_48,iVar2,auStack_38,auStack_2c);
  if (iVar1 != 0) {
    return iVar1 + -0x3d00;
  }
  iVar2 = FUN_ram_4817f40e(&iStack_48,iVar2,&iStack_4c,4);
  iVar1 = iStack_48;
  if (iVar2 != 0) {
    return iVar2 + -0x3d00;
  }
  iVar2 = FUN_ram_48185340(auStack_38,&uStack_40,&uStack_44);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48185ce2(auStack_2c,0,uStack_44,uStack_40,param_4,param_5,iStack_48,iStack_4c,
                             iVar1,iStack_4c,&uStack_3c);
    if (iVar2 == 0) goto LAB_ram_48178466;
    if (iVar2 != -0x1e00) {
      return iVar2;
    }
  }
  else {
    if ((iStack_34 != 9) || (iVar2 = FUN_ram_4ff4511a(&DAT_ram_481dee54,uStack_30), iVar2 != 0)) {
      return -0x3980;
    }
    iVar2 = FUN_ram_481860f2(auStack_2c,0,param_4,param_5,iStack_48,iStack_4c,iVar1,iStack_4c,
                             &uStack_3c);
    if (iVar2 == 0) {
LAB_ram_48178466:
      iVar1 = FUN_ram_48178190(param_1,iVar1,uStack_3c,param_6,param_7);
      return iVar1;
    }
    if (iVar2 != -0x2e00) {
      return iVar2;
    }
  }
  return -0x3b80;
}



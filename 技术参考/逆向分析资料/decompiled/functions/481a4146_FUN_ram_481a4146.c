/* Firmware entry: 0x481a4146 */

undefined4
FUN_ram_481a4146(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  iStack_34 = 0;
  if ((param_4 == 0) || (param_5 == 0)) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) goto LAB_ram_481a417e;
LAB_ram_481a41f0:
    uStack_3c = param_2;
    uStack_38 = param_3;
    iVar2 = FUN_ram_4ff3b744(*(undefined4 *)(param_1 + 0x10),param_6);
    if (iVar2 != 1) goto LAB_ram_481a4202;
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = FUN_ram_4ff3d9a8();
    if (iVar1 == iVar2) {
      FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
      iVar2 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 4),&local_40,0,0);
    }
    else {
      FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
      iVar2 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 4),&local_40,param_6,0);
    }
  }
  else {
    iVar1 = FUN_ram_4ff45080(1,param_5);
    if (iVar1 == 0) {
      return 0x101;
    }
    FUN_ram_4ff45158(iVar1,param_4,param_5);
    iVar2 = *(int *)(param_1 + 8);
    local_40 = CONCAT22(local_40._2_2_,&sedeleg);
    iStack_34 = iVar1;
    if (iVar2 == 0) goto LAB_ram_481a41f0;
LAB_ram_481a417e:
    uStack_3c = param_2;
    uStack_38 = param_3;
    iVar1 = FUN_ram_4ff3d9a8();
    if (iVar2 == iVar1) {
      iVar2 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 4),&local_40,0,0);
    }
    else {
      iVar2 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 4),&local_40,param_6,0);
    }
  }
  if (iVar2 == 1) {
    return 0;
  }
LAB_ram_481a4202:
  if ((local_40 & 0xff) != 0) {
    thunk_FUN_ram_4ff209c6(iStack_34);
  }
  return 0x107;
}



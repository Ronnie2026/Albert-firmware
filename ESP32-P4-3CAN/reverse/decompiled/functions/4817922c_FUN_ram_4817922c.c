/* Firmware entry: 0x4817922c */

int FUN_ram_4817922c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_3 = param_2 + param_3;
  iStack_18 = param_2;
  iVar1 = FUN_ram_4817f40e(&iStack_18,param_3,&iStack_14,0x30);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 == iStack_18 + iStack_14) {
    iVar1 = FUN_ram_4817f40e(&iStack_18,param_3,&iStack_14,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack_18 != 0) {
      iVar1 = FUN_ram_481800da(param_1 + 8);
      if (iVar1 == 0) {
        uVar2 = FUN_ram_48180076(param_1 + 8);
        *(undefined4 *)(param_1 + 4) = uVar2;
      }
      else if (iVar1 != 0x4080) {
        return -0x4080;
      }
    }
    iStack_18 = iStack_18 + iStack_14;
    iVar1 = FUN_ram_4817f40e(&iStack_18,param_3,&iStack_14,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (((iStack_18 == 0) || (iVar1 = FUN_ram_481800da(param_1 + 0x10), iVar1 == 0)) ||
       (iVar1 == 0x4080)) {
      iStack_18 = iStack_18 + iStack_14;
      iVar1 = FUN_ram_48179024(param_1);
      if ((iVar1 == 0) && (iVar1 = FUN_ram_481791c8(param_1), iVar1 == 0)) {
        if (iStack_18 != param_3) {
          return -0x66;
        }
        return 0;
      }
    }
  }
  return -0x4080;
}



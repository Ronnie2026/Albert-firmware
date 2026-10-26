/* Firmware entry: 0x48182c0c */

int FUN_ram_48182c0c(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                    undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_8 == 2) {
    return -0xd;
  }
  if ((param_8 < 0x11) && ((param_8 & 1) == 0)) {
    if (0xfeff < param_4) {
      return -0xd;
    }
    *(int *)(param_1 + 0x20) = param_2;
    *(uint *)(param_1 + 0x24) = param_4;
    *(uint *)(param_1 + 0x28) = param_8;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2;
    iVar1 = FUN_ram_48182522();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4818297c(param_1,param_3,param_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (((*(uint *)(param_1 + 0x7c) & 0x10) == 0) &&
       ((*(int *)(param_1 + 0x28) == 0 ||
        ((uint)(*(int *)(param_1 + 0x2c) + param_2) <= *(uint *)(param_1 + 0x20))))) {
      iVar1 = FUN_ram_4818264c(param_1,param_5,param_2,param_6);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_ram_48182af0(param_1,param_7,param_8);
      return iVar1;
    }
  }
  return -0xd;
}



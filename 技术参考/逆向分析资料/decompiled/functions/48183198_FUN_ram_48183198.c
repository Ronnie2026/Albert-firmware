/* Firmware entry: 0x48183198 */

int FUN_ram_48183198(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1a0 [392];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((0x180 < uVar3) || (0x180 - uVar3 < param_4)) {
    return -0x38;
  }
  if ((0x180 - param_4) - uVar3 < param_3) {
    return -0x38;
  }
  memset(auStack_1a0,0,0x180);
  iVar1 = (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x48),auStack_1a0,uVar3);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x44))
                        (*(undefined4 *)(param_1 + 0x48),auStack_1a0 + iVar1,param_4);
      if (iVar2 != 0) goto LAB_ram_4818328c;
      iVar1 = iVar1 + param_4;
    }
    if ((param_2 == 0) || (param_3 == 0)) {
      iVar1 = FUN_ram_48182db0(auStack_1a0,auStack_1a0,iVar1);
    }
    else {
      FUN_ram_4ff45158(auStack_1a0 + iVar1,param_2,param_3);
      iVar1 = FUN_ram_48182db0(auStack_1a0,auStack_1a0,iVar1 + param_3);
    }
    if ((iVar1 == 0) && (iVar1 = FUN_ram_48183038(param_1,auStack_1a0), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_ram_48178af2(auStack_1a0,0x180);
  }
  else {
LAB_ram_4818328c:
    iVar1 = -0x34;
  }
  return iVar1;
}



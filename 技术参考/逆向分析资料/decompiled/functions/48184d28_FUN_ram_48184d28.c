/* Firmware entry: 0x48184d28 */

int FUN_ram_48184d28(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_1a0 [392];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0x50);
  uVar2 = uVar3;
  if (param_4 != 0) {
    uVar2 = uVar3 * 3 >> 1;
  }
  if ((0x100 < param_3) || (0x180 < uVar2 + param_3)) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -5;
  }
  memset(auStack_1a0,0,0x180);
  iVar1 = (**(code **)(param_1 + 0x5c))(*(undefined4 *)(param_1 + 0x60),auStack_1a0,uVar3);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if (param_4 != 0) {
      iVar1 = (**(code **)(param_1 + 0x5c))
                        (*(undefined4 *)(param_1 + 0x60),auStack_1a0 + uVar2,uVar2 >> 1);
      if (iVar1 != 0) goto LAB_ram_48184df8;
      uVar2 = uVar2 + (*(uint *)(param_1 + 0x50) >> 1);
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_ram_4ff45158(auStack_1a0 + uVar2,param_2,param_3);
      uVar2 = uVar2 + param_3;
    }
    iVar1 = FUN_ram_48184c4e(param_1,auStack_1a0,uVar2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    FUN_ram_48178af2(auStack_1a0,uVar2);
  }
  else {
LAB_ram_48184df8:
    iVar1 = -9;
  }
  return iVar1;
}



/* Firmware entry: 0x48171a26 */

int FUN_ram_48171a26(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0) {
    return -0x6100;
  }
  if (0x10 < param_3) {
    return -0x6080;
  }
  uVar3 = *(uint *)(*param_1 + 4);
  uVar4 = param_3;
  if ((-1 < (int)(uVar3 << 7)) && (uVar4 = uVar3 >> 3 & 0x1c, param_3 < uVar4)) {
    return -0x6100;
  }
  if ((uVar3 & 0xf000) == 0x6000) {
    iVar1 = FUN_ram_4817d31a(param_1[0xf],param_1[2],param_2,param_3);
    return iVar1;
  }
  if ((uVar3 & 0xf000) == 0x9000) {
    iVar1 = FUN_ram_48182946(param_1[0xf],0,0,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1[2] == 0) {
      uVar2 = 2;
    }
    else {
      if (param_1[2] != 1) {
        return -0x6100;
      }
      uVar2 = 3;
    }
    iVar1 = FUN_ram_48182890(param_1[0xf],uVar2,param_2,param_3);
    return iVar1;
  }
  if (uVar4 != 0) {
    FUN_ram_4ff45158(param_1 + 10,param_2,uVar4);
    param_1[0xe] = uVar4;
  }
  return 0;
}



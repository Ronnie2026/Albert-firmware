/* Firmware entry: 0x48184e7a */

int FUN_ram_48184e7a(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_48176d4c(*param_1);
  if (0x400 < param_3) {
    return -3;
  }
  if (0x100 < param_5) {
    return -5;
  }
  if ((param_1[0x17] == 0) || ((param_1[0x15] != 1 && ((int)param_1[0x13] < (int)param_1[0x16])))) {
    if (param_4 == 0) goto LAB_ram_48184ee8;
    if (param_5 != 0) {
      iVar3 = FUN_ram_48184c4e(param_1,param_4,param_5);
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_ram_48184ee8;
    }
  }
  else {
    iVar3 = FUN_ram_48184d28(param_1,param_4,param_5,0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  param_5 = 0;
LAB_ram_48184ee8:
  puVar4 = param_1 + 3;
  while( true ) {
    if (param_3 == 0) {
      iVar3 = FUN_ram_48184c4e(param_1,param_4,param_5);
      if (iVar3 == 0) {
        param_1[0x13] = param_1[0x13] + 1;
      }
      return iVar3;
    }
    uVar1 = param_3;
    if (uVar2 < param_3) {
      uVar1 = uVar2;
    }
    iVar3 = FUN_ram_48176f38(param_1);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_ram_48176e96(param_1,puVar4,uVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_ram_48176eac(param_1,puVar4);
    if (iVar3 != 0) break;
    param_3 = param_3 - uVar1;
    FUN_ram_4ff45158(param_2,puVar4,uVar1);
    param_2 = param_2 + uVar1;
  }
  return iVar3;
}



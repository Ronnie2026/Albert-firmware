/* Firmware entry: 0x4814310e */

undefined4 FUN_ram_4814310e(uint *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return 0xfffffff0;
  }
  if (((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffff0;
  }
  if (((char)param_1[5] != '.') && ((char)param_1[5] != *(char *)(param_3 + 0x14))) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffffa;
  }
  uVar3 = *param_1;
  if (*(char *)(param_3 + 0x14) == '\x06') {
    if (uVar3 == 0) {
      if (((param_1[1] == 0) && (param_1[2] == 0)) && (param_1[3] == 0)) {
LAB_ram_481431ba:
        iVar2 = FUN_ram_481482f0(param_5,param_3);
        if (iVar2 == 0) {
          return 0xfffffffc;
        }
        uVar1 = FUN_ram_48142ebc(param_1,param_2,param_3,param_4,param_5,iVar2);
        return uVar1;
      }
    }
    else if ((uVar3 & 0xff) == 0xff) goto LAB_ram_481431ba;
    iVar2 = FUN_ram_4813a644(param_5,param_1);
    puVar4 = param_1;
    if (iVar2 < 0) {
      return 0xfffffffc;
    }
  }
  else {
    if ((uVar3 != 0) && ((uVar3 & 0xf0) != 0xe0)) {
      if (uVar3 != *(uint *)(param_5 + 4)) {
        return 0xfffffffc;
      }
      uVar1 = FUN_ram_48142ebc(param_1,param_2);
      return uVar1;
    }
    puVar4 = (uint *)(param_5 + 4);
  }
  uVar1 = FUN_ram_48142ebc(param_1,param_2,param_3,param_4,param_5,puVar4);
  return uVar1;
}



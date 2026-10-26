/* Firmware entry: 0x4813bca0 */

undefined4 FUN_ram_4813bca0(uint *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return 0xfffffffa;
  }
  if (param_3 == (uint *)0x0) {
    return 0xfffffffa;
  }
  if (((char)param_1[5] != '.') && ((char)param_3[5] != (char)param_1[5])) {
    return 0xfffffffa;
  }
  if ((char)param_1[0xc] == '\0') {
    if ((char)param_3[5] == '\x06') {
      if ((*param_3 & 0xff) == 0xff) goto LAB_ram_4813bd3e;
LAB_ram_4813bd32:
      iVar1 = FUN_ram_48148070(param_1,param_3);
      goto LAB_ram_4813bcf4;
    }
    if ((*param_3 & 0xf0) != 0xe0) {
LAB_ram_4813bcea:
      iVar1 = FUN_ram_481470f4(param_1,param_3);
      goto LAB_ram_4813bcf4;
    }
LAB_ram_4813bd3e:
    iVar1 = FUN_ram_4813a81c(*(undefined1 *)((int)param_1 + 0x3a));
    if (iVar1 == 0) {
      if ((char)param_3[5] == '\x06') goto LAB_ram_4813bd32;
      goto LAB_ram_4813bcea;
    }
  }
  else {
    iVar1 = FUN_ram_4813a81c();
LAB_ram_4813bcf4:
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
  }
  uVar4 = *param_1;
  puVar3 = param_1;
  if ((char)param_1[5] == '\x06') {
    if (uVar4 == 0) {
      if (((param_1[1] != 0) || (param_1[2] != 0)) || (param_1[3] != 0)) goto LAB_ram_4813bd12;
    }
    else if ((uVar4 & 0xff) != 0xff) goto LAB_ram_4813bd12;
  }
  else if ((uVar4 != 0) && ((uVar4 & 0xf0) != 0xe0)) goto LAB_ram_4813bd12;
  puVar3 = (uint *)(iVar1 + 4);
  if (((char)param_3[5] == '\x06') &&
     (puVar3 = (uint *)FUN_ram_481482f0(iVar1,param_3,6,iVar1,(uint *)(iVar1 + 4)),
     puVar3 == (uint *)0x0)) {
    return 0xfffffffc;
  }
LAB_ram_4813bd12:
  uVar2 = FUN_ram_4813b9fa(param_1,param_2,param_3,iVar1,puVar3);
  return uVar2;
}



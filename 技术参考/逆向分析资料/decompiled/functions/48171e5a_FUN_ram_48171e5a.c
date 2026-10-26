/* Firmware entry: 0x48171e5a */

int FUN_ram_48171e5a(int *param_1,undefined4 param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return -0x6100;
  }
  uVar3 = *(uint *)(iVar5 + 4);
  *param_3 = 0;
  *param_4 = 0;
  uVar2 = uVar3 & 0xf000;
  if (uVar2 != 0x2000) {
    if ((uVar3 & 0xb000) == 0x3000) {
      return 0;
    }
    if ((uVar3 & 0xe000) == 0x4000) {
      return 0;
    }
    if ((uVar2 - 0x6000 >> 0xc & 0xfffffffb) == 0) {
      return 0;
    }
    if (uVar2 == 0x9000) {
      return 0;
    }
    if ((byte)(*(char *)(iVar5 + 6) + 0xb4U) < 2) {
      return 0;
    }
    if (uVar2 == 0x1000) {
      if (param_1[9] == 0) {
        return 0;
      }
      return -0x6280;
    }
    return -0x6080;
  }
  if (param_1[4] == 0) {
    return -0x6100;
  }
  if ((byte)(*(char *)(iVar5 + 6) + 0xb4U) < 2) {
    return 0;
  }
  iVar1 = param_1[2];
  uVar2 = param_1[9];
  if (iVar1 == 1) {
    if ((code *)param_1[3] == (code *)0x0) goto LAB_ram_48171f1a;
    uVar2 = param_1[0xe];
    if (uVar2 == 0) {
      uVar2 = uVar3 >> 3 & 0x1c;
    }
    (*(code *)param_1[3])(param_1 + 5,uVar2);
    iVar5 = *param_1;
    iVar1 = param_1[2];
    uVar2 = *(uint *)(iVar5 + 4) & 0x1f;
  }
  else if ((uVar3 & 0x1f) != uVar2) {
    if (param_1[3] != 0) {
      return -0x6280;
    }
LAB_ram_48171f1a:
    if (uVar2 == 0) {
      return 0;
    }
    return -0x6280;
  }
  pcVar4 = *(code **)(*(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 +
                              (*(byte *)(iVar5 + 7) & 0x7c)) + 8);
  iVar5 = (*pcVar4)(param_1[0xf],iVar1,uVar2,param_1 + 10,param_1 + 5,param_2,pcVar4);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = *param_1;
  if (param_1[2] != 0) {
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar5 + 4) & 0x1f;
    }
    *param_3 = uVar2;
    return 0;
  }
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar5 + 4) & 0x1f;
  }
                    /* WARNING: Could not recover jumptable at 0x48171f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (*(code *)param_1[4])(param_2,uVar2,param_3,param_4,(code *)param_1[4]);
  return iVar5;
}



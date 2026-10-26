/* Firmware entry: 0x481431f0 */

undefined4 FUN_ram_481431f0(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint auStack_38 [5];
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  if (param_3 == (uint *)0x0) {
    return 0xfffffff0;
  }
  cVar1 = (char)param_3[5];
  if ((*(char *)(param_1 + 0x14) != '.') && (*(char *)(param_1 + 0x14) != cVar1)) {
    return 0xfffffffa;
  }
  if (cVar1 == '\x06') {
    if (*param_3 == 0) {
      if ((param_3[1] == 0) && (param_3[2] == 0xffff0000)) {
        auStack_38[0] = param_3[3];
        uStack_24 = 0;
        uVar3 = FUN_ram_481431f0(param_1,param_2,auStack_38,param_4);
        return uVar3;
      }
      if (*(char *)(param_1 + 0x30) != '\0') {
LAB_ram_48143290:
        iVar2 = FUN_ram_4813a81c();
        goto LAB_ram_48143260;
      }
    }
    else {
      if (*(char *)(param_1 + 0x30) != '\0') goto LAB_ram_48143290;
      if (((*param_3 & 0xff) == 0xff) && (*(char *)(param_1 + 0x44) != '\0')) goto LAB_ram_481432bc;
    }
LAB_ram_481432b0:
    iVar2 = FUN_ram_48148070(param_1,param_3);
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\0') goto LAB_ram_48143290;
    if ((*param_3 & 0xf0) == 0xe0) {
      if (*(char *)(param_1 + 0x44) == '\0') {
        if (((cVar1 != '\0') || (*(int *)(param_1 + 0x40) == 0)) ||
           (*(int *)(param_1 + 0x40) == DAT_ram_48236f84)) goto LAB_ram_48143256;
        iVar2 = FUN_ram_481470f4(param_1,param_1 + 0x40);
      }
      else {
LAB_ram_481432bc:
        iVar2 = FUN_ram_4813a81c();
      }
      if (iVar2 != 0) goto LAB_ram_48143262;
      if ((char)param_3[5] == '\x06') goto LAB_ram_481432b0;
    }
LAB_ram_48143256:
    iVar2 = FUN_ram_481470f4(param_1,param_3);
  }
LAB_ram_48143260:
  if (iVar2 == 0) {
    return 0xfffffffc;
  }
LAB_ram_48143262:
  uVar3 = FUN_ram_4814310e(param_1,param_2,param_3,param_4);
  return uVar3;
}



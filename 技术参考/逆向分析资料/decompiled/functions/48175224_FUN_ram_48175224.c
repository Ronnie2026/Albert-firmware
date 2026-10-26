/* Firmware entry: 0x48175224 */

int FUN_ram_48175224(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48176468(param_2,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar1 = -0x4e80;
    goto LAB_ram_48175290;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    if (param_1 == 9) {
      if (param_4 != 0x20) {
        return -0x4c80;
      }
      iVar2 = param_2 + 0x60;
      iVar1 = FUN_ram_4818008e(iVar2,param_3,0x20);
      if ((((iVar1 != 0) || (iVar1 = FUN_ram_4817ffcc(iVar2,0,0), iVar1 != 0)) ||
          (iVar1 = FUN_ram_4817ffcc(iVar2,1,0), iVar1 != 0)) ||
         ((iVar1 = FUN_ram_4817ffcc(iVar2,2,0), iVar1 != 0 ||
          (iVar1 = FUN_ram_4817ffcc(iVar2,0xff,0), iVar1 != 0)))) goto LAB_ram_48175290;
      iVar1 = FUN_ram_4817ffcc(iVar2,0xfe,1);
    }
    else {
      iVar1 = -0x4e80;
      iVar2 = param_2 + 0x60;
      if (param_1 != 0xd) goto LAB_ram_48175290;
      if (param_4 != 0x38) {
        return -0x4c80;
      }
      iVar1 = FUN_ram_4818008e(iVar2,param_3,0x38);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_4817ffcc(iVar2,0,0), iVar1 != 0)) ||
         (iVar1 = FUN_ram_4817ffcc(iVar2,1,0), iVar1 != 0)) goto LAB_ram_48175290;
      iVar1 = FUN_ram_4817ffcc(iVar2,0x1bf,1);
    }
    if (iVar1 != 0) goto LAB_ram_48175290;
    if ((*(int *)(param_2 + 0x1c) != 0) && (*(int *)(param_2 + 0x24) != 0)) goto LAB_ram_48175258;
  }
  else {
LAB_ram_48175258:
    iVar1 = FUN_ram_481800da(param_2 + 0x60,param_3,param_4);
    if (iVar1 != 0) goto LAB_ram_48175290;
  }
  iVar1 = FUN_ram_481748fc(param_2,param_2 + 0x60);
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_48175290:
  FUN_ram_4817fb90(param_2 + 0x60);
  return iVar1;
}



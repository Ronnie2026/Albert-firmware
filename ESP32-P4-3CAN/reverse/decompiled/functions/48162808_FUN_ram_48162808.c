/* Firmware entry: 0x48162808 */

int FUN_ram_48162808(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_1[0x10];
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_24 = 0x20;
  if (uStack_1c == 0) {
    uStack_1c = 1000;
  }
  iVar2 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c,param_3,param_4,(code *)param_1[0xc]);
  if (iVar2 == 0) {
    if ((*param_1 & 8) == 0) {
      if (iStack_20 != 0) {
        return iStack_20;
      }
      goto LAB_ram_4816285e;
    }
  }
  else if ((*param_1 & 8) == 0) {
    return iVar2;
  }
  FUN_ram_4ff3c2b6(0x14);
  uStack_24 = uStack_24 | 0x1c00;
  uVar1 = param_1[0x10];
  if ((param_1[0x10] == 0) && (uVar1 = uStack_1c, uStack_1c == 0)) {
    uStack_1c = 1000;
    uVar1 = uStack_1c;
  }
  uStack_1c = uVar1;
  iVar2 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c);
  if ((iVar2 != 0) || (iVar2 = iStack_20, iStack_20 != 0)) {
    return iVar2;
  }
LAB_ram_4816285e:
  iVar2 = iStack_20;
  FUN_ram_4ff3c2b6(0x14);
  return iVar2;
}



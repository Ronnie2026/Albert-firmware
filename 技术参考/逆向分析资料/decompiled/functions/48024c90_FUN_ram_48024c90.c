/* Firmware entry: 0x48024c90 */

int FUN_ram_48024c90(int *param_1,int param_2,undefined1 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -1;
  }
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return -1;
  }
  if (param_5 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbe0,0xffffffff);
  }
  if (param_4 < 2) {
    iVar3 = FUN_ram_481603ec(iVar4,1,param_2,*param_3,0);
  }
  else {
    uVar1 = param_4 + 3 & 0xfffc;
    while (0x1ff < uVar1) {
      uVar2 = uVar1 & 0xfe00;
      iVar3 = FUN_ram_481607da(iVar4,1,param_2,param_3,uVar2);
      uVar1 = uVar1 - uVar2 & 0xffff;
      if (iVar3 != 0) goto LAB_ram_48024d00;
      param_3 = param_3 + uVar2;
      param_2 = param_2 + uVar2;
    }
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_ram_481606e6(iVar4,1,param_2,param_3,uVar1);
    }
  }
LAB_ram_48024d00:
  if (param_5 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbe0);
  }
  return iVar3;
}



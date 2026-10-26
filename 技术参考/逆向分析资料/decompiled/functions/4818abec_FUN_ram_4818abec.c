/* Firmware entry: 0x4818abec */

int FUN_ram_4818abec(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817f40e(param_1,param_2,&iStack_14,0x30);
  if (iVar1 == 0) {
    if (param_2 == *param_1 + iStack_14) {
      iVar1 = FUN_ram_4818aa8c(param_1,param_2,param_3);
    }
    else {
      iVar1 = -0x2566;
    }
    return iVar1;
  }
  return iVar1 + -0x2500;
}



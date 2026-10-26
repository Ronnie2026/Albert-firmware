/* Firmware entry: 0x48026f2e */

int FUN_ram_48026f2e(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
      iVar1 = *param_1;
    }
  }
  if (*(char *)((int)param_1 + 5) == '\0') {
    iVar1 = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 0;
    iVar1 = 1;
    *param_2 = *(undefined1 *)((int)param_1 + 6);
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    if (param_3 == 0) {
      iVar2 = *param_1;
      goto joined_r0x48026fde;
    }
  }
  uVar3 = FUN_ram_4800b736((char)param_1[1],param_2,param_3,(uint)(param_4 * 1000) / 1000);
  iVar1 = iVar1 + (uVar3 & (int)~uVar3 >> 0x1f);
  iVar2 = *param_1;
joined_r0x48026fde:
  if (iVar2 != 0) {
    FUN_ram_4ff3afa2(iVar2,0,0,0);
    return iVar1;
  }
  return iVar1;
}



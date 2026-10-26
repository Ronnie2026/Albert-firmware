/* Firmware entry: 0x481218da */

void FUN_ram_481218da(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_2 + 0x14);
  *param_1 = &PTR_LAB_ram_4802c23a_ram_48223eac;
  param_1[5] = iVar1;
  uVar2 = 0;
  if (iVar1 == 1) {
    uVar2 = *(undefined1 *)(param_2 + 0x18);
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  FUN_ram_4ff45158(param_1 + 1,param_2 + 4,0x10);
  return;
}



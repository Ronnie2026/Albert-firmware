/* Firmware entry: 0x4818d14a */

void FUN_ram_4818d14a(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0xe7) & 1) == 0)) {
    if (param_4 != 0) {
LAB_ram_4818d190:
      FUN_ram_48158cca(uVar3,param_4);
      return;
    }
  }
  else {
    iVar1 = FUN_ram_4818d2ac(uVar3);
    if (iVar1 == 0) goto LAB_ram_4818d190;
    iVar2 = (**(code **)(param_1 + 0xb0))(iVar1,param_1);
    if (iVar2 != 0) {
      FUN_ram_4813ac74(iVar1);
      return;
    }
  }
  return;
}



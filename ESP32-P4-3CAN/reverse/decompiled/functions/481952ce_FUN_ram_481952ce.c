/* Firmware entry: 0x481952ce */

undefined4
FUN_ram_481952ce(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_1 + 4);
  if ((param_5 == param_7) &&
     (iVar1 = FUN_ram_48195266(uVar2,*(undefined4 *)(param_6 + 4)), iVar1 != 0)) {
    param_8[2] = param_3;
  }
  else {
    iVar1 = FUN_ram_48195266(uVar2,*(undefined4 *)(param_4 + 4));
    if (iVar1 != 0) {
      *param_8 = param_5;
      param_8[1] = param_3;
      param_8[3] = 1;
    }
  }
  return 0;
}



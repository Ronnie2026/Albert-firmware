/* Firmware entry: 0x48121864 */

void FUN_ram_48121864(undefined4 *param_1,int param_2,undefined1 *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = &PTR_LAB_ram_4802c23a_ram_48223eac;
  param_1[5] = param_2;
  if (param_2 == 0) {
    memset(param_1 + 1,0,0x10);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined1 *)(param_1 + 4) = *param_3;
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    *(undefined1 *)((int)param_1 + 0x12) = uVar2;
    *(undefined1 *)((int)param_1 + 0x13) = uVar3;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  FUN_ram_4ff45158(param_1 + 1,param_3,0x10);
  *(undefined1 *)(param_1 + 6) = param_4;
  return;
}



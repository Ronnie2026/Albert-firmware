/* Firmware entry: 0x4819492c */

void FUN_ram_4819492c(uint param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      uVar2 = FUN_ram_481948c4(0,1 << (uVar1 & 0x1f),param_1,param_2,param_3);
      *param_4 = uVar2;
      uVar1 = uVar1 + 1;
      param_4 = param_4 + 1;
    } while (param_1 != uVar1);
  }
  param_5 = param_5 + param_3 * 4;
  uVar1 = 0;
  if (0 < (int)param_3) {
    do {
      uVar2 = FUN_ram_481948c4(1 << (uVar1 & 0x1f),0,param_1,param_2,param_3);
      *(undefined4 *)(param_5 + -4) = uVar2;
      uVar1 = uVar1 + 1;
      param_5 = param_5 + -4;
    } while (param_3 != uVar1);
  }
  return;
}



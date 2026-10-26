/* Firmware entry: 0x4ff36c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff36c30(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0 && param_2 == 0) {
    uVar1 = FUN_ram_4ff20626();
    if (uVar1 < 0x12e) {
      param_3 = param_3 >> (_DAT_ram_5012d034 >> 0x11 & 1) + 1;
    }
  }
  (*(code *)&LAB_ram_4fc00204)(param_1,param_2,param_3,param_4);
  return;
}



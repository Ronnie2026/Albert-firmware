/* Firmware entry: 0x4819e59e */

void FUN_ram_4819e59e(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (undefined4 *)(param_3 + 0x14);
  puVar4 = puVar3 + *(int *)(param_3 + 0x10);
  puVar1 = param_1;
  for (; puVar3 < puVar4; puVar3 = puVar3 + 1) {
    *puVar1 = *puVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = 0;
  if ((undefined4 *)(param_3 + 0x11U) <= puVar4) {
    uVar2 = (int)puVar4 + (-0x11 - param_3) & 0xfffffffc;
  }
  for (puVar1 = (undefined4 *)((int)param_1 + uVar2); puVar1 < param_1 + (param_2 + -1 >> 5) + 1;
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return;
}



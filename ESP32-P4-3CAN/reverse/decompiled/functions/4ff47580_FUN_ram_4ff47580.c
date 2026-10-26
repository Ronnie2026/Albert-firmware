/* Firmware entry: 0x4ff47580 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4ff47580(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  uint local_30 [4];
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_20 = (undefined1 *)local_30;
  local_30[1] = 0x10000;
  pcVar2 = *(code **)(*(int *)*param_1 + 4);
  local_30[0] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  uStack_18 = 0x35;
  iVar1 = (*pcVar2)((int *)*param_1,local_30 + 1,param_3,0x35,pcVar2);
  if (iVar1 == 0) {
    *param_2 = (local_30[0] & 2) << 1;
  }
  return;
}



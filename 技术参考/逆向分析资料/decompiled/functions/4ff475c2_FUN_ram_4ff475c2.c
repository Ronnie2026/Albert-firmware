/* Firmware entry: 0x4ff475c2 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4ff475c2(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_40 [4];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_30 = (undefined1 *)local_40;
  local_40[1] = 0x10000;
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_28 = 0x35;
  iVar2 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,local_40 + 1);
  uVar1 = local_40[0];
  if (iVar2 != 0) {
    return;
  }
  local_40[1] = 0x10000;
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_28 = 5;
  puStack_30 = (undefined1 *)local_40;
  iVar2 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,local_40 + 1);
  if (iVar2 == 0) {
    *param_2 = (uVar1 & 0xff) << 8 | local_40[0] & 0xff;
    return;
  }
  return;
}



/* Firmware entry: 0x48005016 */

void FUN_ram_48005016(uint *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  if (0 < param_3) {
    iVar2 = 0;
    puVar1 = local_20;
    do {
      uVar3 = *param_4;
      iVar2 = iVar2 + 1;
      param_4 = param_4 + 1;
      *puVar1 = uVar3;
      if (param_3 == iVar2) break;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 4);
  }
  FUN_ram_48004ed8(param_1[2],0,param_1 + 5,*param_1 & 0x3ff,param_1[3],local_20,
                   *param_1 >> 0x1e & 1,*param_1 >> 0x1d & 1,param_1[9],param_2);
  return;
}



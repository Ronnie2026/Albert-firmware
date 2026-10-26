/* Firmware entry: 0x48004e78 */

void FUN_ram_48004e78(uint *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  if (0 < param_3) {
    iVar1 = 0;
    puVar2 = local_20;
    do {
      uVar3 = *param_4;
      iVar1 = iVar1 + 1;
      param_4 = param_4 + 1;
      *puVar2 = uVar3;
      if (param_3 == iVar1) break;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 4);
  }
  FUN_ram_48004d4c(param_1[2],0,*param_1 & 0x3ff,param_1[3],local_20,*param_1 >> 0x1e & 1,
                   *param_1 >> 0x1d & 1,param_1[9],param_2);
  return;
}



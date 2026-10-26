/* Firmware entry: 0x4818b508 */

void FUN_ram_4818b508(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_2 = param_2 + *(int *)(&DAT_ram_4823a720 + param_1 * 4);
  uVar5 = param_4;
  if (param_5 < param_4) {
    uVar5 = param_5;
  }
  if (uVar5 != 0) {
    puVar2 = param_3 + uVar5;
    iVar1 = param_2 - (int)param_3;
    do {
      uVar4 = *param_3;
      puVar3 = (undefined4 *)(iVar1 + (int)param_3);
      param_3 = param_3 + 1;
      *puVar3 = uVar4;
    } while (puVar2 != param_3);
  }
  if (param_4 < param_5) {
    if (param_5 < uVar5 + 1) {
      memset((void *)(param_2 + uVar5 * 4),0,4);
      return;
    }
    memset((void *)(param_2 + uVar5 * 4),0,(param_5 - uVar5) * 4);
    return;
  }
  return;
}



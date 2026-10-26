/* Firmware entry: 0x4818b5f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818b5f0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
  } while (_DAT_ram_50092818 == 0);
  _DAT_ram_5009281c = 1;
  if (param_3 != 0) {
    iVar3 = DAT_ram_4823a728 - (int)param_1;
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
      puVar1 = puVar2;
    } while (puVar2 != param_1 + param_3);
  }
  if (param_3 < param_2) {
    memset(param_1 + param_3,0,(param_2 - param_3) * 4);
    return;
  }
  return;
}



/* Firmware entry: 0x4818b650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818b650(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    puVar2 = param_2 + param_3;
    iVar1 = 0x50091080 - (int)param_2;
    do {
      uVar3 = *param_2;
      puVar4 = (undefined4 *)(iVar1 + (int)param_2);
      param_2 = param_2 + 1;
      *puVar4 = uVar3;
    } while (param_2 != puVar2);
  }
  if (param_4 != 0) {
    _DAT_ram_50091010 = 1;
    return;
  }
  _DAT_ram_50091014 = 1;
  return;
}



/* Firmware entry: 0x4818b708 */

void FUN_ram_4818b708(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    iVar1 = (-(uint)(param_1 != 0) & 3) + 5;
  }
  else {
    if (4 < param_1 - 3) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar1 = 0x10;
  }
  puVar2 = param_2 + iVar1;
  iVar1 = 0x50091040 - (int)param_2;
  do {
    uVar3 = *param_2;
    puVar4 = (undefined4 *)(iVar1 + (int)param_2);
    param_2 = param_2 + 1;
    *puVar4 = uVar3;
  } while (param_2 != puVar2);
  return;
}



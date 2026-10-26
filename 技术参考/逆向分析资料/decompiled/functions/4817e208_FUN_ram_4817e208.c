/* Firmware entry: 0x4817e208 */

void FUN_ram_4817e208(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = param_2;
  do {
    puVar2 = puVar3;
    puVar1 = param_1;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar3 = puVar2 + 4;
    param_1 = puVar1 + 4;
  } while (puVar3 != param_2 + 0x14);
  uVar4 = puVar2[5];
  puVar1[4] = *puVar3;
  puVar1[5] = uVar4;
  return;
}



/* Firmware entry: 0x4818acb2 */

void FUN_ram_4818acb2(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = local_30;
  puVar4 = local_30;
  puVar5 = local_30;
  puVar6 = local_30;
  puVar7 = local_30;
  puVar8 = local_30;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  local_30[0xb] = 0;
  do {
    uVar1 = *puVar3;
    puVar2 = (undefined4 *)((0x50093130 - (int)local_30) + (int)puVar3);
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
  } while (puVar3 != (undefined4 *)&stack0x00000000);
  do {
    uVar1 = *puVar4;
    puVar3 = (undefined4 *)((0x50093160 - (int)local_30) + (int)puVar4);
    puVar4 = puVar4 + 1;
    *puVar3 = uVar1;
  } while (puVar4 != (undefined4 *)&stack0x00000000);
  do {
    uVar1 = *puVar5;
    puVar3 = (undefined4 *)((0x50093100 - (int)local_30) + (int)puVar5);
    puVar5 = puVar5 + 1;
    *puVar3 = uVar1;
  } while (puVar5 != (undefined4 *)&stack0x00000000);
  do {
    uVar1 = *puVar6;
    puVar3 = (undefined4 *)((0x50093190 - (int)local_30) + (int)puVar6);
    puVar6 = puVar6 + 1;
    *puVar3 = uVar1;
  } while (puVar6 != (undefined4 *)&stack0x00000000);
  do {
    uVar1 = *puVar7;
    puVar3 = (undefined4 *)((0x500931c0 - (int)local_30) + (int)puVar7);
    puVar7 = puVar7 + 1;
    *puVar3 = uVar1;
  } while (puVar7 != (undefined4 *)&stack0x00000000);
  do {
    uVar1 = *puVar8;
    puVar3 = (undefined4 *)((0x500931f0 - (int)local_30) + (int)puVar8);
    puVar8 = puVar8 + 1;
    *puVar3 = uVar1;
  } while (puVar8 != (undefined4 *)&stack0x00000000);
  return;
}



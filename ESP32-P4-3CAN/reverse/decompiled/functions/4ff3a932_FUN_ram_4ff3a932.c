/* Firmware entry: 0x4ff3a932 */

void FUN_ram_4ff3a932(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_2;
  uVar8 = param_2[0x20];
  uVar7 = param_2[0x21];
  uVar3 = param_2[0x22];
  uVar4 = param_2[0x23];
  uVar5 = param_2[1];
  *(undefined4 *)(param_1 + 0x478) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  puVar6 = param_2 + 10;
  *(undefined4 *)(param_1 + 0x464) = uVar8;
  *(undefined4 *)(param_1 + 0x468) = uVar7;
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  *(undefined4 *)(param_1 + 0x470) = uVar4;
  *(undefined4 *)(param_1 + 0x474) = uVar5;
  puVar2 = (undefined4 *)(param_1 + 0x47c);
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar6 != param_2 + 0x12);
  return;
}



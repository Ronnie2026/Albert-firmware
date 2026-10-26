/* Firmware entry: 0x4811f5c4 */

void FUN_ram_4811f5c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
  puVar1 = &DAT_ram_4ff6b778;
  do {
    puVar6 = param_1;
    puVar5 = puVar1;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar1 = puVar5 + 4;
    param_1 = puVar6 + 4;
  } while (puVar5 + 4 != &DAT_ram_4ff6b7a8);
  uVar2 = puVar5[5];
  puVar6[4] = DAT_ram_4ff6b7a8;
  puVar6[5] = uVar2;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  return;
}



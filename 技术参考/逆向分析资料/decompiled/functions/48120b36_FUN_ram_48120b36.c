/* Firmware entry: 0x48120b36 */

void FUN_ram_48120b36(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47edc,0xffffffff);
    puVar8 = param_1;
    puVar3 = &DAT_ram_4ff6be24;
    do {
      puVar7 = puVar3;
      puVar6 = puVar8;
      uVar9 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar9;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      uVar4 = uRam4ff6be74;
      puVar8 = puVar6 + 4;
      puVar3 = puVar7 + 4;
    } while (puVar7 + 4 != (undefined4 *)0x4ff6be74);
    puVar6[5] = puVar7[5];
    puVar6[4] = uVar4;
    puVar8 = param_1 + 0x16;
    puVar3 = &DAT_ram_4ff6be7c;
    do {
      puVar7 = puVar3;
      puVar6 = puVar8;
      uVar9 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar9;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar8 = puVar6 + 4;
      puVar3 = puVar7 + 4;
    } while (puVar7 + 4 != (undefined4 *)0x4ff6becc);
    uVar4 = puVar7[5];
    puVar6[4] = uRam4ff6becc;
    puVar6[5] = uVar4;
    uVar2 = DAT_ram_4ff6bf10;
    uVar1 = DAT_ram_4ff6bf0c;
    uVar9 = DAT_ram_4ff6bf08;
    uVar5 = DAT_ram_4ff6bf04;
    uVar4 = DAT_ram_4ff6befc;
    param_1[0x37] = DAT_ram_4ff6bf00;
    param_1[0x36] = uVar4;
    *(undefined1 *)(param_1 + 0x3b) = uVar2;
    param_1[0x38] = uVar5;
    param_1[0x39] = uVar9;
    param_1[0x3a] = uVar1;
    fence();
    *(bool *)((int)param_1 + 0xed) = DAT_ram_4ff6e02c != 0;
    param_1 = param_1 + 0x2c;
    puVar8 = &DAT_ram_4ff6bed4;
    do {
      *param_1 = *puVar8;
      puVar8 = puVar8 + 1;
      param_1 = param_1 + 1;
    } while (puVar8 != &DAT_ram_4ff6befc);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47edc);
    return;
  }
  return;
}



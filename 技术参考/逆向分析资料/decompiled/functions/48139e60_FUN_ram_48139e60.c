/* Firmware entry: 0x48139e60 */

void FUN_ram_48139e60(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = DAT_ram_4ff6e1b0;
  if (param_1 == (int *)0x0) {
    return;
  }
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar2[1];
    (*(code *)*puVar2)(param_1,2,0);
    puVar2 = puVar4;
  }
  if (param_1[1] == 0) {
    bVar1 = *(byte *)((int)param_1 + 0xe7);
  }
  else {
    piVar6 = param_1 + 1;
    FUN_ram_4813d1fe(piVar6,0);
    FUN_ram_481435c4(piVar6,0);
    FUN_ram_4813be48(piVar6,0);
    bVar1 = *(byte *)((int)param_1 + 0xe7);
  }
  if ((bVar1 & 0x20) != 0) {
    FUN_ram_48146afe(param_1);
  }
  pbVar5 = (byte *)(param_1 + 0x13);
  pbVar7 = (byte *)(param_1 + 0x25);
  do {
    if ((*pbVar7 & 0x10) != 0) {
      FUN_ram_4813d1fe(pbVar5,0);
      FUN_ram_481435c4(pbVar5,0);
      FUN_ram_4813be48(pbVar5,0);
    }
    pbVar5 = pbVar5 + 0x18;
    pbVar7 = pbVar7 + 1;
  } while (pbVar5 != (byte *)(param_1 + 0x25));
  FUN_ram_48149b74(param_1);
  if ((*(byte *)((int)param_1 + 0xe7) & 1) != 0) {
    FUN_ram_48139dfe(param_1);
  }
  if (DAT_ram_4ff6e1a8 == param_1) {
    DAT_ram_4ff6e1a8 = (int *)0x0;
  }
  piVar6 = DAT_ram_4ff6e1ac;
  if (DAT_ram_4ff6e1ac == param_1) {
    DAT_ram_4ff6e1ac = (int *)*param_1;
    return;
  }
  do {
    piVar3 = piVar6;
    if (piVar3 == (int *)0x0) {
      DAT_ram_4ff6e1ac = DAT_ram_4ff6e1ac;
      DAT_ram_4ff6e1b0 = DAT_ram_4ff6e1b0;
      return;
    }
    piVar6 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_1);
  *piVar3 = *param_1;
  return;
}



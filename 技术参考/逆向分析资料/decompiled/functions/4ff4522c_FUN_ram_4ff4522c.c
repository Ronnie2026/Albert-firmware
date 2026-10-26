/* Firmware entry: 0x4ff4522c */

void FUN_ram_4ff4522c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 < param_1) && (puVar6 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar6)) {
    param_1 = (undefined4 *)((int)param_1 + param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      puVar4 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar4;
    }
    puVar4 = (undefined4 *)((int)param_1 - param_3);
    if (param_3 != 0) {
      do {
        puVar1 = (undefined1 *)((int)puVar6 + -1);
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar6 = (undefined4 *)((int)puVar6 + -1);
        *(undefined1 *)param_1 = *puVar1;
      } while (puVar4 != param_1);
      return;
    }
    return;
  }
  if (3 < param_3) {
    puVar6 = param_1;
    if (0x1f < param_3) {
      do {
        uVar5 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar3 = param_2[3];
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        param_1 = puVar6 + 8;
        param_3 = param_3 - 0x20;
        *puVar6 = uVar5;
        puVar6[1] = uVar7;
        puVar6[2] = uVar8;
        puVar6[3] = uVar3;
        puVar6[4] = uVar9;
        puVar6[5] = uVar10;
        puVar6[6] = uVar11;
        puVar6[7] = uVar12;
        puVar6 = param_1;
      } while (0x1f < param_3);
      if (param_3 < 4) goto LAB_ram_4ff452dc;
    }
    do {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      param_1 = puVar6 + 1;
      param_3 = param_3 - 4;
      *puVar6 = uVar3;
      puVar6 = param_1;
    } while (3 < param_3);
  }
LAB_ram_4ff452dc:
  puVar6 = param_1;
  if (param_3 != 0) {
    do {
      uVar2 = *(undefined1 *)param_2;
      puVar4 = (undefined4 *)((int)puVar6 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)puVar6 = uVar2;
      puVar6 = puVar4;
    } while (puVar4 != (undefined4 *)((int)param_1 + param_3));
    return;
  }
  return;
}



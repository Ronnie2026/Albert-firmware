/* Firmware entry: 0x4ff45158 */

void FUN_ram_4ff45158(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (undefined4 *)((int)param_1 + param_3);
  if (3 < param_3) {
    for (; puVar7 = param_2, puVar6 = param_1, ((uint)param_1 & 3) != 0;
        param_1 = (undefined4 *)((int)param_1 + 2)) {
      puVar6 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar7 = (undefined4 *)((int)param_2 + 1);
      if (((uint)puVar6 & 3) == 0) break;
      *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)puVar7;
      param_2 = (undefined4 *)((int)param_2 + 2);
    }
    param_2 = puVar7;
    for (param_1 = puVar6; 0x20 < (int)((uint)puVar5 & 0xfffffffc) - (int)param_1;
        param_1 = param_1 + 9) {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      uVar2 = param_2[2];
      uVar10 = param_2[3];
      uVar11 = param_2[4];
      uVar12 = param_2[5];
      uVar13 = param_2[6];
      uVar4 = param_2[7];
      uVar3 = param_2[8];
      param_2 = param_2 + 9;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[2] = uVar2;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      param_1[7] = uVar4;
      param_1[8] = uVar3;
    }
    for (; param_1 < (undefined4 *)((uint)puVar5 & 0xfffffffc); param_1 = param_1 + 1) {
      uVar4 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar4;
    }
  }
  if (param_1 < puVar5) {
    do {
      uVar1 = *(undefined1 *)param_2;
      puVar7 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      param_1 = puVar7;
    } while (puVar5 != puVar7);
    return;
  }
  return;
}



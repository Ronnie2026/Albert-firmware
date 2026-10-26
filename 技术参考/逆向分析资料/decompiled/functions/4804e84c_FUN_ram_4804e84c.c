/* Firmware entry: 0x4804e84c */

void FUN_ram_4804e84c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *__s;
  undefined4 local_c0 [20];
  undefined4 local_70 [18];
  undefined4 auStack_28 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = local_c0;
  puVar5 = &DAT_ram_48222ffc;
  puVar1 = param_1;
  do {
    uVar8 = puVar5[1];
    uVar7 = puVar5[2];
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    uVar4 = puVar5[5];
    *puVar1 = *puVar5;
    puVar1[1] = uVar8;
    puVar1[2] = uVar7;
    puVar1[3] = uVar2;
    puVar1[4] = uVar3;
    puVar1[5] = uVar4;
    puVar5 = puVar5 + 6;
    puVar1 = puVar1 + 6;
  } while (puVar5 != &DAT_ram_48223044);
  __s = param_1 + 0x12;
  memset(__s,0,0xbc);
  puVar5 = &DAT_ram_48223044;
  puVar1 = __s;
  do {
    uVar8 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    uVar4 = puVar5[4];
    uVar7 = puVar5[5];
    *puVar1 = *puVar5;
    puVar1[1] = uVar8;
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
    puVar1[4] = uVar4;
    puVar1[5] = uVar7;
    puVar5 = puVar5 + 6;
    puVar1 = puVar1 + 6;
  } while (puVar5 != (undefined4 *)&UNK_ram_4822308c);
  *(undefined1 *)(param_1 + 0x26) = 2;
  param_1[0x4a] = 0x10000;
  *(undefined1 *)((int)param_1 + 0x9f) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x136) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x13a) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x92) = 0xf;
  param_1[0x45] = 8;
  memset(param_1 + 0x52,0,0xb0);
  *(undefined1 *)((int)param_1 + 0x162) = 1;
  *(undefined1 *)((int)param_1 + 0x18e) = 1;
  *(undefined1 *)((int)param_1 + 0x1ba) = 1;
  *(undefined1 *)((int)param_1 + 0x1e6) = 1;
  *(undefined1 *)((int)param_1 + 0x1f9) = 1;
  *(undefined1 *)(param_1 + 0x53) = 8;
  *(undefined1 *)(param_1 + 0x5e) = 8;
  *(undefined1 *)(param_1 + 0x69) = 8;
  *(undefined1 *)(param_1 + 0x74) = 8;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  *(undefined1 *)((int)param_1 + 0x1fb) = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x5c);
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(undefined1 *)((int)param_1 + 0x20d) = 0xf;
  param_1[0x84] = 0xffffffff;
  param_1[0x87] = 0xffffffff;
  puVar1 = param_1;
  do {
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    uVar7 = puVar1[4];
    uVar8 = puVar1[5];
    *puVar6 = *puVar1;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[4] = uVar7;
    puVar6[5] = uVar8;
    puVar1 = puVar1 + 6;
    puVar6 = puVar6 + 6;
  } while (puVar1 != __s);
  FUN_ram_4804c54e(local_70,local_c0);
  puVar6 = local_70;
  do {
    uVar8 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    uVar4 = puVar6[4];
    uVar7 = puVar6[5];
    *puVar1 = *puVar6;
    puVar1[1] = uVar8;
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
    puVar1[4] = uVar4;
    puVar1[5] = uVar7;
    puVar6 = puVar6 + 6;
    puVar1 = puVar1 + 6;
  } while (puVar6 != auStack_28);
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}



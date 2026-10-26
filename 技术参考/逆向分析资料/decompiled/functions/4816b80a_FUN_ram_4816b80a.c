/* Firmware entry: 0x4816b80a */

void FUN_ram_4816b80a(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48171076(param_1,param_1[0x14]);
  iVar12 = (**(code **)(param_1[0x10] + 0x1c))
                     (param_1,param_1[0x2c] + 4,*(undefined1 *)(*param_1 + 8));
  if (iVar12 != 0) {
    return;
  }
  puVar13 = (undefined1 *)param_1[0x2c];
  param_1[0x35] = 0xc;
  uVar1 = puVar13[0xf];
  uVar2 = puVar13[5];
  uVar3 = puVar13[6];
  uVar4 = puVar13[7];
  uVar5 = puVar13[8];
  uVar6 = puVar13[9];
  uVar7 = puVar13[10];
  uVar8 = puVar13[0xb];
  uVar9 = puVar13[0xc];
  uVar10 = puVar13[0xd];
  uVar11 = puVar13[0xe];
  *(undefined1 *)(param_1 + 0x36) = puVar13[4];
  *(undefined1 *)((int)param_1 + 0xe3) = uVar1;
  param_1[0x2d] = 0x16;
  *(undefined1 *)((int)param_1 + 0xd9) = uVar2;
  *(undefined1 *)((int)param_1 + 0xda) = uVar3;
  *(undefined1 *)((int)param_1 + 0xdb) = uVar4;
  *(undefined1 *)(param_1 + 0x37) = uVar5;
  *(undefined1 *)((int)param_1 + 0xdd) = uVar6;
  *(undefined1 *)((int)param_1 + 0xde) = uVar7;
  *(undefined1 *)((int)param_1 + 0xdf) = uVar8;
  *(undefined1 *)(param_1 + 0x38) = uVar9;
  *(undefined1 *)((int)param_1 + 0xe1) = uVar10;
  *(undefined1 *)((int)param_1 + 0xe2) = uVar11;
  param_1[0x2e] = 0x10;
  *puVar13 = 0x14;
  if (*(char *)param_1[0x10] == '\0') {
    param_1[1] = param_1[1] + 1;
  }
  else if (*(char *)(*param_1 + 8) == '\0') {
    param_1[1] = 0xf;
  }
  else if (*(char *)(*param_1 + 8) == '\x01') {
    param_1[1] = 10;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0xc1) = 0;
  *(undefined1 *)((int)param_1 + 0xc2) = 0;
  *(undefined1 *)((int)param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0xc5) = 0;
  *(undefined1 *)((int)param_1 + 0xc6) = 0;
  *(undefined1 *)((int)param_1 + 199) = 0;
  param_1[0x12] = param_1[0x14];
  param_1[0xd] = param_1[0xf];
  FUN_ram_48170976(param_1,1);
  return;
}



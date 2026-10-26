/* Firmware entry: 0x4818bc2e */

undefined1 * FUN_ram_4818bc2e(int *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  size_t sVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = param_1[2];
  *param_2 = 1;
  param_2[1] = 4;
  param_2[2] = (char)param_1[7];
  param_2[3] = *(undefined1 *)((int)param_1 + 0x1d);
  param_2[4] = *(undefined1 *)((int)param_1 + 0x1e);
  param_2[5] = *(undefined1 *)((int)param_1 + 0x1f);
  if (param_3 == 0) {
    param_2[7] = 4;
    param_2[6] = 0x36;
    puVar6 = param_2 + 6;
  }
  else {
    param_2[6] = 0x33;
    param_2[7] = 4;
    puVar6 = param_2 + 0xc;
    param_2[8] = (char)((uint)(param_1[0xd] * 0x3c) >> 0x18);
    param_2[9] = (char)((uint)(param_1[0xd] * 0x3c) >> 0x10);
    param_2[10] = (char)((uint)(param_1[0xd] * 0x3c) >> 8);
    iVar5 = param_1[0xd];
    param_2[0xd] = 4;
    param_2[0xc] = 0x36;
    param_2[0xb] = (char)iVar5 * '<';
  }
  uVar2 = (undefined1)(uVar8 >> 8);
  uVar3 = (undefined1)(uVar8 >> 0x10);
  puVar6[3] = uVar2;
  puVar6[4] = uVar3;
  puVar6[2] = (char)uVar8;
  uVar12 = (undefined1)(uVar8 >> 0x18);
  puVar6[5] = uVar12;
  puVar9 = puVar6 + 6;
  if (((((*(byte *)(param_1 + 0xe) & 1) == 0) || (iVar5 = *param_1, iVar5 == 0)) ||
      ((*(byte *)(iVar5 + 0xe7) & 1) == 0)) || (iVar5 = *(int *)(iVar5 + 0x34), iVar5 == 0)) {
    bVar1 = *(byte *)((int)param_1 + 0x39);
    puVar6 = puVar6 + 0xc;
  }
  else {
    uStack_14 = (undefined1)iVar5;
    uStack_13 = (undefined1)((uint)iVar5 >> 8);
    uStack_12 = (undefined1)((uint)iVar5 >> 0x10);
    uStack_11 = (undefined1)((uint)iVar5 >> 0x18);
    puVar6[7] = 4;
    puVar6[8] = uStack_14;
    puVar6[9] = uStack_13;
    puVar6[10] = uStack_12;
    puVar6[0xb] = uStack_11;
    puVar6[6] = 3;
    puVar9 = puVar6 + 0xc;
    bVar1 = *(byte *)((int)param_1 + 0x39);
    puVar6 = puVar6 + 0x12;
  }
  if ((bVar1 & 2) == 0) {
    puVar9[4] = uVar3;
    puVar9[2] = (char)uVar8;
    puVar9[3] = uVar2;
    puVar9[5] = uVar12;
    *puVar9 = 6;
    puVar9[1] = 4;
    uVar7 = param_1[7];
    puVar9[7] = 4;
    uVar8 = uVar8 | ~uVar7;
    puVar9[6] = 0x1c;
  }
  else {
    iVar5 = param_1[4];
    *puVar9 = 6;
    puVar9[1] = (-(iVar5 == 0) & 0xfcU) + 8;
    puVar9[2] = (char)param_1[3];
    puVar9[3] = *(undefined1 *)((int)param_1 + 0xd);
    puVar9[4] = *(undefined1 *)((int)param_1 + 0xe);
    puVar9[5] = *(undefined1 *)((int)param_1 + 0xf);
    if (param_1[4] == 0) {
      uVar8 = uVar8 | ~param_1[7];
      puVar9[6] = 0x1c;
      puVar9[7] = 4;
    }
    else {
      puVar9[6] = (char)param_1[4];
      puVar6 = puVar9 + 10;
      puVar9[7] = *(undefined1 *)((int)param_1 + 0x11);
      puVar9[8] = *(undefined1 *)((int)param_1 + 0x12);
      puVar9[9] = *(undefined1 *)((int)param_1 + 0x13);
      uVar7 = param_1[7];
      puVar9[10] = 0x1c;
      puVar9[0xb] = 4;
      uVar8 = uVar8 | ~uVar7;
    }
  }
  puVar6[8] = 5;
  puVar6[2] = (char)uVar8;
  puVar6[3] = (char)(uVar8 >> 8);
  puVar6[4] = (char)(uVar8 >> 0x10);
  puVar6[5] = (char)(uVar8 >> 0x18);
  puVar6[6] = 0x1a;
  puVar6[7] = 2;
  puVar6[9] = 0xdc;
  puVar9 = puVar6 + 10;
  if ((char *)param_1[0xf] != (char *)0x0) {
    sVar4 = strlen((char *)param_1[0xf]);
    puVar6[0xb] = (char)sVar4;
    puVar6[10] = 0x72;
    puVar9 = puVar6 + 0xc;
    if (sVar4 != 0) {
      puVar10 = puVar9;
      do {
        puVar11 = puVar10 + 1;
        *puVar10 = puVar10[param_1[0xf] + (-0xc - (int)puVar6)];
        puVar10 = puVar11;
      } while (puVar6 + sVar4 + 0xc != puVar11);
      puVar9 = puVar9 + sVar4;
    }
  }
  puVar9[3] = 0x2b;
  puVar9[2] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  *puVar9 = 0x1f;
  puVar9[1] = 1;
  puVar9[5] = 1;
  puVar9[4] = 6;
  puVar9[6] = 4;
  puVar9[10] = 2;
  return puVar9 + 0xb;
}



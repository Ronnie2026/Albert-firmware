/* Firmware entry: 0x4814a5e8 */

void FUN_ram_4814a5e8(int param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 & 4) == 0) {
    piVar12 = (int *)(param_1 + 0x4c);
    iVar13 = 0;
    while (((((*(byte *)(param_1 + iVar13 + 0x94) & 0x10) == 0 || (*param_2 != *piVar12)) ||
            (param_2[1] != piVar12[1])) || ((char)param_2[4] != (char)piVar12[4]))) {
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 6;
      if (iVar13 == 3) {
        return;
      }
    }
    uVar15 = *(byte *)(param_1 + 0xe6) + 9;
    iVar11 = FUN_ram_4813ad9a(0x36,(uVar15 & 0x1f8) + 0x18,0x280);
    puVar14 = (undefined4 *)(iVar13 * 0x18 + 0x4c + param_1);
    uVar15 = uVar15 >> 3;
  }
  else {
    iVar11 = FUN_ram_4813ad9a(0x36,0x18,0x280);
    puVar14 = &DAT_ram_48237014;
    uVar15 = 0;
  }
  if (iVar11 == 0) {
    return;
  }
  puVar9 = *(undefined1 **)(iVar11 + 4);
  puVar9[1] = 0;
  *puVar9 = 0x87;
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *(undefined1 *)((int)param_2 + 3);
  iVar13 = param_2[2];
  uVar3 = *(undefined1 *)((int)param_2 + 2);
  iVar8 = param_2[1];
  uVar4 = *(undefined1 *)((int)param_2 + 5);
  uVar5 = *(undefined1 *)((int)param_2 + 6);
  uVar6 = *(undefined1 *)((int)param_2 + 7);
  puVar9[8] = (char)*param_2;
  uVar7 = *(undefined1 *)((int)param_2 + 9);
  puVar9[9] = uVar1;
  uVar1 = *(undefined1 *)((int)param_2 + 10);
  puVar9[0xb] = uVar2;
  uVar2 = *(undefined1 *)((int)param_2 + 0xb);
  puVar9[2] = 0;
  puVar9[0x10] = (char)iVar13;
  puVar9[0x11] = uVar7;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[10] = uVar3;
  puVar9[0xc] = (char)iVar8;
  puVar9[0xd] = uVar4;
  puVar9[0xe] = uVar5;
  puVar9[0xf] = uVar6;
  puVar9[0x12] = uVar1;
  iVar13 = param_2[3];
  uVar1 = *(undefined1 *)((int)param_2 + 0xd);
  uVar3 = *(undefined1 *)((int)param_2 + 0xe);
  puVar9[0x13] = uVar2;
  uVar2 = *(undefined1 *)((int)param_2 + 0xf);
  puVar9[0x14] = (char)iVar13;
  puVar9[0x15] = uVar1;
  puVar9[0x16] = uVar3;
  puVar9[0x17] = uVar2;
  if (uVar15 != 0) {
    puVar9[0x19] = (char)uVar15;
    puVar9[0x18] = 1;
    FUN_ram_4ff45158(puVar9 + 0x1a,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe6));
  }
  if ((param_3 & 1) != 0) {
    DAT_ram_4ff6d064 = param_2[3] | 0xff;
    DAT_ram_4ff6d068 = *(char *)(param_1 + 0xea) + '\x01';
    DAT_ram_4ff6d05c = 0;
    param_2 = &DAT_ram_4ff6d058;
    DAT_ram_4ff6d058 = 0x2ff;
    DAT_ram_4ff6d060 = 0x1000000;
  }
  uVar10 = FUN_ram_481519fc(iVar11,0x3a,*(undefined2 *)(iVar11 + 10),puVar14,param_2);
  puVar9[2] = (char)uVar10;
  puVar9[3] = (char)((ushort)uVar10 >> 8);
  if (puVar14 == &DAT_ram_48237014) {
    puVar14 = (undefined4 *)0x0;
  }
  FUN_ram_48149080(iVar11,puVar14,param_2,0xff,0,0x3a,param_1);
  FUN_ram_4813ac74(iVar11);
  return;
}



/* Firmware entry: 0x481499d0 */

void FUN_ram_481499d0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = FUN_ram_4813ad9a(0x36,0x20,0x280);
  if (iVar11 == 0) {
    return;
  }
  iVar12 = FUN_ram_4813ab98(iVar11,8);
  if (iVar12 == 0) {
    piVar13 = (int *)(param_1 + 0x4c);
    if ((*(byte *)(param_1 + 0x94) & 0x10) == 0) {
      piVar13 = &DAT_ram_48237014;
    }
    puVar9 = *(undefined1 **)(iVar11 + 4);
    *puVar9 = (char)param_3;
    puVar9[1] = 0;
    uVar1 = *(undefined1 *)(param_2 + 5);
    uVar2 = *(undefined1 *)(param_2 + 6);
    uVar3 = *(undefined1 *)(param_2 + 8);
    uVar4 = *(undefined1 *)(param_2 + 7);
    uVar5 = *(undefined1 *)(param_2 + 9);
    uVar6 = *(undefined1 *)(param_2 + 10);
    uVar7 = *(undefined1 *)(param_2 + 0xb);
    puVar9[8] = *(undefined1 *)(param_2 + 4);
    uVar8 = *(undefined1 *)(param_2 + 0xc);
    puVar9[9] = uVar1;
    uVar1 = *(undefined1 *)(param_2 + 0xd);
    puVar9[10] = uVar2;
    uVar2 = *(undefined1 *)(param_2 + 0xe);
    puVar9[0xc] = uVar3;
    uVar3 = *(undefined1 *)(param_2 + 0xf);
    puVar9[0xb] = uVar4;
    puVar9[0xd] = uVar5;
    puVar9[0xe] = uVar6;
    puVar9[0xf] = uVar7;
    puVar9[0x10] = uVar8;
    puVar9[0x11] = uVar1;
    puVar9[0x12] = uVar2;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[0x13] = uVar3;
    uVar1 = *(undefined1 *)(param_2 + 0x10);
    uVar2 = *(undefined1 *)(param_2 + 0x11);
    uVar3 = *(undefined1 *)(param_2 + 0x12);
    uVar10 = *(undefined2 *)(iVar11 + 10);
    puVar9[0x17] = *(undefined1 *)(param_2 + 0x13);
    puVar9[0x14] = uVar1;
    puVar9[0x15] = uVar2;
    puVar9[0x16] = uVar3;
    uVar10 = FUN_ram_481519fc(iVar11,0x3a,uVar10,piVar13,param_2 + 4);
    puVar9[2] = (char)uVar10;
    puVar9[3] = (char)((ushort)uVar10 >> 8);
    FUN_ram_481490ee(iVar11,0x3a,0);
    if (param_3 == 0x83) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      iVar12 = *piVar13;
    }
    else {
      iVar12 = *piVar13;
    }
    if (((iVar12 == 0) && (piVar13[1] == 0)) && (piVar13[2] == 0)) {
      piVar13 = (int *)((uint)piVar13 & -(uint)(piVar13[3] != 0));
    }
    FUN_ram_48149080(iVar11,piVar13,param_2 + 4,1,0,0,param_1);
    FUN_ram_4813ac74(iVar11);
    return;
  }
  FUN_ram_4813ac74(iVar11);
  return;
}



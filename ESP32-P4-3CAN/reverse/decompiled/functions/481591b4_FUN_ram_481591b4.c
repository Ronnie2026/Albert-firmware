/* Firmware entry: 0x481591b4 */

undefined4 FUN_ram_481591b4(int param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    return 0x102;
  }
  iVar13 = *(int *)(param_1 + 0x10);
  if ((iVar13 != 0) && ((*(byte *)(iVar13 + 0xe7) & 1) != 0)) {
    uVar12 = *(undefined4 *)(iVar13 + 0x1c);
    uVar15 = *(undefined4 *)(iVar13 + 0x34);
    *param_2 = *(undefined4 *)(iVar13 + 4);
    param_2[1] = uVar12;
    param_2[2] = uVar15;
    return 0;
  }
  puVar14 = *(undefined1 **)(param_1 + 8);
  uVar1 = *puVar14;
  uVar2 = puVar14[1];
  uVar3 = puVar14[2];
  uVar4 = puVar14[3];
  uVar5 = puVar14[4];
  uVar6 = puVar14[5];
  uVar7 = puVar14[6];
  uVar8 = puVar14[8];
  uVar9 = puVar14[9];
  uVar10 = puVar14[10];
  uVar11 = puVar14[0xb];
  *(undefined1 *)((int)param_2 + 7) = puVar14[7];
  *(undefined1 *)param_2 = uVar1;
  *(undefined1 *)((int)param_2 + 1) = uVar2;
  *(undefined1 *)((int)param_2 + 2) = uVar3;
  *(undefined1 *)((int)param_2 + 3) = uVar4;
  *(undefined1 *)(param_2 + 1) = uVar5;
  *(undefined1 *)((int)param_2 + 5) = uVar6;
  *(undefined1 *)((int)param_2 + 6) = uVar7;
  *(undefined1 *)(param_2 + 2) = uVar8;
  *(undefined1 *)((int)param_2 + 9) = uVar9;
  *(undefined1 *)((int)param_2 + 10) = uVar10;
  *(undefined1 *)((int)param_2 + 0xb) = uVar11;
  return 0;
}



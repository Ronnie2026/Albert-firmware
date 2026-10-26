/* Firmware entry: 0x48159144 */

undefined4 FUN_ram_48159144(int param_1,undefined1 *param_2)

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
  undefined1 *puVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    puVar12 = *(undefined1 **)(param_1 + 0xc);
    uVar1 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = puVar12[3];
    uVar4 = puVar12[4];
    uVar5 = puVar12[5];
    uVar6 = puVar12[6];
    uVar7 = puVar12[7];
    uVar8 = puVar12[8];
    uVar9 = puVar12[9];
    uVar10 = puVar12[10];
    uVar11 = puVar12[0xb];
    *param_2 = *puVar12;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    param_2[8] = uVar8;
    param_2[9] = uVar9;
    param_2[10] = uVar10;
    param_2[0xb] = uVar11;
    return 0;
  }
  return 0x102;
}



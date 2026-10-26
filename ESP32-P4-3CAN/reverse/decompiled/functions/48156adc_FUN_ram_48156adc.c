/* Firmware entry: 0x48156adc */

undefined4 FUN_ram_48156adc(int param_1)

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
  undefined1 *puVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar13 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0xc) != 0) && (puVar13 != (undefined1 *)0x0)) {
    uVar1 = puVar13[1];
    uVar2 = puVar13[2];
    uVar3 = puVar13[3];
    uVar4 = puVar13[4];
    uVar5 = puVar13[5];
    uVar6 = puVar13[6];
    uVar7 = puVar13[7];
    uVar8 = puVar13[8];
    uVar9 = puVar13[9];
    uVar10 = puVar13[10];
    puVar12 = *(undefined1 **)(*(int *)(param_1 + 0xc) + 0xc);
    uVar11 = puVar13[0xb];
    *puVar12 = *puVar13;
    puVar12[1] = uVar1;
    puVar12[2] = uVar2;
    puVar12[3] = uVar3;
    puVar12[4] = uVar4;
    puVar12[5] = uVar5;
    puVar12[6] = uVar6;
    puVar12[7] = uVar7;
    puVar12[8] = uVar8;
    puVar12[9] = uVar9;
    puVar12[10] = uVar10;
    puVar12[0xb] = uVar11;
    return 0;
  }
  return 0x103;
}



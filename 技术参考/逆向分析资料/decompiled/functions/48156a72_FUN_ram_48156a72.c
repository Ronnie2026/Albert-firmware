/* Firmware entry: 0x48156a72 */

undefined4 FUN_ram_48156a72(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = *(undefined1 **)(param_1 + 0x10);
  puVar6 = *(undefined1 **)(param_1 + 0xc);
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  uVar4 = puVar8[4];
  uVar5 = puVar8[5];
  *puVar6 = *puVar8;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[5] = uVar5;
  iVar7 = *(int *)(puVar6 + 0x10);
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  uVar4 = puVar8[4];
  uVar5 = puVar8[5];
  *(undefined1 *)(iVar7 + 0xe0) = *puVar8;
  *(undefined1 *)(iVar7 + 0xe1) = uVar1;
  *(undefined1 *)(iVar7 + 0xe2) = uVar2;
  *(undefined1 *)(iVar7 + 0xe3) = uVar3;
  *(undefined1 *)(iVar7 + 0xe4) = uVar4;
  *(undefined1 *)(iVar7 + 0xe5) = uVar5;
  return 0;
}



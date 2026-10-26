/* Firmware entry: 0x480dcdda */

void FUN_ram_480dcdda(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  short sVar9;
  undefined4 *puVar10;
  undefined4 local_58 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  psVar3 = *(short **)(param_1 + 0x33ec);
  if ((psVar3 != (short *)0x0) && ((char)psVar3[8] != '\0')) {
    return;
  }
  puVar1 = local_58;
  puVar2 = &DAT_ram_48222eb8;
  do {
    puVar10 = puVar2;
    puVar8 = puVar1;
    uVar4 = puVar10[1];
    uVar6 = puVar10[2];
    uVar7 = puVar10[3];
    *puVar8 = *puVar10;
    puVar8[1] = uVar4;
    puVar8[2] = uVar6;
    puVar8[3] = uVar7;
    puVar1 = puVar8 + 4;
    puVar2 = puVar10 + 4;
  } while (puVar10 + 4 != &DAT_ram_48222ee8);
  uVar4 = puVar10[5];
  puVar8[4] = DAT_ram_48222ee8;
  puVar8[5] = uVar4;
  while( true ) {
    if (psVar3 != (short *)0x0) {
      sVar9 = *psVar3;
      if (sVar9 == 0) {
        return;
      }
      if (*(code **)(psVar3 + 2) != (code *)0x0) {
        iVar5 = (**(code **)(psVar3 + 2))();
        if (*(uint *)(psVar3 + 6) <= (uint)(iVar5 - *(int *)(psVar3 + 4))) {
          return;
        }
        sVar9 = *psVar3;
      }
      *psVar3 = sVar9 + -1;
    }
    iVar5 = FUN_ram_4804628e(param_1 + 0x3a40,param_2,local_58);
    if (iVar5 == 0) break;
    FUN_ram_480dc4f2(param_1,local_58);
    psVar3 = *(short **)(param_1 + 0x33ec);
  }
  return;
}



/* Firmware entry: 0x4819b76e */

undefined4 FUN_ram_4819b76e(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_481a2e20();
  if ((int)param_1 < 0x7b2) {
    uVar6 = 0;
  }
  else {
    puVar1[1] = param_1;
    pcVar4 = (char *)(puVar1 + 2);
    iVar3 = (param_1 - 0x7b2) * 0x16d + ((int)(param_1 - 0x7b1) >> 2) +
            (int)(param_1 - 0x76d) / -100 + (int)(param_1 - 0x641) / 400;
    do {
      iVar8 = *(int *)(pcVar4 + 0xc);
      if (*pcVar4 == 'J') {
        if ((((param_1 & 3) == 0) && ((int)param_1 % 100 != 0)) ||
           (uVar2 = 0, (int)param_1 % 400 == 0)) {
          uVar2 = (uint)(0x3b < iVar8);
        }
        iVar8 = iVar3 + iVar8 + uVar2 + -1;
      }
      else if (*pcVar4 == 'D') {
        iVar8 = iVar3 + iVar8;
      }
      else {
        if (((param_1 & 3) != 0) || (uVar2 = 1, (int)param_1 % 100 == 0)) {
          uVar2 = (uint)((int)param_1 % 400 == 0);
        }
        iVar10 = 0;
        iVar7 = iVar3;
        while( true ) {
          iVar10 = iVar10 + 1;
          iVar9 = *(int *)((int)&PTR_caseD_8e_ram_4823b4a8 + iVar10 * 4 + (-uVar2 & 0x30));
          if (*(int *)(pcVar4 + 4) <= iVar10) break;
          iVar7 = iVar7 + iVar9;
        }
        iVar8 = iVar8 - (iVar7 + 4) % 7;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 7;
        }
        for (iVar8 = (*(int *)(pcVar4 + 8) + -1) * 7 + iVar8; iVar9 <= iVar8; iVar8 = iVar8 + -7) {
        }
        iVar8 = iVar7 + iVar8;
      }
      uVar2 = *(int *)(pcVar4 + 0x10) + iVar8 * 0x15180;
      uVar5 = *(int *)(pcVar4 + 0x20) + uVar2;
      *(uint *)(pcVar4 + 0x18) = uVar5;
      *(uint *)(pcVar4 + 0x1c) =
           (uint)(uVar5 < uVar2) +
           (uint)(uVar2 < (uint)(iVar8 * 0x15180)) +
           (int)((ulonglong)((longlong)iVar8 * 0x15180) >> 0x20) + (*(int *)(pcVar4 + 0x10) >> 0x1f)
           + (*(int *)(pcVar4 + 0x20) >> 0x1f);
      pcVar4 = pcVar4 + 0x28;
    } while ((char *)(puVar1 + 0x16) != pcVar4);
    uVar6 = 1;
    if (((int)puVar1[0x13] <= (int)puVar1[9]) &&
       ((puVar1[0x13] != puVar1[9] || ((uint)puVar1[0x12] <= (uint)puVar1[8])))) {
      uVar6 = 0;
    }
    *puVar1 = uVar6;
    uVar6 = 1;
  }
  return uVar6;
}



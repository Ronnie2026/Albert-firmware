/* Firmware entry: 0x4800de0e */

int FUN_ram_4800de0e(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  char *pcVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = (uint *)FUN_ram_4800dd52(param_2);
  if (puVar4 == (uint *)0x0) {
    uVar5 = 2;
  }
  else {
    uVar10 = *puVar4;
    if (((param_3 & 3) == 0) || ((uVar10 & 4) == 0)) {
      uVar5 = FUN_ram_4800d4f6(puVar4,param_2);
      pcVar8 = *(code **)(puVar4[1] + 0x14);
      if (pcVar8 != (code *)0x0) {
        if ((uVar10 & 2) == 0) {
          iVar6 = (*pcVar8)(uVar5,param_3,param_4);
        }
        else {
          iVar6 = (*pcVar8)(puVar4[2],uVar5,param_3,param_4);
        }
        if (iVar6 < 0) {
          puVar7 = (undefined4 *)FUN_ram_4819bf88();
          uVar5 = *puVar7;
          goto LAB_ram_4800df04;
        }
        FUN_ram_4ff216d6(&DAT_ram_4ff6db24);
        pcVar9 = &DAT_ram_4ff483a1;
        iVar3 = 0;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 3;
          if (cVar1 == -1) {
            iVar2 = iVar3 * 3;
            uVar10 = puVar4[3];
            (&DAT_ram_4ff483a2)[iVar2] = (char)iVar6;
            (&DAT_ram_4ff483a1)[iVar2] = (char)uVar10;
            (&DAT_ram_4ff483a0)[iVar2] = (&DAT_ram_4ff483a0)[iVar2] & 0xfe;
            FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
            return iVar3;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x40);
        FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
        pcVar8 = *(code **)(puVar4[1] + 0x18);
        if (pcVar8 != (code *)0x0) {
          if ((*puVar4 & 2) == 0) {
            (*pcVar8)(iVar6);
          }
          else {
            (*pcVar8)(puVar4[2],iVar6);
          }
          uVar5 = 0xc;
          goto LAB_ram_4800df04;
        }
      }
      uVar5 = 0x58;
    }
    else {
      uVar5 = 0x1e;
    }
  }
LAB_ram_4800df04:
  *param_1 = uVar5;
  return -1;
}



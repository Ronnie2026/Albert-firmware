/* Firmware entry: 0x4ff30ebe */

void FUN_ram_4ff30ebe(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint local_130 [32];
  undefined1 auStack_b0 [140];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = local_130;
  puVar10 = local_130;
  memset(local_130,0,0x80);
  (*DAT_ram_4ff58b8c)(200);
  uVar6 = *(uint *)(param_2 + 0xb4);
  if (uVar6 != 0) {
    uVar9 = 0;
    do {
      *puVar8 = 0;
      uVar1 = 0;
      if (DAT_ram_4ff58b70 != 0) {
        do {
          memset(auStack_b0,0,0x80);
          (*DAT_ram_4ff58b90)(param_2,uVar9 & 0xff);
          (*DAT_ram_4ff58b94)(auStack_b0,0x80);
          iVar3 = FUN_ram_4ff4511a(param_1,auStack_b0,0x80);
          uVar1 = uVar1 + 1;
          if (iVar3 == 0) {
            *puVar8 = *puVar8 + 1;
          }
        } while (uVar1 < DAT_ram_4ff58b70);
        uVar6 = *(uint *)(param_2 + 0xb4);
      }
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < uVar6);
    if (uVar6 != 0) {
      iVar4 = uVar6 - 1;
      iVar7 = 0;
      iVar3 = -1;
      uVar9 = 0;
      uVar6 = 0;
      do {
        uVar1 = uVar6;
        iVar5 = iVar3;
        puVar8 = puVar10;
        if (DAT_ram_4ff58b70 == *puVar10) {
LAB_ram_4ff31014:
          uVar1 = uVar1 + 1;
          puVar10 = puVar8;
        }
        else if (uVar9 < uVar6) {
          iVar5 = iVar3 + 1;
          puVar8 = puVar10 + 1;
          if (iVar4 == iVar5) goto LAB_ram_4ff30fe2;
          uVar9 = uVar6;
          iVar7 = iVar3;
          if (DAT_ram_4ff58b70 == puVar10[1]) {
            uVar1 = 0;
            goto LAB_ram_4ff31014;
          }
          iVar5 = iVar3 + 2;
          puVar10 = puVar10 + 2;
          if (iVar4 == iVar5) goto LAB_ram_4ff31030;
          if (DAT_ram_4ff58b70 == *puVar10) {
            uVar1 = 1;
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
        iVar3 = iVar5 + 1;
        puVar10 = puVar10 + 1;
        uVar6 = uVar1;
      } while (iVar4 != iVar3);
      uVar6 = uVar9;
      iVar3 = iVar4;
      if (uVar1 <= uVar9) {
LAB_ram_4ff31030:
        iVar3 = iVar7;
        uVar1 = uVar6;
      }
      goto LAB_ram_4ff30fe2;
    }
  }
  uVar1 = 0;
  iVar3 = 0;
LAB_ram_4ff30fe2:
  uVar2 = (*DAT_ram_4ff58b98)(param_2,uVar1,iVar3,param_1,1,DAT_ram_4ff58b98);
                    /* WARNING: Could not recover jumptable at 0x4ff31008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_ram_4ff58b9c)(param_2,uVar2);
  return;
}



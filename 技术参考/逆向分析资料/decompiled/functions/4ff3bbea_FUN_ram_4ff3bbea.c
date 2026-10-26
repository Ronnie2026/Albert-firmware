/* Firmware entry: 0x4ff3bbea */

void FUN_ram_4ff3bbea(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = mhartid;
  uVar1 = DAT_ram_4ff6da28;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar5 = &DAT_ram_4ff6da3c + mhartid;
  if (*(undefined4 **)(*piVar5 + 0x14) != &DAT_ram_4ff58bc0) {
    iVar4 = *piVar5;
    *(undefined1 *)(*piVar5 + 0x15e) = 0;
    FUN_ram_4ff3fb48(iVar4 + 4);
    iVar4 = DAT_ram_4ff58bb0;
    if (param_1 == -1) {
      if (param_2 != 0) {
        *(int *)(*piVar5 + 8) = DAT_ram_4ff58bb0;
        *(undefined4 *)(*piVar5 + 0xc) = *(undefined4 *)(iVar4 + 8);
        *(int *)(*(int *)(iVar4 + 8) + 4) = *piVar5 + 4;
        *(int *)(iVar4 + 8) = *piVar5 + 4;
        *(int **)(*piVar5 + 0x14) = &DAT_ram_4ff58bac;
        DAT_ram_4ff58bac = DAT_ram_4ff58bac + 1;
        return;
      }
      *(uint *)(*piVar5 + 4) = uVar1 - 1;
      if (uVar1 != 0) goto LAB_ram_4ff3bcb4;
      FUN_ram_4ff3fb10(DAT_ram_4ff6da38,*piVar5 + 4);
    }
    else {
      uVar3 = param_1 + uVar1;
      *(uint *)(*piVar5 + 4) = uVar3;
      if (uVar3 < uVar1) {
LAB_ram_4ff3bcb4:
        FUN_ram_4ff3fb10(DAT_ram_4ff6da34,(&DAT_ram_4ff6da3c)[iVar2] + 4);
        return;
      }
      FUN_ram_4ff3fb10(DAT_ram_4ff6da38,*piVar5 + 4);
      if (uVar3 < DAT_ram_4ff6da08) {
        DAT_ram_4ff6da08 = uVar3;
      }
    }
  }
  return;
}



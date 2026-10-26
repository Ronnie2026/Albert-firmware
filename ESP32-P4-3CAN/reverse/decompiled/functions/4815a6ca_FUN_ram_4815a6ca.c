/* Firmware entry: 0x4815a6ca */

int FUN_ram_4815a6ca(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 0x7e) {
    iVar3 = (param_2 >> 4) * 4;
    iVar2 = param_1 + iVar3;
    iVar4 = (param_2 & 0xf) << 1;
    piVar1 = *(int **)(param_1 + 0x50);
    auStack_14[0] = ~(3 << iVar4) & *(uint *)(iVar2 + 0x18) | param_3 << iVar4;
    iVar4 = *piVar1;
    *(uint *)(iVar2 + 0x18) = auStack_14[0];
    pcVar5 = *(code **)(iVar4 + 0x14);
    iVar2 = (*pcVar5)(piVar1,*(int *)(param_1 + 8) + 0x20 + iVar3,auStack_14,4,iVar4,pcVar5);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    return iVar2;
  }
  return -1;
}



/* Firmware entry: 0x480084a8 */

void FUN_ram_480084a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(&DAT_ram_4ff5a014 + param_1 * 4);
  uVar5 = *(uint *)(iVar2 + 0x2c);
  if (uVar5 != *(uint *)(iVar2 + 0x28)) {
    iVar1 = *(int *)(iVar2 + 0x34);
    do {
      piVar4 = (int *)(uVar5 * 4 + iVar1);
      iVar3 = *piVar4 - param_2;
      *piVar4 = iVar3;
      uVar5 = uVar5 + 1 & -(uint)((int)(uVar5 + 1) < *(int *)(iVar2 + 0x30));
      if (iVar3 < 0) {
        *(uint *)(iVar2 + 0x2c) = uVar5;
      }
    } while (uVar5 != *(uint *)(iVar2 + 0x28));
  }
  return;
}



/* Firmware entry: 0x4ff42fd2 */

void FUN_ram_4ff42fd2(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  iVar3 = 0;
  do {
    *(uint *)(iVar3 * 4 + iVar2 + 0x40) = (uint)param_2[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xd);
  bVar1 = *param_2;
  if ((bVar1 & 0x10) != 0) {
    if ((bVar1 & 0x20) != 0) {
      *(undefined4 *)(iVar2 + 4) = 0x12;
      param_1[1] = param_1[1] | 0x20;
      return;
    }
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
    param_1[1] = param_1[1] | 0x20;
    return;
  }
  if ((bVar1 & 0x20) == 0) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    param_1[1] = param_1[1] | 0x20;
    return;
  }
  *(undefined4 *)(iVar2 + 4) = 3;
  param_1[1] = param_1[1] | 0x20;
  return;
}



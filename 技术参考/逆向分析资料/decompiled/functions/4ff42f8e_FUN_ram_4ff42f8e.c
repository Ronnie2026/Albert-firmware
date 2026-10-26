/* Firmware entry: 0x4ff42f8e */

undefined4 FUN_ram_4ff42f8e(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 8) & 0x100) == 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 4;
      puVar4 = (undefined1 *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
      *puVar4 = (char)*(undefined4 *)(iVar3 + iVar1 + 0x40);
    } while (iVar2 != 0xd);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
    return 1;
  }
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
  return 0;
}



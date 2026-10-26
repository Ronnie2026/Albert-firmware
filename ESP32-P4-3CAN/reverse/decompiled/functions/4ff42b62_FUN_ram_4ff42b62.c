/* Firmware entry: 0x4ff42b62 */

ulonglong FUN_ram_4ff42b62(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  iVar2 = iVar3 * 0x24 + iVar1;
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x80000000;
  do {
  } while (*(int *)(iVar2 + 0xc) < 0);
  return CONCAT44(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar1 + iVar3 * 0x24 + 4)) &
         0x3fffffffffffff;
}



/* Firmware entry: 0x481a8f06 */

void FUN_ram_481a8f06(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  iVar2 = param_2 * 4 + iVar1;
  *(uint *)(iVar2 + 0x74) = *(uint *)(iVar2 + 0x74) & 0xfffc1fff;
  if (param_2 < 0x20) {
    *(int *)(iVar1 + 0x4c) = 1 << (param_2 & 0x1f);
    return;
  }
  *(uint *)(iVar1 + 0x58) =
       *(uint *)(iVar1 + 0x58) & 0xfe000000 | (uint)(0x80 << (param_2 - 0x20 & 0x1f)) >> 7;
  return;
}



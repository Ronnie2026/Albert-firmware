/* Firmware entry: 0x481a8ec4 */

void FUN_ram_481a8ec4(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (param_2 < 0x20) {
    *(int *)(iVar1 + 0x4c) = 1 << (param_2 & 0x1f);
  }
  else {
    *(uint *)(iVar1 + 0x58) =
         *(uint *)(iVar1 + 0x58) & 0xfe000000 | (uint)(0x80 << (param_2 - 0x20 & 0x1f)) >> 7;
  }
  iVar1 = iVar1 + param_2 * 4;
  *(uint *)(iVar1 + 0x74) = *(uint *)(iVar1 + 0x74) & 0xfffc1fff | 0x2000;
  return;
}



/* Firmware entry: 0x48131e16 */

uint FUN_ram_48131e16(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  return 0x3ff / ((*(uint *)(iVar1 + 0x20) >> 2 & 3) + (1 < (*(uint *)(iVar1 + 0x20) >> 4 & 3)) + 7
                 + (uint)((*(uint *)(iVar1 + 0x20) >> 1 & 1) != 0));
}



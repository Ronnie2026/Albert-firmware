/* Firmware entry: 0x48131c12 */

void FUN_ram_48131c12(int *param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x20) =
       *(uint *)(iVar1 + 0x20) & 0xfffe73ff | (param_2 & 1) << 10 | (param_2 >> 1 & 1) << 0xb |
       (param_2 >> 2 & 1) << 0xf | (param_2 >> 5 & 1) << 0x10;
  *(uint *)(iVar1 + 0x24) =
       *(uint *)(iVar1 + 0x24) & 0xfff0ffff | (param_2 >> 6 & 1) << 0x12 |
       (param_2 >> 7 & 1) << 0x13 | (param_2 >> 3 & 1) << 0x10 | (param_2 >> 4 & 1) << 0x11;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}



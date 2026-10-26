/* Firmware entry: 0x48131fc8 */

void FUN_ram_48131fc8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 * 4;
  *(uint *)(iVar1 + 0x5012b008) = *(uint *)(iVar1 + 0x5012b008) | 0x400;
  *(uint *)(iVar1 + 0x5012b008) = *(uint *)(iVar1 + 0x5012b008) & 0xffffff9f | (param_2 & 3) << 5;
  if (param_2 != 1) {
    iVar1 = (param_3 + 0x1c) * 4;
    *(uint *)(iVar1 + 0x5012a004) = *(uint *)(iVar1 + 0x5012a004) & 0xfffffffd;
    return;
  }
  iVar1 = (param_3 + 0x1c) * 4;
  *(uint *)(param_1 * 4 + 0x5012a0f4) = *(uint *)(param_1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
  *(uint *)(iVar1 + 0x5012a004) = *(uint *)(iVar1 + 0x5012a004) & 0xfffffffd;
  return;
}



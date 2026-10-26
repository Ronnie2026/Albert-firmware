/* Firmware entry: 0x4816a474 */

int FUN_ram_4816a474(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + 4) >> 0xc & 0xf;
    if (uVar1 == 2) {
      if (*(int *)(param_1 + 0x4c) != 1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      return 2;
    }
    uVar1 = uVar1 + 10 & 0xf;
    if (uVar1 < 6) {
      return ((0x25U >> uVar1 & 1) - 1 & 0xfffffffd) + 3;
    }
  }
  return 0;
}



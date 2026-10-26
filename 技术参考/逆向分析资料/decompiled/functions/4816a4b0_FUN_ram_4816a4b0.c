/* Firmware entry: 0x4816a4b0 */

undefined4 FUN_ram_4816a4b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817189a(*(undefined1 *)(param_2 + 8));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(iVar1 + 4) >> 0xc & 0xf;
  if (uVar2 != 8) {
    if (uVar2 < 9) {
      if (uVar2 == 2) {
        if (param_1 != 1) {
          return 1;
        }
        return 2;
      }
      if (uVar2 != 6) {
        return 0;
      }
    }
    else if (uVar2 != 0xb) {
      return 0;
    }
  }
  return 3;
}



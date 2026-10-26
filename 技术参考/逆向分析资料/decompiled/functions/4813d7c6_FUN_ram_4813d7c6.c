/* Firmware entry: 0x4813d7c6 */

undefined4 FUN_ram_4813d7c6(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (*(int *)(param_2 + 0x3c) != 1) {
        *(ushort *)(param_2 + 0x46) = *(ushort *)(param_2 + 0x46) | 0x10;
      }
      uVar1 = FUN_ram_4813d520(param_2,1);
      return uVar1;
    }
  }
  else {
    FUN_ram_4813c64a(param_2,*(undefined2 *)(param_3 + 8));
    FUN_ram_4813ac74(param_3);
  }
  return 0;
}



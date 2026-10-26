/* Firmware entry: 0x4813d722 */

undefined4 FUN_ram_4813d722(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3c) != 1) {
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x10;
    }
    uVar1 = FUN_ram_4813d520();
    return uVar1;
  }
  return 0xfffffff0;
}



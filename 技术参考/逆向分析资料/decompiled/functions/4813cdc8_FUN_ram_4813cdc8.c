/* Firmware entry: 0x4813cdc8 */

void FUN_ram_4813cdc8(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (1 < *(uint *)(param_1 + 0x3c))) && (*(uint *)(param_1 + 0x3c) != 10)) {
    FUN_ram_4813cd48();
    return;
  }
  return;
}



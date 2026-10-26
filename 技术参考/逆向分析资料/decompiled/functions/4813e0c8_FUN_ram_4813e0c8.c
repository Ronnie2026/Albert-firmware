/* Firmware entry: 0x4813e0c8 */

undefined4 FUN_ram_4813e0c8(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6e1dc & 0x10) == 0) {
    return 0;
  }
  if (((*(ushort *)(param_1 + 0x46) & 0x10) == 0) && (*(code **)(param_1 + 0xdc) != (code *)0x0)) {
    (**(code **)(param_1 + 0xdc))(*(undefined4 *)(param_1 + 0x38),0xfffffff1);
  }
  FUN_ram_4813cdde(&DAT_ram_4ff6e1c4,param_1);
  FUN_ram_4813bfbe(param_1);
  return 1;
}



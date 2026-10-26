/* Firmware entry: 0x4818cb64 */

undefined4 FUN_ram_4818cb64(int param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x44) = param_3;
    return 0;
  }
  return 0xfffffff0;
}



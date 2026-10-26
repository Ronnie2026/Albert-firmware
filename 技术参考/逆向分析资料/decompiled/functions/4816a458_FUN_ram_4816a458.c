/* Firmware entry: 0x4816a458 */

void FUN_ram_4816a458(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  return;
}



/* Firmware entry: 0x4816b5b6 */

undefined4 FUN_ram_4816b5b6(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 4) {
    *(code **)(*(int *)(param_1 + 0x40) + 0x18) = FUN_ram_4816a32e;
    return 0;
  }
  if (param_2 == 5) {
    *(undefined1 **)(*(int *)(param_1 + 0x40) + 0x18) = &LAB_ram_4816a324;
    return 0;
  }
  return 0xffffffff;
}



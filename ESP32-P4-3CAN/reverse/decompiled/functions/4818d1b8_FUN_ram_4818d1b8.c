/* Firmware entry: 0x4818d1b8 */

undefined4 FUN_ram_4818d1b8(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 0xe8) = 0x7473;
  iVar1 = FUN_ram_4815902c(*(undefined4 *)(param_1 + 0xc0),param_1 + 0xd8);
  if (iVar1 != 0) {
    *(char **)(param_1 + 0xd8) = "espressif";
  }
  *(undefined2 *)(param_1 + 0xe6) = 0x7a06;
  *(code **)(param_1 + 0xb4) = FUN_ram_481462ea;
  *(undefined1 **)(param_1 + 0xbc) = &LAB_ram_48194c4e;
  *(code **)(param_1 + 0xb8) = FUN_ram_4818d09c;
  *(undefined2 *)(param_1 + 0xdc) = 0x5dc;
  return 0;
}



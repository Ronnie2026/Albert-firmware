/* Firmware entry: 0x4814d00a */

undefined4 FUN_ram_4814d00a(int param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 0xe1) = param_3;
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0x7f | param_2 << 7;
  return 0;
}



/* Firmware entry: 0x48151e58 */

void FUN_ram_48151e58(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(int *)(param_1 + 0x11e4) = param_1;
  *(undefined2 *)(param_1 + 0x11f2) = 0x8021;
  *(undefined ***)(param_1 + 0x11e8) = &PTR_LAB_ram_4815300c_ram_48237608;
  FUN_ram_48155dc6(param_1 + 0x11e4);
  *(undefined1 *)(param_1 + 0x11fb) = 100;
  *(undefined1 *)(param_1 + 0x1216) = 0xf;
  *(undefined1 *)(param_1 + 0x1246) = 0xf;
  *(undefined2 *)(param_1 + 0x1214) = 0x2d;
  *(byte *)(param_1 + 0x1200) = *(byte *)(param_1 + 0x1200) & 0xd4 | 0x2b;
  *(byte *)(param_1 + 0x1230) = *(byte *)(param_1 + 0x1230) & 0xd4 | 0x2b;
  return;
}



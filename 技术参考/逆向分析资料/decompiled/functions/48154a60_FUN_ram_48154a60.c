/* Firmware entry: 0x48154a60 */

void FUN_ram_48154a60(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 0x32) = 0xc021;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_ram_48154be6_ram_482376c0;
  *(int *)(param_1 + 0x24) = param_1;
  FUN_ram_48155dc6(param_1 + 0x24);
  memset((void *)(param_1 + 0x40),0,0x24);
  *(undefined4 *)(param_1 + 0x40) = 0x5dc007c;
  memset((void *)(param_1 + 0x88),0,0x24);
  *(undefined4 *)(param_1 + 0x88) = 0x5dc027c;
  return;
}



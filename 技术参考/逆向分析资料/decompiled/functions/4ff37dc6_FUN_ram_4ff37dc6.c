/* Firmware entry: 0x4ff37dc6 */

void FUN_ram_4ff37dc6(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x80) = mstatus;
  *(undefined4 *)(param_1 + 0x84) = mtvec;
  *(undefined4 *)(param_1 + 0x88) = 0xdeadc0de;
  *(undefined4 *)(param_1 + 0x8c) = 0xdeadc0de;
  *(undefined4 *)(param_1 + 0x90) = mhartid;
  return;
}



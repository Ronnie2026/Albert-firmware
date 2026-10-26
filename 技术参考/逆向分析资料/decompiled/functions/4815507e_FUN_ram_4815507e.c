/* Firmware entry: 0x4815507e */

void FUN_ram_4815507e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (char)*(byte *)(param_1 + 0x35)) {
    FUN_ram_48155e2a();
    return;
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0x7f;
  FUN_ram_4814268a(&LAB_ram_481549e8,param_1 + 0x24);
  return;
}



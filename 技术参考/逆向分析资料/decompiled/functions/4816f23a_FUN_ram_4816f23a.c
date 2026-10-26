/* Firmware entry: 0x4816f23a */

char FUN_ram_4816f23a(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 10);
  if (3 < bVar1) {
    return (bVar1 == 4) << 2;
  }
  return 1 < bVar1;
}



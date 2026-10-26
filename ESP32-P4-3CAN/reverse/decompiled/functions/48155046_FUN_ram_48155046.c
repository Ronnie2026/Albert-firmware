/* Firmware entry: 0x48155046 */

void FUN_ram_48155046(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x35) & 0xfa;
  *(byte *)(param_1 + 0x35) = bVar1;
  if ((*(ushort *)(param_1 + 0x40) & 1) != 0) {
    *(byte *)(param_1 + 0x35) = bVar1 | 1;
  }
  if ((*(ushort *)(param_1 + 0x40) & 2) != 0) {
    *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 4;
  }
  FUN_ram_48155eb2(param_1 + 0x24);
  return;
}



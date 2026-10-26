/* Firmware entry: 0x4814d11e */

undefined4 FUN_ram_4814d11e(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0x22);
  *(byte *)(param_1 + 0x22) = bVar1 & 0xdf;
  if ((bVar1 & 8) != 0) {
    return 1;
  }
  FUN_ram_4813a0f4(*(undefined4 *)(param_1 + 0x1c));
  return 1;
}



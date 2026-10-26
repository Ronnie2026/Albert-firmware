/* Firmware entry: 0x4ff3057c */

byte FUN_ram_4ff3057c(int param_1)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = FUN_ram_4ff21be8();
  return bVar1 | (param_1 + 0xafef8000U < 0x8000 ||
                 (param_1 + 0xb0100000U < 0xc0000 || param_1 + 0xcff00000U < 0x2000));
}



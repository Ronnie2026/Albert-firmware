/* Firmware entry: 0x48165cf0 */

undefined4 FUN_ram_48165cf0(uint param_1,int param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
    return 0x102;
  }
  uVar1 = 1 << (param_1 & 0x1f) & 0xff;
  if (param_2 == 0) {
    *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
         ((uVar1 | *(uint *)(DAT_ram_4ff4ba24 + 0x10) >> 0x10) & 3) << 0x10 |
         *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffcffff;
    FUN_ram_48164a50(param_1,0);
    return 0;
  }
  *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
       (~uVar1 & *(uint *)(DAT_ram_4ff4ba24 + 0x10) >> 0x10 & 3) << 0x10 |
       *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffcffff;
  FUN_ram_48164a50(param_1,0);
  return 0;
}



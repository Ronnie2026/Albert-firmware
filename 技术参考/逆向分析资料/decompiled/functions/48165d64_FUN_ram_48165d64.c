/* Firmware entry: 0x48165d64 */

void FUN_ram_48165d64(uint param_1,int param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 1 << (param_1 & 0x1f) & 0xff;
  if (param_2 != 0) {
    *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
         *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffffffc |
         (uVar1 | *(uint *)(DAT_ram_4ff4ba24 + 0x10)) & 3;
    FUN_ram_48164a50(param_1,1);
    *(uint *)(DAT_ram_4ff4ba24 + 0x74) =
         *(uint *)(DAT_ram_4ff4ba24 + 0x74) & 0xfffffffc |
         (uVar1 | *(uint *)(DAT_ram_4ff4ba24 + 0x74)) & 3;
    return;
  }
  *(uint *)(DAT_ram_4ff4ba24 + 0x10) =
       *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 0xfffffffc |
       *(uint *)(DAT_ram_4ff4ba24 + 0x10) & 3 & ~uVar1;
  FUN_ram_48164a50(param_1,1);
  *(uint *)(DAT_ram_4ff4ba24 + 0x74) =
       *(uint *)(DAT_ram_4ff4ba24 + 0x74) & 0xfffffffc |
       *(uint *)(DAT_ram_4ff4ba24 + 0x74) & 3 & ~uVar1 & 0xff;
  return;
}



/* Firmware entry: 0x48026d34 */

uint FUN_ram_48026d34(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint in_a5;
  uint in_a6;
  uint in_a7;
  char in_stack_00000000;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    uVar1 = FUN_ram_4800c594();
    if (uVar1 == 0) {
      return 1;
    }
    iVar2 = param_1 * 0x24;
    if (((*(ushort *)(&DAT_ram_4ff48724 + iVar2) != in_a5) ||
        (*(ushort *)(&DAT_ram_4ff48726 + iVar2) != in_a6)) ||
       ((byte)(&DAT_ram_4ff48728)[iVar2] != in_a7)) {
      return uVar1;
    }
    uVar1 = (uint)((&DAT_ram_4ff48729)[iVar2] != in_stack_00000000);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



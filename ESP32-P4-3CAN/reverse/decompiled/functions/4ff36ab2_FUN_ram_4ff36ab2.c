/* Firmware entry: 0x4ff36ab2 */

/* WARNING: Removing unreachable block (ram,0x4ff36b2e) */
/* WARNING: Removing unreachable block (ram,0x4ff36b3a) */
/* WARNING: Removing unreachable block (ram,0x4ff36b40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff36ab2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 & 3) != 0) {
    return 1;
  }
  if ((param_1 & 0x30) == 0) {
    return 1;
  }
  if ((param_1 & 0x10) == 0) {
    if ((param_1 & 0x20) == 0) goto LAB_ram_4ff36b28;
    (**(code **)(_DAT_ram_4ffbffd8 + 8))(1);
  }
  else {
    uVar1 = (**(code **)(_DAT_ram_4ffbffd8 + 4))();
    if (((param_1 & 0x20) == 0) || (uVar2 = (**(code **)(_DAT_ram_4ffbffd8 + 8))(), uVar2 < uVar1))
    goto LAB_ram_4ff36b28;
  }
  (**(code **)(_DAT_ram_4ffbffd8 + 8))();
LAB_ram_4ff36b28:
  do {
  } while( true );
}



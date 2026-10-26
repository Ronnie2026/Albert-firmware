/* Firmware entry: 0x4ff305c2 */

uint thunk_FUN_ram_4ff21be8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (uint)DAT_ram_4ff59fcd;
  if ((((uVar1 != 0) && ((param_1 < DAT_ram_4ff59fe8 || (DAT_ram_4ff59fec <= param_1)))) &&
      ((param_1 < DAT_ram_4ff59ff4 || (DAT_ram_4ff59ff8 <= param_1)))) &&
     (iVar2 = FUN_ram_4ff35248(param_1), iVar2 == 0)) {
    uVar1 = FUN_ram_4ff350ce(param_1);
    return uVar1;
  }
  return uVar1;
}



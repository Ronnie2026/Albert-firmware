/* Firmware entry: 0x4ff305c6 */

bool FUN_ram_4ff305c6(uint param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff21be8();
  return iVar1 != 0 && (param_1 & 0xf) == 0;
}



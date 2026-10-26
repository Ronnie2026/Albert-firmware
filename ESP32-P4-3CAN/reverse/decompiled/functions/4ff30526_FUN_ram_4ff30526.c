/* Firmware entry: 0x4ff30526 */

bool FUN_ram_4ff30526(int param_1)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 + 0xc0000000U < 0x4000000) {
    return true;
  }
  if (((param_1 + 0xb0100000U < 0xc0000) || (param_1 + 0xb0400000U < 0x20000)) ||
     (iVar2 = FUN_ram_4ff21be8(), iVar2 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = param_1 + 0xafef8000U < 0x8000;
  }
  return bVar1;
}



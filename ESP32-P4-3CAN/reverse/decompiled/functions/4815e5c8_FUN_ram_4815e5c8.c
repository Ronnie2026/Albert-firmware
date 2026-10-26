/* Firmware entry: 0x4815e5c8 */

int FUN_ram_4815e5c8(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff2070c();
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_ram_4815e578_ram_4ff47f84)("Out of memory!\n");
  }
  return iVar1;
}



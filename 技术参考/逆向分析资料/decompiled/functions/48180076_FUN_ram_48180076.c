/* Firmware entry: 0x48180076 */

uint FUN_ram_48180076(undefined4 *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48181584(*param_1,*(undefined2 *)((int)param_1 + 6));
  return iVar1 + 7U >> 3;
}



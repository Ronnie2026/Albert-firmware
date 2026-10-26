/* Firmware entry: 0x48174138 */

bool FUN_ram_48174138(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481802e8(param_1 + 0x10,0);
  return iVar1 == 0;
}



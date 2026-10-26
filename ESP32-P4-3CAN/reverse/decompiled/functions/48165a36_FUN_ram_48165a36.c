/* Firmware entry: 0x48165a36 */

uint FUN_ram_48165a36(undefined4 param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0x102;
  }
  if (DAT_ram_4ff4ba1c != 0) {
    iVar1 = FUN_ram_4ff3b4aa(DAT_ram_4ff4ba1c,param_2,param_1);
    return -(uint)(iVar1 == 0) & 0x107;
  }
  return 0x103;
}



/* Firmware entry: 0x4802db26 */

void FUN_ram_4802db26(int param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)(param_1 + 0x520);
  do {
    if (*piVar1 != 0) {
      FUN_ram_4ff3abd4(*piVar1,0);
    }
    piVar1 = piVar1 + 0xd5e;
  } while (piVar1 != (int *)(param_1 + 0xa588));
  return;
}



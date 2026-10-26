/* Firmware entry: 0x481340d8 */

void FUN_ram_481340d8(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x1c);
    FUN_ram_48139604(0xd,param_1);
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}



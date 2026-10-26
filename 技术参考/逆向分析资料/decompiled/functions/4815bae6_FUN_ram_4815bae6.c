/* Firmware entry: 0x4815bae6 */

int FUN_ram_4815bae6(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar1 = 4000;
  }
  else {
    iVar1 = 0;
    if ((*(int *)(param_1 + 0xc) != -4) && (*(uint *)(param_1 + 0x38) < 0x7d)) {
      return (0x7d - *(uint *)(param_1 + 0x38)) * 0x20;
    }
  }
  return iVar1;
}



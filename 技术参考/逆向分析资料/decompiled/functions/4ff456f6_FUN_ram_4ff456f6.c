/* Firmware entry: 0x4ff456f6 */

int FUN_ram_4ff456f6(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(int *)(param_1 + 8) == 0) ||
      (pcVar2 = *(code **)(*(int *)(param_1 + 8) + 4), pcVar2 == (code *)0x0)) ||
     (iVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0xc)), param_2 != 0)) {
    iVar1 = param_2;
  }
  return iVar1;
}



/* Firmware entry: 0x4817707c */

void FUN_ram_4817707c(int *param_1)

{
  code *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1]);
    }
    FUN_ram_48178af2(param_1,8);
    return;
  }
  return;
}



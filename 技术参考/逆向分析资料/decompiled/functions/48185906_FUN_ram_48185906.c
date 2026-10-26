/* Firmware entry: 0x48185906 */

void FUN_ram_48185906(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_48178b14(*param_1,param_1[1]);
    }
    thunk_FUN_ram_4ff209c6(param_1[2]);
    FUN_ram_48178af2(param_1,0xc);
    return;
  }
  return;
}



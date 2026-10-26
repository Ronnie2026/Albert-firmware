/* Firmware entry: 0x4815e414 */

void FUN_ram_4815e414(undefined4 *param_1)

{
  code *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = (code *)param_1[1];
    if (pcVar1 != (code *)0x0) {
      if (pcVar1 == (code *)0x3) {
        thunk_FUN_ram_4ff209c6(*param_1);
        param_1[1] = 0;
      }
      else {
        (*pcVar1)();
        param_1[1] = 0;
      }
    }
    if ((param_1[0x35] != 0) && (0 < (int)param_1[0x36])) {
      thunk_FUN_ram_4ff209c6();
      param_1[0x35] = 0;
      param_1[0x36] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = param_1 + 2;
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
  return;
}



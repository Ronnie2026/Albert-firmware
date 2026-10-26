/* Firmware entry: 0x481295cc */

void FUN_ram_481295cc(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    uVar2 = param_1[3];
    piVar1 = (int *)*param_1;
    if ((uVar2 & 0x100) == 0) {
      if (param_1[2] != 0) {
        FUN_ram_481295cc();
        uVar2 = param_1[3];
        if ((uVar2 & 0x100) != 0) goto LAB_ram_48129610;
      }
      if (param_1[4] != 0) {
        (*(code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970)();
        uVar2 = param_1[3];
        param_1[4] = 0;
      }
    }
LAB_ram_48129610:
    if (((uVar2 & 0x200) == 0) && (param_1[8] != 0)) {
      (*(code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970)();
      param_1[8] = 0;
    }
    (*(code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970)(param_1);
    param_1 = piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
  } while( true );
}



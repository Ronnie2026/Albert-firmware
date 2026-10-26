/* Firmware entry: 0x48189290 */

void FUN_ram_48189290(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    FUN_ram_4817707c(piVar1 + 0x33);
    thunk_FUN_ram_4ff209c6(piVar1[100]);
    FUN_ram_4817fa3c(piVar1[0x1a]);
    FUN_ram_4817fa3c(piVar1[0x22]);
    FUN_ram_4817f88a(piVar1[0x5d]);
    FUN_ram_4817f88a(piVar1[0x41]);
    FUN_ram_4817f88a(piVar1[0x55]);
    FUN_ram_4817f88a(piVar1[0x4b]);
    if ((piVar1[3] != 0) && (*piVar1 != 0)) {
      FUN_ram_48178b14(piVar1[3],piVar1[2]);
    }
    piVar2 = (int *)piVar1[0x65];
    FUN_ram_48178af2(piVar1,0x198);
    if (param_1 != piVar1) {
      thunk_FUN_ram_4ff209c6(piVar1);
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x0);
  return;
}



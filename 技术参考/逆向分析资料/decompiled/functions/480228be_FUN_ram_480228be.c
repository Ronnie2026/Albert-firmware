/* Firmware entry: 0x480228be */

void FUN_ram_480228be(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dbc8 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))(DAT_ram_4ff6dbc8);
    DAT_ram_4ff6dbc8 = 0;
  }
  if (DAT_ram_4ff6dbc0 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
    DAT_ram_4ff6dbc0 = 0;
  }
  if (DAT_ram_4ff6dbc4 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
    DAT_ram_4ff6dbc4 = 0;
  }
  if (DAT_ram_4ff6dba4 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
    DAT_ram_4ff6dba4 = 0;
  }
  piVar1 = &DAT_ram_4ff5b2f4;
  piVar2 = &DAT_ram_4ff5b2e8;
  do {
    if (*piVar1 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))();
      *piVar1 = 0;
    }
    if (*piVar2 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))();
      *piVar2 = 0;
    }
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (piVar1 != (int *)&DAT_ram_4ff5b300);
  if (DAT_ram_4ff6dbbc != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))();
    DAT_ram_4ff6dbbc = 0;
  }
  if (DAT_ram_4ff6dbb8 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))();
    DAT_ram_4ff6dbb8 = 0;
  }
  if (DAT_ram_4ff6dba8 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))();
    DAT_ram_4ff6dba8 = 0;
  }
  if (DAT_ram_4ff6dbd8 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x5c))();
    DAT_ram_4ff6dbd8 = 0;
  }
  FUN_ram_4801c434(DAT_ram_4ff6dbd0);
  if (param_1 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0xb0))(param_1);
  }
  DAT_ram_4ff6dbcc = 0;
  return;
}



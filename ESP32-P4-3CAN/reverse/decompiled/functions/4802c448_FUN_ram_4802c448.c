/* Firmware entry: 0x4802c448 */

int * FUN_ram_4802c448(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar2 = DAT_ram_4ff5c53c;
  if (DAT_ram_4ff5c53c != (int *)0x0) {
    piVar1 = DAT_ram_4ff5c53c;
    do {
      piVar2 = piVar1;
      if (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 == piVar2) {
        return (int *)0x0;
      }
      piVar1 = piVar2 + 0x49;
    } while (*piVar2 != param_1);
  }
  return piVar2;
}



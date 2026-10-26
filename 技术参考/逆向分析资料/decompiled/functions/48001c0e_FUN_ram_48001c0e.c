/* Firmware entry: 0x48001c0e */

void FUN_ram_48001c0e(void)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = DAT_ram_4ff6d998;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    DAT_ram_4ff6d998 = piVar2;
    thunk_FUN_ram_4ff209c6(piVar1);
    piVar1 = piVar2;
  }
  return;
}



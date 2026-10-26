/* Firmware entry: 0x4812d49e */

undefined4 FUN_ram_4812d49e(int param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = DAT_ram_4ff6e09c;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0x105;
    }
    if (param_1 == *piVar2) break;
    piVar2 = (int *)piVar2[0xb];
  }
  iVar1 = piVar2[0xb];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x30) = piVar2[0xc];
  }
  *(int *)piVar2[0xc] = iVar1;
  thunk_FUN_ram_4ff209c6(piVar2);
  return 0;
}



/* Firmware entry: 0x4819324c */

undefined4 FUN_ram_4819324c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    if (*(code **)(iVar1 + 0x24) != (code *)0x0) {
      (**(code **)(iVar1 + 0x24))(iVar1);
    }
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_ram_4ff209c6();
    }
    thunk_FUN_ram_4ff209c6(iVar1);
    iVar1 = iVar2;
  }
  thunk_FUN_ram_4ff209c6(param_1);
  return 0;
}



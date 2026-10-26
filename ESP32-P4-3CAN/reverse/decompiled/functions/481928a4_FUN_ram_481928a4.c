/* Firmware entry: 0x481928a4 */

void FUN_ram_481928a4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x514) != DAT_ram_4ff6e2c0) {
    FUN_ram_48189290();
  }
  *(undefined4 *)(param_1 + 0x514) = 0;
  FUN_ram_48189290(param_1 + 0x37c);
  FUN_ram_48189290(param_1 + 0x518);
  iVar1 = param_1 + 0x6b0;
  iVar2 = FUN_ram_481774c4(iVar1);
  if (((iVar2 == 5) && (piVar3 = *(int **)(param_1 + 0x6b4), piVar3 != (int *)0x0)) &&
     (*piVar3 != 0)) {
    FUN_ram_4817a954();
    thunk_FUN_ram_4ff209c6(*piVar3);
    *piVar3 = 0;
  }
  iVar2 = FUN_ram_481774c4(iVar1);
  if (((iVar2 == 5) && (piVar3 = *(int **)(param_1 + 0x6b4), piVar3 != (int *)0x0)) &&
     (*piVar3 != 0)) {
    FUN_ram_4817a954();
    thunk_FUN_ram_4ff209c6(*piVar3);
    *piVar3 = 0;
  }
  FUN_ram_4817707c(iVar1);
  FUN_ram_48183dec(param_1 + 0xfc);
  FUN_ram_4816ade6(param_1 + 0x2ec);
  FUN_ram_481832d0(param_1 + 0x2a0);
  FUN_ram_4816abf6(param_1);
  FUN_ram_4819474a();
  return;
}



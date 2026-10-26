/* Firmware entry: 0x48070426 */

void FUN_ram_48070426(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = &PTR_FUN_ram_48070394_ram_481f5300;
  FUN_ram_4802a59e(param_1 + 0x733);
  if (*(char *)(param_1 + 0x113) != '\0') {
    piVar1 = (int *)param_1[7];
    if (*(code **)(*piVar1 + 0x10) == FUN_ram_48064fb4) {
      if ((-1 < piVar1[1]) && ((char)piVar1[2] == '\0')) {
        *(undefined1 *)(piVar1 + 2) = 1;
        uVar3 = FUN_ram_4ff21a0a();
        iVar2 = __divdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
        piVar1[3] = iVar2;
      }
      FUN_ram_48065718(piVar1);
    }
    else {
      (**(code **)(*piVar1 + 0x10))(piVar1);
    }
  }
  (*(code *)param_1[10])(param_1[0x114]);
  (*(code *)param_1[10])(param_1[0x115]);
  (*(code *)param_1[10])(param_1[0x116]);
  thunk_FUN_ram_4ff209c6(param_1,0x1d40);
  return;
}



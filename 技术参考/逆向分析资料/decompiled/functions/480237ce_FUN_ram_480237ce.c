/* Firmware entry: 0x480237ce */

int * FUN_ram_480237ce(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)thunk_FUN_ram_4ff2070c(4);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Sem allocation failed\n\n",uVar3,
                     "os_wrapper_esp");
    piVar1 = (int *)0x0;
  }
  else {
    if (param_1 < 2) {
      iVar2 = FUN_ram_4ff3add0(1,0,3);
    }
    else {
      iVar2 = FUN_ram_4ff3af60(param_1,0);
    }
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: sem create failed\n\n",uVar3,"os_wrapper_esp"
                      );
      piVar1 = (int *)0x0;
    }
    else {
      FUN_ram_4ff3afa2(iVar2,0,0,0);
    }
  }
  return piVar1;
}



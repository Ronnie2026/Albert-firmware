/* Firmware entry: 0x48023342 */

int * FUN_ram_48023342(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp",
                     "E (%lu) %s: start_routine is mandatory for thread create\n\n",uVar3,
                     "os_wrapper_esp");
  }
  else {
    piVar1 = (int *)thunk_FUN_ram_4ff2070c(4);
    if (piVar1 == (int *)0x0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Failed to allocate thread handle\n\n",uVar3,
                       "os_wrapper_esp");
    }
    else {
      iVar2 = FUN_ram_4ff3e458(param_4,param_1,param_3,param_5,param_2,piVar1,0);
      if (*piVar1 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: Failed to create thread: %s\n\n";
      }
      else {
        if (iVar2 == 1) {
          return piVar1;
        }
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "E (%lu) %s: Failed 2 to create thread: %s\n\n";
      }
      FUN_ram_4ff44bf0(1,"os_wrapper_esp",pcVar4,uVar3,"os_wrapper_esp",param_1);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(piVar1);
    }
  }
  return (int *)0x0;
}



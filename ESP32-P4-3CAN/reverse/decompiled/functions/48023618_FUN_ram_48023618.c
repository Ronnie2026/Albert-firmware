/* Firmware entry: 0x48023618 */

int * FUN_ram_48023618(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)thunk_FUN_ram_4ff2070c(4);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: mut allocation failed\n\n",uVar3,
                     "os_wrapper_esp");
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_ram_4ff3b144(1);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: mut create failed\n\n",uVar3,"os_wrapper_esp"
                      );
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



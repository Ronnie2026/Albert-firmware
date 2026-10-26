/* Firmware entry: 0x4802387c */

int FUN_ram_4802387c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_4ff2d5ae(*param_1);
    if (iVar1 < 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Failed to stop timer\n\n",uVar2,
                       "os_wrapper_esp");
      iVar1 = FUN_ram_4813380a(*param_1);
    }
    else {
      iVar1 = FUN_ram_4813380a(*param_1);
    }
    if (iVar1 < 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Failed to delete timer\n\n",uVar2,
                       "os_wrapper_esp");
    }
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
  }
  return iVar1;
}



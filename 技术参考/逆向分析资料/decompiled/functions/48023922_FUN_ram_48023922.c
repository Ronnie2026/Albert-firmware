/* Firmware entry: 0x48023922 */

int * FUN_ram_48023922(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_34 = param_4;
  uStack_30 = param_5;
  uStack_28 = param_1;
  piVar1 = (int *)thunk_FUN_ram_4ff2070c(4);
  if (piVar1 == (int *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Memory allocation failed for timer\n\n",uVar4,
                     "os_wrapper_esp");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return (int *)0x0;
  }
  iVar2 = FUN_ram_4813377a(&uStack_34,piVar1);
  if ((iVar2 == 0) && (iVar3 = *piVar1, iVar3 != 0)) {
    if (param_3 == 1) {
      iVar2 = FUN_ram_4ff2d4d0(iVar3,param_2 * 1000,param_2 * 1000 >> 0x1f);
    }
    else {
      if (param_3 != 0) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"os_wrapper_esp",
                         "E (%lu) %s: Unsupported timer type. supported: one_shot, periodic\n\n",
                         uVar4,"os_wrapper_esp");
        FUN_ram_4813380a(*piVar1);
        goto LAB_ram_480239c6;
      }
      iVar2 = FUN_ram_4ff2d412(iVar3,param_2 * 1000,param_2 * 1000 >> 0x1f);
    }
    FUN_ram_4ff3c2b6(100);
    if (iVar2 == 0) {
      return piVar1;
    }
    FUN_ram_4813380a(*piVar1);
  }
  else {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Failed to create timer. Err 0x%X\n",uVar4,
                     "os_wrapper_esp",iVar2);
  }
LAB_ram_480239c6:
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(piVar1);
  return (int *)0x0;
}



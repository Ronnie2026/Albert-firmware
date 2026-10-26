/* Firmware entry: 0x48011cb0 */

undefined4 FUN_ram_48011cb0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6db7c = 0;
  if (DAT_ram_4ff6db90 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))();
  }
  if (DAT_ram_4ff6db8c != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))();
  }
  if ((DAT_ram_4ff6db80 == 0) || (iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))(), iVar3 == 0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: read sem tx deinit failed\n",uVar6,"rpc_core");
    uVar6 = 0xffffffff;
  }
  puVar1 = &DAT_ram_4ff5b284;
  do {
    if (puVar1[2] != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x74))();
    }
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
  } while (puVar1 != &DAT_ram_4ff5b2c0);
  piVar2 = &DAT_ram_4ff5b2c4;
  do {
    if (*piVar2 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(*piVar2,0);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x70))(*piVar2);
    }
    piVar2[-1] = 0;
    *piVar2 = 0;
    piVar2 = piVar2 + 2;
  } while (piVar2 != &DAT_ram_4ff5b2ec);
  iVar3 = FUN_ram_4801c104();
  if (iVar3 != 0) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Serial de-init failed\n",uVar6,"rpc_core");
    uVar6 = 0xffffffff;
  }
  if (DAT_ram_4ff6db88 == 0) {
    if (DAT_ram_4ff6db84 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar6;
    }
    uVar4 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
  }
  else {
    uVar4 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
    if (DAT_ram_4ff6db84 != 0) {
      uVar5 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x24))();
      uVar4 = uVar4 | uVar5;
    }
  }
  if (uVar4 != 0) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: pthread_cancel rpc threads failed\n",uVar6,"rpc_core"
                    );
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: cancel rpc rx thread failed\n",uVar6,"rpc_core");
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* Firmware entry: 0x4801c372 */

undefined4 * FUN_ram_4801c372(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 8))(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"mpool","E (%lu) %s: Prob to create mempool size(%u)\n",uVar2,"mpool",0x40);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if (((uint)puVar1 & 0x3f) != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
      puVar1 = (undefined4 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 8))(0x40);
      if (puVar1 == (undefined4 *)0x0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"mpool","E (%lu) %s: failed to create mempool size(%u)\n",uVar2,"mpool",
                         0x40);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return (undefined4 *)0x0;
      }
    }
    uVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x80))();
    puVar1[2] = (param_1 & 0xffffffc0) + 0x40;
    *puVar1 = 0;
    puVar1[1] = uVar2;
  }
  return puVar1;
}



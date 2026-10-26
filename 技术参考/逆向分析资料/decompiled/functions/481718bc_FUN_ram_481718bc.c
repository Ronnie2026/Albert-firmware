/* Firmware entry: 0x481718bc */

undefined * FUN_ram_481718bc(int param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_PTR_ram_48238b68 != (undefined *)0x0) {
    puVar1 = PTR_PTR_ram_48238b68;
    puVar2 = &DAT_ram_48238b64;
    do {
      uVar3 = *(uint *)(puVar1 + 4);
      if (((param_1 == **(int **)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar3 >> 0x18 & 0x7c)))
          && (param_2 == (uVar3 >> 2 & 0x3c0))) && (param_3 == (uVar3 >> 0xc & 0xf))) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return puVar1;
      }
      puVar1 = (undefined *)puVar2[3];
      puVar2 = puVar2 + 2;
    } while (puVar1 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}



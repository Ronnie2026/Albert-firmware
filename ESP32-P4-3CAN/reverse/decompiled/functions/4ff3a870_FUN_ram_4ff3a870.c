/* Firmware entry: 0x4ff3a870 */

undefined4 FUN_ram_4ff3a870(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (undefined *)param_1[1];
  puVar4 = (undefined *)param_1[2];
  puVar2 = puVar5;
  if (puVar4 <= puVar5) {
    puVar2 = puVar4;
  }
  if (puVar4 < puVar5) {
    puVar4 = puVar5;
  }
  uVar1 = (int)puVar4 - (int)puVar2;
  if (puVar2 + -0x20000000 < (undefined *)0x10000000) {
    puVar2 = &DAT_ram_4ff48460;
  }
  if (uVar1 < 0x94) {
    uVar3 = FUN_ram_4ff44cee();
    ets_printf(s_E___lu___s__Too_small_stack_to_k_ram_4ff56ad0,uVar3,
               s_esp_core_dump_port_ram_4ff58570,uVar1);
  }
  DAT_ram_4ff5b0f8 = *param_1;
  DAT_ram_4ff5b0ec = 0;
  FUN_ram_4ff45158(&DAT_ram_4ff5b128,puVar2,0x80);
  *param_2 = &DAT_ram_4ff5b0e0;
  return 0xcc;
}



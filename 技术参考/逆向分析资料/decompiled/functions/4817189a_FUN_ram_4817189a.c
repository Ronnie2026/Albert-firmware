/* Firmware entry: 0x4817189a */

undefined * FUN_ram_4817189a(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_PTR_ram_48238b68 != (undefined *)0x0) {
    puVar1 = PTR_PTR_ram_48238b68;
    piVar2 = &DAT_ram_48238b64;
    do {
      if (*piVar2 == param_1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return puVar1;
      }
      puVar1 = (undefined *)piVar2[3];
      piVar2 = piVar2 + 2;
    } while (puVar1 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}



/* Firmware entry: 0x48151c18 */

void FUN_ram_48151c18(int param_1)

{
  undefined **ppuVar1;
  ushort *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_DAT_ram_482376a0_ram_482370a8 != (undefined *)0x0) {
    ppuVar1 = &PTR_DAT_ram_482375e8_ram_482370ac;
    puVar2 = (ushort *)PTR_DAT_ram_482376a0_ram_482370a8;
    do {
      if ((*puVar2 < 0xc000) && (*(code **)(puVar2 + 0xc) != (code *)0x0)) {
        (**(code **)(puVar2 + 0xc))(param_1);
        *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
      }
      puVar2 = (ushort *)*ppuVar1;
      ppuVar1 = ppuVar1 + 1;
    } while (puVar2 != (ushort *)0x0);
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    FUN_ram_481550ac(param_1,"No network protocols running");
    return;
  }
  return;
}



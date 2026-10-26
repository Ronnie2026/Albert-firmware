/* Firmware entry: 0x48151c7e */

void FUN_ram_48151c7e(undefined4 param_1)

{
  undefined **ppuVar1;
  short *psVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_DAT_ram_482376a0_ram_482370a8 != (undefined *)0x0) {
    ppuVar1 = &PTR_DAT_ram_482375e8_ram_482370ac;
    psVar2 = (short *)PTR_DAT_ram_482376a0_ram_482370a8;
    do {
      if ((*psVar2 != -0x3fdf) && (*(code **)(psVar2 + 8) != (code *)0x0)) {
        (**(code **)(psVar2 + 8))(param_1);
      }
      psVar2 = (short *)*ppuVar1;
      ppuVar1 = ppuVar1 + 1;
    } while (psVar2 != (short *)0x0);
  }
  FUN_ram_4814ced4(param_1,9);
  FUN_ram_48151c18(param_1);
  return;
}



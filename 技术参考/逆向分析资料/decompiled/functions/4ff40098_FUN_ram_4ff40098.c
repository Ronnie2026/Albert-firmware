/* Firmware entry: 0x4ff40098 */

void FUN_ram_4ff40098(undefined4 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_csreg_07f1 = 2;
  puVar1 = (uint *)FUN_ram_4ff3f158(param_1,0,1);
  if ((*puVar1 & 2) != 0) {
    puVar2 = (undefined4 *)puVar1[4];
    DAT_csreg_07c6 = *puVar2;
    DAT_csreg_07c7 = puVar2[1];
    DAT_csreg_07c8 = puVar2[2];
    DAT_csreg_07c9 = puVar2[3];
    DAT_csreg_07ca = puVar2[4];
    DAT_csreg_07cb = puVar2[5];
    if ((DAT_csreg_07c8 == 0) && (DAT_csreg_07cb == 0)) {
      *puVar1 = *puVar1 ^ 2;
      DAT_csreg_07f1 = 2;
    }
  }
  return;
}



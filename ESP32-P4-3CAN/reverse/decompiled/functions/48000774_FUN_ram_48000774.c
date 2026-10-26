/* Firmware entry: 0x48000774 */

undefined4 FUN_ram_48000774(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 0;
  piVar3 = &DAT_ram_4ff58a24;
  while( true ) {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (iVar1 == param_1) {
      return 0x103;
    }
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 5) {
      return 0x101;
    }
  }
  (&DAT_ram_4ff58a24)[iVar2] = param_1;
  return 0;
}



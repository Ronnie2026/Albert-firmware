/* Firmware entry: 0x48001c3c */

void FUN_ram_48001c3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xe < param_1) {
    return;
  }
  do {
    iVar4 = param_1 * 2 + 1;
    iVar1 = param_1 * 2 + 2;
    if ((uint)(&DAT_ram_4ff58a3c)[iVar4 * 2] >> 3 < (uint)(&DAT_ram_4ff58a3c)[iVar1 * 2] >> 3) {
      iVar1 = iVar4;
    }
    uVar2 = (&DAT_ram_4ff58a38)[param_1 * 2];
    uVar3 = (&DAT_ram_4ff58a3c)[param_1 * 2];
    (&DAT_ram_4ff58a38)[param_1 * 2] = (&DAT_ram_4ff58a38)[iVar1 * 2];
    (&DAT_ram_4ff58a3c)[param_1 * 2] = (&DAT_ram_4ff58a3c)[iVar1 * 2];
    (&DAT_ram_4ff58a38)[iVar1 * 2] = uVar2;
    (&DAT_ram_4ff58a3c)[iVar1 * 2] = uVar3;
    param_1 = iVar1;
  } while (iVar1 < 0xf);
  return;
}


